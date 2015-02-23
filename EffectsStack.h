#ifndef EffectsStack_h_
#define EffectsStack_h_

#include <Arduino.h>
#include <Effectrino.h>

#include <PatchEffect.h>
#include <EffectsStackItem.h>

namespace EFFECTRINO_NAMESPACE {

	class EffectsStack {

	public:

		// array[16] of effects
		EffectsStackItem * stackPtr[EFFECTS_STACK_SIZE];

		// TODO 
		EffectsStackItem * find(PatchEffect *effectPtr);

		// TODO
		void on(PatchEffect *effectPtr, byte velocity);

		// TODO
		void off(PatchEffect *effectPtr);

		// Clear effect stack
		void clear();

	private:

		// Add effect to stack
		void push(EffectsStackItem * itemPtr);

	};

} // EndOf namespace 


#endif // EffectsStack_h_
