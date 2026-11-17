/* Save states (savestate.c, native/SAVESTATES.md): API for the frontend. */
#ifndef ALBW_SAVESTATE_H
#define ALBW_SAVESTATE_H
#include <stddef.h>

#define SS_SLOTS 10
enum { SS_SAVE = 1, SS_LOAD = 2 };

/* queue a save / load of slot 0..SS_SLOTS-1: it runs at the next frame end */
void albw_ss_request(int op, int slot);
/* main game thread, start of plat_end_frame: runs a queued request */
void albw_ss_frame_point(void);
/* "empty" / "hh:mm:ss, frame N"; returns 1 if the slot holds a state */
int albw_ss_slot_info(int slot, char *buf, size_t n);
/* the outcome of the last request ("Saved state 1 (95 MB)", "Cannot load ...") */
const char *albw_ss_note(void);
#endif
