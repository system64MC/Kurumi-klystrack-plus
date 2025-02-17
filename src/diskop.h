#ifndef DISKOP_H
#define DISKOP_H

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

#include <stdio.h>
#include "SDL_rwops.h"
#include "songstats.h"

#include "wavegen.h" //wasn't there

enum
{
	OD_T_SONG,
	OD_T_INSTRUMENT,
	OD_T_WAVETABLE,
	OD_T_WAVETABLE_RAW_S,
	OD_T_WAVETABLE_RAW_U,
	OD_T_FX,
	OD_T_WAVEGEN_PATCH, //wasn't there
	/*------*/
	OD_T_N_TYPES
};

enum
{
	OD_A_OPEN,
	OD_A_SAVE
};

int open_song(FILE *f);
int save_song(SDL_RWops *f);
int save_song_inner(SDL_RWops *f, SongStats *stats);
int open_wavetable(FILE *f);
int open_instrument(FILE *f);
int save_instrument(SDL_RWops *f);
int open_fx(FILE *f);
int save_fx(SDL_RWops *f);

int open_wavepatch(FILE *f); //weren't there
void save_wavepatch_inner(SDL_RWops *f, WgSettings *settings);
int save_wavepatch(SDL_RWops *f);

/* action */
void open_data(void *type, void *action, void*c);

void init_recent_files_list();
void deinit_recent_files_list();
void update_recent_files_list(const char *path);

#endif
