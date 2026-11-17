/* Save states across builds (ss_convert.c). */
#ifndef ALBW_SS_CONVERT_H
#define ALBW_SS_CONVERT_H
#include <stddef.h>
#include <stdint.h>
#include "runtime.h"

/* where the variable-length records of a state keep their lengths / stack addresses */
typedef struct { uint32_t mh_size, mh_len_off, mh_sp_off, th_size, th_len_off, th_sp_off; } SsLayout;
/* a saved range: "static" (tools/gen_ssmap.py) or a module's named range (albw_ss_add_range) */
typedef struct { uint32_t addr, size; const char *name; } SsRangeInfo;

/* save: append the trailer that lets other builds convert the state */
void ss_convert_write_trailer(SsBuf *b, const SsLayout *lay, const SsRangeInfo *r, int nr);
/* load: rewrite a state of another build (st: the whole body) for this build's ranges cur;
 * 0 ok, -1 with a reason in why */
int ss_convert(SsBuf *st, const SsLayout *lay, const SsRangeInfo *cur, int ncur, char *why, size_t wl);
#endif
