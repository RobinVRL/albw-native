#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F871C(int param_1,undefined4 param_2);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004FA890(int param_1);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern float func_004FAD90(int param_1);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_006568D8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001290c4;
extern int DAT_001290c8;
extern undefined4 DAT_001290cc;
extern undefined4 DAT_001290d0;
extern uint DAT_001290d4;
extern undefined4 *DAT_001290d8;
extern int DAT_001290dc;
extern undefined4 DAT_001290e0;
extern int DAT_001290e4;
extern undefined *DAT_001290e8;
extern int DAT_001290ec;
extern int DAT_00129100;
extern undefined4 DAT_0012942c;
extern undefined4 DAT_00129430;
extern undefined4 DAT_00129434;
extern undefined4 *DAT_00129438;
extern float DAT_0012943c;
extern float DAT_00129440;
extern undefined4 DAT_00129444;
extern char s_cState_AlwaysFly_0012940c[];
extern char s_cState_Attack_00129110[];
extern char s_cState_Descend_0012913c[];
extern char s_cState_Die_00129130[];
extern char s_cState_GoHome_001293fc[];
extern char s_cState_Hovering_001290f0[];
extern char s_cState_Reaction_00129120[];
extern char s_cState_Rest_00129420[];
extern char s_cState_Wait_00129104[];

// USA 00128CEC <- EU 00128CEC (Ghidra, non-matching)
// GLOBAL DAT_001290c4 uint *
// GLOBAL DAT_001290c8 int
// GLOBAL DAT_001290cc undefined4
// GLOBAL DAT_001290d0 undefined4
// GLOBAL DAT_001290d4 uint
// GLOBAL DAT_001290d8 undefined4 *
// GLOBAL DAT_001290dc int
// GLOBAL DAT_001290e0 undefined4
// GLOBAL DAT_001290e4 int
// GLOBAL DAT_001290e8 undefined *
// GLOBAL DAT_001290ec int
// GLOBAL DAT_00129100 int
// GLOBAL DAT_0012942c undefined4
// GLOBAL DAT_00129430 undefined4
// GLOBAL DAT_00129434 undefined4
// GLOBAL DAT_00129438 undefined4 *
// GLOBAL DAT_0012943c float
// GLOBAL DAT_00129440 float
// GLOBAL DAT_00129444 undefined4
// GLOBAL s_cState_AlwaysFly_0012940c string
// GLOBAL s_cState_Attack_00129110 string
// GLOBAL s_cState_Descend_0012913c string
// GLOBAL s_cState_Die_00129130 string
// GLOBAL s_cState_GoHome_001293fc string
// GLOBAL s_cState_Hovering_001290f0 string
// GLOBAL s_cState_Reaction_00129120 string
// GLOBAL s_cState_Rest_00129420 string
// GLOBAL s_cState_Wait_00129104 string

undefined4 * func_00128CEC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fparam_0;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float *pfVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_28 (*(uint * *)(albw_frame + 0x28))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar2 = func_004FD464(param_1,param_2,DAT_001290c4);
  iVar8 = DAT_001290c8;
  *piVar2 = DAT_001290c8;
  piVar2[200] = iVar8 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  uVar11 = DAT_001290cc;
  puVar3[8] = 0;
  uVar12 = DAT_001290d0;
  puVar3[10] = uVar11;
  puVar3[0xb] = uVar12;
  uVar14 = DAT_001290d4;
  uVar18 = (ulonglong)DAT_001290d4;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = uVar14;
  puVar6 = DAT_001290d8;
  puVar3[0xe] = 0;
  puVar4 = puVar3 + -0x22f;
  uVar12 = puVar6[1];
  uVar11 = puVar6[2];
  puVar3[0xf] = *puVar6;
  puVar3[0x10] = uVar12;
  iVar8 = DAT_001290dc;
  puVar3[0x11] = uVar11;
  puVar3[0x12] = uVar14;
  puVar3[0x13] = 0;
  *(undefined1 *)(puVar3 + 0x14) = 0;
  uVar11 = *(undefined4 *)(iVar8 + 8);
  uVar12 = *(undefined4 *)(iVar8 + 0xc);
  puVar3[0x16] = puVar4;
  puVar3[0x17] = uVar11;
  puVar3[0x18] = uVar12;
  puVar3[0x15] = DAT_001290e0;
  *(undefined1 *)(puVar3 + 0x19) = 1;
  puVar3[0x1a] = 0;
  *(undefined1 *)(puVar3 + 0x1b) = 0;
  func_004FB344((int)puVar4,5);
  iVar5 = DAT_001290e4;
  uVar14 = 0;
  do {
    func_004FACA4((int)puVar4,uVar14,(int *)(iVar5 + uVar14 * 8));
    uVar11 = (undefined4)uVar18;
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 5);
  func_004FB468((int)puVar4);
  puVar3[5] = puVar4;
  *(undefined1 *)((int)puVar3 + 6) = 9;
  iVar5 = func_0010BA78(0x90);
  puVar3[6] = iVar5;
  puVar3[7] = iVar5 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar9 = 9;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar8 + 0xac);
    iVar9 = iVar9 + -1;
    puVar6[2] = *(undefined4 *)(iVar8 + 0xa8);
    puVar6[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar8 + 0xac);
    puVar6[4] = *(undefined4 *)(iVar8 + 0xa8);
    puVar6[5] = uVar12;
    puVar6 = puVar6 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar14 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar3[8] = puVar6;
  if (uVar14 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar8 + 0x24);
      *puVar6 = *(undefined4 *)(iVar8 + 0x20);
      puVar6[1] = uVar12;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar14 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar12 = *(undefined4 *)(iVar8 + 0x24);
      puVar7[2] = *(undefined4 *)(iVar8 + 0x20);
      puVar7[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar8 + 0x24);
      puVar7[4] = *(undefined4 *)(iVar8 + 0x20);
      puVar7[5] = uVar12;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 9;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_001290e8,0x24,9);
  }
  if (iVar5 != 0) {
    puVar3[3] = iVar5;
    puVar3[2] = 9;
  }
  iVar5 = DAT_001290ec;
  puVar3[-0x15a] = puVar3;
  iVar9 = DAT_00129100;
  *(undefined2 *)(iVar5 + (int)puVar4) = 9;
  local_44 = s_cState_Hovering_001290f0;
  local_48 = iVar9;
  func_0010BEC4((int)puVar3,0,&local_48);
  puVar6 = (undefined4 *)puVar3[6];
  uVar12 = *(undefined4 *)(iVar8 + 0x18);
  uVar20 = *(undefined4 *)(iVar8 + 0x20);
  uVar16 = *(undefined4 *)(iVar8 + 0x1c);
  uVar19 = *(undefined4 *)(iVar8 + 0x24);
  uVar15 = *(undefined4 *)(iVar8 + 0x14);
  *puVar6 = *(undefined4 *)(iVar8 + 0x10);
  puVar6[1] = uVar15;
  puVar6 = (undefined4 *)puVar3[7];
  *puVar6 = uVar12;
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar3[8];
  *puVar6 = uVar20;
  puVar6[1] = uVar19;
  local_44 = s_cState_Wait_00129104;
  local_48 = iVar9;
  func_0010BEC4((int)puVar3,1,&local_48);
  iVar5 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar8 + 0x2c);
  uVar12 = *(undefined4 *)(iVar8 + 0x30);
  uVar15 = *(undefined4 *)(iVar8 + 0x34);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar8 + 0x28);
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 8) = uVar12;
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 8) = uVar20;
  *(undefined4 *)(iVar5 + 0xc) = uVar19;
  local_44 = s_cState_Attack_00129110;
  local_48 = iVar9;
  func_0010BEC4((int)puVar3,2,&local_48);
  iVar5 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar8 + 0x3c);
  uVar15 = *(undefined4 *)(iVar8 + 0x40);
  uVar16 = *(undefined4 *)(iVar8 + 0x44);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar8 + 0x38);
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar20;
  *(undefined4 *)(iVar5 + 0x14) = uVar19;
  local_44 = s_cState_Reaction_00129120;
  local_48 = iVar9;
  func_0010BEC4((int)puVar3,3,&local_48);
  iVar5 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar8 + 0x4c);
  uVar15 = *(undefined4 *)(iVar8 + 0x50);
  uVar16 = *(undefined4 *)(iVar8 + 0x54);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar8 + 0x48);
  *(undefined4 *)(iVar5 + 0x1c) = uVar12;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar15;
  *(undefined4 *)(iVar5 + 0x1c) = uVar16;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x18) = uVar20;
  *(undefined4 *)(iVar5 + 0x1c) = uVar19;
  local_44 = s_cState_Die_00129130;
  local_48 = iVar9;
  func_0010BEC4((int)puVar3,4,&local_48);
  iVar5 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar8 + 0x5c);
  uVar15 = *(undefined4 *)(iVar8 + 0x60);
  uVar16 = *(undefined4 *)(iVar8 + 100);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar8 + 0x58);
  *(undefined4 *)(iVar5 + 0x24) = uVar12;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar15;
  *(undefined4 *)(iVar5 + 0x24) = uVar16;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x20) = uVar20;
  *(undefined4 *)(iVar5 + 0x24) = uVar19;
  local_44 = s_cState_Descend_0012913c;
  local_48 = iVar9;
  func_0010BEC4((int)puVar3,5,&local_48);
  iVar5 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar8 + 0x6c);
  uVar15 = *(undefined4 *)(iVar8 + 0x70);
  uVar16 = *(undefined4 *)(iVar8 + 0x74);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar8 + 0x68);
  *(undefined4 *)(iVar5 + 0x2c) = uVar12;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar15;
  *(undefined4 *)(iVar5 + 0x2c) = uVar16;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x28) = uVar20;
  *(undefined4 *)(iVar5 + 0x2c) = uVar19;
  local_44 = s_cState_GoHome_001293fc;
  local_48 = iVar9;
  func_0010BEC4((int)puVar3,6,&local_48);
  iVar5 = puVar3[6];
  pfVar13 = *(float **)(iVar8 + 0x80);
  uVar12 = *(undefined4 *)(iVar8 + 0x84);
  uVar15 = *(undefined4 *)(iVar8 + 0x7c);
  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar8 + 0x78);
  *(undefined4 *)(iVar5 + 0x34) = uVar15;
  iVar5 = puVar3[7];
  *(float **)(iVar5 + 0x30) = pfVar13;
  *(undefined4 *)(iVar5 + 0x34) = uVar12;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x30) = uVar20;
  *(undefined4 *)(iVar5 + 0x34) = uVar19;
  local_44 = s_cState_AlwaysFly_0012940c;
  local_48 = iVar9;
  func_0010BEC4((int)puVar3,7,&local_48);
  iVar5 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar8 + 0x8c);
  uVar12 = *(undefined4 *)(iVar8 + 0x90);
  uVar16 = *(undefined4 *)(iVar8 + 0x94);
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(iVar8 + 0x88);
  *(undefined4 *)(iVar5 + 0x3c) = uVar15;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x38) = uVar12;
  *(undefined4 *)(iVar5 + 0x3c) = uVar16;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x38) = uVar20;
  *(undefined4 *)(iVar5 + 0x3c) = uVar19;
  local_44 = s_cState_Rest_00129420;
  local_48 = iVar9;
  func_0010BEC4((int)puVar3,8,&local_48);
  iVar5 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar8 + 0x9c);
  uVar15 = *(undefined4 *)(iVar8 + 0xa0);
  uVar16 = *(undefined4 *)(iVar8 + 0xa4);
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(iVar8 + 0x98);
  *(undefined4 *)(iVar5 + 0x44) = uVar12;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x40) = uVar15;
  *(undefined4 *)(iVar8 + 0x44) = uVar16;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 0x40) = uVar20;
  *(undefined4 *)(iVar8 + 0x44) = uVar19;
  uVar10 = *(ushort *)((int)local_28 + 0x2a);
  *(char *)(puVar3 + 0x14) = (char)uVar10;
  if ((uVar10 & 0xff) == 0) {
    func_006568D8(puVar3,1);
  }
  else if ((uVar10 & 0xff) == 1) {
    func_006568D8(puVar3,7);
  }
  func_004F5BD8((int)puVar4,(uint *)0x0,(int **)0x0,pfVar13);
  puVar3[-200] = puVar3[-200] | 0x8000;
  if (*(char *)(puVar3 + 1) == '\x01') {
    func_004F87F8((int)puVar4,1);
  }
  else {
    func_004F87F8((int)puVar4,2);
  }
  uVar10 = (ushort)DAT_0012942c;
  func_002B1440((int)puVar4,-1,uVar10,0);
  func_004FA890((int)puVar4);
  uVar15 = DAT_00129434;
  uVar12 = DAT_00129430;
  puVar3[-0x11b] = uVar11;
  puVar3[-0x143] = uVar12;
  puVar3[-0x142] = uVar15;
  if (*(char *)(puVar3 + 0x14) == '\0') {
    puVar3[-200] = puVar3[-200] & 0xfffffffb;
    func_004FD038((int)(puVar3 + -0xc5),0);
    puVar3[-200] = puVar3[-200] & 0xffffffdf;
    func_004FAD90((int)puVar4);
  }
  fVar17 = DAT_0012943c;
  func_004F8864((int)puVar4,DAT_00129438,0,DAT_0012943c);
  *(undefined1 *)((int)puVar3 + -0x13f) = 3;
  fparam_0 = DAT_00129440;
  *(undefined1 *)((int)puVar3 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x13d) = 0;
  func_004FBA18((int)puVar4,4,0xff,-1,-1,0,uVar10,fparam_0,fparam_0);
  func_004F871C((int)puVar4,puVar3 + 0x15);
  uVar11 = DAT_00129444;
  if (*(short *)((int)puVar3 + -0x886) != 0) {
    *(undefined1 *)(puVar3 + 0x19) = 0;
  }
  puVar3[-0x115] = ALBW_AS_U32(fVar17);
  puVar3[-0x114] = uVar11;
  puVar3[-0x11b] = ALBW_AS_U32(fVar17);
  puVar3[-0x11a] = uVar11;
  if (*(char *)(puVar3 + 1) == '\x01') {
    puVar3[-200] = puVar3[-200] & 0xffffffef;
  }
  return puVar4;
}

