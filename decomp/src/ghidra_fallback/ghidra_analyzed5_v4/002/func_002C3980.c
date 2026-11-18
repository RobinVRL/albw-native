#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00111A64(uint *param_1);
extern undefined4 DAT_002c3ac0;
extern undefined4 DAT_002c3ac4;
extern undefined4 DAT_002c3ac8;
extern undefined4 *DAT_002c3acc;
extern undefined4 *DAT_002c3ad0;
extern undefined4 *DAT_002c3ad4;
extern undefined4 *DAT_002c3ad8;
extern undefined4 *DAT_002c3adc;
extern int *DAT_002c3ae0;

// USA 002C3980 <- EU 002C395C (Ghidra, non-matching)
// GLOBAL DAT_002c3ac0 undefined4
// GLOBAL DAT_002c3ac4 undefined4
// GLOBAL DAT_002c3ac8 undefined4
// GLOBAL DAT_002c3acc undefined4 *
// GLOBAL DAT_002c3ad0 undefined4 *
// GLOBAL DAT_002c3ad4 undefined4 *
// GLOBAL DAT_002c3ad8 undefined4 *
// GLOBAL DAT_002c3adc undefined4 *
// GLOBAL DAT_002c3ae0 int *

undefined4 * func_002C3980(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar2 = func_0010DA7C(param_1,0,3);
  uVar8 = DAT_002c3ac4;
  *puVar2 = DAT_002c3ac0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(char *)(puVar2 + 6) = (char)param_2;
  puVar2[7] = uVar8;
  puVar2[8] = uVar8;
  puVar2[9] = uVar8;
  puVar6 = DAT_002c3acc;
  uVar8 = DAT_002c3ac8;
  puVar2[10] = DAT_002c3ac8;
  puVar2[0xb] = uVar8;
  puVar2[0xc] = uVar8;
  func_001119F4(puVar2 + 0xd,puVar6);
  puVar6 = DAT_002c3ad0;
  uVar8 = DAT_002c3ad0[1];
  uVar9 = DAT_002c3ad0[2];
  uVar10 = DAT_002c3ad0[3];
  uVar11 = DAT_002c3ad0[4];
  uVar12 = DAT_002c3ad0[5];
  uVar13 = DAT_002c3ad0[6];
  uVar14 = DAT_002c3ad0[7];
  puVar2[0x19] = *DAT_002c3ad0;
  puVar2[0x1a] = uVar8;
  puVar2[0x1b] = uVar9;
  puVar2[0x1c] = uVar10;
  puVar2[0x1d] = uVar11;
  puVar2[0x1e] = uVar12;
  puVar2[0x1f] = uVar13;
  puVar2[0x20] = uVar14;
  puVar1 = DAT_002c3ad4;
  puVar2[0x21] = puVar6[8];
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  puVar2[0x22] = *puVar1;
  puVar2[0x23] = uVar8;
  puVar2[0x24] = uVar9;
  uVar8 = DAT_002c3ad8[1];
  uVar9 = DAT_002c3ad8[2];
  puVar2[0x25] = *DAT_002c3ad8;
  puVar2[0x26] = uVar8;
  puVar2[0x27] = uVar9;
  *(undefined1 *)(puVar2 + 0x28) = 1;
  puVar6 = DAT_002c3adc;
  *(undefined1 *)((int)puVar2 + 0xa1) = 1;
  *(undefined1 *)((int)puVar2 + 0xa2) = 0;
  *(undefined1 *)((int)puVar2 + 0xa3) = 1;
  uVar3 = func_00111A64((uint *)*puVar6);
  *(short *)(puVar2 + 0x29) = (short)((ulonglong)uVar3 * 300 >> 0x20);
  *(undefined1 *)((int)puVar2 + 0xa6) = 1;
  piVar5 = DAT_002c3ae0;
  *(bool *)((int)puVar2 + 0xa7) = param_2 < 5;
  piVar7 = (int *)(*piVar5 + 0x118);
  if ((uint)(int)*(char *)((int)puVar2 + 0xa2) < 2) {
    piVar7 = piVar7 + *(char *)((int)puVar2 + 0xa2) * 4;
  }
  func_0010F1DC(piVar7,(int *)(piVar7[3] + (int)puVar2));
  piVar7[2] = piVar7[2] + 1;
  if (*(char *)((int)puVar2 + 0xa7) != '\0') {
    iVar4 = *piVar5;
    piVar5 = (int *)(iVar4 + 0x38);
    if (param_2 < 8) {
      piVar5 = (int *)(iVar4 + 0x38 + param_2 * 0x1c);
    }
    puVar6 = (undefined4 *)*piVar5;
    puVar2[7] = *puVar6;
    puVar2[8] = puVar6[1];
    puVar2[9] = puVar6[2];
    puVar2[10] = puVar6[3];
    puVar2[0xb] = puVar6[4];
    puVar2[0xc] = puVar6[5];
  }
  return puVar2;
}

