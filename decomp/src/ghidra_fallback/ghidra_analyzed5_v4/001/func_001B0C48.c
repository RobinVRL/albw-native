#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0018EC1C(int param_1,uint param_2);
extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0065AF54(undefined4 *param_1,undefined1 param_2);
extern int DAT_001b0d18;
extern int *DAT_001b0d1c;
extern uint *DAT_001b0d20;
extern undefined4 *DAT_001b0d24;
extern undefined4 DAT_001b0d28;

// USA 001B0C48 <- EU 001B0C48 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b0d18 int
// GLOBAL DAT_001b0d1c int *
// GLOBAL DAT_001b0d20 uint *
// GLOBAL DAT_001b0d24 undefined4 *
// GLOBAL DAT_001b0d28 undefined4

void func_001B0C48(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  func_002F8DE4(param_1,0xe,0,0);
  piVar1 = DAT_001b0d1c;
  iVar3 = DAT_001b0d18;
  param_1[0xf7] = DAT_001b0d18;
  param_1[0xf8] = iVar3;
  param_1[0xf9] = iVar3;
  puVar2 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,param_1[0x286]);
  if (((*DAT_001b0d20 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_001b0d20), iVar3 != 0)) {
    *DAT_001b0d24 = DAT_001b0d28;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_001b0d24), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = func_0018EC1C((int)puVar2,param_1[0xb3]), iVar3 == 0)) {
    func_0065AF54(param_1 + 0x243,9);
  }
  return;
}

