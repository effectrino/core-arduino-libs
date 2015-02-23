#ifndef AudioMatrixProtocol_h_
#define AudioMatrixProtocol_h_

#include <Arduino.h>
#include <Effectrino.h>
#include <AudioMatrixMessage.h>



namespace EFFECTRINO_NAMESPACE {

	class AudioMatrixProtocol
	{
	public:

		AudioMatrixProtocol(Stream & s);

		AudioMatrixMessage receiveMessage();

		int getI2CAddress();

		void sendOff(int x, int y);
		void sendOn(int x, int y);
		void sendReset();

	private:

		const int I2CAddress = 4;
		const int DataMask = 0x0F;

		Stream & rStream;

		/**
		  *	Returns TRUE if it`s command byte
		  */
		bool isCommandByte(int data);

	};

}


#endif // AudioMatrixProtocol_h_
