#include <Arduino.h>

class EffectsStack {

	private:
		static const int stackSize = 16;

		// array[16] of MIDI notes (mapped later to effects)
		int stack[stackSize];

	public:
		// TODO
		void noteOn(byte pitch)
		{

		}

		// TODO
		void noteOff(byte pitch)
		{

		}

		// TODO 
		void find(byte pitch)
		{

			for (int i = 0; i < stackSize; ++i)
		  	{
    		    // if( stack[i]. )
    		}
		}
		
		// Clear effect stack
		void clear()
		{
		  for (int i = 0; i < stackSize; ++i) {
    		    stack[i] = NULL;
    		  }
		}

};


class EffectsStackItem {
	public:
		EffectsStackItem(int note) {
			MIDINote = note;
		}

		void enable() {
			MIDINote = true;
		}

		void disable() {
			MIDINote = false;
		}

	private:
		int MIDINote;
		bool enabled = true;
};

