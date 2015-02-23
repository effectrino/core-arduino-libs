#include <Arduino.h>
#include <NotePrioritizerItem.h>



namespace EFFECTRINO_NAMESPACE {

	class NotePrioritizer {

	public:

		// Adds note to queue and returns current note
		NotePrioritizerItem * on(char note)
		{
			NotePrioritizerItem * item = find(note);

			// If there is no item
			if ( !item )
			{
				// Create new one and add it to stack
				item = NotePrioritizerItem::factory(note, currentOrder++);
			}

			// Switch on item
			item->on();

			// Calculate current item and return it
			return getCurrentNoteItem();
		}

		// Remove note from stack and return current note
		NotePrioritizerItem * off(char note)
		{
			NotePrioritizerItem * item = find(note);

			// If no item found, do nothing
			if ( !item )
				return NULL;

			// Switch off item
			item->off();

			// Calculate current item
			item = getCurrentNoteItem();

			// If no active items in stack
			if ( !item )
			{
				// Clear the stack
				clear();
			}

			return item;
		}

	protected:
		static const char STACK_SIZE = 16;
		char currentSize = 0;
		unsigned short int currentOrder = 0;

		// Stack with notes
		NotePrioritizerItem * stack[STACK_SIZE];

		// Implements searching algorithm
		virtual NotePrioritizerItem * getCurrentNoteItem();


		// Search for item by note
		NotePrioritizerItem * find(char note)
		{
		  for (int i = 0; i < STACK_SIZE; ++i)
		  {
		  	if ( stack[i]->getNote() == note )
		  	{
		  		return stack[i];
		  	}
		  }

		  return NULL;
		}

		// Clear stack
		void clear()
		{
			// Make NULL-pointers
		  for (int i = 0; i < STACK_SIZE; ++i)
		  {
	  		stack[i] = NULL;
		  }

		  // Reset counters
		  currentOrder = 0;
		  currentSize = 0;
		}

	};

}