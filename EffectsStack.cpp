#include <Arduino.h>
#include <Effectrino.h>

#include <EffectsStack.h>
#include <PatchEffect.h>
#include <EffectsStackItem.h>

#include <duino-tools.h>

USING_NAMESPASE_EFFECTRINO

namespace EFFECTRINO_NAMESPACE {


		// TODO
		void EffectsStack::on(PatchEffect *effectPtr, byte velocity)
		{
			// EffectsStackItem * stackItemPtr = find(effectPtr);

			// // Does effect is in stack?
			// if ( !stackItemPtr )
			// {
			// 	stackItemPtr = new EffectsStackItem(effectPtr->getID());	// No, create new item
			// 	push(stackItemPtr);																				// Push it to stack
			// }

			// // TODO Add effect in the stackItem

			// // TODO Get current preset

			// // Does effect is enabled?
			// if ( stackItemPtr->isEnabled() )
			// {
			// 	// effectPtr

			// }
			// else	// No, it`s switched off
			// {
			// 	// Switch it on
			// 	stackItemPtr->enable();

			// 	// Configure matrix

			// }



		}

		// TODO
		void EffectsStack::off(PatchEffect *effectPtr)
		{
			// EffectsStackItem * stackItemPtr = find(effectPtr);

			// // Does effect is in stack?
			// if ( !stackItemPtr )
			// {
			// 	Debug << "fake noteOff event"; 
			// 	return;	
			// }

			// if ( ! stackItemPtr->isEnabled() )
			// {
			// 	Debug << "stack effect is already disabled; nothing to do"; 
			// 	return;
			// }

			// // Mark effect as switched off
			// stackItemPtr->disable();
		}

		// TODO 
		EffectsStackItem * EffectsStack::find(PatchEffect *effectPtr)
		{
			// TODO MOVE TO STD::MAP
			// int effectID = effectPtr->getID();

			// for (int i = 0; i < ::EFFECTS_STACK_SIZE; ++i)
	  // 	{
			//     if( stackPtr[i]->getID() == effectID )
			//     	return stackPtr[i];
			// }

			return NULL;
		}
		
		// Clear effect stack
		void EffectsStack::clear()
		{
		  // for (int i = 0; i < ::EFFECTS_STACK_SIZE; ++i)
		  // {
		  // 	// TODO Destroy all nested objects
	  	// 	stackPtr[i] = NULL;
		  // }
		}


		void EffectsStack::push(EffectsStackItem * itemPtr)
		{
			// bool found = false; 

			// // Store effect at first NULL pointer
		 //  for (char i = 0; i < ::EFFECTS_STACK_SIZE; ++i)
		 //  {
	  // 		if ( stackPtr[i] == NULL )
	  // 		{
	  // 			found = true;
	  // 			stackPtr[i] = itemPtr;

	  // 			// TODO Push slot to matrix

	  // 			::Debug << "Effect with ID " << itemPtr->getID() << " pushed to stack on position " << i;
	  // 			break;
	  // 		}
		 //  }

		 //  if ( !found )
		 //  {
	  // 			::Debug << "Error: effect stack is full!";
		 //  }
		}



} // EndOf namespace 
