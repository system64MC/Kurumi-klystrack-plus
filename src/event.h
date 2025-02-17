#ifndef EVENT_H
#define EVENT_H

/*
Copyright (c) 2009-2010 Tero Lindeman (kometbomb)

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
*/

#include "SDL.h"
#include "gui/slider.h"

void edit_instrument_event(SDL_Event *e);
void sequence_event(SDL_Event *e);
void pattern_event(SDL_Event *e);
void edit_program_event(SDL_Event *e);
void edit_text(SDL_Event *e);
int generic_edit_text(SDL_Event *e, char *edit_buffer, size_t edit_buffer_size, int *editpos);
void fx_event(SDL_Event *e);
void fx_add_param(int d);
void wave_event(SDL_Event *e);
void wave_add_param(int d);
void songinfo_event(SDL_Event *e);
void songinfo_add_param(int d);
void instrument_add_param(int a);
void del_sequence(int first,int last,int track);
void add_sequence(int channel, int position, int pattern, int offset);
void set_room_size(int fx, int size, int vol, int dec);
void update_position_sliders();
void update_horiz_sliders();
void note_event(SDL_Event *e);

enum
{
	PED_NOTE,
	PED_INSTRUMENT1,
	PED_INSTRUMENT2,
	PED_VOLUME1,
	PED_VOLUME2,
	PED_LEGATO,
	PED_SLIDE,
	PED_VIB,
	PED_COMMAND1,
	PED_COMMAND2,
	PED_COMMAND3,
	PED_COMMAND4,
	PED_PARAMS
};

#define PED_CTRL PED_LEGATO

enum
{
	P_INSTRUMENT,
	P_NAME,
	P_BASENOTE,
	P_FINETUNE,
	P_LOCKNOTE,
	P_DRUM,
	P_KEYSYNC,
	P_INVVIB,
	P_SETPW,
	P_SETCUTOFF,
	P_SLIDESPEED,
	P_PULSE,
	P_PW,
	P_SAW,
	P_TRIANGLE,
	P_NOISE,
	P_METAL,
	P_LFSR,
	P_LFSRTYPE,
	P_1_4TH,
	P_WAVE,
	P_WAVE_ENTRY,
	P_WAVE_OVERRIDE_ENV,
	P_WAVE_LOCK_NOTE,
	P_OSCMIXMODE, //wasn't there
	P_VOLUME,
	P_RELVOL,
	P_ATTACK,
	P_DECAY,
	P_SUSTAIN,
	P_RELEASE,
	P_BUZZ,
	P_BUZZ_SEMI,
	P_BUZZ_FINE,
	P_BUZZ_SHAPE,
	P_SYNC,
	P_SYNCSRC,
	P_RINGMOD,
	P_RINGMODSRC,
	P_FILTER,
	P_FLTTYPE,
	P_CUTOFF,
	P_RESONANCE,
	P_FX,
	P_FXBUS,
	P_VIBSPEED,
	P_VIBDEPTH,
	P_VIBSHAPE,
	P_VIBDELAY,
	P_PWMSPEED,
	P_PWMDEPTH,
	P_PWMSHAPE,
	P_PROGPERIOD,
	P_NORESTART,
	P_MULTIOSC,
	P_FM_ENABLE,
	P_FM_MODULATION,
	P_FM_FEEDBACK,
	P_FM_HARMONIC_CARRIER,
	P_FM_HARMONIC_MODULATOR,
	
	P_FM_BASENOTE, //weren't there
	P_FM_FINETUNE,
	
	P_FM_ATTACK,
	P_FM_DECAY,
	P_FM_SUSTAIN,
	P_FM_RELEASE,
	P_FM_ENV_START,
	P_FM_WAVE,
	P_FM_WAVE_ENTRY,
	P_FM_ADDITIVE, //wasn't there
	/*----------*/
	P_PARAMS
};

enum
{
	W_WAVE,
	W_NAME,
	W_RATE,
	W_BASE,
	W_BASEFINE,
	W_INTERPOLATE,
	W_LOOP,
	W_LOOPBEGIN,
	W_LOOPPINGPONG,
	W_LOOPEND,
	W_NUMOSCS,
	W_OSCTYPE,
	W_OSCMUL,
	W_OSCSHIFT,
	W_OSCEXP,
	W_OSCVOL, //wasn't there
	W_OSCABS,
	W_OSCNEG,
	W_WAVELENGTH,
	W_RNDGEN,
	W_GENERATE,
	W_RND,
	W_TOOLBOX,
	/* ----- */
	W_N_PARAMS
};

enum
{
	R_MULTIPLEX,
	R_MULTIPLEX_PERIOD,
	R_PITCH_INACCURACY,
	R_FX_BUS,
	R_FX_BUS_NAME,
	R_CRUSH,
	R_CRUSHBITS,
	R_CRUSHDOWNSAMPLE,
	R_CRUSHDITHER,
	R_CRUSHGAIN,
	R_CHORUS,
	R_MINDELAY,
	R_MAXDELAY,
	R_SEPARATION,
	R_RATE,
	R_ENABLE,
	R_ROOMSIZE,
	R_ROOMVOL,
	R_ROOMDECAY,
	R_SNAPTICKS,
	R_TAPENABLE,
	R_TAP,
	R_DELAY,
	R_GAIN,
	R_PANNING,
	/* ---- */
	R_N_PARAMS
};

enum
{
	SI_LENGTH,
	SI_LOOP,
	SI_STEP,
	SI_SPEED1,
	SI_SPEED2,
	SI_RATE,
	SI_TIME,
	SI_OCTAVE,
	SI_CHANNELS,
	SI_MASTERVOL,
	/*--------*/
	SI_N_PARAMS
};

#endif
