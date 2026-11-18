#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_0014FC94(int param_1,int param_2);
extern int func_001501C8(int param_1,int param_2);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_001D87DC(int param_1,undefined4 param_2,float fparam_0);
extern int func_001D8BF4(int param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0065CACC(undefined4 *param_1,undefined1 param_2);
extern int iRam001d98ac;
extern int iRam001d98bc;
extern undefined4 uRam001d98a0;
extern undefined4 uRam001d98a4;
extern undefined4 *puRam001d98a8;
extern int DAT_001d9884;
extern undefined4 *DAT_001d9888;
extern undefined4 DAT_001d988c;
extern undefined4 DAT_001d9890;
extern undefined4 *DAT_001d9894;
extern uint DAT_001d9898;
extern int DAT_001d989c;
extern char s_cState_Die_001d9c40[];
extern char s_cState_FireReaction_001d9c2c[];
extern char s_cState_Reaction_001d9c1c[];
extern char s_cState_Wait_001d98b0[];

// USA 001D941C <- EU 001D941C (Ghidra, non-matching)
// GLOBAL DAT_001d9884 int
// GLOBAL DAT_001d9888 undefined4 *
// GLOBAL DAT_001d988c undefined4
// GLOBAL DAT_001d9890 undefined4
// GLOBAL DAT_001d9894 undefined4 *
// GLOBAL DAT_001d9898 uint
// GLOBAL DAT_001d989c int
// GLOBAL UNK_001d98a0 undefined4
// GLOBAL UNK_001d98a4 undefined4
// GLOBAL UNK_001d98a8 undefined *
// GLOBAL UNK_001d98ac int
// GLOBAL UNK_001d98bc int
// GLOBAL s_cState_Die_001d9c40 string
// GLOBAL s_cState_FireReaction_001d9c2c string
// GLOBAL s_cState_Reaction_001d9c1c string
// GLOBAL s_cState_Wait_001d98b0 string

undefined4 * func_001D941C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  float fparam_0;
  ulonglong uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define uStack_3c (*(uint *)(albw_frame + 0x4))
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define puStack_34 (*(uint * *)(albw_frame + 0xc))
  piVar2 = func_00150E40(param_1,param_2);
  iVar6 = DAT_001d9884;
  *piVar2 = DAT_001d9884;
  piVar2[200] = iVar6 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x105);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar13 = puVar3 + -0x105;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0034CAA0(puVar4);
  }
  puVar4 = DAT_001d9888;
  puVar3[10] = puVar5;
  uVar10 = puVar4[1];
  puVar3[0xd] = *puVar4;
  puVar3[0xe] = uVar10;
  uVar10 = DAT_001d988c;
  puVar3[0xb] = DAT_001d988c;
  puVar3[0xc] = puVar13;
  uVar11 = puVar4[3];
  puVar3[0x11] = puVar4[2];
  puVar3[0x12] = uVar11;
  puVar3[0xf] = uVar10;
  puVar3[0x10] = puVar13;
  iVar6 = func_0054D964((int)puVar13,0);
  puVar3[0x13] = iVar6;
  puVar5 = (undefined4 *)func_0010BAB4(100);
  uVar10 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    uVar10 = func_004EE484(puVar5);
  }
  puVar3[0x14] = uVar10;
  iVar6 = func_0054D89C((int)puVar13,0);
  puVar5 = DAT_001d9894;
  puVar3[0x15] = iVar6;
  uVar14 = DAT_001d9898;
  uVar10 = DAT_001d9890;
  uVar11 = puVar5[1];
  uVar12 = puVar5[2];
  uVar18 = (ulonglong)DAT_001d9898;
  puVar3[0x16] = *puVar5;
  puVar3[0x17] = uVar11;
  puVar3[0x18] = uVar12;
  puVar3[0x19] = uVar10;
  puVar3[0x1a] = uVar14;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  puVar3[0x21] = uVar10;
  *(undefined1 *)(puVar3 + 0x22) = 0;
  *(undefined1 *)((int)puVar3 + 0x89) = 0;
  *(bool *)((int)puVar3 + 0x8a) = *(short *)((int)param_2 + 0x32) != 0;
  *(undefined1 *)((int)puVar3 + 0x8b) = 0;
  uVar10 = func_0014E428((int)puVar13,1,0,0,1,0,0);
  puVar3[-2] = uVar10;
  iVar6 = 0;
  while( true ) {
    piVar2 = *(int **)(puVar3[-2] + 0x20);
    if (piVar2[1] <= iVar6) break;
    puVar9 = (ushort *)(*piVar2 + iVar6 * 0x154);
    if (puVar9 != (ushort *)0x0) {
      *puVar9 = *puVar9 | 0x400;
    }
    iVar6 = iVar6 + 1;
  }
  func_001501C8((int)puVar13,puVar3[-2]);
  uVar10 = func_0014E904((int)puVar13,3,1);
  puVar3[-1] = uVar10;
  iVar6 = DAT_001d989c;
  uVar14 = 0;
  iVar7 = *(int *)(puVar3[-0x51] + 0x1c8);
  do {
    func_00169688((uint *)puVar3[-1],uVar14,(int *)(iVar6 + uVar14 * 8),iVar7);
    fparam_0 = ALBW_AS_F32(uVar18);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 3);
  uVar10 = 0xffffffff;
  piVar2 = (int *)0x0;
  func_0016A02C(puVar3[-1],-1,(int *)0xffffffff,0);
  func_00151148(puVar3[0x15],1);
  func_001D87DC((int)puVar13,0,fparam_0);
  iVar6 = *(int *)(puVar3[-1] + 0x14);
  if (*(float *)(iVar6 + 8) != *(float *)(iVar6 + 0x14)) {
    *(float *)(iVar6 + 8) = *(float *)(iVar6 + 0x14);
    *(undefined1 *)(iVar6 + 0x26) = 1;
  }
  func_00169A80((int *)puVar3[-1],iVar6,uVar10,piVar2);
  func_00168E9C((int *)puVar3[-1],puVar3[-2],(int *)0x0);
  func_001D8BF4((int)puVar13);
  uVar10 = puVar4[4];
  uVar11 = puVar4[5];
  puVar3[0xc] = puVar13;
  puVar3[0xd] = uVar10;
  puVar3[0xe] = uVar11;
  uVar10 = puVar4[6];
  uVar11 = puVar4[7];
  puVar3[0x10] = puVar13;
  puVar3[0x11] = uVar10;
  puVar3[0x12] = uVar11;
  uStack_3c = puVar3[-0x52];
  func_0014EB8C(puVar3[0x14],puVar3[0x13],(undefined2 *)puVar3[-0x1d],&uStack_3c,
                *(undefined2 *)(puVar3 + -0xf0),0,(short)uRam001d98a0);
  if (puVar3[0x14] != 0) {
    func_0014FC94((int)puVar13,puVar3[0x14]);
  }
  piVar2 = (int *)puVar3[0x13];
  if (piVar2 != (int *)0x0) {
    piVar2[1] = puVar3[-0x11];
    piVar2[2] = puVar3[-0x10];
    piVar2[3] = puVar3[-0xf];
    func_004356B4(piVar2);
    piVar2[0xb] = piVar2[0xb] | 1;
  }
  uVar10 = uRam001d98a4;
  puVar3[0x20] = 10;
  puVar3[0x21] = uVar10;
  puVar3[0x1f] = 0;
  *(undefined1 *)((int)puVar3 + 6) = 4;
  puVar3[5] = puVar13;
  iVar6 = func_0010BA78(0x40);
  puVar3[6] = iVar6;
  puVar3[7] = iVar6 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 4;
  puVar5 = (undefined4 *)(iVar6 + -8);
  do {
    uVar10 = puVar4[0x1b];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar4[0x1a];
    puVar5[3] = uVar10;
    uVar10 = puVar4[0x1b];
    puVar5[4] = puVar4[0x1a];
    puVar5[5] = uVar10;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar14 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar3[8] = puVar5;
  if (uVar14 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar4[0xd];
      *puVar5 = puVar4[0xc];
      puVar5[1] = uVar10;
      puVar8 = puVar5;
    }
    for (iVar6 = (int)uVar14 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar10 = puVar4[0xd];
      puVar8[2] = puVar4[0xc];
      puVar8[3] = uVar10;
      uVar10 = puVar4[0xd];
      puVar8[4] = puVar4[0xc];
      puVar8[5] = uVar10;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar6 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 4;
    iVar6 = func_00100118((int)(puVar5 + 2),puRam001d98a8,0x24,4);
  }
  if (iVar6 != 0) {
    puVar3[3] = iVar6;
    puVar3[2] = 4;
  }
  iVar6 = iRam001d98ac;
  puVar3[-0x30] = puVar3;
  iVar7 = iRam001d98bc;
  *(undefined2 *)(iVar6 + (int)puVar13) = 4;
  puStack_34 = (uint *)s_cState_Wait_001d98b0;
  iStack_38 = iVar7;
  iVar6 = puVar3[3];
  puVar16 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar7 + 8))(&iStack_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)puStack_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001d9910;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001d9910:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar14) {
    uVar14 = iVar6 - 1;
  }
  (**(code **)(iStack_38 + 8))(&iStack_38);
  func_0010E3C4(puVar16,puStack_34,uVar14);
  puVar5 = DAT_001d9888;
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  puVar4 = (undefined4 *)puVar3[6];
  uVar17 = puVar5[10];
  uVar15 = puVar5[8];
  uVar11 = puVar5[0xb];
  uVar12 = puVar5[0xc];
  uVar10 = puVar5[0xd];
  puVar4[1] = puVar5[9];
  *puVar4 = uVar15;
  puVar5 = (undefined4 *)puVar3[7];
  puVar5[1] = uVar11;
  *puVar5 = uVar17;
  puVar5 = (undefined4 *)puVar3[8];
  puVar5[1] = uVar10;
  *puVar5 = uVar12;
  puStack_34 = (uint *)s_cState_Reaction_001d9c1c;
  iStack_38 = iVar7;
  if ((uint)puVar3[2] < 2) {
    iVar6 = puVar3[3];
  }
  else {
    iVar6 = puVar3[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar7 + 8))(&iStack_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)puStack_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001d99e4;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001d99e4:
  if (*(int *)(iVar6 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(iStack_38 + 8))(&iStack_38);
  func_0010E3C4(puVar16,puStack_34,uVar14);
  puVar5 = DAT_001d9888;
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar6 = puVar3[6];
  uVar17 = puVar5[0xf];
  uVar10 = puVar5[0xc];
  uVar11 = puVar5[0x11];
  uVar15 = puVar5[0x10];
  uVar12 = puVar5[0xd];
  *(undefined4 *)(iVar6 + 8) = puVar5[0xe];
  *(undefined4 *)(iVar6 + 0xc) = uVar17;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 8) = uVar15;
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 8) = uVar10;
  *(undefined4 *)(iVar6 + 0xc) = uVar12;
  puStack_34 = (uint *)s_cState_FireReaction_001d9c2c;
  iStack_38 = iVar7;
  if ((uint)puVar3[2] < 3) {
    iVar6 = puVar3[3];
  }
  else {
    iVar6 = puVar3[3] + 0x48;
  }
  puVar16 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar7 + 8))(&iStack_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)puStack_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001d9abc;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001d9abc:
  if (*(int *)(iVar6 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(iStack_38 + 8))(&iStack_38);
  func_0010E3C4(puVar16,puStack_34,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  puVar5 = DAT_001d9888;
  iVar6 = puVar3[6];
  uVar15 = DAT_001d9888[0x13];
  uVar12 = DAT_001d9888[0xc];
  uVar17 = DAT_001d9888[0xd];
  uVar10 = DAT_001d9888[0x15];
  uVar11 = DAT_001d9888[0x14];
  *(undefined4 *)(iVar6 + 0x10) = DAT_001d9888[0x12];
  *(undefined4 *)(iVar6 + 0x14) = uVar15;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar11;
  *(undefined4 *)(iVar6 + 0x14) = uVar10;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar12;
  *(undefined4 *)(iVar6 + 0x14) = uVar17;
  puStack_34 = (uint *)s_cState_Die_001d9c40;
  iStack_38 = iVar7;
  if ((uint)puVar3[2] < 4) {
    iVar6 = puVar3[3];
  }
  else {
    iVar6 = puVar3[3] + 0x6c;
  }
  puVar16 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar7 + 8))(&iStack_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)puStack_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001d9b94;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001d9b94:
  if (*(int *)(iVar6 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(iStack_38 + 8))(&iStack_38);
  func_0010E3C4(puVar16,puStack_34,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar6 = puVar3[6];
  uVar10 = puVar5[0x17];
  uVar11 = puVar5[0xc];
  uVar12 = puVar5[0x18];
  uVar17 = puVar5[0x19];
  uVar15 = puVar5[0xd];
  *(undefined4 *)(iVar6 + 0x18) = puVar5[0x16];
  *(undefined4 *)(iVar6 + 0x1c) = uVar10;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x18) = uVar12;
  *(undefined4 *)(iVar6 + 0x1c) = uVar17;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x18) = uVar11;
  *(undefined4 *)(iVar6 + 0x1c) = uVar15;
  func_0065CACC(puVar3,0);
  return puVar13;
}

