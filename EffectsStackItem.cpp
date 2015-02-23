#include <Arduino.h>
#include <Effectrino.h>
#include <EffectsStackItem.h>


namespace EFFECTRINO_NAMESPACE {

	EffectsStackItem::EffectsStackItem(short int effectID) : Effect(effectID) {}

	void EffectsStackItem::enable() {
		enabled = true;
	}

	void EffectsStackItem::disable() {
		enabled = false;
	}

	bool EffectsStackItem::isEnabled() {
		return enabled;
	}

}
