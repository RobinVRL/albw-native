#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_001695F8(int param_1,uint param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001E40DC(int param_1,int param_2);
extern int func_001E4318(int param_1);
extern int func_001E43DC(int param_1,float fparam_0);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int *DAT_003033f4;
extern float DAT_003033f8;

// USA 003030CC <- EU 003030A8 (Ghidra, non-matching)
// GLOBAL DAT_003033f4 int *
// GLOBAL DAT_003033f8 float

void func_003030CC(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_78 ((int *)(albw_frame + 0x8))
  func_001E40DC(param_1,1);
  piVar1 = DAT_003033f4;
  func_001695F8(param_1,0,DAT_003033f4 + 8);
  func_001E4318(param_1);
  fVar6 = DAT_003033f8;
  func_001E43DC(param_1,DAT_003033f8);
  puVar2 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = func_0016A2FC(puVar2,1,DAT_003033f4,1);
  }
  *(uint **)(param_1 + 0x4bc) = puVar5;
  piVar4 = (int *)(param_1 + 0x4bc);
  func_00169608(puVar5,0,DAT_003033f4,*(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8));
  func_0016A02C(*piVar4,-1,(int *)0xffffffff,0);
  puVar5 = (uint *)func_002C11E8(aiStack_78,0,10,0);
  func_0016898C(*piVar4,puVar5);
  iVar3 = *(int *)(*piVar4 + 0x14);
  if (*(float *)(iVar3 + 8) != fVar6) {
    *(float *)(iVar3 + 8) = fVar6;
    *(undefined1 *)(iVar3 + 0x26) = 1;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x4bc) + 0x14) + 0x10) = fVar6;
  puVar2 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = func_0016A2FC(puVar2,1,piVar1 + 2,1);
  }
  *(uint **)(param_1 + 0x4c0) = puVar5;
  piVar4 = (int *)(param_1 + 0x4c0);
  func_00169608(puVar5,0,piVar1 + 2,*(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8));
  func_0016A02C(*piVar4,-1,(int *)0xffffffff,0);
  puVar5 = (uint *)func_002C11E8(aiStack_78,0,10,0);
  func_0016898C(*piVar4,puVar5);
  iVar3 = *(int *)(*piVar4 + 0x14);
  if (*(float *)(iVar3 + 8) != fVar6) {
    *(float *)(iVar3 + 8) = fVar6;
    *(undefined1 *)(iVar3 + 0x26) = 1;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x4c0) + 0x14) + 0x10) = fVar6;
  puVar2 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = func_0016A2FC(puVar2,1,piVar1 + 4,1);
  }
  *(uint **)(param_1 + 0x4c4) = puVar5;
  piVar4 = (int *)(param_1 + 0x4c4);
  func_00169608(puVar5,0,piVar1 + 4,*(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8));
  func_0016A02C(*piVar4,-1,(int *)0xffffffff,0);
  puVar5 = (uint *)func_002C11E8(aiStack_78,0,10,0);
  func_0016898C(*piVar4,puVar5);
  iVar3 = *(int *)(*piVar4 + 0x14);
  if (*(float *)(iVar3 + 8) != fVar6) {
    *(float *)(iVar3 + 8) = fVar6;
    *(undefined1 *)(iVar3 + 0x26) = 1;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x4c4) + 0x14) + 0x10) = fVar6;
  puVar2 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = func_0016A2FC(puVar2,1,piVar1 + 6,1);
  }
  *(uint **)(param_1 + 0x4c8) = puVar5;
  piVar4 = (int *)(param_1 + 0x4c8);
  func_00169608(puVar5,0,piVar1 + 6,*(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8));
  func_0016A02C(*piVar4,-1,(int *)0xffffffff,0);
  puVar5 = (uint *)func_002C11E8(aiStack_78,0,10,0);
  func_0016898C(*piVar4,puVar5);
  iVar3 = *(int *)(*piVar4 + 0x14);
  if (*(float *)(iVar3 + 8) != fVar6) {
    *(float *)(iVar3 + 8) = fVar6;
    *(undefined1 *)(iVar3 + 0x26) = 1;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x4c8) + 0x14) + 0x10) = fVar6;
  return;
}

