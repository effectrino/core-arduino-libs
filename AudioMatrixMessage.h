#ifndef AudioMatrixMessage_h_
#define AudioMatrixMessage_h_

#include <Arduino.h>
#include <Effectrino.h>

namespace EFFECTRINO_NAMESPACE {

	/**
	  * Abstract message
	  */
	class AudioMatrixMessage 
	{

	public:

		operator int();

		AudioMatrixMessage(int command);

		static const int OFF_COMMAND = 0xF0;
		static const int ON_COMMAND = 0xF1;
		static const int RESET_COMMAND = 0xFF;

		// void setCommand(int cmd);

		const int getCommand();
		const int getX();
		const int getY();

		void setX(int value);
		void setY(int value);

		const bool isOn();
		const bool isOff();
		const bool isReset();

	private:
		int command;
		int x = NULL;
		int y = NULL;

	};

}

#endif // AudioMatrixMessage_h_
