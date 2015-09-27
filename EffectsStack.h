#ifndef EffectsStack_h_
#define EffectsStack_h_

#include <Arduino.h>
#include <Effectrino.h>

#include <PatchEffect.h>
#include <EffectsStackItem.h>

namespace EFFECTRINO_NAMESPACE {

	class EffectsStack {

	public:

		// TODO 
		EffectsStackItem * find(PatchEffect *effectPtr);

		// TODO
		void on(PatchEffect *effectPtr, byte velocity);

		// TODO
		void off(PatchEffect *effectPtr);

		// Clear effect stack
		void clear();

	private:

		// array[16] of effects
		// EffectsStackItem * stackPtr[EFFECTS_STACK_SIZE];

		// Add effect to stack
		void push(EffectsStackItem * itemPtr);

	};

} // EndOf namespace 


#endif // EffectsStack_h_
