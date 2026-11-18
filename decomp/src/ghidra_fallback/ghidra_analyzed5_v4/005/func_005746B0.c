#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005747f0;
extern undefined4 *DAT_005747f4;
extern undefined4 DAT_005747f8;
extern uint *DAT_005747fc;
extern undefined4 *DAT_00574800;
extern undefined4 DAT_00574804;
extern uint *DAT_00574808;
extern undefined4 *DAT_0057480c;
extern undefined4 DAT_00574810;
extern uint *DAT_00574814;
extern undefined4 *DAT_00574818;
extern undefined4 DAT_0057481c;
extern uint *DAT_00574820;
extern undefined4 *DAT_00574824;
extern undefined4 DAT_00574828;

// USA 005746B0 <- EU 00574688 (Ghidra, non-matching)
// GLOBAL DAT_005747f0 uint *
// GLOBAL DAT_005747f4 undefined4 *
// GLOBAL DAT_005747f8 undefined4
// GLOBAL DAT_005747fc uint *
// GLOBAL DAT_00574800 undefined4 *
// GLOBAL DAT_00574804 undefined4
// GLOBAL DAT_00574808 uint *
// GLOBAL DAT_0057480c undefined4 *
// GLOBAL DAT_00574810 undefined4
// GLOBAL DAT_00574814 uint *
// GLOBAL DAT_00574818 undefined4 *
// GLOBAL DAT_0057481c undefined4
// GLOBAL DAT_00574820 uint *
// GLOBAL DAT_00574824 undefined4 *
// GLOBAL DAT_00574828 undefined4

undefined4 func_005746B0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005747f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005747f0), iVar1 != 0)) {
    *DAT_005747f4 = DAT_005747f8;
  }
  if (DAT_005747f4 != param_2) {
    if (((*DAT_005747fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005747fc), iVar1 != 0)) {
      *DAT_00574800 = DAT_00574804;
    }
    if (DAT_00574800 != param_2) {
      if (((*DAT_00574808 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574808), iVar1 != 0)) {
        *DAT_0057480c = DAT_00574810;
      }
      if (DAT_0057480c != param_2) {
        if (((*DAT_00574814 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574814), iVar1 != 0))
        {
          *DAT_00574818 = DAT_0057481c;
        }
        if (DAT_00574818 != param_2) {
          if (((*DAT_00574820 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574820), iVar1 != 0)
             ) {
            *DAT_00574824 = DAT_00574828;
          }
          if (DAT_00574824 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

