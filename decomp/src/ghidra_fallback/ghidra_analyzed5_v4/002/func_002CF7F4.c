#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00275438(int param_1);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_0053B0D0(int *param_1,float *param_2,float *param_3,float *param_4);
extern int func_00588BF0(int param_1,int param_2);
extern float DAT_002cf940;
extern float DAT_002cf944;

// USA 002CF7F4 <- EU 002CF7D0 (Ghidra, non-matching)
// GLOBAL DAT_002cf940 float
// GLOBAL DAT_002cf944 float

void func_002CF7F4(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define afStack_34 ((float *)(albw_frame + 0x2c))
  if (*(char *)(param_1 + 0x4a2) == '\0') {
    bVar1 = func_00588BF0(param_1,0);
    if ((bVar1) || (bVar1 = func_00588BF0(param_1,1), bVar1)) {
      *(undefined1 *)(param_1 + 0x4a2) = 1;
    }
  }
  else {
    func_00275438(*(int *)(param_1 + 0x43c));
  }
  func_0053B0D0(*(int **)(param_1 + 0x43c),afStack_34,&local_4c,&local_58);
  fVar5 = DAT_002cf940;
  *(float *)(param_1 + 0x3d0) = local_58;
  *(undefined4 *)(param_1 + 0x3d4) = uStack_54;
  *(undefined4 *)(param_1 + 0x3d8) = uStack_50;
  uVar6 = func_00114608((uint)ALBW_AS_U32((local_4c * fVar5)),(uint)ALBW_AS_U32(local_58));
  uVar7 = func_00114608((uint)ALBW_AS_U32((local_48 * fVar5)),(uint)((ulonglong)uVar6 >> 0x20));
  uVar8 = func_00114608((uint)ALBW_AS_U32((local_44 * fVar5)),(uint)((ulonglong)uVar7 >> 0x20));
  iVar2 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar2 + 0x80),(uint)uVar6,(uint)uVar7,(uint)uVar8);
  iVar2 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  func_004CEAF0(*(int *)(param_1 + 0x430));
  piVar3 = *(int **)(param_1 + 0x440);
  if (piVar3 != (int *)0x0) {
    func_00491624((float *)(piVar3 + 0x19),(uint)uVar6,(uint)uVar7,(uint)uVar8);
    fVar5 = DAT_002cf944;
    fVar4 = *(float *)(param_1 + 0x3d4);
    iVar2 = *(int *)(param_1 + 0x3d8);
    piVar3[1] = *(int *)(param_1 + 0x3d0);
    piVar3[2] = (int)ALBW_AS_U32((fVar4 + fVar5));
    piVar3[3] = iVar2;
    func_004356B4(piVar3);
  }
  return;
}

