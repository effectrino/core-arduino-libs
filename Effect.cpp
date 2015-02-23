#include <Effect.h>

/**
  *	Abstract effect class
  */
namespace EFFECTRINO_NAMESPACE {

		Effect::Effect(short int effectID) : ID(effectID) {}

		short int Effect::getID()
		{
			return ID;
		}

} // EndOf namespace 


