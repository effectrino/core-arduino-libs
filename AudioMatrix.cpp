namespace EFFECTRINO_NAMESPACE {

	class AudioMatrix
	{
	public:

		// AudioMatrix() : AMP(a) {}

		void push(int slot)
		{
			// TODO Insert slot at the end of the stack
		}

		void pop(int slot)
		{
			// TODO
		}

		void remove(int slot)
		{
			// TODO
		}

		void insert(int slot, int after, int before)
		{
			// TODO 
		}

		void reset()
		{
			// TODO drop all stack connections and connect input with output
		}



	private:

		char stackLength = 0;

		// AudioMatrixProtocol AMP;

	};



	// /**
	// 	* Returns
	// 	*/	
	// char AudioMatrix::calculateEffectPin(char effectIndex, char pinIndex)
	// {
	// 	return effectIndex * AUDIO_MATRIX_PINS_PER_EFFECT + pinIndex;
	// }

	// /**
	// 	*
	// 	*/	
	// char AudioMatrix::calculateEffectMainPin(const char effectIndex)
	// {
	// 	return calculateEffectPin(effectIndex, AUDIO_MATRIX_EFFECT_MAIN_PIN_INDEX);
	// }

	// /**
	// 	*
	// 	*/	
	// char AudioMatrix::calculateEffectAuxPin(const char effectIndex)
	// {
	// 	return calculateEffectPin(effectIndex, AUDIO_MATRIX_EFFECT_AUX_PIN_INDEX);
	// }

}