#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00525BE0(int param_1,float *param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00665F4C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0033df18;
extern uint *DAT_0033df1c;
extern undefined4 *DAT_0033df20;
extern undefined4 DAT_0033df24;
extern float DAT_0033df28;
extern undefined4 DAT_0033df2c;
extern undefined4 DAT_0033df30;
extern int *DAT_0033df34;
extern int *DAT_0033df38;

// USA 0033DDF0 <- EU 0033DDCC (Ghidra, non-matching)
// GLOBAL DAT_0033df18 int *
// GLOBAL DAT_0033df1c uint *
// GLOBAL DAT_0033df20 undefined4 *
// GLOBAL DAT_0033df24 undefined4
// GLOBAL DAT_0033df28 float
// GLOBAL DAT_0033df2c undefined4
// GLOBAL DAT_0033df30 undefined4
// GLOBAL DAT_0033df34 int *
// GLOBAL DAT_0033df38 int *

undefined4 func_0033DDF0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  
  puVar4 = (undefined4 *)func_0052FBA0(*DAT_0033df18 + 0x3dbbc,*(uint *)(param_1 + 0x434));
  if (((*DAT_0033df1c & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0033df1c), iVar5 != 0)) {
    *DAT_0033df20 = DAT_0033df24;
  }
  if ((puVar4 == (undefined4 *)0x0) ||
     (iVar5 = (**(code **)*puVar4)(puVar4,DAT_0033df20), iVar5 == 0)) {
    puVar4 = (undefined4 *)0x0;
  }
  fVar6 = DAT_0033df28;
  if ((puVar4 == (undefined4 *)0x0) ||
     (iVar5 = func_00525BE0((int)puVar4,(float *)(param_1 + 0x3d0),DAT_0033df28), iVar5 == 0)) {
    func_00665F4C((undefined4 *)(param_1 + 0x40c),1);
    piVar3 = DAT_0033df34;
    uVar2 = DAT_0033df30;
    uVar1 = DAT_0033df2c;
    *(float *)(param_1 + 0x3dc) = fVar6;
    *(undefined4 *)(param_1 + 0x3e0) = uVar1;
    *(undefined4 *)(param_1 + 0x3e4) = uVar2;
    func_004D7F70((float *)(param_1 + 0x3dc),*DAT_0033df38 + **(int **)(*piVar3 + 0x24));
  }
  iVar5 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar5 + 0x80),(undefined4 *)(param_1 + 0x438));
  iVar5 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar5 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  return func_004CEAF0(*(int *)(param_1 + 0x430));
}

