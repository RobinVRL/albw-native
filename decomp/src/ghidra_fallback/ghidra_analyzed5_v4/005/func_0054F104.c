#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054f200;
extern undefined4 *DAT_0054f204;
extern undefined4 DAT_0054f208;
extern uint *DAT_0054f20c;
extern undefined4 *DAT_0054f210;
extern undefined4 DAT_0054f214;
extern uint *DAT_0054f218;
extern undefined4 *DAT_0054f21c;
extern undefined4 DAT_0054f220;
extern uint *DAT_0054f224;
extern undefined4 *DAT_0054f228;
extern undefined4 DAT_0054f22c;

// USA 0054F104 <- EU 0054F0DC (Ghidra, non-matching)
// GLOBAL DAT_0054f200 uint *
// GLOBAL DAT_0054f204 undefined4 *
// GLOBAL DAT_0054f208 undefined4
// GLOBAL DAT_0054f20c uint *
// GLOBAL DAT_0054f210 undefined4 *
// GLOBAL DAT_0054f214 undefined4
// GLOBAL DAT_0054f218 uint *
// GLOBAL DAT_0054f21c undefined4 *
// GLOBAL DAT_0054f220 undefined4
// GLOBAL DAT_0054f224 uint *
// GLOBAL DAT_0054f228 undefined4 *
// GLOBAL DAT_0054f22c undefined4

undefined4 func_0054F104(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054f200 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f200), iVar1 != 0)) {
    *DAT_0054f204 = DAT_0054f208;
  }
  if (DAT_0054f204 != param_2) {
    if (((*DAT_0054f20c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f20c), iVar1 != 0)) {
      *DAT_0054f210 = DAT_0054f214;
    }
    if (DAT_0054f210 != param_2) {
      if (((*DAT_0054f218 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f218), iVar1 != 0)) {
        *DAT_0054f21c = DAT_0054f220;
      }
      if (DAT_0054f21c != param_2) {
        if (((*DAT_0054f224 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f224), iVar1 != 0))
        {
          *DAT_0054f228 = DAT_0054f22c;
        }
        if (DAT_0054f228 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

