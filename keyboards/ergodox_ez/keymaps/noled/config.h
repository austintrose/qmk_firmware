/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define FORCE_NKRO

#ifndef IGNORE_MOD_TAP_INTERRUPT
#define IGNORE_MOD_TAP_INTERRUPT
#endif

#ifndef PERMISSIVE_HOLD
#define PERMISSIVE_HOLD
#endif

#undef TAPPING_TERM
#define TAPPING_TERM    250
