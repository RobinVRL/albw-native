#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3);
extern int func_004356B4(int *param_1);
extern int func_004AF514(int param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int DAT_004b0648;
extern uint *DAT_004b064c;
extern undefined4 *DAT_004b0650;
extern undefined4 DAT_004b0654;
extern undefined4 DAT_004b0658;
extern undefined4 DAT_004b065c;
extern float DAT_004b0660;
extern undefined4 DAT_004b0664;
extern undefined4 DAT_004b0668;
extern undefined4 *DAT_004b066c;
extern undefined4 DAT_004b0670;
extern undefined4 DAT_004b0674;
extern uint DAT_004b0680;
extern undefined4 DAT_004b0684;
extern undefined4 DAT_004b0688;
extern undefined4 DAT_004b068c;
extern char s_color_004b0678[];

// USA 004B0310 <- EU 004B02E8 (Ghidra, non-matching)
// GLOBAL DAT_004b0648 int
// GLOBAL DAT_004b064c uint *
// GLOBAL DAT_004b0650 undefined4 *
// GLOBAL DAT_004b0654 undefined4
// GLOBAL DAT_004b0658 undefined4
// GLOBAL DAT_004b065c undefined4
// GLOBAL DAT_004b0660 float
// GLOBAL DAT_004b0664 undefined4
// GLOBAL DAT_004b0668 undefined4
// GLOBAL DAT_004b066c undefined4 *
// GLOBAL DAT_004b0670 undefined4
// GLOBAL DAT_004b0674 undefined4
// GLOBAL DAT_004b0680 uint
// GLOBAL DAT_004b0684 undefined4
// GLOBAL DAT_004b0688 undefined4
// GLOBAL DAT_004b068c undefined4
// GLOBAL s_color_004b0678 string

/* WARNING: Variable defined which should be unmapped: objStack_88 */

int func_004B0310(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define objStack_88 ((uint *)(albw_frame + 0x8))
  #define local_7c ((uint *)(albw_frame + 0x14))
  #define local_74 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c (*(uint *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x68))
  #define local_24 (*(undefined1 *)(albw_frame + 0x6c))
  piVar1 = (int *)func_001E4B08(param_1,param_2,1);
  iVar3 = DAT_004b0648;
  piVar1[200] = DAT_004b0648 + 0x78;
  *piVar1 = iVar3;
  piVar1[0x13d] = 0;
  *(undefined1 *)(piVar1 + 0x13f) = 0;
  puVar2 = (undefined4 *)func_0054D964((int)piVar1,0);
  if (((*DAT_004b064c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004b064c), iVar3 != 0)) {
    *DAT_004b0650 = DAT_004b0654;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_004b0650), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  piVar1[0x140] = (int)puVar2;
  iVar3 = func_004EE484(piVar1 + 0x141);
  iVar8 = iVar3 + -0x504;
  iVar4 = func_0054D89C(iVar8,0);
  *(int *)(iVar3 + 100) = iVar4;
  *(undefined1 *)(iVar3 + 0x68) = 0;
  *(undefined1 *)(iVar3 + 0x69) = 0;
  uVar5 = DAT_004b0658;
  *(undefined1 *)(iVar3 + 0x6a) = 0;
  uVar11 = DAT_004b065c;
  uVar14 = CONCAT44(uVar5,DAT_004b065c);
  *(undefined1 *)(iVar3 + 0x6b) = 0;
  *(undefined4 *)(iVar3 + 0x70) = uVar5;
  *(undefined4 *)(iVar3 + 0x74) = uVar11;
  fVar10 = func_0054DE3C(iVar8,0,1);
  uVar5 = DAT_004b0664;
  *(float *)(iVar3 + 0x78) = DAT_004b0660 - fVar10;
  uVar11 = DAT_004b0668;
  *(undefined4 *)(iVar3 + 0x8c) = uVar5;
  *(undefined4 *)(iVar3 + 0x90) = uVar11;
  *(undefined4 *)(iVar3 + 0x88) = 0;
  uVar7 = param_2[5];
  uVar9 = param_2[6];
  *(uint *)(iVar3 + 0x94) = param_2[4];
  *(uint *)(iVar3 + 0x98) = uVar7;
  *(uint *)(iVar3 + 0x9c) = uVar9;
  *(int *)(iVar3 + 0xa0) = iVar8;
  *(int *)(iVar3 + 0xa8) = iVar3 + -0x128;
  *(int *)(iVar3 + 0xa4) = iVar3 + 0x94;
  *(undefined1 *)(iVar3 + 0xac) = 0;
  *(undefined1 *)(iVar3 + 0xad) = 1;
  puVar2 = DAT_004b066c;
  *(undefined1 *)(iVar3 + 0xae) = 0;
  *(undefined1 *)(iVar3 + 0xaf) = 0;
  *(undefined1 *)(iVar3 + 0xb0) = 1;
  uVar11 = *puVar2;
  uVar12 = puVar2[1];
  *(int *)(iVar3 + 0xb8) = iVar8;
  uVar5 = DAT_004b0670;
  *(undefined4 *)(iVar3 + 0xbc) = uVar11;
  *(undefined4 *)(iVar3 + 0xc0) = uVar12;
  *(undefined4 *)(iVar3 + 0xb4) = uVar5;
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  *(int *)(iVar3 + 200) = iVar8;
  *(undefined4 *)(iVar3 + 0xcc) = uVar11;
  *(undefined4 *)(iVar3 + 0xd0) = uVar12;
  *(int *)(iVar3 + -0x118) = iVar3 + 0xb4;
  *(undefined4 *)(iVar3 + 0xc4) = uVar5;
  objStack_88[0] = 1;
  objStack_88[1] = 0;
  objStack_88[2] = 0;
  uVar5 = func_0014E428(iVar8,1,0,0,1,0,0);
  *(undefined4 *)(iVar3 + -0x10) = uVar5;
  *(undefined4 *)(iVar3 + -0x8c) = uVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar2 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = func_0016A2FC(puVar6,1,DAT_004b0674,1);
  }
  *(undefined4 **)(iVar3 + -0xc) = puVar2;
  objStack_88[0] = DAT_004b0680;
  objStack_88[1] = (uint)s_color_004b0678;
  func_00169608(*(uint **)(iVar3 + -0xc),0,(int *)objStack_88,
                *(int *)(*(int *)(iVar3 + -0x234) + 0x1c8));
  func_0016A02C(*(int *)(iVar3 + -0xc),-1,(int *)0xffffffff,0);
  uStack_68 = (undefined4)uVar14;
  local_74 = &local_70;
  local_6c = (undefined4)((ulonglong)uVar14 >> 0x20);
  local_7c[1] = 3;
  local_28 = 10;
  local_24 = 0;
  local_7c[0] = 1;
  local_70 = 0;
  local_5c = (uint)(iVar3 + -0xc) | 0xff;
  uStack_64 = DAT_004b0684;
  uStack_60 = uStack_68;
  func_0016898C(*(int *)(iVar3 + -0xc),local_7c);
  fVar13 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
  fVar10 = fVar13;
  if (*(short *)(iVar3 + -0x4d6) == 0xf) {
    fVar10 = ALBW_AS_F32(uVar14);
  }
  iVar4 = *(int *)(*(int *)(iVar3 + -0xc) + 0x14);
  if (*(float *)(iVar4 + 8) != fVar10) {
    *(float *)(iVar4 + 8) = fVar10;
    *(undefined1 *)(iVar4 + 0x26) = 1;
  }
  *(float *)(*(int *)(*(int *)(iVar3 + -0xc) + 0x14) + 0x10) = fVar13;
  func_00168E9C(*(int **)(iVar3 + -0xc),*(int *)(iVar3 + -0x10),(int *)0x0);
  uVar11 = DAT_004b068c;
  uVar5 = DAT_004b0688;
  *(undefined4 *)(iVar3 + -0x20) = 0x13;
  *(undefined4 *)(iVar3 + -0x1c) = uVar5;
  *(undefined4 *)(iVar3 + -0x18) = uVar11;
  func_00151148(*(int *)(iVar3 + 100),0);
  func_004AF514(iVar8);
  fVar13 = *(float *)(iVar3 + 0x78);
  fVar10 = *(float *)(iVar3 + -0x130);
  iVar4 = *(int *)(iVar3 + -4);
  uVar5 = *(undefined4 *)(iVar3 + -300);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + -0x134);
  *(float *)(iVar4 + 8) = fVar10 + fVar13;
  *(undefined4 *)(iVar4 + 0xc) = uVar5;
  func_004356B4(*(int **)(iVar3 + -4));
  return iVar8;
}

