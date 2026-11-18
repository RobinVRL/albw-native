#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00275438(int param_1);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_0053B0D0(int *param_1,float *param_2,float *param_3,float *param_4);
extern int func_00588BF0(int param_1,int param_2);
extern float DAT_00144f38;
extern float DAT_00144f3c;
extern float DAT_00144f40;
extern float DAT_00144f44;

// USA 00144D80 <- EU 00144D80 (Ghidra, non-matching)
// GLOBAL DAT_00144f38 float
// GLOBAL DAT_00144f3c float
// GLOBAL DAT_00144f40 float
// GLOBAL DAT_00144f44 float

undefined4 func_00144D80(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define afStack_34 ((float *)(albw_frame + 0x2c))
  if (*(char *)(param_1 + 0x7cb) == '\0') {
    bVar1 = func_00588BF0(param_1,0);
    if (bVar1) {
      *(undefined1 *)(param_1 + 0x7cb) = 1;
    }
  }
  else {
    func_00275438(*(int *)(param_1 + 0x7c0));
  }
  func_0053B0D0(*(int **)(param_1 + 0x7c0),afStack_34,&local_44,&local_54);
  fVar4 = DAT_00144f38;
  *(float *)(param_1 + 0x3d0) = local_54;
  *(undefined4 *)(param_1 + 0x3d4) = uStack_50;
  *(undefined4 *)(param_1 + 0x3d8) = uStack_4c;
  uVar5 = func_00114608((uint)ALBW_AS_U32((local_44 * fVar4)),(uint)ALBW_AS_U32(local_54));
  uVar6 = func_00114608((uint)ALBW_AS_U32((local_40 * fVar4)),(uint)((ulonglong)uVar5 >> 0x20));
  uVar7 = func_00114608((uint)ALBW_AS_U32((local_3c * fVar4)),(uint)((ulonglong)uVar6 >> 0x20));
  iVar2 = *(int *)(param_1 + 0x78c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar2 + 0x80),(uint)uVar5,(uint)uVar6,(uint)uVar7);
  iVar2 = *(int *)(param_1 + 0x78c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  func_004CEAF0(*(int *)(param_1 + 0x78c));
  piVar3 = *(int **)(param_1 + 0x7b8);
  func_00491624((float *)(piVar3 + 0x19),0,(uint)uVar6,0);
  local_60 = *(float *)(param_1 + 0x3d0);
  local_58 = *(int *)(param_1 + 0x3d8);
  local_5c = *(float *)(param_1 + 0x3d4) + DAT_00144f3c;
  fVar4 = DAT_00144f3c;
  func_004D8054(&local_60,*(uint *)(param_1 + 1000),DAT_00144f40);
  piVar3[1] = (int)ALBW_AS_U32(local_60);
  piVar3[2] = (int)ALBW_AS_U32(local_5c);
  piVar3[3] = local_58;
  func_004356B4(piVar3);
  local_60 = *(float *)(param_1 + 0x3d0);
  local_58 = *(int *)(param_1 + 0x3d8);
  local_5c = DAT_00144f44;
  if (*(char *)(param_1 + 0x7c9) != '\x04') {
    local_5c = fVar4;
  }
  local_5c = *(float *)(param_1 + 0x3d4) + local_5c;
  piVar3 = *(int **)(param_1 + 0x40c);
  piVar3[1] = (int)ALBW_AS_U32(local_60);
  piVar3[2] = (int)ALBW_AS_U32(local_5c);
  piVar3[3] = local_58;
  return func_004356B4(piVar3);
}

