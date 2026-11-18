#include "ghidra_types.h"

extern int func_00150688(undefined4 param_1,int param_2,undefined2 *param_3);
extern int func_002228D0(int param_1,int param_2,uint param_3);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_004fae48;
extern undefined4 DAT_004fae4c;

// USA 004FAD44 <- EU 004FAD1C (Ghidra, non-matching)
// GLOBAL DAT_004fae48 undefined4
// GLOBAL DAT_004fae4c undefined4

void func_004FAD44(int *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  func_004FC07C((int)param_1,0xc,0xffffffff,0);
  if (param_1[600] != 0) {
    func_002228D0(param_1[600],0xc,0xffffffff);
  }
  func_004F88A0(param_1,(undefined2 *)param_1[0x247]);
  piVar6 = param_1 + 0x108;
  func_00150688(param_1,param_1[0x108],(undefined2 *)param_1[0xe8]);
  iVar4 = *piVar6;
  if (iVar4 != 0) {
    uVar2 = *(undefined2 *)(iVar4 + 0x32);
    uVar1 = *(undefined1 *)(iVar4 + 0x20);
    *(undefined1 *)(iVar4 + 0x20) = 0;
    *(undefined1 *)(iVar4 + 0x21) = 0x1f;
    *(undefined1 *)(iVar4 + 0x22) = 0xff;
    uVar3 = DAT_004fae48;
    *(undefined1 *)(iVar4 + 0x23) = 0;
    *(undefined4 *)(iVar4 + 0x24) = uVar3;
    *(undefined4 *)(iVar4 + 0x28) = uVar3;
    *(undefined4 *)(iVar4 + 0x2c) = uVar3;
    uVar3 = DAT_004fae4c;
    *(undefined2 *)(iVar4 + 0x30) = 0;
    *(undefined2 *)(iVar4 + 0x32) = 0xffff;
    *(undefined4 *)(iVar4 + 0x34) = uVar3;
    *(undefined1 *)(*piVar6 + 0x20) = uVar1;
    *(undefined2 *)(*piVar6 + 0x32) = uVar2;
    iVar4 = param_1[0x10a];
    if (iVar4 != 0) {
      iVar5 = param_1[0x108];
      *(undefined1 *)(iVar4 + 0x20) = *(undefined1 *)(iVar5 + 0x20);
      *(undefined1 *)(iVar4 + 0x21) = *(undefined1 *)(iVar5 + 0x21);
      *(undefined1 *)(iVar4 + 0x22) = *(undefined1 *)(iVar5 + 0x22);
      *(undefined1 *)(iVar4 + 0x23) = *(undefined1 *)(iVar5 + 0x23);
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar5 + 0x24);
      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar5 + 0x28);
      *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined2 *)(iVar4 + 0x30) = *(undefined2 *)(iVar5 + 0x30);
      *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(iVar5 + 0x32);
      *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(iVar5 + 0x34);
    }
  }
  return;
}

