#ifndef NotePrioritizer_h_
#define NotePrioritizer_h_

#include <Arduino.h>
#include <Effectrino.h>
#include <NotePrioritizerItem.h>



namespace EFFECTRINO_NAMESPACE {

	class NotePrioritizer {

	public:

		// Adds note to queue and returns current note
		NotePrioritizerItem * on(char note);

		// Remove note from stack and return current note
		NotePrioritizerItem * off(char note);


	protected:

		static const char STACK_SIZE = 16;
		char currentSize = 0;
		short int currentOrder = 0;

		// Stack with notes
		NotePrioritizerItem * stack[STACK_SIZE];

		// Implements searching algorithm
		virtual NotePrioritizerItem * getCurrentNoteItem();

		// Search for item by note
		NotePrioritizerItem * find(char note);

		// Clear stack
		void clear();

	};

}


#endif // NotePrioritizer_h_
