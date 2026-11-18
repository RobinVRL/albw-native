#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern undefined4 DAT_002da7ec;
extern int *DAT_002da7f0;
extern uint *DAT_002da7f4;
extern undefined4 DAT_002da7f8;
extern undefined4 DAT_002da7fc;
extern undefined4 *DAT_002da800;
extern float DAT_002da818;
extern int *DAT_002da81c;
extern float DAT_002da820;
extern char s_SE_PL_OPEN_DOOR_NG_002da804[];

// USA 002DA530 <- EU 002DA50C (Ghidra, non-matching)
// GLOBAL DAT_002da7ec undefined4
// GLOBAL DAT_002da7f0 int *
// GLOBAL DAT_002da7f4 uint *
// GLOBAL DAT_002da7f8 undefined4
// GLOBAL DAT_002da7fc undefined4
// GLOBAL DAT_002da800 undefined4 *
// GLOBAL DAT_002da818 float
// GLOBAL DAT_002da81c int *
// GLOBAL DAT_002da820 float
// GLOBAL s_SE_PL_OPEN_DOOR_NG_002da804 string

void func_002DA530(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define fStack_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(char * *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  uVar5 = DAT_002da7fc;
  puVar4 = DAT_002da7f4;
  piVar3 = DAT_002da7f0;
  uVar2 = DAT_002da7ec;
  puVar6 = *(undefined4 **)(param_1 + 0x34);
  uVar10 = CONCAT44(DAT_002da7f8,DAT_002da7ec);
  *puVar6 = DAT_002da7ec;
  puVar6[2] = uVar2;
  fVar9 = DAT_002da818;
  sVar1 = *(short *)(param_2 + 2);
  if (sVar1 == 0x78) {
    uVar8 = *(uint *)(param_2 + 8);
    *(uint *)(param_1 + 0x70) = uVar8;
    puVar6 = (undefined4 *)func_0052FBA0(*piVar3 + 0x3dbbc,uVar8);
    if (((*puVar4 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002da7f4), iVar7 != 0)) {
      *DAT_002da800 = uVar5;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar7 = (**(code **)*puVar6)(puVar6,DAT_002da800), iVar7 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      *(int *)(param_1 + 0x78) = puVar6[0xfa] + -0x80000000;
      func_004D80A4(&fStack_44,puVar6[0xfa],ALBW_AS_F32(((ulonglong)uVar10 >> 0x20)));
      local_40 = ALBW_AS_F32(uVar10);
      func_00115C54(&local_38,(float *)(puVar6 + 0xf4),&fStack_44);
      *(float *)(param_1 + 0x88) = local_38;
      *(char **)(param_1 + 0x8c) = local_34;
      *(float *)(param_1 + 0x90) = local_30;
    }
  }
  else if (sVar1 == 0x79) {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 8);
    local_34 = s_SE_PL_OPEN_DOOR_NG_002da804;
    local_38 = fVar9;
    func_00587F74(*DAT_002da81c,(int *)&local_38,0);
    puVar6 = (undefined4 *)func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0x70));
    if (((*puVar4 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002da7f4), iVar7 != 0)) {
      *DAT_002da800 = uVar5;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar7 = (**(code **)*puVar6)(puVar6,DAT_002da800), iVar7 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      *(int *)(param_1 + 0x78) = puVar6[0xfa] + -0x80000000;
      func_004D80A4(&fStack_44,puVar6[0xfa],ALBW_AS_F32(((ulonglong)uVar10 >> 0x20)));
      local_40 = ALBW_AS_F32(uVar10);
      func_00115C54(&local_30,(float *)(puVar6 + 0xf4),&fStack_44);
      *(float *)(param_1 + 0x88) = local_30;
      *(undefined4 *)(param_1 + 0x8c) = uStack_2c;
      *(undefined4 *)(param_1 + 0x90) = uStack_28;
      return;
    }
  }
  else if (sVar1 == 0x7a) {
    puVar6 = (undefined4 *)func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0x70));
    fVar9 = ALBW_AS_F32(uVar10);
    if (((*puVar4 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002da7f4), iVar7 != 0)) {
      *DAT_002da800 = uVar5;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar7 = (**(code **)*puVar6)(puVar6,DAT_002da800), iVar7 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      func_004D80A4((float *)&local_34,puVar6[0xfa] + 0x80000000,DAT_002da820);
      local_30 = fVar9;
      func_00115C54(&local_40,(float *)(puVar6 + 0xf4),(float *)&local_34);
      *(float *)(param_1 + 0x7c) = local_40;
      *(undefined4 *)(param_1 + 0x80) = uStack_3c;
      *(float *)(param_1 + 0x84) = local_38;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(int *)(param_1 + 0x78) = puVar6[0xfa] + -0x80000000;
      *(undefined4 *)(param_1 + 0x98) = 0;
      return;
    }
  }
  return;
}

