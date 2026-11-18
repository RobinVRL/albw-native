#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BD474(int param_1);
extern float func_004BDB2C(undefined4 param_1,int param_2,float fparam_0);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_0061B210(int param_1,int param_2,undefined1 param_3);
extern int func_0061BE94(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_00244844;
extern undefined DAT_00244848;
extern int DAT_00244854;
extern undefined4 DAT_00244858;
extern undefined4 *DAT_0024485c;
extern undefined *DAT_00244860;
extern int DAT_00244864;
extern undefined4 *DAT_002448ac;
extern float DAT_002448fc;
extern char s_cState_EventEnd_00244890[];
extern char s_cState_Event_00244880[];
extern char s_cState_Hide_002448a0[];
extern char s_cState_Wait_00244868[];
extern char s_cState_Walk_00244874[];

// USA 002444CC <- EU 002444CC (Ghidra, non-matching)
// GLOBAL DAT_00244844 int
// GLOBAL DAT_00244848 undefined
// GLOBAL DAT_00244854 int
// GLOBAL DAT_00244858 undefined4
// GLOBAL DAT_0024485c undefined4 *
// GLOBAL DAT_00244860 undefined *
// GLOBAL DAT_00244864 int
// GLOBAL DAT_002448ac undefined4 *
// GLOBAL DAT_002448fc float
// GLOBAL s_cState_EventEnd_00244890 string
// GLOBAL s_cState_Event_00244880 string
// GLOBAL s_cState_Hide_002448a0 string
// GLOBAL s_cState_Wait_00244868 string
// GLOBAL s_cState_Walk_00244874 string

int * func_002444CC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_33 (*(undefined1 *)(albw_frame + 0x1d))
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  local_33 = 1;
  piVar3 = (int *)func_0061BE94(param_1,param_2,0,0xff,&local_40);
  iVar11 = DAT_00244844;
  piVar3[200] = DAT_00244844 + 0xb8;
  *piVar3 = iVar11;
  *(undefined1 *)((int)piVar3 + 0x989) = 0;
  iVar11 = DAT_00244854;
  *(char *)((int)piVar3 + 0x989) = (char)*(undefined2 *)((int)piVar3 + 0x32);
  local_44 = &DAT_00244848;
  local_48 = iVar11;
  func_004BE114(piVar3,4,0,0,DAT_00244858);
  *(undefined1 *)((int)piVar3 + 0x966) = 5;
  piVar3[0x25d] = (int)piVar3;
  iVar4 = func_0010BA78(0x50);
  piVar3[0x25e] = iVar4;
  puVar2 = DAT_0024485c;
  piVar3[0x25f] = iVar4 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  iVar7 = 5;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar13 = puVar2[0x1b];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[0x1a];
    puVar5[3] = uVar13;
    uVar13 = puVar2[0x1b];
    puVar5[4] = puVar2[0x1a];
    puVar5[5] = uVar13;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar12 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar12 << 3);
  piVar3[0x260] = (int)puVar5;
  if (uVar12 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar13;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar12 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar13 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar13;
      uVar13 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar13;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 5;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_00244860,0x24,5);
  }
  if (iVar4 != 0) {
    piVar3[0x25a] = 5;
    piVar3[0x25b] = iVar4;
  }
  iVar4 = DAT_00244864;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar4 + (int)piVar3) = 5;
  local_44 = s_cState_Wait_00244868;
  local_48 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),0,&local_48);
  puVar5 = (undefined4 *)piVar3[0x25e];
  uVar9 = puVar2[1];
  uVar13 = puVar2[2];
  uVar8 = puVar2[3];
  uVar15 = *(undefined8 *)(puVar2 + 4);
  *puVar5 = *puVar2;
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)piVar3[0x25f];
  *puVar5 = uVar13;
  puVar5[1] = uVar8;
  puVar5 = (undefined4 *)piVar3[0x260];
  *puVar5 = (int)uVar15;
  puVar5[1] = (int)((ulonglong)uVar15 >> 0x20);
  local_44 = s_cState_Walk_00244874;
  local_48 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),1,&local_48);
  iVar4 = piVar3[0x25e];
  uVar13 = puVar2[7];
  uVar8 = puVar2[8];
  uVar9 = puVar2[9];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 8) = uVar8;
  *(undefined4 *)(iVar4 + 0xc) = uVar9;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 8) = (int)uVar15;
  *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
  local_44 = s_cState_Event_00244880;
  local_48 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),2,&local_48);
  iVar4 = piVar3[0x25e];
  uVar13 = puVar2[0xc];
  uVar9 = puVar2[0xd];
  uVar8 = puVar2[0xb];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar4 + 0x14) = uVar8;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x10) = uVar13;
  *(undefined4 *)(iVar4 + 0x14) = uVar9;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 0x10) = (int)uVar15;
  *(int *)(iVar4 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
  local_44 = s_cState_EventEnd_00244890;
  local_48 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),3,&local_48);
  iVar4 = piVar3[0x25e];
  uVar13 = puVar2[0x10];
  uVar10 = puVar2[0x11];
  uVar14 = puVar2[0x12];
  uVar8 = puVar2[0x13];
  uVar9 = puVar2[0xf];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x1c) = uVar9;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x18) = uVar13;
  *(undefined4 *)(iVar4 + 0x1c) = uVar10;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x18) = uVar14;
  *(undefined4 *)(iVar4 + 0x1c) = uVar8;
  local_44 = s_cState_Hide_002448a0;
  local_48 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),4,&local_48);
  iVar11 = piVar3[0x25e];
  uVar13 = puVar2[0x16];
  uVar9 = puVar2[0x17];
  uVar8 = puVar2[0x18];
  uVar14 = puVar2[0x19];
  uVar10 = puVar2[0x15];
  *(undefined4 *)(iVar11 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar11 + 0x24) = uVar10;
  iVar11 = piVar3[0x25f];
  *(undefined4 *)(iVar11 + 0x20) = uVar13;
  *(undefined4 *)(iVar11 + 0x24) = uVar9;
  iVar11 = piVar3[0x260];
  *(undefined4 *)(iVar11 + 0x20) = uVar8;
  *(undefined4 *)(iVar11 + 0x24) = uVar14;
  if (*(char *)((int)piVar3 + 0x989) == '\n') {
    func_004BD474((int)piVar3);
    func_0061B210((int)piVar3,0,0);
    piVar3[0x261] = 0;
  }
  else {
    func_0061B210((int)piVar3,piVar3[0x261],0);
  }
  func_004C03B8((int)piVar3,DAT_002448ac);
  if (*(char *)((int)piVar3 + 0x989) == '\n') {
    func_004BDB2C(piVar3,piVar3[0x103],DAT_002448fc);
  }
  func_004BC8D8((int)piVar3);
  return piVar3;
}

