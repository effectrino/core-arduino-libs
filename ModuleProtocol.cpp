#include <Arduino.h>
#include <MIDI.h>
#include <SoftwareSerial.h>


USING_NAMESPACE_MIDI


namespace EFFECTRINO_NAMESPACE {

	class ModuleProtocol
	{
	public:

		ModuleProtocol(MidiInterface<SoftwareSerial> & m) : rMidi(m) {}

		void sendOn(int slot, int velocity)
		{
			rMidi.sendNoteOn(note, velocity, slot);
		}

		void sendOff(int slot)
		{
			rMidi.sendNoteOff(note, 0, slot);
		}

		// TODO
		void sendPreset()
		{

		}

		void sendClock()
		{
			rMidi.sendRealTime(Clock);
		}

	private:

		MidiInterface<SoftwareSerial> rMidi;

		const int DEFAULT_NOTE = 36; // C3
		int note = DEFAULT_NOTE;

	};

}
