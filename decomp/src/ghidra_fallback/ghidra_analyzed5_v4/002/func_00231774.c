#include "ghidra_types.h"

extern int func_001672F8(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_00231448(int param_1);
extern float DAT_00231948;

// USA 00231774 <- EU 00231774 (Ghidra, non-matching)
// GLOBAL DAT_00231948 float

undefined4 func_00231774(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfb;
  func_00231448(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  *(ushort *)(param_1 + 0x76) = (ushort)*(byte *)(param_1 + 0x9c) * 2 + -1;
  *(undefined2 *)(param_1 + 0x74) = 0;
  fVar7 = *(float *)(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0x7c);
  if ((iVar2 != 0) && (uVar5 = (uint)*(short *)(param_1 + 0x76), -1 < (int)uVar5)) {
    switch(*(undefined2 *)(param_1 + 0x74)) {
    case 0:
      return func_001672F8(iVar2,uVar5,DAT_00231948,fVar7);
    case 1:
      fVar7 = DAT_00231948;
      func_001672F8(iVar2,uVar5,DAT_00231948,DAT_00231948);
      iVar2 = *(int *)(*(int *)(param_1 + 0x7c) + 0xc);
      if ((uint)(int)*(short *)(param_1 + 0x76) < *(uint *)(*(int *)(param_1 + 0x7c) + 8)) {
        iVar2 = iVar2 + *(short *)(param_1 + 0x76) * 0x38;
      }
      *(float *)(iVar2 + 0x14) = fVar7;
      *(float *)(*(int *)(iVar2 + 0x10) + 0x10) = fVar7;
      break;
    case 2:
      if (uVar5 < *(uint *)(iVar2 + 8)) {
        iVar6 = *(int *)(iVar2 + 0xc) + uVar5 * 0x38;
      }
      else {
        iVar6 = *(int *)(iVar2 + 0xc);
      }
      return func_001672F8(iVar2,uVar5,*(float *)(iVar6 + 0x20),-fVar7);
    case 3:
      func_001672F8(iVar2,uVar5,DAT_00231948,DAT_00231948);
      iVar2 = *(int *)(param_1 + 0x7c);
      uVar5 = (uint)*(short *)(param_1 + 0x76);
      if (uVar5 < *(uint *)(iVar2 + 8)) {
        iVar6 = *(int *)(iVar2 + 0xc) + uVar5 * 0x38;
        uVar1 = uVar5 * 7;
      }
      else {
        iVar6 = *(int *)(iVar2 + 0xc);
        uVar1 = uVar5;
      }
      iVar3 = *(int *)(iVar2 + 0xc);
      uVar4 = *(undefined4 *)(iVar6 + 0x20);
      if (uVar5 < *(uint *)(iVar2 + 8)) {
        iVar3 = iVar3 + uVar1 * 8;
      }
      *(undefined4 *)(iVar3 + 0x14) = uVar4;
      *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x10) = uVar4;
      return 0;
    case 4:
      if (fVar7 < DAT_00231948) {
        if (uVar5 < *(uint *)(iVar2 + 8)) {
          iVar6 = *(int *)(iVar2 + 0xc) + uVar5 * 0x38;
        }
        else {
          iVar6 = *(int *)(iVar2 + 0xc);
        }
        func_001672F8(iVar2,uVar5,*(float *)(iVar6 + 0x20),-fVar7);
      }
      else {
        func_001672F8(iVar2,uVar5,DAT_00231948,fVar7);
      }
      uVar4 = *(undefined4 *)(param_1 + 0x78);
      iVar2 = *(int *)(param_1 + 0x7c);
      if ((uint)(int)*(short *)(param_1 + 0x76) < *(uint *)(iVar2 + 8)) {
        iVar2 = *(int *)(iVar2 + 0xc) + *(short *)(param_1 + 0x76) * 0x38;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0x14) = uVar4;
      *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x10) = uVar4;
      return 0;
    }
  }
  return 0;
}

