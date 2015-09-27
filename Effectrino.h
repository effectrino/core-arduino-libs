#ifndef Effectrino_h_
#define Effectrino_h_

//#include <Arduino.h>

#define EFFECTRINO_NAMESPACE        Effectrino
#define USING_NAMESPASE_EFFECTRINO  using namespace EFFECTRINO_NAMESPACE;
#define BEGIN_EFFECTRINO_NAMESPACE  namespace EFFECTRINO_NAMESPACE {
#define END_EFFECTRINO_NAMESPACE    }


BEGIN_EFFECTRINO_NAMESPACE

  const char VERSION = 1;

END_EFFECTRINO_NAMESPACE


//namespace EFFECTRINO_NAMESPACE {

  // TODO update this and move consts to corresponding classes
	// static const int EFFECTS_PER_PATCH = 48; // 16 pads * 3 banks = 12 semitones * 4 octaves
	// static const int EFFECTS_STACK_SIZE = 16;

	// static const int AUDIO_MATRIX_PINS_PER_EFFECT = 2;

	// static const int AUDIO_MATRIX_EFFECT_MAIN_PIN_INDEX = 0;
	// static const int AUDIO_MATRIX_EFFECT_AUX_PIN_INDEX = 1;

	// static const int AUDIO_MATRIX_INPUT_PIN_INDEX = 15;
	// static const int AUDIO_MATRIX_OUTPUT_PIN_INDEX = 15;

//}

#endif // Effectrino_h_
