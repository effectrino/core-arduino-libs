#ifndef NotePrioritizerLastPressed_h_
#define NotePrioritizerLastPressed_h_

#include <Arduino.h>
#include <Effectrino.h>
#include <NotePrioritizer.h>
#include <NotePrioritizerItem.h>

namespace EFFECTRINO_NAMESPACE {

	/**
		*	Prioritize by last pressed note
		*/
	class NotePrioritizerLastPressed : NotePrioritizer {

		NotePrioritizerItem * getCurrentNoteItem();
		
	};

}


#endif // NotePrioritizerLastPressed_h_
