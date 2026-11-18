#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001BD088(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern uint DAT_001bd45c;

// USA 001BD314 <- EU 001BD314 (Ghidra, non-matching)
// GLOBAL DAT_001bd45c uint

void func_001BD314(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fparam_0;
  
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x45c),0,DAT_001bd45c,param_1 + 0x460,0);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  piVar5 = (int *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar2 & 1) != 0) {
    piVar5 = (int *)(*piVar5 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar5)();
  iVar3 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar3;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fparam_0);
  }
  uVar2 = *(uint *)(param_1 + 0x448);
  if (*(uint *)(param_1 + 0x444) < uVar2) {
    uVar6 = *(uint *)(param_1 + 0x444) + 1;
    uVar4 = uVar2;
    if (uVar2 <= uVar6) {
      uVar4 = param_1;
    }
    *(uint *)(param_1 + 0x444) = uVar6;
    if (uVar2 <= uVar6) {
      func_001BD088(uVar4);
    }
  }
  iVar3 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  uVar2 = *(uint *)(param_1 + 1000);
  piVar5 = (int *)0x0;
  func_00491E80((float *)(iVar3 + 0x80),0,uVar2,0);
  iVar3 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  uVar7 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar3 + 0xac) = uVar7;
  func_00169A80(*(int **)(param_1 + 0x434),uVar7,uVar2,piVar5);
  func_00168E9C(*(int **)(param_1 + 0x434),*(int *)(param_1 + 0x430),(int *)0x0);
  func_004CEAF0(*(int *)(param_1 + 0x430));
  bVar1 = func_00588BF0(param_1,0);
  *(bool *)(param_1 + 0x451) = bVar1;
  return;
}

