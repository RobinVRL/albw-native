#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00112D70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_001132E8(undefined4 param_1,undefined4 *param_2,int *param_3);
extern int func_00113388(int param_1,uint *param_2);
extern int func_001139F8(int param_1);
extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_003CD2EC(undefined4 *param_1);
extern int func_003FAFD8(int *param_1);
extern int func_00432EC0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);
extern int func_004D08D4(undefined4 *param_1);
extern undefined4 DAT_002c1bfc;
extern undefined *DAT_002c1c00;
extern undefined4 *DAT_002c1c04;
extern int *DAT_002c1c08;
extern undefined4 *DAT_002c1c0c;
extern uint DAT_002c1c10;
extern uint DAT_002c1c14;
extern undefined4 DAT_002c1c18;
extern undefined *DAT_002c1c1c;
extern undefined *DAT_002c1c20;
extern undefined *DAT_002c1c24;
extern undefined *DAT_002c1c28;
extern uint DAT_002c1c2c;
extern uint DAT_002c1c30;
extern uint *DAT_002c1c34;
extern uint *DAT_002c1c38;
extern uint DAT_002c1c3c;
extern uint DAT_002c1c40;
extern uint DAT_002c1c44;
extern uint DAT_002c1c48;
extern uint DAT_002c1c4c;

// USA 002C1754 <- EU 002C1730 (Ghidra, non-matching)
// GLOBAL DAT_002c1bfc undefined4
// GLOBAL DAT_002c1c00 undefined *
// GLOBAL DAT_002c1c04 undefined4 *
// GLOBAL DAT_002c1c08 int *
// GLOBAL DAT_002c1c0c undefined4 *
// GLOBAL DAT_002c1c10 uint
// GLOBAL DAT_002c1c14 uint
// GLOBAL DAT_002c1c18 undefined4
// GLOBAL DAT_002c1c1c undefined *
// GLOBAL DAT_002c1c20 undefined *
// GLOBAL DAT_002c1c24 undefined *
// GLOBAL DAT_002c1c28 undefined *
// GLOBAL DAT_002c1c2c uint
// GLOBAL DAT_002c1c30 uint
// GLOBAL DAT_002c1c34 uint *
// GLOBAL DAT_002c1c38 uint *
// GLOBAL DAT_002c1c3c uint
// GLOBAL DAT_002c1c40 uint
// GLOBAL DAT_002c1c44 uint
// GLOBAL DAT_002c1c48 uint
// GLOBAL DAT_002c1c4c uint

undefined4 * func_002C1754(undefined4 *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x1010]; /* entry_sp - 0x1010 .. entry_sp + 0x0 */
#define stack0xffffeff0 (*(undefined4 *)(albw_frame + 0x0))
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  #define local_1004 (*(char *)(albw_frame + 0xc))
  #define local_1000 (*(short *)(albw_frame + 0x10))
  #define local_ffc (*(undefined4 *)(albw_frame + 0x14))
  #define local_fe0 (*(int *)(albw_frame + 0x30))
  #define auStack_fdc ((uint *)(albw_frame + 0x34))
  #define local_e80 ((int *)(albw_frame + 0x190))
  #define local_940 ((char *)(albw_frame + 0x6d0))
  #define local_84c (*(int *)(albw_frame + 0x7c4))
  #define local_848 (*(undefined1 *)(albw_frame + 0x7c8))
  #define local_847 (*(undefined1 *)(albw_frame + 0x7c9))
  #define local_846 (*(undefined1 *)(albw_frame + 0x7ca))
  #define local_845 (*(undefined1 *)(albw_frame + 0x7cb))
  #define local_844 (*(undefined4 *)(albw_frame + 0x7cc))
  #define auStack_840 ((uint *)(albw_frame + 0x7d0))
  puVar2 = func_004D08D4(param_1);
  *puVar2 = DAT_002c1bfc;
  puVar3 = (undefined4 *)func_0010BAB4(0x24);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
  }
  puVar2[0x5e] = puVar3;
  puVar3 = (undefined4 *)func_00100118((int)(puVar2 + 0x5f),DAT_002c1c00,0x28,2);
  puVar3[0x14] = 0;
  puVar6 = puVar3 + 0x15;
  *puVar6 = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar2 = DAT_002c1c04;
  puVar3[0x18] = 0;
  *(undefined1 *)(puVar3 + 0x19) = 0;
  func_001119F4(puVar3 + 0x1d,puVar2);
  puVar3[-6] = puVar3[-6] | 0x90000;
  piVar16 = *(int **)(*DAT_002c1c08 + 0x1fa8);
  if (piVar16 == (int *)0x0) {
    local_84c = 1;
  }
  else {
    local_84c = func_0010983C(*DAT_002c1c0c,piVar16);
  }
  uVar12 = DAT_002c1c10;
  iVar4 = func_0010CEE0(0x21c,piVar16,0x10);
  if (iVar4 != 0) {
    puVar3[0x16] = iVar4;
  }
  uVar15 = 0;
  if (iVar4 != 0) {
    *puVar6 = uVar12;
  }
  do {
    puVar10 = (undefined2 *)puVar3[0x16];
    if (uVar15 < *puVar6) {
      puVar10 = puVar10 + uVar15;
    }
    uVar12 = uVar12 - 1;
    *puVar10 = (short)uVar15;
    uVar15 = uVar15 + 1;
  } while (uVar12 != 0);
  puVar3[0x18] = 0;
  *(undefined1 *)(puVar3 + 0x19) = 0;
  iVar4 = func_001139F8(puVar3[0x16]);
  uVar12 = DAT_002c1c14;
  uVar15 = 0;
  puVar3[0x17] = iVar4;
  do {
    uVar1 = DAT_002c1c18;
    puVar2 = puVar3;
    if (uVar15 < 2) {
      puVar2 = puVar3 + uVar15 * 10;
    }
    iVar4 = func_0010CEE0(DAT_002c1c18,piVar16,0x10);
    if ((iVar4 != 0) && (iVar4 = func_00100118(iVar4,DAT_002c1c1c,0x24,0x5a), iVar4 != 0)) {
      puVar2[1] = iVar4;
      *puVar2 = 0x5a;
    }
    iVar4 = func_0010CEE0(uVar1,piVar16,0x10);
    if ((iVar4 != 0) && (iVar4 = func_00100118(iVar4,DAT_002c1c1c,0x24,0x5a), iVar4 != 0)) {
      puVar2[5] = iVar4;
      puVar2[4] = 0x5a;
    }
    iVar4 = func_0010CEE0(0x870,piVar16,0x10);
    if ((iVar4 != 0) && (iVar4 = func_00100118(iVar4,DAT_002c1c20,0x18,0x5a), iVar4 != 0)) {
      puVar2[3] = iVar4;
      puVar2[2] = 0x5a;
    }
    local_848 = 0;
    local_847 = 1;
    local_846 = 0xff;
    local_845 = 0xff;
    local_844 = 0;
    iVar4 = func_00100118((int)local_e80,DAT_002c1c24,0x70,0xc);
    iVar4 = func_00100118(iVar4 + 0x540,DAT_002c1c28,0x14,0xc);
    iVar14 = iVar4 + -0x6a0;
    *(undefined4 *)(iVar4 + -0x6a0) = 0;
    func_00110490((undefined4 *)(iVar4 + -0x69c),0x150);
    uVar11 = 0;
    uVar7 = DAT_002c1c2c;
    do {
      *(undefined1 *)(iVar14 + uVar11 + 0x154) = 0;
      func_003CD2EC((undefined4 *)(iVar14 + uVar11 * 0x70 + 0x160));
      uVar13 = uVar11 + 1;
      iVar4 = iVar14 + uVar11 * 0x14;
      *(undefined1 *)(iVar4 + 0x6a0) = 0;
      *(uint *)(iVar4 + 0x6a4) = uVar7;
      *(uint *)(iVar4 + 0x6a8) = uVar7;
      *(uint *)(iVar4 + 0x6ac) = uVar7;
      *(uint *)(iVar4 + 0x6b0) = uVar7;
      uVar11 = uVar13;
    } while (uVar13 < 0xc);
    local_846 = 0;
    local_845 = 0;
    iVar4 = func_001139F8(puVar2[1]);
    func_00112D70(&local_fe0,(int)&local_848,iVar4,0xb);
    local_846 = 4;
    local_845 = 4;
    iVar4 = func_001139F8(puVar2[3]);
    func_00112D70(&local_fe0,(int)&local_848,iVar4,7);
    local_846 = 1;
    local_845 = 1;
    iVar4 = func_001139F8(puVar2[5]);
    func_00112D70(&local_fe0,(int)&local_848,iVar4,0xb);
    puVar2 = puVar3;
    if (uVar15 < 2) {
      puVar2 = puVar3 + uVar15 * 10;
    }
    if (local_fe0 == 0) {
      iVar4 = func_00113388((int)&local_fe0,auStack_fdc);
      local_fe0 = (iVar4 - (int)&local_fe0) + -4 >> 2;
    }
    func_00110D44(auStack_840,(byte *)auStack_fdc,local_fe0 << 2);
    iVar14 = local_fe0;
    auStack_840[local_fe0] = 0x80000006;
    auStack_840[local_fe0 + 1] = DAT_002c1c30;
    auStack_840[local_fe0 + 2] = 0;
    auStack_840[local_fe0 + 3] = 0;
    auStack_840[local_fe0 + 4] = 0;
    iVar4 = local_fe0 + 6;
    auStack_840[local_fe0 + 5] = 0;
    if (((*DAT_002c1c34 & 1) == 0) &&
       (iVar5 = func_00100174((int *)DAT_002c1c34), puVar6 = DAT_002c1c38, iVar5 != 0)) {
      puVar8 = DAT_002c1c38 + 1;
      *DAT_002c1c38 = uVar12;
      *puVar8 = uVar12;
      puVar6[2] = uVar7;
      puVar6[3] = uVar7;
      puVar6[4] = uVar12;
      puVar6[5] = uVar7;
      puVar6[6] = uVar7;
      puVar6[7] = uVar7;
    }
    auStack_840[iVar4] = 0x80000007;
    auStack_840[iVar14 + 7] = DAT_002c1c3c;
    uVar11 = DAT_002c1c38[3];
    auStack_840[iVar14 + 9] = DAT_002c1c40;
    auStack_840[iVar14 + 8] = uVar11;
    auStack_840[iVar14 + 10] = DAT_002c1c38[2];
    auStack_840[iVar14 + 0xb] = DAT_002c1c38[1];
    auStack_840[iVar14 + 0xc] = *DAT_002c1c38;
    auStack_840[iVar14 + 0xd] = DAT_002c1c38[7];
    auStack_840[iVar14 + 0xe] = DAT_002c1c38[6];
    auStack_840[iVar14 + 0xf] = DAT_002c1c38[5];
    auStack_840[iVar14 + 0x10] = DAT_002c1c38[4];
    auStack_840[iVar14 + 0x11] = 0;
    auStack_840[iVar14 + 0x12] = DAT_002c1c44;
    auStack_840[iVar14 + 0x13] = DAT_002c1c48;
    puVar6 = func_001132E8(&local_fe0,auStack_840 + iVar14 + 0x14,puVar3 + 0x17);
    uVar11 = DAT_002c1c4c;
    uVar7 = 0;
    do {
      if (local_e80[uVar7 * 0x1c] == 0) {
        puVar8 = puVar6 + 1;
        *puVar6 = 0;
        *puVar8 = uVar7 * 3 + 0x205 | 0xf0000;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = uVar7 * 3 + 0x203 | 0x802f0000;
        puVar8 = puVar6 + 3;
        puVar6[2] = 0;
        *puVar8 = 0;
      }
      puVar6 = puVar8 + 1;
      if (local_940[uVar7 * 0x14] != '\0') {
        *puVar6 = uVar7;
        puVar8[2] = uVar11;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar6 = puVar8 + 7;
        puVar8[6] = 0;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0xc);
    uVar11 = ((uint)puVar6 & 0xfffffffc) + 8;
    if (((uVar11 & 0xf) != 0) && (uVar11 = 4 - (uVar11 * 0x10000000 >> 0x1e), 0 < (int)uVar11)) {
      puVar8 = puVar6 + -1;
      if ((uVar11 & 1) != 0) {
        *puVar6 = 0;
        puVar8 = puVar6;
      }
      for (iVar4 = (int)uVar11 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar8[1] = 0;
        puVar8 = puVar8 + 2;
        *puVar8 = 0;
      }
      puVar6 = puVar6 + uVar11;
    }
    puVar9 = func_003CC030(puVar6,1);
    iVar4 = (int)puVar9 - (int)auStack_840 >> 2;
    puVar2[9] = iVar4;
    puVar2[8] = auStack_840;
    puVar6 = (uint *)func_0010CEE0(iVar4 << 2,piVar16,0x10);
    func_0010E3C4(puVar6,auStack_840,puVar2[9] << 2);
    puVar2[8] = puVar6;
    func_003FAFD8((int *)&stack0xffffeff0);
    if (local_1004 != '\0') {
      do {
        if (local_1000 == 0x2b0) {
          puVar2 = puVar3;
          if (uVar15 < 2) {
            puVar2 = puVar3 + uVar15 * 10;
          }
          puVar2[6] = local_ffc;
        }
        if (local_1000 == 0x228) {
          puVar2 = puVar3 + uVar15 * 10;
          if (1 < uVar15) {
            puVar2 = puVar3;
          }
          puVar2[7] = local_ffc;
          break;
        }
        func_003FAFD8((int *)&stack0xffffeff0);
      } while (local_1004 != '\0');
    }
    uVar15 = uVar15 + 1;
    if (1 < (int)uVar15) {
      if (local_84c != 1) {
        func_0010983C(*DAT_002c1c0c,local_84c);
      }
      func_00432EC0((uint *)puVar3[-1],puVar3[1],puVar3[5],puVar3[3],0x5a,0);
      return puVar3 + -0x5f;
    }
  } while( true );
}

