#ifndef Patch_h_
#define Patch_h_

#include <Arduino.h>
#include <Effectrino.h>
#include <PatchEffect.h>
#include <EffectsStack.h>


namespace EFFECTRINO_NAMESPACE {

	class Patch {

	public:

		// TODO Продумать механизм хранения эффектов в патче (будут хранить копию пресета внутри патча)
		PatchEffect * effects[EFFECTS_PER_PATCH];

		// Array of MIDI notes
		char stack[EFFECTS_STACK_SIZE];

		// TODO 
		PatchEffect * getEffectByMIDINote(char note);

		// TODO Get array of stack MIDI notes
		char * getStackMIDINotes();
	
	};

}

#endif // Patch_h_
