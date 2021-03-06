#include <Arduino.h>
#include <Effectrino.h>
#include <AudioMatrixProtocol.h>
#include <AudioMatrixMessage.h>

#include <duino-tools.h>

USING_NAMESPASE_EFFECTRINO

AudioMatrixProtocol::AudioMatrixProtocol(Stream & s): rStream(s) {}

AudioMatrixMessage* AudioMatrixProtocol::receiveMessage()
{
	int command = rStream.read();

	// Console << "\r\n\r\nByte received: " << command << ", available " << rStream.available() << " more bytes\r\n";

	// Drop errors
	if ( ! isCommandByte(command) )
	{
		Debug << F("Not command byte, exiting...") << CRLF;
		return NULL;
	}

	// Create new message
	AudioMatrixMessage * msg = new AudioMatrixMessage(command);
	// AudioMatrixMessage msg(command);

	// if ( msg->isOn() )
	// 	Console << "On command detected" << "\r\n";
	// else if ( msg->isOff() )
	// 	Console << "Off command detected" << "\r\n";
	// else if ( msg->isReset() )
	// 	Console << "Reset command detected" << "\r\n";

	// Get data length
	int dataLength = rStream.available();

	// Console << "Reading data bytes..." << "\r\n";

	// "Reset" message
	if (msg->isReset() && dataLength >= 0)
	{
		// Nothing to do
	}
	// "On" message
	else if (msg->isOn() && dataLength >= 2)
	{
		msg->setX(rStream.read() & DATA_MASK);
		msg->setY(rStream.read() & DATA_MASK);
	}
	// "Off" message
	else if (msg->isOff() && dataLength >= 2)
	{
		msg->setX(rStream.read() & DATA_MASK);
		msg->setY(rStream.read() & DATA_MASK);
	}
	// Something goes wrong
	else
	{
		return (AudioMatrixMessage*)NULL;
	}

	return msg;
}

int AudioMatrixProtocol::getI2CAddress()
{
	return I2C_ADDRESS;
}

void AudioMatrixProtocol::sendOff(int x, int y)
{
	rStream.write(AudioMatrixMessage::OFF_COMMAND);
	rStream.write(x);
	rStream.write(y);
}

void AudioMatrixProtocol::sendOn(int x, int y)
{
	rStream.write(AudioMatrixMessage::ON_COMMAND);
	rStream.write(x);
	rStream.write(y);
}

void AudioMatrixProtocol::sendReset()
{
	rStream.write(AudioMatrixMessage::RESET_COMMAND);
}

/**
  *	Returns TRUE if it`s command byte
  */
bool AudioMatrixProtocol::isCommandByte(int data)
{
	return ( data > DATA_MASK );
}
