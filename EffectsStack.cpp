// #include <Arduino.h>

namespace EFFECTRINO_NAMESPACE {


	class EffectsStackItem {

	public:
		EffectsStackItem(int note) : MIDINote(note) {}

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



	class EffectsStack {

	public:

		// TODO
		void noteOn(byte pitch, byte velocity)
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
		  for (int i = 0; i < stackSize; ++i)
		  {
	  		stack[i] = NULL;
		  }
		}

	private:

		static const int stackSize = 16;

		const int AUDIO_MATRIX_PINS_PER_EFFECT = 2;
		const int AUDIO_MATRIX_MAIN_PIN_INDEX = 0;
		const int AUDIO_MATRIX_AUX_PIN_INDEX = 1;

		// enum audioMatrixEffectPins
		// {
		// 	Main,
		// 	Aux
		// };

		// array[16] of MIDI notes (mapped later to effects)
		int stack[stackSize];


		/**
			* Returns
			*/	
		int calculateEffectPin(int effectIndex, int pinIndex)
		{
			return effectIndex * AUDIO_MATRIX_PINS_PER_EFFECT + pinIndex;
		}

		/**
			*
			*/	
		int calculateEffectMainPin(const int effectIndex)
		{
			return calculateEffectPin(effectIndex, EFFECT_MAIN_PIN_INDEX);
		}

		/**
			*
			*/	
		int calculateEffectAuxPin(int effectIndex)
		{
			return calculateEffectPin(effectIndex, EFFECT_AUX_PIN_INDEX);
		}

	};

} // EndOf namespace 


