#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004356B4(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern uint *DAT_0020d9b4;
extern float DAT_0020d9b8;
extern undefined4 DAT_0020d9bc;
extern undefined4 *DAT_0020d9c0;
extern float DAT_0020d9c4;
extern float DAT_0020d9c8;
extern float DAT_0020d9cc;
extern float DAT_0020d9d0;
extern int DAT_0020d9d4;
extern int DAT_0020db68;

// USA 0020D698 <- EU 0020D698 (Ghidra, non-matching)
// GLOBAL DAT_0020d9b4 uint *
// GLOBAL DAT_0020d9b8 float
// GLOBAL DAT_0020d9bc undefined4
// GLOBAL DAT_0020d9c0 undefined4 *
// GLOBAL DAT_0020d9c4 float
// GLOBAL DAT_0020d9c8 float
// GLOBAL DAT_0020d9cc float
// GLOBAL DAT_0020d9d0 float
// GLOBAL DAT_0020d9d4 int
// GLOBAL DAT_0020db68 int

undefined4 func_0020D698(int param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define iStack_a0 (*(int *)(albw_frame + 0x10))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(int *)(albw_frame + 0x20))
  #define local_8c (*(float *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(int *)(albw_frame + 0x2c))
  #define local_7c (*(float *)(albw_frame + 0x34))
  #define iStack_78 (*(int *)(albw_frame + 0x38))
  #define iStack_74 (*(int *)(albw_frame + 0x3c))
  #define auStack_68 ((undefined4 *)(albw_frame + 0x48))
  #define local_5c (*(float *)(albw_frame + 0x54))
  #define local_3c (*(int *)(albw_frame + 0x74))
  #define local_38 (*(float *)(albw_frame + 0x78))
  #define iStack_34 (*(int *)(albw_frame + 0x7c))
  #define iStack_30 (*(int *)(albw_frame + 0x80))
  int iVar13;
  
  uVar3 = DAT_0020d9bc;
  puVar2 = DAT_0020d9b4;
  piVar7 = *(int **)(param_1 + 0x434);
  if (*(char *)(param_1 + 0xba5) == '\0') {
    fVar9 = DAT_0020d9b8;
    if (((*DAT_0020d9b4 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0020d9b4), iVar4 != 0)) {
      *DAT_0020d9c0 = uVar3;
    }
    if ((piVar7 == (int *)0x0) || (iVar4 = (**(code **)*piVar7)(piVar7,DAT_0020d9c0), iVar4 == 0)) {
      piVar7 = (int *)0x0;
    }
    if (piVar7 != (int *)0x0) {
      iVar11 = *(int *)(param_1 + 0x3d0);
      fVar8 = *(float *)(param_1 + 0x3d4);
      iVar13 = *(int *)(param_1 + 0x3d8);
      uVar12 = CONCAT44(iVar13,iVar11);
      piVar7[7] = piVar7[1];
      piVar7[8] = piVar7[2];
      piVar7[9] = piVar7[3];
      iVar4 = DAT_0020db68;
      fVar8 = fVar8 - fVar9;
      uVar10 = CONCAT44(DAT_0020db68,fVar8);
      piVar7[4] = piVar7[1];
      piVar7[5] = piVar7[2];
      piVar7[6] = piVar7[3];
      iVar5 = *(int *)(param_1 + 0x3d4);
      iVar6 = *(int *)(param_1 + 0x3d8);
      piVar7[1] = *(int *)(param_1 + 0x3d0);
      piVar7[2] = iVar5;
      piVar7[3] = iVar6;
      iVar5 = *(int *)(param_1 + 0x3d4);
      iVar6 = *(int *)(param_1 + 0x3d8);
      piVar7[0x16] = *(int *)(param_1 + 0x3d0);
      piVar7[0x17] = iVar5;
      piVar7[0x18] = iVar6;
      piVar7[0x19] = iVar11;
      piVar7[0x1a] = (int)ALBW_AS_U32(fVar8);
      piVar7[0x1b] = iVar13;
      piVar7[0x1c] = iVar4;
      func_004356B4(piVar7);
      piVar7 = *(int **)(param_1 + 0x42c);
      if (((*puVar2 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0020d9b4), iVar4 != 0)) {
        *DAT_0020d9c0 = uVar3;
      }
      if ((piVar7 == (int *)0x0) || (iVar4 = (**(code **)*piVar7)(piVar7,DAT_0020d9c0), iVar4 == 0))
      {
        piVar7 = (int *)0x0;
      }
      if (piVar7 != (int *)0x0) {
        piVar7[7] = piVar7[1];
        piVar7[8] = piVar7[2];
        piVar7[9] = piVar7[3];
        piVar7[4] = piVar7[1];
        piVar7[5] = piVar7[2];
        piVar7[6] = piVar7[3];
        iVar4 = *(int *)(param_1 + 0x3d4);
        iVar5 = *(int *)(param_1 + 0x3d8);
        piVar7[1] = *(int *)(param_1 + 0x3d0);
        piVar7[2] = iVar4;
        piVar7[3] = iVar5;
        iVar4 = *(int *)(param_1 + 0x3d4);
        iVar5 = *(int *)(param_1 + 0x3d8);
        piVar7[0x16] = *(int *)(param_1 + 0x3d0);
        piVar7[0x17] = iVar4;
        piVar7[0x18] = iVar5;
        piVar7[0x19] = (int)uVar12;
        piVar7[0x1a] = (int)uVar10;
        piVar7[0x1b] = (int)((ulonglong)uVar12 >> 0x20);
        piVar7[0x1c] = (int)((ulonglong)uVar10 >> 0x20);
        return func_004356B4(piVar7);
      }
    }
  }
  else {
    fVar9 = DAT_0020d9b8;
    if (((*DAT_0020d9b4 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0020d9b4), iVar4 != 0)) {
      *DAT_0020d9c0 = uVar3;
    }
    if ((piVar7 == (int *)0x0) || (iVar4 = (**(code **)*piVar7)(piVar7,DAT_0020d9c0), iVar4 == 0)) {
      piVar7 = (int *)0x0;
    }
    if (piVar7 != (int *)0x0) {
      local_8c = *(float *)(param_1 + 0x9b4);
      local_84 = *(int *)(param_1 + 0x9bc);
      local_88 = *(float *)(param_1 + 0x9b8) + DAT_0020d9c4;
      func_001119F4(auStack_68,
                    (undefined4 *)
                    (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                    *(int *)(param_1 + 0x9cc) * 0x30));
      local_98 = local_5c;
      local_90 = local_3c;
      local_94 = local_88;
      func_00115C70(&local_38,&local_98,&local_8c);
      local_a8 = local_38;
      local_a4 = ALBW_AS_F32(iStack_34);
      iStack_a0 = iStack_30;
      cVar1 = *(char *)(param_1 + 0x8c0);
      if (((cVar1 == '(' || cVar1 == ')') || cVar1 == '*') ||
         (*(float *)(param_1 + 0xc94) != DAT_0020d9c8)) {
        local_a4 = DAT_0020d9c8;
        func_00115DC8(&local_a8);
        func_00115D70(&local_a8,&local_a8,fVar9);
        func_00115C54(&local_98,&local_98,&local_a8);
      }
      else {
        fVar8 = DAT_0020d9c8;
        func_004D80A4(&local_a8,*(uint *)(param_1 + 1000),fVar9);
        local_a4 = fVar8;
        func_00115DC8(&local_a8);
        func_00115D70(&local_a8,&local_a8,fVar9);
        func_00115C54(&local_98,&local_98,&local_a8);
        local_8c = local_98;
        local_88 = local_94 + DAT_0020d9cc;
        local_84 = local_90;
      }
      func_00115C54(&local_38,&local_98,&local_8c);
      local_7c = local_38;
      iStack_78 = iStack_34;
      iStack_74 = iStack_30;
      func_00115D70(&local_7c,&local_7c,DAT_0020d9d0);
      iVar4 = DAT_0020d9d4;
      piVar7[7] = piVar7[1];
      piVar7[8] = piVar7[2];
      piVar7[9] = piVar7[3];
      piVar7[4] = piVar7[1];
      piVar7[5] = piVar7[2];
      piVar7[6] = piVar7[3];
      piVar7[1] = (int)ALBW_AS_U32(local_7c);
      piVar7[2] = iStack_78;
      piVar7[3] = iStack_74;
      piVar7[0x16] = (int)ALBW_AS_U32(local_98);
      piVar7[0x18] = local_90;
      piVar7[0x19] = (int)ALBW_AS_U32(local_8c);
      piVar7[0x1a] = (int)ALBW_AS_U32(local_88);
      piVar7[0x1b] = local_84;
      piVar7[0x17] = (int)ALBW_AS_U32(local_94);
      piVar7[0x1c] = iVar4;
      func_004356B4(piVar7);
      piVar7 = *(int **)(param_1 + 0x42c);
      if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0020d9b4), iVar5 != 0)) {
        *DAT_0020d9c0 = uVar3;
      }
      if ((piVar7 == (int *)0x0) || (iVar5 = (**(code **)*piVar7)(piVar7,DAT_0020d9c0), iVar5 == 0))
      {
        piVar7 = (int *)0x0;
      }
      if (piVar7 != (int *)0x0) {
        piVar7[7] = piVar7[1];
        piVar7[8] = piVar7[2];
        piVar7[9] = piVar7[3];
        piVar7[4] = piVar7[1];
        piVar7[5] = piVar7[2];
        piVar7[6] = piVar7[3];
        piVar7[1] = (int)ALBW_AS_U32(local_7c);
        piVar7[2] = iStack_78;
        piVar7[3] = iStack_74;
        piVar7[0x16] = (int)ALBW_AS_U32(local_98);
        piVar7[0x17] = (int)ALBW_AS_U32(local_94);
        piVar7[0x18] = local_90;
        piVar7[0x19] = (int)ALBW_AS_U32(local_8c);
        piVar7[0x1a] = (int)ALBW_AS_U32(local_88);
        piVar7[0x1b] = local_84;
        piVar7[0x1c] = iVar4;
        func_004356B4(piVar7);
      }
    }
  }
  return 0;
}

