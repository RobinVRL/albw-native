#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057221c;
extern undefined4 *DAT_00572220;
extern undefined4 DAT_00572224;
extern uint *DAT_00572228;
extern undefined4 *DAT_0057222c;
extern undefined4 DAT_00572230;
extern uint *DAT_00572234;
extern undefined4 *DAT_00572238;
extern undefined4 DAT_0057223c;
extern uint *DAT_00572240;
extern undefined4 *DAT_00572244;
extern undefined4 DAT_00572248;
extern uint *DAT_0057224c;
extern undefined4 *DAT_00572250;
extern undefined4 DAT_00572254;

// USA 005720DC <- EU 005720B4 (Ghidra, non-matching)
// GLOBAL DAT_0057221c uint *
// GLOBAL DAT_00572220 undefined4 *
// GLOBAL DAT_00572224 undefined4
// GLOBAL DAT_00572228 uint *
// GLOBAL DAT_0057222c undefined4 *
// GLOBAL DAT_00572230 undefined4
// GLOBAL DAT_00572234 uint *
// GLOBAL DAT_00572238 undefined4 *
// GLOBAL DAT_0057223c undefined4
// GLOBAL DAT_00572240 uint *
// GLOBAL DAT_00572244 undefined4 *
// GLOBAL DAT_00572248 undefined4
// GLOBAL DAT_0057224c uint *
// GLOBAL DAT_00572250 undefined4 *
// GLOBAL DAT_00572254 undefined4

undefined4 func_005720DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057221c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057221c), iVar1 != 0)) {
    *DAT_00572220 = DAT_00572224;
  }
  if (DAT_00572220 != param_2) {
    if (((*DAT_00572228 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572228), iVar1 != 0)) {
      *DAT_0057222c = DAT_00572230;
    }
    if (DAT_0057222c != param_2) {
      if (((*DAT_00572234 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572234), iVar1 != 0)) {
        *DAT_00572238 = DAT_0057223c;
      }
      if (DAT_00572238 != param_2) {
        if (((*DAT_00572240 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572240), iVar1 != 0))
        {
          *DAT_00572244 = DAT_00572248;
        }
        if (DAT_00572244 != param_2) {
          if (((*DAT_0057224c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057224c), iVar1 != 0)
             ) {
            *DAT_00572250 = DAT_00572254;
          }
          if (DAT_00572250 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

