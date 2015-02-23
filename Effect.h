#ifndef Effect_h_
#define Effect_h_

#include <Arduino.h>
#include <Effectrino.h>

/**
  *	Abstract effect class
  */
namespace EFFECTRINO_NAMESPACE {

	class Effect {

	public:
		Effect(short int ID);
		short int ID;

		short int getID();
	};

} // EndOf namespace 

#endif // Effect_h_

