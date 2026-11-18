#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00661AD4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0029b5bc;
extern undefined4 DAT_0029b5c0;
extern undefined4 DAT_0029b5c4;
extern undefined4 *DAT_0029b5c8;
extern undefined *DAT_0029b5cc;
extern int DAT_0029b5d0;
extern int DAT_0029b5e0;
extern char s_cState_Count_0029b5e4[];
extern char s_cState_Wait_0029b5d4[];

// USA 0029B290 <- EU 0029B26C (Ghidra, non-matching)
// GLOBAL DAT_0029b5bc int
// GLOBAL DAT_0029b5c0 undefined4
// GLOBAL DAT_0029b5c4 undefined4
// GLOBAL DAT_0029b5c8 undefined4 *
// GLOBAL DAT_0029b5cc undefined *
// GLOBAL DAT_0029b5d0 int
// GLOBAL DAT_0029b5e0 int
// GLOBAL s_cState_Count_0029b5e4 string
// GLOBAL s_cState_Wait_0029b5d4 string

undefined4 * func_0029B290(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  piVar5 = func_00150E40(param_1,param_2);
  iVar7 = DAT_0029b5bc;
  *piVar5 = DAT_0029b5bc;
  piVar5[200] = iVar7 + 0x54;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  uVar14 = DAT_0029b5c0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  uVar15 = DAT_0029b5c4;
  puVar6[8] = 0;
  puVar6[10] = uVar14;
  puVar6[0xb] = uVar15;
  puVar11 = puVar6 + -0x103;
  puVar6[9] = 0;
  bVar4 = func_00588BF0((int)puVar11,1);
  if (bVar4) {
    *(undefined1 *)((int)puVar6 + -0x135) = 1;
  }
  else {
    puVar6[10] = uVar14;
    puVar6[0xb] = uVar15;
    puVar6[9] = 0;
    *(undefined1 *)((int)puVar6 + 6) = 2;
    puVar6[5] = puVar11;
    iVar7 = func_0010BA78(0x20);
    puVar6[6] = iVar7;
    puVar2 = DAT_0029b5c8;
    puVar6[7] = iVar7 + (uint)*(byte *)((int)puVar6 + 6) * 8;
    iVar10 = 2;
    puVar8 = (undefined4 *)(iVar7 + -8);
    do {
      uVar14 = puVar2[0xb];
      iVar10 = iVar10 + -1;
      puVar8[2] = puVar2[10];
      puVar8[3] = uVar14;
      uVar14 = puVar2[0xb];
      puVar8[4] = puVar2[10];
      puVar8[5] = uVar14;
      puVar8 = puVar8 + 4;
    } while (iVar10 != 0);
    bVar1 = *(byte *)((int)puVar6 + 6);
    uVar12 = (uint)bVar1;
    puVar8 = (undefined4 *)func_0010BA78(uVar12 << 3);
    puVar6[8] = puVar8;
    if (uVar12 != 0) {
      puVar9 = puVar8 + -2;
      if ((bVar1 & 1) != 0) {
        uVar14 = puVar2[5];
        *puVar8 = puVar2[4];
        puVar8[1] = uVar14;
        puVar9 = puVar8;
      }
      for (iVar7 = (int)uVar12 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        uVar14 = puVar2[5];
        puVar9[2] = puVar2[4];
        puVar9[3] = uVar14;
        uVar14 = puVar2[5];
        puVar9[4] = puVar2[4];
        puVar9[5] = uVar14;
        puVar9 = puVar9 + 4;
      }
    }
    puVar8 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
    puVar3 = DAT_0029b5cc;
    iVar7 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar8[1] = 2;
      *puVar8 = 0x24;
      iVar7 = func_00100118((int)(puVar8 + 2),puVar3,0x24,2);
    }
    if (iVar7 != 0) {
      puVar6[3] = iVar7;
      puVar6[2] = 2;
    }
    iVar7 = DAT_0029b5d0;
    puVar6[-0x2e] = puVar6;
    iVar10 = DAT_0029b5e0;
    *(undefined2 *)(iVar7 + (int)puVar11) = 2;
    local_34 = (uint *)s_cState_Wait_0029b5d4;
    local_38 = iVar10;
    iVar7 = puVar6[3];
    puVar13 = *(uint **)(iVar7 + 4);
    (**(code **)(iVar10 + 8))(&local_38);
    uVar12 = 0;
    do {
      if (*(char *)((int)local_34 + uVar12) == '\0') {
        if ((int)uVar12 < 0x40001) goto LAB_0029b47c;
        break;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x40001);
    uVar12 = 0;
LAB_0029b47c:
    iVar7 = *(int *)(iVar7 + 8);
    if (iVar7 <= (int)uVar12) {
      uVar12 = iVar7 - 1;
    }
    (**(code **)(local_38 + 8))(&local_38);
    func_0010E3C4(puVar13,local_34,uVar12);
    *(undefined1 *)((int)puVar13 + uVar12) = 0;
    puVar8 = (undefined4 *)puVar6[6];
    uVar14 = puVar2[1];
    uVar15 = puVar2[2];
    uVar16 = puVar2[3];
    uVar17 = puVar2[4];
    uVar18 = puVar2[5];
    *puVar8 = *puVar2;
    puVar8[1] = uVar14;
    puVar8 = (undefined4 *)puVar6[7];
    *puVar8 = uVar15;
    puVar8[1] = uVar16;
    puVar8 = (undefined4 *)puVar6[8];
    *puVar8 = uVar17;
    puVar8[1] = uVar18;
    local_34 = (uint *)s_cState_Count_0029b5e4;
    local_38 = iVar10;
    if ((uint)puVar6[2] < 2) {
      iVar7 = puVar6[3];
    }
    else {
      iVar7 = puVar6[3] + 0x24;
    }
    puVar13 = *(uint **)(iVar7 + 4);
    (**(code **)(iVar10 + 8))(&local_38);
    uVar12 = 0;
    do {
      if (*(char *)((int)local_34 + uVar12) == '\0') {
        if ((int)uVar12 < 0x40001) goto LAB_0029b530;
        break;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x40001);
    uVar12 = 0;
LAB_0029b530:
    if (*(int *)(iVar7 + 8) <= (int)uVar12) {
      uVar12 = *(int *)(iVar7 + 8) - 1;
    }
    (**(code **)(local_38 + 8))(&local_38);
    func_0010E3C4(puVar13,local_34,uVar12);
    *(undefined1 *)((int)puVar13 + uVar12) = 0;
    iVar7 = puVar6[6];
    uVar15 = puVar2[7];
    uVar14 = puVar2[8];
    uVar18 = puVar2[9];
    uVar16 = puVar2[4];
    uVar17 = puVar2[5];
    *(undefined4 *)(iVar7 + 8) = puVar2[6];
    *(undefined4 *)(iVar7 + 0xc) = uVar15;
    iVar7 = puVar6[7];
    *(undefined4 *)(iVar7 + 8) = uVar14;
    *(undefined4 *)(iVar7 + 0xc) = uVar18;
    iVar7 = puVar6[8];
    *(undefined4 *)(iVar7 + 8) = uVar16;
    *(undefined4 *)(iVar7 + 0xc) = uVar17;
    func_00661AD4(puVar6,0);
  }
  return puVar11;
}

