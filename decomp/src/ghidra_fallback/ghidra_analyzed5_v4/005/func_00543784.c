#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00543880;
extern undefined4 *DAT_00543884;
extern undefined4 DAT_00543888;
extern uint *DAT_0054388c;
extern undefined4 *DAT_00543890;
extern undefined4 DAT_00543894;
extern uint *DAT_00543898;
extern undefined4 *DAT_0054389c;
extern undefined4 DAT_005438a0;
extern uint *DAT_005438a4;
extern undefined4 *DAT_005438a8;
extern undefined4 DAT_005438ac;

// USA 00543784 <- EU 0054375C (Ghidra, non-matching)
// GLOBAL DAT_00543880 uint *
// GLOBAL DAT_00543884 undefined4 *
// GLOBAL DAT_00543888 undefined4
// GLOBAL DAT_0054388c uint *
// GLOBAL DAT_00543890 undefined4 *
// GLOBAL DAT_00543894 undefined4
// GLOBAL DAT_00543898 uint *
// GLOBAL DAT_0054389c undefined4 *
// GLOBAL DAT_005438a0 undefined4
// GLOBAL DAT_005438a4 uint *
// GLOBAL DAT_005438a8 undefined4 *
// GLOBAL DAT_005438ac undefined4

undefined4 func_00543784(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00543880 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543880), iVar1 != 0)) {
    *DAT_00543884 = DAT_00543888;
  }
  if (DAT_00543884 != param_2) {
    if (((*DAT_0054388c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054388c), iVar1 != 0)) {
      *DAT_00543890 = DAT_00543894;
    }
    if (DAT_00543890 != param_2) {
      if (((*DAT_00543898 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543898), iVar1 != 0)) {
        *DAT_0054389c = DAT_005438a0;
      }
      if (DAT_0054389c != param_2) {
        if (((*DAT_005438a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005438a4), iVar1 != 0))
        {
          *DAT_005438a8 = DAT_005438ac;
        }
        if (DAT_005438a8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

