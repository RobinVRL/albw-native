#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E8618(int param_1);
extern int func_002D5D3C(void *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern undefined4 DAT_003783b8;
extern int *DAT_003783bc;
extern uint *DAT_003783c0;
extern undefined4 *DAT_003783c4;
extern undefined4 DAT_003783c8;
extern int *DAT_003783cc;

// USA 00378318 <- EU 003782F4 (Ghidra, non-matching)
// GLOBAL DAT_003783b8 undefined4
// GLOBAL DAT_003783bc int *
// GLOBAL DAT_003783c0 uint *
// GLOBAL DAT_003783c4 undefined4 *
// GLOBAL DAT_003783c8 undefined4
// GLOBAL DAT_003783cc int *

undefined4 func_00378318(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = DAT_003783b8;
  piVar1 = (int *)func_0052FBA0(*DAT_003783bc + 0x3dbbc,param_1[0x1d]);
  if (((*DAT_003783c0 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003783c0), iVar2 != 0)) {
    *DAT_003783c4 = DAT_003783c8;
  }
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)*piVar1)(piVar1,DAT_003783c4), iVar2 == 0)) {
    piVar1 = (int *)0x0;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x60))(piVar1);
  }
  func_001E8618(*(int *)(*DAT_003783cc + 0x18));
  *(undefined1 *)(param_1[0x14] + 0x166) = 1;
  func_002D5D3C(param_1);
  return (undefined4)param_1;
}

