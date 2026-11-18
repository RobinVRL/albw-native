#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002D5D3C(void *param_1);
extern int func_00510288(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern undefined4 DAT_00347fb0;
extern int *DAT_00347fb4;
extern uint *DAT_00347fb8;
extern undefined4 *DAT_00347fbc;
extern undefined4 DAT_00347fc0;

// USA 00347F28 <- EU 00347F04 (Ghidra, non-matching)
// GLOBAL DAT_00347fb0 undefined4
// GLOBAL DAT_00347fb4 int *
// GLOBAL DAT_00347fb8 uint *
// GLOBAL DAT_00347fbc undefined4 *
// GLOBAL DAT_00347fc0 undefined4

undefined4 func_00347F28(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = DAT_00347fb0;
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_00347fb4 + 0x3dbbc,*(uint *)(param_1[10] + 0x628));
  if (((*DAT_00347fb8 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00347fb8), iVar2 != 0)) {
    *DAT_00347fbc = DAT_00347fc0;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_00347fbc), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    func_00510288((int)puVar1);
  }
  *(undefined1 *)(param_1[0xb] + 199) = 1;
  func_002D5D3C(param_1);
  return (undefined4)param_1;
}

