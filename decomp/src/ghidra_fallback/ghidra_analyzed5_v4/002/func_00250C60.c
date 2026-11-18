#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00145A30(int param_1,int param_2);
extern int func_0024FED0(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0065FBB4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00250de8;
extern uint *DAT_00250dec;
extern undefined4 *DAT_00250df0;
extern undefined4 DAT_00250df4;
extern int *DAT_00250df8;

// USA 00250C60 <- EU 00250C88 (Ghidra, non-matching)
// GLOBAL DAT_00250de8 int *
// GLOBAL DAT_00250dec uint *
// GLOBAL DAT_00250df0 undefined4 *
// GLOBAL DAT_00250df4 undefined4
// GLOBAL DAT_00250df8 int *

undefined4 func_00250C60(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)func_0052FBA0(*DAT_00250de8 + 0x3dbbc,*(uint *)(param_1 + 0x470));
  if (((*DAT_00250dec & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00250dec), iVar4 != 0)) {
    *DAT_00250df0 = DAT_00250df4;
  }
  if ((puVar3 == (undefined4 *)0x0) ||
     (iVar4 = (**(code **)*puVar3)(puVar3,DAT_00250df0), iVar4 == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  piVar1 = DAT_00250df8;
  if ((puVar3 == (undefined4 *)0x0) || (*(char *)((int)puVar3 + 0x4a2) == '\0')) {
    if ((*(char *)(param_1 + 0x495) != '\0') &&
       (((*(uint *)(param_1 + 0x4a4) < 5 && (bVar2 = func_00556EAC(*DAT_00250df8,0x54), !bVar2)) &&
        (bVar2 = func_00556EAC(*piVar1,0x55), !bVar2)))) {
      func_00145A30((int)puVar3,*(int *)(param_1 + 0x2cc));
      *(undefined1 *)(param_1 + 0x2d7) = 1;
      if (*(char *)(param_1 + 0x48e) != '\0') {
        func_0024FED0(param_1);
      }
    }
    if (*(uint *)(param_1 + 0x474) < *(uint *)(param_1 + 0x478)) {
      *(uint *)(param_1 + 0x474) = *(uint *)(param_1 + 0x474) + 1;
    }
    else {
      func_0065FBB4((undefined4 *)(param_1 + 0x41c),1);
    }
  }
  else {
    func_00145A30((int)puVar3,*(int *)(param_1 + 0x2cc));
    *(undefined1 *)(param_1 + 0x2d7) = 1;
    if (*(char *)(param_1 + 0x48e) != '\0') {
      return func_0024FED0(param_1);
    }
  }
  return 0;
}

