#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00112388(void);
extern int func_00112D70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_00112EA0(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4);
extern undefined8 func_00112F38(int param_1,uint *param_2,uint param_3,int param_4);
extern int func_00112F68(int param_1,undefined1 param_2,int param_3);
extern int func_00112F74(int param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0011300C(int param_1,int param_2,int param_3);
extern int func_0011307C(int *param_1,int param_2);
extern int func_001130F4(undefined4 *param_1,int param_2);
extern int func_001132C0(int param_1,undefined4 param_2);
extern int func_001132CC(int param_1,int param_2,int param_3);
extern int func_001132E8(undefined4 param_1,undefined4 *param_2,int *param_3);
extern int func_00113388(int param_1,uint *param_2);
extern int func_001139F8(int param_1);
extern int func_00113A34(int param_1);
extern undefined4 *DAT_00112d24;
extern uint DAT_00112d28;

// USA 001124C8 <- EU 001124C8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_00112d24 undefined4 *
// GLOBAL DAT_00112d28 uint

int * func_001124C8(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,
                   undefined4 param_6,int param_7)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0xa40];
  #define auStack_a38 ((uint *)(albw_frame + 0x8))
  #define local_60 (*(undefined4 *)(albw_frame + 0x9e0))
  #define local_5c (*(undefined4 *)(albw_frame + 0x9e4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x9e8))
  #define local_54 (*(undefined4 *)(albw_frame + 0x9ec))
  #define local_50 (*(int *)(albw_frame + 0x9f0))
  #define local_48 (*(undefined4 *)(albw_frame + 0x9f8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x9fc))
  #define local_40 (*(undefined4 *)(albw_frame + 0xa00))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0xa04))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0xa08))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xa0c))
  puVar1 = (uint *)func_00112388();
  iVar2 = *(int *)(param_3 + 8);
  if (iVar2 == -1) {
    param_2[0x21] = param_6;
    param_2[0x22] = param_6;
  }
  else if (iVar2 == 0) {
    uVar10 = *puVar1;
    *puVar1 = puVar1[1];
    uVar10 = uVar10 ^ uVar10 << 0xb;
    puVar1[1] = puVar1[2];
    uVar13 = puVar1[3];
    puVar1[2] = uVar13;
    uVar10 = uVar10 ^ uVar10 >> 8 ^ uVar13 ^ uVar13 >> 0x13;
    puVar1[3] = uVar10;
    *(short *)(param_2 + 0x21) = (short)uVar10;
    *(short *)((int)param_2 + 0x86) = (short)(uVar10 >> 0x10);
    param_2[0x22] = uVar10;
  }
  else {
    *(short *)(param_2 + 0x21) = (short)iVar2;
    *(short *)((int)param_2 + 0x86) = (short)((uint)iVar2 >> 0x10);
    param_2[0x22] = iVar2;
  }
  if (param_7 == 0) {
    param_2[8] = *(undefined4 *)(param_1 + 0x490);
  }
  func_001130F4(param_2,param_3);
  if ((((int *)param_2[0x36])[1] & 0x400000U) == 0) {
    uVar3 = *(undefined4 *)(param_1 + *(int *)param_2[0x36] * 4 + 0x494);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x49c);
  }
  param_2[0x35] = uVar3;
  func_001132C0(param_2[7],*(undefined4 *)(param_3 + 400));
  uVar3 = func_001132CC(*(int *)(*(int *)(param_1 + 0xc) + param_4 * 4),param_5,
                        *(int *)(param_2[0x36] + 0x544));
  param_2[0x3b] = uVar3;
  func_0011307C(param_2 + 0x8f,*(int *)(param_1 + 8));
  iVar2 = param_5 * 0x3c + 0x38;
  if (*(char *)(param_3 + 0x180) != '\0') {
    func_00112F74((int)(param_2 + 0x8f),param_3 + 0x150,
                  *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_4 * 4) + 0x18) + iVar2)
                  + *(int *)(param_3 + 0x158) + 0xc,0);
  }
  piVar4 = (int *)param_2[0x36];
  if ((*piVar4 == 1) && ((piVar4[0x152] & 1U) != 0)) {
    uVar3 = func_001132CC(*(int *)(*(int *)(param_1 + 0xc) + param_4 * 4),param_5,piVar4[0x1ce]);
    param_2[0x3c] = uVar3;
    func_00112F74((int)(param_2 + 0x8f),(int)(piVar4 + 0x1c3),
                  *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_4 * 4) + 0x18) + iVar2)
                  + piVar4[0x1c5] + 8,1);
  }
  func_00113A34((int)param_2);
  param_2[0x3d] = 0;
  iVar2 = param_5 * 0x3c + 0x34;
  iVar12 = param_5 * 0x3c + 0x30;
  if (*(int *)(param_2[0x36] + 0x324) == 1) {
    uVar13 = *(uint *)(param_2[0x36] + 0x14c);
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_4 * 4) + 0x18);
    uVar10 = *(uint *)(iVar5 + iVar2);
    iVar5 = *(int *)(iVar5 + iVar12);
    if (uVar10 != 0) {
      uVar6 = uVar10 & 1;
      uVar9 = 0;
      if (uVar6 != 0) {
        do {
          iVar11 = *(int *)(iVar5 + uVar9 * 4);
          if ((iVar11 != 0) && (uVar13 == uVar9)) goto LAB_00112770;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
      }
      for (; uVar6 < uVar10; uVar6 = uVar6 + 2) {
        iVar11 = *(int *)(iVar5 + uVar6 * 4);
        if ((iVar11 != 0) && (uVar13 == uVar6)) goto LAB_00112770;
        if ((*(int *)(iVar5 + uVar6 * 4 + 4) != 0) && (uVar13 == uVar6 + 1)) {
          iVar11 = *(int *)(iVar5 + uVar6 * 4 + 4);
          goto LAB_00112770;
        }
      }
    }
    iVar11 = 0;
LAB_00112770:
    param_2[0x3d] = iVar11;
    func_00112F68((int)(param_2 + 0x8f),1,0);
    iVar5 = 0;
    if (param_2[0x3d] != 0) {
      iVar5 = param_2[0x3b];
    }
    if (param_2[0x3d] != 0 && iVar5 != 0) {
      local_60 = 0x1010100;
      iVar11 = param_2[0x3d];
      local_54 = 0x100;
      local_50 = 0;
      iVar5 = *(int *)(iVar11 + 0x58);
      if (iVar5 != 0) {
        iVar5 = func_001139F8(iVar5);
        func_00112D70((undefined4 *)(iVar11 + 0x68),(int)&local_54,iVar5,0xb);
      }
      iVar5 = param_2[0x3d];
      local_50 = 0;
      local_54 = 0x2020100;
      if (*(int *)(iVar5 + 0x5c) == 0) {
        local_40 = *DAT_00112d24;
        uStack_3c = DAT_00112d24[1];
        uStack_38 = DAT_00112d24[2];
        uStack_34 = DAT_00112d24[3];
        func_00112EA0((undefined4 *)(iVar5 + 0x68),(int)&local_54,4,&local_40);
      }
      else {
        iVar11 = func_001139F8(*(int *)(iVar5 + 0x5c));
        func_00112D70((undefined4 *)(iVar5 + 0x68),(int)&local_54,iVar11,0xf);
      }
      iVar11 = param_2[0x3d];
      local_54 = local_60;
      local_50 = 0;
      iVar5 = *(int *)(iVar11 + 0x60);
      if (iVar5 != 0) {
        iVar5 = func_001139F8(iVar5);
        func_00112D70((undefined4 *)(iVar11 + 0x68),(int)&local_54,iVar5,7);
      }
      iVar5 = param_2[0x3d];
      if (*(int *)(iVar5 + 0x804) != 0) {
        iVar11 = func_001139F8(*(int *)(iVar5 + 0x804));
        *(int *)(iVar5 + 0x7f8) = iVar11;
        *(undefined1 *)(iVar5 + 0x800) = 0;
        *(undefined4 *)(iVar5 + 0x7fc) = *(undefined4 *)(iVar5 + 4);
      }
      func_00110490(auStack_a38,DAT_00112d28);
      iVar11 = param_2[0x3d];
      piVar4 = (int *)(iVar11 + 0x68);
      iVar5 = *piVar4;
      if (iVar5 == 0) {
        iVar5 = func_00113388((int)piVar4,(uint *)(iVar11 + 0x6c));
        iVar5 = (iVar5 - (int)piVar4) + -4 >> 2;
        *piVar4 = iVar5;
      }
      local_50 = iVar5;
      func_00110D44(auStack_a38,(byte *)(iVar11 + 0x6c),iVar5 << 2);
      puVar7 = func_001132E8(param_2[0x3d] + 0x68,auStack_a38 + local_50,
                             (int *)(param_2[0x3d] + 0x7f8));
      uVar10 = (int)puVar7 - (int)auStack_a38 >> 2;
      func_0011300C((int)(param_2 + 0x8f),uVar10,0);
      func_00112F38((int)(param_2 + 0x8f),auStack_a38,uVar10,0);
    }
  }
  param_2[0x3e] = 0;
  piVar8 = (int *)param_2[0x36];
  piVar4 = piVar8;
  if (((*piVar8 == 1) && ((piVar8[0x152] & 1U) != 0)) &&
     (piVar4 = piVar8 + 0x158, piVar8[0x168] == 1)) {
    uVar13 = piVar8[0x165];
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + param_4 * 4) + 0x18);
    uVar10 = *(uint *)(iVar5 + iVar2);
    iVar2 = *(int *)(iVar5 + iVar12);
    if (uVar10 != 0) {
      uVar6 = uVar10 & 1;
      uVar9 = 0;
      if (uVar6 != 0) {
        do {
          iVar12 = *(int *)(iVar2 + uVar9 * 4);
          if ((iVar12 != 0) && (uVar13 == uVar9)) goto LAB_00112ac8;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
      }
      for (; uVar6 < uVar10; uVar6 = uVar6 + 2) {
        iVar12 = *(int *)(iVar2 + uVar6 * 4);
        if ((iVar12 != 0) && (uVar13 == uVar6)) goto LAB_00112ac8;
        if ((*(int *)(iVar2 + uVar6 * 4 + 4) != 0) && (uVar13 == uVar6 + 1)) {
          iVar12 = *(int *)(iVar2 + uVar6 * 4 + 4);
          goto LAB_00112ac8;
        }
      }
    }
    iVar12 = 0;
LAB_00112ac8:
    param_2[0x3e] = iVar12;
    func_00112F68((int)(param_2 + 0x8f),1,1);
    piVar4 = (int *)0x0;
    if (param_2[0x3e] != 0) {
      piVar4 = (int *)param_2[0x3c];
    }
    if (param_2[0x3e] != 0 && piVar4 != (int *)0x0) {
      iVar12 = param_2[0x3e];
      local_54 = 0x100;
      local_50 = 0;
      iVar2 = *(int *)(iVar12 + 0x58);
      if (iVar2 != 0) {
        iVar2 = func_001139F8(iVar2);
        func_00112D70((undefined4 *)(iVar12 + 0x68),(int)&local_54,iVar2,0xb);
      }
      iVar2 = param_2[0x3e];
      local_54 = 0x2020100;
      local_50 = 0;
      if (*(int *)(iVar2 + 0x5c) == 0) {
        local_48 = *DAT_00112d24;
        uStack_44 = DAT_00112d24[1];
        local_40 = DAT_00112d24[2];
        uStack_3c = DAT_00112d24[3];
        func_00112EA0((undefined4 *)(iVar2 + 0x68),(int)&local_54,4,&local_48);
      }
      else {
        iVar12 = func_001139F8(*(int *)(iVar2 + 0x5c));
        func_00112D70((undefined4 *)(iVar2 + 0x68),(int)&local_54,iVar12,0xf);
      }
      iVar12 = param_2[0x3e];
      local_5c = 0x1010100;
      uStack_58 = 0;
      iVar2 = *(int *)(iVar12 + 0x60);
      if (iVar2 != 0) {
        iVar2 = func_001139F8(iVar2);
        func_00112D70((undefined4 *)(iVar12 + 0x68),(int)&local_5c,iVar2,7);
      }
      iVar2 = param_2[0x3e];
      if (*(int *)(iVar2 + 0x804) != 0) {
        iVar12 = func_001139F8(*(int *)(iVar2 + 0x804));
        *(int *)(iVar2 + 0x7f8) = iVar12;
        *(undefined1 *)(iVar2 + 0x800) = 0;
        *(undefined4 *)(iVar2 + 0x7fc) = *(undefined4 *)(iVar2 + 4);
      }
      func_00110490(auStack_a38,DAT_00112d28);
      iVar12 = param_2[0x3e];
      piVar4 = (int *)(iVar12 + 0x68);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        iVar2 = func_00113388((int)piVar4,(uint *)(iVar12 + 0x6c));
        iVar2 = (iVar2 - (int)piVar4) + -4 >> 2;
        *piVar4 = iVar2;
      }
      func_00110D44(auStack_a38,(byte *)(iVar12 + 0x6c),iVar2 << 2);
      puVar7 = func_001132E8(param_2[0x3e] + 0x68,auStack_a38 + iVar2,(int *)(param_2[0x3e] + 0x7f8)
                            );
      uVar10 = (int)puVar7 - (int)auStack_a38 >> 2;
      func_0011300C((int)(param_2 + 0x8f),uVar10,1);
      uVar14 = func_00112F38((int)(param_2 + 0x8f),auStack_a38,uVar10,1);
      piVar4 = (int *)uVar14;
    }
  }
  return piVar4;
}

