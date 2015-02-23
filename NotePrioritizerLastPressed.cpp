#include <Arduino.h>
#include <NotePrioritizer.h>
#include <NotePrioritizerItem.h>
#include <NotePrioritizerLastPressed.h>

namespace EFFECTRINO_NAMESPACE {

	/**
		*	Prioritize by last pressed note
		**/
	NotePrioritizerItem * NotePrioritizerLastPressed::getCurrentNoteItem()
	{
	  for (short int order = currentOrder; order >= 0; --order)
	  {
		  for (char i = 0; i < STACK_SIZE; ++i)
		  {
		  	if ( stack[i]->isOn() && stack[i]->getOrder() >= order )
		  		return stack[i];
		  }
	  }

	  return NULL;
	}
	
}