#ifndef AudioMatrixProtocol_h_
#define AudioMatrixProtocol_h_

#include <Arduino.h>
#include <Effectrino.h>
#include <AudioMatrixMessage.h>


BEGIN_EFFECTRINO_NAMESPACE

class AudioMatrixProtocol {
	public:

		AudioMatrixProtocol(Stream & s);

		AudioMatrixMessage* receiveMessage();

		int getI2CAddress();

		void sendOff(int x, int y);
		void sendOn(int x, int y);
		void sendReset();

	private:

		const int I2C_ADDRESS = 4;
		const int DATA_MASK = AudioMatrixMessage::DATA_MASK;

		Stream & rStream;

		/**
		  *	Returns TRUE if it`s command byte
		  */
		bool isCommandByte(int data);

};

END_EFFECTRINO_NAMESPACE

#endif // AudioMatrixProtocol_h_
