#ifndef EffectsStackItem_h_
#define EffectsStackItem_h_

#include <Arduino.h>
#include <Effectrino.h>
#include <Effect.h>


namespace EFFECTRINO_NAMESPACE {

	class EffectsStackItem : public Effect {

	public:

		EffectsStackItem(short int effectID);

		void enable();
		void disable();
		bool isEnabled();

	private:
		bool enabled = false;

	};

}


#endif // EffectsStackItem_h_
