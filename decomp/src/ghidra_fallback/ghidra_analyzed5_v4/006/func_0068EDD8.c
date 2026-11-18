#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068ee94;
extern undefined4 *DAT_0068ee98;
extern undefined4 DAT_0068ee9c;
extern uint *DAT_0068eea0;
extern undefined4 *DAT_0068eea4;
extern undefined4 DAT_0068eea8;
extern uint *DAT_0068eeac;
extern undefined4 *DAT_0068eeb0;
extern undefined4 DAT_0068eeb4;

// USA 0068EDD8 <- EU 0068EDB0 (Ghidra, non-matching)
// GLOBAL DAT_0068ee94 uint *
// GLOBAL DAT_0068ee98 undefined4 *
// GLOBAL DAT_0068ee9c undefined4
// GLOBAL DAT_0068eea0 uint *
// GLOBAL DAT_0068eea4 undefined4 *
// GLOBAL DAT_0068eea8 undefined4
// GLOBAL DAT_0068eeac uint *
// GLOBAL DAT_0068eeb0 undefined4 *
// GLOBAL DAT_0068eeb4 undefined4

undefined4 func_0068EDD8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068ee94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ee94), iVar1 != 0)) {
    *DAT_0068ee98 = DAT_0068ee9c;
  }
  if (DAT_0068ee98 != param_2) {
    if (((*DAT_0068eea0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068eea0), iVar1 != 0)) {
      *DAT_0068eea4 = DAT_0068eea8;
    }
    if (DAT_0068eea4 != param_2) {
      if (((*DAT_0068eeac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068eeac), iVar1 != 0)) {
        *DAT_0068eeb0 = DAT_0068eeb4;
      }
      if (DAT_0068eeb0 != param_2) {
        uVar2 = func_001E6B34(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

