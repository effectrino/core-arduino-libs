#include <Arduino.h>

#include <AudioMatrixMessage.h>

#include <tools.h>

namespace EFFECTRINO_NAMESPACE {

	/**
	  * Abstract message
	  */

	AudioMatrixMessage::operator int()
	{ 
		return (this->command != NULL);
	}

	AudioMatrixMessage::AudioMatrixMessage(int cmd) : command(cmd) {}


	// void AudioMatrixMessage::setCommand(int cmd) {
	// 	this->command = cmd;
	// }

	const int AudioMatrixMessage::getCommand() {
		return this->command;
	}

	const int AudioMatrixMessage::getX() {
		return this->x;
	}

	const int AudioMatrixMessage::getY() {
		return this->y;
	}

	void AudioMatrixMessage::setX(int value) {
		this->x = value;
	}

	void AudioMatrixMessage::setY(int value) {
		this->y = value;
	}

	const bool AudioMatrixMessage::isOn() {
		// Console << "Is " << this->getCommand() << " == ON_COMMAND (" << ON_COMMAND << ")?" << "\r\n";
		return (this->getCommand() == ON_COMMAND);
	}

	const bool AudioMatrixMessage::isOff() {
		// Console << "Is " << this->getCommand() << " == OFF_COMMAND (" << OFF_COMMAND << ")?" << "\r\n";
		return (this->getCommand() == OFF_COMMAND);
	}

	const bool AudioMatrixMessage::isReset() {
		// Console << "Is " << this->getCommand() << " == RESET_COMMAND (" << RESET_COMMAND << ")?" << "\r\n";
		return (this->getCommand() == RESET_COMMAND);
	}

}
