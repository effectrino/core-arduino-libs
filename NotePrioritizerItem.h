#ifndef NotePrioritizerItem_h_
#define NotePrioritizerItem_h_

#include <Arduino.h>
#include <Effectrino.h>

namespace EFFECTRINO_NAMESPACE {

	class NotePrioritizerItem {

	public:

		NotePrioritizerItem(char n, short int o);

		static NotePrioritizerItem * factory(char note, char order);

		char getNote();

		short int getOrder();

		bool isOn();

		void on();

		void off();

	private:
		bool enabled = true;
		char note;
		short int order;

	};

}


#endif // NotePrioritizerItem_h_
