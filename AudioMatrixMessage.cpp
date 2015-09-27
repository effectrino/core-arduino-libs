#include <Arduino.h>
#include <Effectrino.h>
#include <AudioMatrixMessage.h>
#include <duino-tools.h>

USING_NAMESPASE_EFFECTRINO

const int AudioMatrixMessage::DATA_MASK = 0x7F;

const int AudioMatrixMessage::OFF_COMMAND = DATA_MASK + 1;
const int AudioMatrixMessage::ON_COMMAND = DATA_MASK + 2;
const int AudioMatrixMessage::RESET_COMMAND = 0xFF;

AudioMatrixMessage::operator int()
{ 
	return (this->command > 0x00);
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
	// Debug << "Is " << this->getCommand() << " == ON_COMMAND (" << ON_COMMAND << ")?" << "\r\n";
	return (this->getCommand() == ON_COMMAND);
}

const bool AudioMatrixMessage::isOff() {
	// Debug << "Is " << this->getCommand() << " == OFF_COMMAND (" << OFF_COMMAND << ")?" << "\r\n";
	return (this->getCommand() == OFF_COMMAND);
}

const bool AudioMatrixMessage::isReset() {
	// Debug << "Is " << this->getCommand() << " == RESET_COMMAND (" << RESET_COMMAND << ")?" << "\r\n";
	return (this->getCommand() == RESET_COMMAND);
}
