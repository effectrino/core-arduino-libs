namespace EFFECTRINO_NAMESPACE {

	class NotePrioritizerItem {

	public:

		NotePrioritizerItem(char n, short int o) : note(n), order(o) {}

		static NotePrioritizerItem * factory(char note, char order)
		{
			return new NotePrioritizerItem(note, order);
		}

		char getNote()
		{
			return note;
		}

		short int getOrder()
		{
			return note;
		}

		bool isOn()
		{
			return enabled;
		}

		void on()
		{
			enabled = true;
		}

		void off()
		{
			enabled = false;
		}

	private:
		bool enabled = true;
		char note;
		short int order;

	};

}