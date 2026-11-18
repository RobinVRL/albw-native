#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_00438754;
extern undefined4 DAT_00438758;
extern int DAT_0043875c;

// USA 00438700 <- EU 004386E0 (Ghidra, non-matching)
// GLOBAL DAT_00438754 int
// GLOBAL DAT_00438758 undefined4
// GLOBAL DAT_0043875c int

int * func_00438700(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar2 = func_004B9A10(param_1,3);
  iVar1 = DAT_00438754;
  iVar3 = DAT_00438754 + -0x54;
  piVar2[0xe] = DAT_00438754;
  *piVar2 = iVar3;
  (**(code **)(iVar1 + -0x1c))(piVar2,DAT_00438758,0);
  piVar5 = (int *)piVar2[7];
  func_0016773C((int)piVar5,3);
  iVar1 = DAT_0043875c;
  uVar4 = 0;
  do {
    func_00166C20(piVar5,uVar4,(int *)(iVar1 + uVar4 * 8),0);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 3);
  return piVar2;
}

