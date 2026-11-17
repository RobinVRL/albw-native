/* compilefix: func_0023E834, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_0023E834.c) with raw code-address string pointers
 * replaced by the strings themselves (tools/raw_cstr_fix.py, BOOT_LOG 143): 0x23f000 "new" */
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001164A8(undefined4 *param_1,uint param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_0023DF30(int param_1);
extern int func_0023E21C(int param_1);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EFFF8(int param_1);
extern int func_004F042C(void);
extern int func_005330BC(int param_1,int *param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_005583F8(char *param_1);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern int func_0065F050(undefined4 *param_1,undefined1 param_2);
extern int iRam0023f00c;
extern int *piRam0023f194;
extern undefined4 *puRam0023f004;
extern undefined4 *puRam0023f008;
extern int DAT_0023efd8;
extern uint *DAT_0023efdc;
extern undefined4 *DAT_0023efe0;
extern undefined4 DAT_0023efe4;
extern undefined4 DAT_0023efe8;
extern int DAT_0023efec;
extern int DAT_0023eff0;
extern undefined4 DAT_0023eff4;
extern undefined4 DAT_0023eff8;
extern int DAT_0023effc;
extern char s_cState_Appear_0023f01c[];
extern char s_cState_Disappear_0023f180[];
extern char s_cState_Hide_0023f010[];
extern char s_cState_Read_0023f038[];
extern char s_cState_Wait_0023f02c[];

// USA 0023E834 <- EU 0023E834 (Ghidra, non-matching)
// GLOBAL DAT_0023efd8 int
// GLOBAL DAT_0023efdc uint *
// GLOBAL DAT_0023efe0 undefined4 *
// GLOBAL DAT_0023efe4 undefined4
// GLOBAL DAT_0023efe8 undefined4
// GLOBAL DAT_0023efec int
// GLOBAL DAT_0023eff0 int
// GLOBAL DAT_0023eff4 undefined4
// GLOBAL DAT_0023eff8 undefined4
// GLOBAL DAT_0023effc int
// GLOBAL UNK_0023f004 undefined4 *
// GLOBAL UNK_0023f008 undefined *
// GLOBAL UNK_0023f00c int
// GLOBAL UNK_0023f194 int *
// GLOBAL s_cState_Appear_0023f01c string
// GLOBAL s_cState_Disappear_0023f180 string
// GLOBAL s_cState_Hide_0023f010 string
// GLOBAL s_cState_Read_0023f038 string
// GLOBAL s_cState_Wait_0023f02c string

int func_0023E834(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  int iVar13;
  ushort *puVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 ((uint *)(albw_frame + 0x8))
  #define local_5c (*(int * *)(albw_frame + 0x14))
  #define iStack_58 (*(int *)(albw_frame + 0x18))
  #define pcStack_54 (*(char * *)(albw_frame + 0x1c))
  #define local_50 (*(int *)(albw_frame + 0x20))
  #define local_4c (*(uint * *)(albw_frame + 0x24))
  #define local_48 (*(int *)(albw_frame + 0x28))
  #define uStack_44 (*(uint *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_3c (*(int * *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x38))
  piVar2 = (int *)func_001E6CEC(param_1,param_2,0xc);
  iVar5 = DAT_0023efd8;
  *piVar2 = DAT_0023efd8;
  piVar2[200] = iVar5 + 0x98;
  puVar3 = func_0010A794(piVar2 + 0x1e2);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  local_38 = puVar3 + 0xf;
  local_3c = puVar3 + 0x10;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  *(undefined1 *)(puVar3 + 0x12) = 0;
  *(undefined1 *)((int)puVar3 + 0x49) = 0;
  puVar17 = puVar3 + -0x1e2;
  puVar3[0x13] = 0;
  local_48 = func_004F042C();
  if (local_48 == 0) {
    *(undefined1 *)((int)puVar3 + -0x4b1) = 1;
    return (int)puVar17;
  }
  puVar4 = (undefined4 *)func_0054D964((int)puVar17,0);
  if (((*DAT_0023efdc & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0023efdc), iVar5 != 0)) {
    *DAT_0023efe0 = DAT_0023efe4;
  }
  if ((puVar4 == (undefined4 *)0x0) ||
     (iVar5 = (**(code **)*puVar4)(puVar4,DAT_0023efe0), iVar5 == 0)) {
    puVar4 = (undefined4 *)0x0;
  }
  local_40 = puVar3 + 9;
  puVar3[9] = puVar4;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = func_004EDC9C(puVar6);
  }
  local_5c = puVar3 + 10;
  puVar3[10] = puVar4;
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = func_0016A2FC(puVar6,1,DAT_0023efe8,1);
  }
  puVar3[0x10] = puVar4;
  iVar5 = func_0054D89C((int)puVar17,0);
  puVar3[0x11] = iVar5;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0xc);
  iVar5 = DAT_0023efec;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    local_50 = DAT_0023efec;
    local_4c = *(uint **)(DAT_0023eff0 + 4);
    (**(code **)(DAT_0023efec + 8))(&local_50);
    iVar7 = 0;
    do {
      if (*(char *)((int)local_4c + iVar7) == '\0') {
        if (iVar7 < 0x40001) goto LAB_0023ea48;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40001);
    iVar7 = 0;
LAB_0023ea48:
    puVar8 = (undefined4 *)func_0010CEE0(iVar7 + 1U,(int *)0x0,4);
    puVar6 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar6 = func_001164A8(puVar8,0,iVar7 + 1U);
    }
    (**(code **)(local_50 + 8))(&local_50);
    uVar20 = DAT_0023eff4;
    iVar7 = 0;
    do {
      if (*(char *)((int)local_4c + iVar7) == '\0') {
        if (iVar7 < 0x40001) goto LAB_0023eab8;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40001);
    iVar7 = 0;
LAB_0023eab8:
    puVar4[2] = iVar7 + 1;
    *puVar4 = uVar20;
    puVar4[1] = puVar6;
    if (iVar7 + 1 < 1) {
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
    else {
      *(undefined1 *)((int)puVar6 + iVar7) = 0;
    }
    *puVar4 = DAT_0023eff8;
    puVar18 = (uint *)puVar4[1];
    (**(code **)(local_50 + 8))(&local_50);
    uVar16 = 0;
    do {
      if (*(char *)((int)local_4c + uVar16) == '\0') {
        if ((int)uVar16 < 0x40001) goto LAB_0023eb2c;
        break;
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 0x40001);
    uVar16 = 0;
LAB_0023eb2c:
    if ((int)puVar4[2] <= (int)uVar16) {
      uVar16 = puVar4[2] - 1;
    }
    (**(code **)(local_50 + 8))(&local_50);
    func_0010E3C4(puVar18,local_4c,uVar16);
    *(undefined1 *)((int)puVar18 + uVar16) = 0;
  }
  puVar3[-0x132] = puVar4;
  func_003249E0((int)puVar17,1);
  iVar7 = DAT_0023effc;
  uVar16 = 0;
  local_68[0] = *(uint *)(puVar3[-0x12e] + 0x1c8);
  piVar2 = puVar3 + 0xb;
  do {
    uVar9 = func_005330BC(local_68[0],(int *)(iVar7 + uVar16 * 8));
    piVar11 = piVar2;
    if (uVar16 < 4) {
      piVar11 = piVar2 + uVar16;
    }
    iVar10 = func_0014E428((int)puVar17,1,0,uVar9,1,0,0);
    *piVar11 = iVar10;
    piVar11 = piVar2;
    if (uVar16 < 4) {
      piVar11 = piVar2 + uVar16;
    }
    func_004CF478(*piVar11,0);
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 4);
  iVar10 = 0x32;
  iVar7 = func_004F042C();
  if (iVar7 != 0) {
    pcVar12 = (char *)(iVar7 + 4);
    if ((uint)(int)*(short *)(puVar3 + -0x1d7) < 0x14) {
      pcVar12 = pcVar12 + *(short *)(puVar3 + -0x1d7) * 0x40;
    }
    iVar10 = func_005583F8(pcVar12);
  }
  uVar16 = func_004EFFF8(iVar10);
  if (uVar16 < 4) {
    piVar2 = piVar2 + uVar16;
  }
  iVar7 = *piVar2;
  puVar3[0xf] = iVar7;
  func_004CF478(iVar7,1);
  puVar3[-0x10f] = *local_38;
  pcStack_54 = (char *)"new";
  iStack_58 = iVar5;
  func_00169608((uint *)puVar3[0x10],0,&iStack_58,*(int *)(puVar3[-0x12e] + 0x1c8));
  func_0016A02C(*local_3c,-1,(int *)0xffffffff,0);
  uVar16 = 0;
  do {
    piVar2 = puVar3 + 0xb;
    if (uVar16 < 4) {
      piVar2 = puVar3 + 0xb + uVar16;
    }
    iVar10 = *piVar2;
    iVar19 = *(int *)(*(int *)(iVar10 + 0x20) + 4);
    iVar7 = 0;
    if (0 < iVar19) {
      do {
        iVar13 = iVar7 + 1;
        puVar14 = (ushort *)(**(int **)(iVar10 + 0x20) + iVar7 * 0x154);
        *puVar14 = *puVar14 | 0x400;
        iVar7 = iVar13;
      } while (iVar13 < iVar19);
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 4);
  uVar16 = 0;
  do {
    piVar2 = puVar3 + 0xb;
    if (uVar16 < 4) {
      piVar2 = puVar3 + 0xb + uVar16;
    }
    iVar7 = 0;
    iVar19 = *piVar2;
    local_68[0] = 0xffffffff;
    iVar10 = *(int *)(*(int *)(iVar19 + 0x20) + 4);
    if (0 < iVar10) {
      do {
        puVar18 = (uint *)func_00584CA8(iVar19,iVar7,3);
        local_68[0] = *puVar18 & 0xffffff;
        func_004CF5DC(iVar19,iVar7,3,local_68);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar10);
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 4);
  *(undefined2 *)(puVar3[9] + 0x28) = 0xe4;
  *(undefined4 *)(puVar3[10] + 0x18) = *local_40;
  uStack_44 = puVar3[-0x12f];
  func_004EDAD0(*local_5c,&uStack_44);
  *(undefined2 *)(*local_5c + 0x2c) = *(undefined2 *)(puVar3 + -0x1cd);
  func_0023E21C((int)puVar17);
  *(undefined1 *)((int)puVar3 + 6) = 5;
  puVar3[5] = puVar17;
  iVar7 = func_0010BA78(0x50);
  puVar3[6] = iVar7;
  puVar4 = puRam0023f004;
  puVar3[7] = iVar7 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar10 = 5;
  puVar6 = (undefined4 *)(iVar7 + -8);
  do {
    uVar20 = puVar4[0x17];
    iVar10 = iVar10 + -1;
    puVar6[2] = puVar4[0x16];
    puVar6[3] = uVar20;
    uVar20 = puVar4[0x17];
    puVar6[4] = puVar4[0x16];
    puVar6[5] = uVar20;
    puVar6 = puVar6 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar16 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar3[8] = puVar6;
  if (uVar16 != 0) {
    puVar8 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar20 = puVar4[5];
      *puVar6 = puVar4[4];
      puVar6[1] = uVar20;
      puVar8 = puVar6;
    }
    for (iVar7 = (int)uVar16 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar20 = puVar4[5];
      puVar8[2] = puVar4[4];
      puVar8[3] = uVar20;
      uVar20 = puVar4[5];
      puVar8[4] = puVar4[4];
      puVar8[5] = uVar20;
      puVar8 = puVar8 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 5;
    iVar7 = func_00100118((int)(puVar6 + 2),puRam0023f008,0x24,5);
  }
  if (iVar7 != 0) {
    puVar3[3] = iVar7;
    puVar3[2] = 5;
  }
  iVar7 = iRam0023f00c;
  puVar3[-0x10d] = puVar3;
  *(undefined2 *)(iVar7 + (int)puVar17) = 5;
  pcStack_54 = s_cState_Hide_0023f010;
  iStack_58 = iVar5;
  func_0010BEC4((int)puVar3,0,&iStack_58);
  puVar6 = (undefined4 *)puVar3[6];
  uVar21 = puVar4[1];
  uVar20 = puVar4[2];
  uVar15 = puVar4[3];
  uVar22 = *(undefined8 *)(puVar4 + 4);
  *puVar6 = *puVar4;
  puVar6[1] = uVar21;
  puVar6 = (undefined4 *)puVar3[7];
  *puVar6 = uVar20;
  puVar6[1] = uVar15;
  puVar6 = (undefined4 *)puVar3[8];
  *puVar6 = (int)uVar22;
  puVar6[1] = (int)((ulonglong)uVar22 >> 0x20);
  pcStack_54 = s_cState_Appear_0023f01c;
  iStack_58 = iVar5;
  func_0010BEC4((int)puVar3,1,&iStack_58);
  iVar7 = puVar3[6];
  uVar20 = puVar4[7];
  uVar21 = puVar4[8];
  uVar15 = puVar4[9];
  *(undefined4 *)(iVar7 + 8) = puVar4[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar20;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 8) = uVar21;
  *(undefined4 *)(iVar7 + 0xc) = uVar15;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 8) = (int)uVar22;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar22 >> 0x20);
  pcStack_54 = s_cState_Wait_0023f02c;
  iStack_58 = iVar5;
  func_0010BEC4((int)puVar3,2,&iStack_58);
  iVar7 = puVar3[6];
  uVar20 = puVar4[0xb];
  uVar15 = puVar4[0xc];
  uVar21 = puVar4[0xd];
  *(undefined4 *)(iVar7 + 0x10) = puVar4[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar20;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar15;
  *(undefined4 *)(iVar7 + 0x14) = uVar21;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x10) = (int)uVar22;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar22 >> 0x20);
  pcStack_54 = s_cState_Read_0023f038;
  iStack_58 = iVar5;
  func_0010BEC4((int)puVar3,3,&iStack_58);
  iVar7 = puVar3[6];
  uVar15 = puVar4[0x11];
  uVar21 = puVar4[0xf];
  uVar20 = puVar4[0x10];
  *(undefined4 *)(iVar7 + 0x18) = puVar4[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar21;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar20;
  *(undefined4 *)(iVar7 + 0x1c) = uVar15;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x18) = (int)uVar22;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar22 >> 0x20);
  pcStack_54 = s_cState_Disappear_0023f180;
  iStack_58 = iVar5;
  func_0010BEC4((int)puVar3,4,&iStack_58);
  iVar5 = puVar3[6];
  uVar21 = puVar4[0x13];
  uVar20 = puVar4[0x15];
  uVar15 = puVar4[0x14];
  *(undefined4 *)(iVar5 + 0x20) = puVar4[0x12];
  *(undefined4 *)(iVar5 + 0x24) = uVar21;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar15;
  *(undefined4 *)(iVar5 + 0x24) = uVar20;
  iVar5 = puVar3[8];
  *(int *)(iVar5 + 0x20) = (int)uVar22;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar22 >> 0x20);
  iVar5 = local_48 + 4;
  if ((uint)(int)*(short *)(puVar3 + -0x1d7) < 0x14) {
    iVar5 = iVar5 + *(short *)(puVar3 + -0x1d7) * 0x40;
  }
  if (*(char *)(iVar5 + 6) < '\0') {
    *(undefined1 *)(puVar3[10] + 0x44) = 0;
    func_004CF478(puVar3[0xf],0);
    func_00151148(puVar3[0x11],0);
    func_0065F050(puVar3,0);
  }
  else {
    func_004A879C(*piRam0023f194,puVar3[10],2);
    func_00324964((int)puVar17);
    func_0023DF30((int)puVar17);
    func_0065F050(puVar3,2);
  }
  return (int)puVar17;
}

