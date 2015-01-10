#include <Arduino.h>

/**
  * Abstract message
  */
class AudioMatrixMessage 
{

public:

	operator int() const { return (command != NULL); }

	static const int OffCommand = 0xF0;
	static const int OnCommand = 0xF1;
	static const int ResetCommand = 0xFF;

	// AudioMatrixMessage(int cmd) : command(cmd) {}

	void setCommand(int cmd) {
		command = cmd;
	}

	int getCommand() {
		return command;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	void setX(int value) {
		x = value;
	}

	void setY(int value) {
		y = value;
	}

	bool isOn() {
		return (command == OnCommand);
	}

	bool isOff() {
		return (command == OffCommand);
	}

	bool isReset() {
		return (command == ResetCommand);
	}

private:
	int command = NULL;
	int x = NULL;
	int y = NULL;

};

// struct AudioMatrixMessageOff : AudioMatrixMessage {
// 	int x;
// 	int y;
// }

// struct AudioMatrixMessageOn : AudioMatrixMessage {
// 	int x;
// 	int y;
// }

// struct AudioMatrixMessageReset : AudioMatrixMessage {}

class AudioMatrixProtocol
{
public:


	// AudioMatrixProtocol(Stream * s): pStream(s) {}

	AudioMatrixMessage * receiveMessage(Stream & pStream) {
		int command = pStream.read();

		// Drop errors
		if ( ! isCommandByte(command) )
			return NULL;

		// Create new message
		// static AudioMatrixMessage * msg = new AudioMatrixMessage();
		static AudioMatrixMessage * msg;

		msg->setCommand(command);

		// Get data length
		int dataLength = pStream.available();

		// "Reset" message
		if (msg->isReset() && dataLength >= 0)
		{
			// Nothing to do
		}
		// "On" message
		else if (msg->isOn() && dataLength >= 2)
		{
			msg->setX(pStream.read() & DataMask);
			msg->setY(pStream.read() & DataMask);
		}
		// "Off" message
		else if (msg->isOff() && dataLength >= 2)
		{
			msg->setX(pStream.read() & DataMask);
			msg->setY(pStream.read() & DataMask);
		}
		// Something goes wrong
		else
		{
			return NULL;
		}

		return msg;
	}

	int getI2CAddress()
	{
		return I2CAddress;
	}

	void sendOff(int x, int y)
	{
		pStream->write(AudioMatrixMessage::OffCommand);
		pStream->write(x);
		pStream->write(y);
	}

	void sendOn(int x, int y)
	{
		pStream->write(AudioMatrixMessage::OnCommand);
		pStream->write(x);
		pStream->write(y);
	}

	void sendReset()
	{
		pStream->write(AudioMatrixMessage::ResetCommand);
	}

private:

	const int I2CAddress = 4;
	const int DataMask = 0x0F;

	Stream * pStream;

	/**
	  *	Returns TRUE if it`s command byte
	  */
	bool isCommandByte(int data)
	{
		return ( data >= 0xF0 );
	}

};


