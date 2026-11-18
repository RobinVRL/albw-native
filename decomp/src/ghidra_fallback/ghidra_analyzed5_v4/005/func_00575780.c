#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057587c;
extern undefined4 *DAT_00575880;
extern undefined4 DAT_00575884;
extern uint *DAT_00575888;
extern undefined4 *DAT_0057588c;
extern undefined4 DAT_00575890;
extern uint *DAT_00575894;
extern undefined4 *DAT_00575898;
extern undefined4 DAT_0057589c;
extern uint *DAT_005758a0;
extern undefined4 *DAT_005758a4;
extern undefined4 DAT_005758a8;

// USA 00575780 <- EU 00575758 (Ghidra, non-matching)
// GLOBAL DAT_0057587c uint *
// GLOBAL DAT_00575880 undefined4 *
// GLOBAL DAT_00575884 undefined4
// GLOBAL DAT_00575888 uint *
// GLOBAL DAT_0057588c undefined4 *
// GLOBAL DAT_00575890 undefined4
// GLOBAL DAT_00575894 uint *
// GLOBAL DAT_00575898 undefined4 *
// GLOBAL DAT_0057589c undefined4
// GLOBAL DAT_005758a0 uint *
// GLOBAL DAT_005758a4 undefined4 *
// GLOBAL DAT_005758a8 undefined4

undefined4 func_00575780(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057587c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057587c), iVar1 != 0)) {
    *DAT_00575880 = DAT_00575884;
  }
  if (DAT_00575880 != param_2) {
    if (((*DAT_00575888 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575888), iVar1 != 0)) {
      *DAT_0057588c = DAT_00575890;
    }
    if (DAT_0057588c != param_2) {
      if (((*DAT_00575894 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575894), iVar1 != 0)) {
        *DAT_00575898 = DAT_0057589c;
      }
      if (DAT_00575898 != param_2) {
        if (((*DAT_005758a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005758a0), iVar1 != 0))
        {
          *DAT_005758a4 = DAT_005758a8;
        }
        if (DAT_005758a4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

