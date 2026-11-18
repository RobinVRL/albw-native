// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F8774(int param_1,uint param_2,int param_3,uint param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005330BC(int param_1,int *param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_0058A7D4(void);
extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001b4098;
extern int DAT_001b409c;
extern undefined4 *DAT_001b40a0;
extern undefined4 DAT_001b40a4;
extern undefined4 DAT_001b40a8;
extern int DAT_001b40ac;
extern undefined4 DAT_001b40b0;
extern int DAT_001b40cc;
extern undefined DAT_001b40d0;
extern int DAT_001b40d8;
extern int DAT_001b40dc;
extern undefined4 *DAT_001b40e0;
extern undefined *DAT_001b40e4;
extern int DAT_001b40e8;
extern int *DAT_001b44c0;
extern int *DAT_001b44c4;
extern char s_Stalfos_001b40b4[];
extern char s_Stalfos_throw_001b40bc[];
extern char s_cState_BornAfter_001b40f8[];
extern char s_cState_Die_001b4498[];
extern char s_cState_EscapeLand_001b4440[];
extern char s_cState_Escape_001b4430[];
extern char s_cState_EventWait_001b4464[];
extern char s_cState_Event_001b4478[];
extern char s_cState_Fall_001b44b4[];
extern char s_cState_Reaction_001b4488[];
extern char s_cState_Run_001b4118[];
extern char s_cState_Throw_001b4454[];
extern char s_cState_Wait_001b40ec[];
extern char s_cState_WakeUp_001b44a4[];
extern char s_cState_Walk_001b410c[];

// USA 001B3C90 <- EU 001B3C90 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_001b4098 uint *
// GLOBAL DAT_001b409c int
// GLOBAL DAT_001b40a0 undefined4 *
// GLOBAL DAT_001b40a4 undefined4
// GLOBAL DAT_001b40a8 undefined4
// GLOBAL DAT_001b40ac int
// GLOBAL DAT_001b40b0 undefined4
// GLOBAL DAT_001b40cc int
// GLOBAL DAT_001b40d0 undefined
// GLOBAL DAT_001b40d8 int
// GLOBAL DAT_001b40dc int
// GLOBAL DAT_001b40e0 undefined4 *
// GLOBAL DAT_001b40e4 undefined *
// GLOBAL DAT_001b40e8 int
// GLOBAL DAT_001b44c0 int *
// GLOBAL DAT_001b44c4 int *
// GLOBAL s_Stalfos_001b40b4 string
// GLOBAL s_Stalfos_throw_001b40bc string
// GLOBAL s_cState_BornAfter_001b40f8 string
// GLOBAL s_cState_Die_001b4498 string
// GLOBAL s_cState_EscapeLand_001b4440 string
// GLOBAL s_cState_Escape_001b4430 string
// GLOBAL s_cState_EventWait_001b4464 string
// GLOBAL s_cState_Event_001b4478 string
// GLOBAL s_cState_Fall_001b44b4 string
// GLOBAL s_cState_Reaction_001b4488 string
// GLOBAL s_cState_Run_001b4118 string
// GLOBAL s_cState_Throw_001b4454 string
// GLOBAL s_cState_Wait_001b40ec string
// GLOBAL s_cState_WakeUp_001b44a4 string
// GLOBAL s_cState_Walk_001b410c string

undefined4 * func_001B3C90(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define pcStack_34 (*(char * *)(albw_frame + 0xc))
  piVar2 = func_004FD464(param_1,param_2,DAT_001b4098);
  iVar13 = DAT_001b409c;
  *piVar2 = DAT_001b409c;
  piVar2[200] = iVar13 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar9 = DAT_001b40a0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar4 = puVar9[1];
  uVar15 = puVar9[2];
  puVar14 = puVar3 + -0x22f;
  puVar3[9] = *puVar9;
  puVar3[10] = uVar4;
  puVar3[0xb] = uVar15;
  uVar4 = DAT_001b40a4;
  puVar3[0x11] = 0xffffffff;
  puVar3[0xf] = uVar4;
  puVar3[0x10] = puVar14;
  uVar4 = DAT_001b40a8;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  iVar13 = DAT_001b40ac;
  puVar3[0x14] = uVar4;
  *(undefined1 *)(puVar3 + 0x15) = 0;
  puVar3[0x16] = uVar4;
  *(undefined2 *)(puVar3 + 0x17) = 0;
  uVar4 = *(undefined4 *)(iVar13 + 0xc);
  puVar3[0x20] = *(undefined4 *)(iVar13 + 8);
  puVar3[0x21] = uVar4;
  puVar3[0x1e] = DAT_001b40b0;
  puVar3[0x1f] = puVar14;
  puVar3[0x22] = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x23) = 0;
  puVar5 = (uint *)func_0058A7D4();
  uVar6 = func_00111A64(puVar5);
  puVar3[-0x135] = uVar6;
  iVar16 = DAT_001b40cc;
  if (*(short *)((int)param_2 + 0x2a) == 0) {
    pcStack_34 = s_Stalfos_001b40b4;
  }
  else {
    pcStack_34 = s_Stalfos_throw_001b40bc;
  }
  iStack_38 = DAT_001b40cc;
  pfVar7 = (float *)func_005330BC(*(int *)(puVar3[-0x17b] + 0x1c8),&iStack_38);
  func_004F8774((int)puVar14,0,0,(uint)pfVar7);
  pcStack_34 = &DAT_001b40d0;
  iStack_38 = iVar16;
  uVar6 = func_00564A78(puVar3[-300],&iStack_38);
  puVar3[0x11] = uVar6;
  puVar5 = (uint *)(*(int *)(*(int *)(puVar3[-300] + 0x24) + 0xc) + uVar6 * 0x40);
  *puVar5 = *puVar5 | 0x10;
  *(undefined4 **)(puVar3[-300] + 0x16c) = puVar3 + 0xf;
  *(undefined4 **)(puVar3[-0x127] + 0x1c) = puVar3 + 0x1e;
  func_004FB344((int)puVar14,0xb);
  iVar12 = DAT_001b40d8;
  uVar6 = 0;
  do {
    func_004FACA4((int)puVar14,uVar6,(int *)(iVar12 + uVar6 * 8));
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0xb);
  func_004FB468((int)puVar14);
  func_004F5BD8((int)puVar14,(uint *)0x0,(int **)0x0,pfVar7);
  puVar3[5] = puVar14;
  *(undefined1 *)((int)puVar3 + 6) = 0xd;
  iVar8 = func_0010BA78(0xd0);
  iVar12 = DAT_001b40dc;
  puVar3[6] = iVar8;
  puVar3[7] = iVar8 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar11 = 0xd;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar4 = DAT_001b40e0[1];
    iVar11 = iVar11 + -1;
    puVar9[2] = *DAT_001b40e0;
    puVar9[3] = uVar4;
    uVar4 = *(undefined4 *)(iVar12 + 0x34);
    puVar9[4] = *(undefined4 *)(iVar12 + 0x30);
    puVar9[5] = uVar4;
    puVar9 = puVar9 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar6 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar6 << 3);
  puVar3[8] = puVar9;
  if (uVar6 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar4 = *(undefined4 *)(iVar13 + 0x24);
      *puVar9 = *(undefined4 *)(iVar13 + 0x20);
      puVar9[1] = uVar4;
      puVar10 = puVar9;
    }
    for (iVar12 = (int)uVar6 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
      uVar4 = *(undefined4 *)(iVar13 + 0x24);
      puVar10[2] = *(undefined4 *)(iVar13 + 0x20);
      puVar10[3] = uVar4;
      uVar4 = *(undefined4 *)(iVar13 + 0x24);
      puVar10[4] = *(undefined4 *)(iVar13 + 0x20);
      puVar10[5] = uVar4;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x1dc,(int *)0x0,4);
  iVar12 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 0xd;
    iVar12 = func_00100118((int)(puVar9 + 2),DAT_001b40e4,0x24,0xd);
  }
  if (iVar12 != 0) {
    puVar3[3] = iVar12;
    puVar3[2] = 0xd;
  }
  iVar12 = DAT_001b40e8;
  puVar3[-0x15a] = puVar3;
  *(undefined2 *)(iVar12 + (int)puVar14) = 0xd;
  pcStack_34 = s_cState_Wait_001b40ec;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,0,&iStack_38);
  puVar9 = (undefined4 *)puVar3[6];
  uVar4 = *(undefined4 *)(iVar13 + 0x18);
  uVar15 = *(undefined4 *)(iVar13 + 0x14);
  uVar17 = *(undefined4 *)(iVar13 + 0x1c);
  uVar18 = *(undefined8 *)(iVar13 + 0x20);
  *puVar9 = *(undefined4 *)(iVar13 + 0x10);
  puVar9[1] = uVar15;
  puVar9 = (undefined4 *)puVar3[7];
  *puVar9 = uVar4;
  puVar9[1] = uVar17;
  puVar9 = (undefined4 *)puVar3[8];
  *puVar9 = (int)uVar18;
  puVar9[1] = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_BornAfter_001b40f8;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,1,&iStack_38);
  iVar12 = puVar3[6];
  uVar17 = *(undefined4 *)(iVar13 + 0x2c);
  uVar4 = *(undefined4 *)(iVar13 + 0x30);
  uVar15 = *(undefined4 *)(iVar13 + 0x34);
  *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(iVar13 + 0x28);
  *(undefined4 *)(iVar12 + 0xc) = uVar17;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 8) = uVar4;
  *(undefined4 *)(iVar12 + 0xc) = uVar15;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 8) = (int)uVar18;
  *(int *)(iVar12 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Walk_001b410c;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,2,&iStack_38);
  iVar12 = puVar3[6];
  uVar4 = *(undefined4 *)(iVar13 + 0x3c);
  uVar15 = *(undefined4 *)(iVar13 + 0x40);
  uVar17 = *(undefined4 *)(iVar13 + 0x44);
  *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(iVar13 + 0x38);
  *(undefined4 *)(iVar12 + 0x14) = uVar4;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x10) = uVar15;
  *(undefined4 *)(iVar12 + 0x14) = uVar17;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x10) = (int)uVar18;
  *(int *)(iVar12 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Run_001b4118;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,3,&iStack_38);
  iVar12 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar13 + 0x4c);
  uVar17 = *(undefined4 *)(iVar13 + 0x50);
  uVar4 = *(undefined4 *)(iVar13 + 0x54);
  *(undefined4 *)(iVar12 + 0x18) = *(undefined4 *)(iVar13 + 0x48);
  *(undefined4 *)(iVar12 + 0x1c) = uVar15;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x18) = uVar17;
  *(undefined4 *)(iVar12 + 0x1c) = uVar4;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x18) = (int)uVar18;
  *(int *)(iVar12 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Escape_001b4430;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,4,&iStack_38);
  iVar12 = puVar3[6];
  uVar4 = *(undefined4 *)(iVar13 + 0x5c);
  uVar15 = *(undefined4 *)(iVar13 + 0x60);
  uVar17 = *(undefined4 *)(iVar13 + 100);
  *(undefined4 *)(iVar12 + 0x20) = *(undefined4 *)(iVar13 + 0x58);
  *(undefined4 *)(iVar12 + 0x24) = uVar4;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x20) = uVar15;
  *(undefined4 *)(iVar12 + 0x24) = uVar17;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x20) = (int)uVar18;
  *(int *)(iVar12 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_EscapeLand_001b4440;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,5,&iStack_38);
  iVar12 = puVar3[6];
  uVar4 = *(undefined4 *)(iVar13 + 0x6c);
  uVar15 = *(undefined4 *)(iVar13 + 0x70);
  uVar17 = *(undefined4 *)(iVar13 + 0x74);
  *(undefined4 *)(iVar12 + 0x28) = *(undefined4 *)(iVar13 + 0x68);
  *(undefined4 *)(iVar12 + 0x2c) = uVar4;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x28) = uVar15;
  *(undefined4 *)(iVar12 + 0x2c) = uVar17;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x28) = (int)uVar18;
  *(int *)(iVar12 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Throw_001b4454;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,6,&iStack_38);
  iVar12 = puVar3[6];
  uVar4 = *(undefined4 *)(iVar13 + 0x7c);
  uVar15 = *(undefined4 *)(iVar13 + 0x80);
  uVar17 = *(undefined4 *)(iVar13 + 0x84);
  *(undefined4 *)(iVar12 + 0x30) = *(undefined4 *)(iVar13 + 0x78);
  *(undefined4 *)(iVar12 + 0x34) = uVar4;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x30) = uVar15;
  *(undefined4 *)(iVar12 + 0x34) = uVar17;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x30) = (int)uVar18;
  *(int *)(iVar12 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_EventWait_001b4464;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,7,&iStack_38);
  iVar12 = puVar3[6];
  uVar4 = *(undefined4 *)(iVar13 + 0x8c);
  uVar15 = *(undefined4 *)(iVar13 + 0x90);
  uVar17 = *(undefined4 *)(iVar13 + 0x94);
  *(undefined4 *)(iVar12 + 0x38) = *(undefined4 *)(iVar13 + 0x88);
  *(undefined4 *)(iVar12 + 0x3c) = uVar4;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x38) = uVar15;
  *(undefined4 *)(iVar12 + 0x3c) = uVar17;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x38) = (int)uVar18;
  *(int *)(iVar12 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Event_001b4478;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,8,&iStack_38);
  iVar12 = puVar3[6];
  uVar15 = *(undefined4 *)(iVar13 + 0x9c);
  uVar4 = *(undefined4 *)(iVar13 + 0xa0);
  uVar17 = *(undefined4 *)(iVar13 + 0xa4);
  *(undefined4 *)(iVar12 + 0x40) = *(undefined4 *)(iVar13 + 0x98);
  *(undefined4 *)(iVar12 + 0x44) = uVar15;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x40) = uVar4;
  *(undefined4 *)(iVar12 + 0x44) = uVar17;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x40) = (int)uVar18;
  *(int *)(iVar12 + 0x44) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Reaction_001b4488;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,9,&iStack_38);
  iVar12 = puVar3[6];
  uVar4 = *(undefined4 *)(iVar13 + 0xac);
  uVar15 = *(undefined4 *)(iVar13 + 0xb0);
  uVar17 = *(undefined4 *)(iVar13 + 0xb4);
  *(undefined4 *)(iVar12 + 0x48) = *(undefined4 *)(iVar13 + 0xa8);
  *(undefined4 *)(iVar12 + 0x4c) = uVar4;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x48) = uVar15;
  *(undefined4 *)(iVar12 + 0x4c) = uVar17;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x48) = (int)uVar18;
  *(int *)(iVar12 + 0x4c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Die_001b4498;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,10,&iStack_38);
  iVar12 = puVar3[6];
  uVar4 = *(undefined4 *)(iVar13 + 0xbc);
  uVar15 = *(undefined4 *)(iVar13 + 0xc0);
  uVar17 = *(undefined4 *)(iVar13 + 0xc4);
  *(undefined4 *)(iVar12 + 0x50) = *(undefined4 *)(iVar13 + 0xb8);
  *(undefined4 *)(iVar12 + 0x54) = uVar4;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x50) = uVar15;
  *(undefined4 *)(iVar12 + 0x54) = uVar17;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x50) = (int)uVar18;
  *(int *)(iVar12 + 0x54) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_WakeUp_001b44a4;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,0xb,&iStack_38);
  iVar12 = puVar3[6];
  uVar4 = *(undefined4 *)(iVar13 + 0xcc);
  uVar15 = *(undefined4 *)(iVar13 + 0xd0);
  uVar17 = *(undefined4 *)(iVar13 + 0xd4);
  *(undefined4 *)(iVar12 + 0x58) = *(undefined4 *)(iVar13 + 200);
  *(undefined4 *)(iVar12 + 0x5c) = uVar4;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x58) = uVar15;
  *(undefined4 *)(iVar12 + 0x5c) = uVar17;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x58) = (int)uVar18;
  *(int *)(iVar12 + 0x5c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_34 = s_cState_Fall_001b44b4;
  iStack_38 = iVar16;
  func_0010BEC4((int)puVar3,0xc,&iStack_38);
  iVar16 = puVar3[6];
  uVar4 = *(undefined4 *)(iVar13 + 0xe0);
  uVar17 = *(undefined4 *)(iVar13 + 0xe4);
  uVar15 = *(undefined4 *)(iVar13 + 0xdc);
  *(undefined4 *)(iVar16 + 0x60) = *(undefined4 *)(iVar13 + 0xd8);
  *(undefined4 *)(iVar16 + 100) = uVar15;
  iVar13 = puVar3[7];
  *(undefined4 *)(iVar13 + 0x60) = uVar4;
  *(undefined4 *)(iVar13 + 100) = uVar17;
  iVar13 = puVar3[8];
  *(int *)(iVar13 + 0x60) = (int)uVar18;
  *(int *)(iVar13 + 100) = (int)((ulonglong)uVar18 >> 0x20);
  iVar13 = func_0052FBA0(*DAT_001b44c0 + 0x3dbbc,puVar3[-0x21b]);
  if (iVar13 == 0) {
    if ((short)param_2[0xb] != 0) {
      func_0065B158(puVar3,7);
      goto LAB_001b4530;
    }
    puVar5 = (uint *)func_0058A7D4();
    uVar6 = func_00111A64(puVar5);
    if ((uVar6 & 1) == 0) {
      func_0065B158(puVar3,2);
      goto LAB_001b4530;
    }
  }
  else {
    iVar13 = func_00588BE4(iVar13);
    if (iVar13 == *DAT_001b44c4) {
      func_0065B158(puVar3,1);
      goto LAB_001b4530;
    }
  }
  func_0065B158(puVar3,0);
LAB_001b4530:
  puVar3[-200] = puVar3[-200] | 0x8000;
  func_002AF5FC((int)puVar14,7,-1);
  *(undefined1 *)((int)puVar3 + -0x13f) = 8;
  *(undefined1 *)((int)puVar3 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x13d) = 0;
  *(undefined1 *)(puVar3 + -10) = 2;
  func_002AED68((int)puVar14,7);
  return puVar14;
}

