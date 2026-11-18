#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0018E508(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0065743C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0013cd48;
extern uint *DAT_0013cd4c;
extern undefined4 *DAT_0013cd50;
extern undefined4 DAT_0013cd54;

// USA 0013CC64 <- EU 0013CC64 (Ghidra, non-matching)
// GLOBAL DAT_0013cd48 int *
// GLOBAL DAT_0013cd4c uint *
// GLOBAL DAT_0013cd50 undefined4 *
// GLOBAL DAT_0013cd54 undefined4

undefined4 func_0013CC64(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (((*(int *)(param_2 + 0x2c) != 0) && (*(int *)(param_1 + 0x628) == 0)) &&
     (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\t')) {
    uVar3 = *(uint *)(param_2 + 0x28);
    puVar1 = (undefined4 *)func_0052FBA0(*DAT_0013cd48 + 0x3dbbc,uVar3);
    if (puVar1 != (undefined4 *)0x0) {
      if (((*DAT_0013cd4c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0013cd4c), iVar2 != 0)) {
        *DAT_0013cd50 = DAT_0013cd54;
      }
      iVar2 = (**(code **)*puVar1)(puVar1,DAT_0013cd50);
      if (iVar2 == 0) {
        puVar1 = (undefined4 *)0x0;
      }
      if ((puVar1 != (undefined4 *)0x0) && (iVar2 = func_0018E508((int)puVar1), iVar2 != 0)) {
        *(uint *)(param_1 + 0x628) = uVar3;
        func_0065743C((undefined4 *)(param_1 + 0x4f8),6);
      }
      return 1;
    }
  }
  return 0;
}

