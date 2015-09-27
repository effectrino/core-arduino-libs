#ifndef AudioMatrixMessage_h_
#define AudioMatrixMessage_h_

#include <Arduino.h>
#include <Effectrino.h>

BEGIN_EFFECTRINO_NAMESPACE

	/**
	  * Abstract message
	  */
	class AudioMatrixMessage 
	{

	public:

		operator int();

		AudioMatrixMessage(int command);

		static const int DATA_MASK;
		static const int OFF_COMMAND;
		static const int ON_COMMAND;
		static const int RESET_COMMAND;

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
		int x;
		int y;

	};

END_EFFECTRINO_NAMESPACE

#endif // AudioMatrixMessage_h_
