#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00103CBC(char *param_1);
extern int func_001224C8(undefined4 *param_1,int param_2,int param_3);
extern int func_00122688(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_002E1B70(int *param_1);
extern int func_004AC854(int param_1);
extern int func_004ACBFC(int param_1);
extern int func_004AD7A0(float fparam_0,float fparam_1);
extern int func_00564ABC(short *param_1,uint *param_2,uint param_3);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_0029bc84;
extern int DAT_0029bc88;
extern undefined4 DAT_0029bc8c;
extern undefined4 DAT_0029bc90;
extern undefined4 DAT_0029bc94;
extern undefined4 DAT_0029bc98;
extern int *DAT_0029bc9c;
extern int *DAT_0029bca0;
extern undefined4 *DAT_0029bca4;
extern int DAT_0029bca8;
extern undefined4 *DAT_0029bcac;
extern int DAT_0029bcb0;
extern uint *DAT_0029bcb4;
extern undefined4 DAT_0029bcb8;
extern undefined4 *DAT_0029bcbc;

// USA 0029B9CC <- EU 0029B9A8 (Ghidra, non-matching)
// GLOBAL DAT_0029bc84 int *
// GLOBAL DAT_0029bc88 int
// GLOBAL DAT_0029bc8c undefined4
// GLOBAL DAT_0029bc90 undefined4
// GLOBAL DAT_0029bc94 undefined4
// GLOBAL DAT_0029bc98 undefined4
// GLOBAL DAT_0029bc9c int *
// GLOBAL DAT_0029bca0 int *
// GLOBAL DAT_0029bca4 undefined4 *
// GLOBAL DAT_0029bca8 int
// GLOBAL DAT_0029bcac undefined4 *
// GLOBAL DAT_0029bcb0 int
// GLOBAL DAT_0029bcb4 uint *
// GLOBAL DAT_0029bcb8 undefined4
// GLOBAL DAT_0029bcbc undefined4 *

void func_0029B9CC(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar5 = func_004AD7A0(*(float *)(*(int *)(*DAT_0029bc84 + 0x38) + 0xe3c),
                        *(float *)(*(int *)(*DAT_0029bc84 + 0x38) + 0xe44));
  bVar3 = func_004AC854(uVar5);
  uVar5 = (uint)bVar3;
  if (uVar5 == 4) {
    uVar4 = 3;
LAB_0029ba44:
    *(undefined1 *)(param_1 + 0x141) = uVar4;
  }
  else {
    if (uVar5 < 5) {
      if (uVar5 == 2 || uVar5 == 3) {
        if (*(char *)(param_1 + 0xe0) == '\x01') {
          uVar4 = 6;
        }
        else {
          uVar4 = 2;
        }
        goto LAB_0029ba44;
      }
code_r0x0029ba1c:
      iVar6 = func_004ACBFC(uVar5);
      if (iVar6 == 0) {
        *(undefined1 *)(param_1 + 0x141) = 0;
        goto LAB_0029ba48;
      }
    }
    else {
      if (uVar5 == 0xf) {
        *(undefined1 *)(param_1 + 0x141) = 4;
        goto LAB_0029ba48;
      }
      if (uVar5 != 0x13) goto code_r0x0029ba1c;
      if (*(char *)(param_1 + 0xe0) == '\x01') {
        uVar4 = 5;
        goto LAB_0029ba44;
      }
    }
    *(undefined1 *)(param_1 + 0x141) = 1;
  }
LAB_0029ba48:
  iVar6 = DAT_0029bc88;
  puVar12 = *(uint **)(DAT_0029bc88 + *(char *)(param_1 + 0x141) * 8);
  iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0xf8) + 0xc4) + 0x30);
  uVar5 = func_00103CBC((char *)puVar12);
  uVar5 = func_00564ABC((short *)(iVar7 + 0x4c),puVar12,uVar5);
  puVar10 = *(undefined4 **)(param_1 + 0xf4);
  *puVar10 = 0;
  func_002E1B70(puVar10 + 1);
  uVar14 = DAT_0029bc8c;
  puVar10[7] = DAT_0029bc90;
  puVar10[8] = uVar14;
  puVar10[9] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  uVar8 = DAT_0029bc94;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0x12] = uVar8;
  puVar10[0x13] = uVar8;
  puVar10[0x14] = uVar8;
  puVar10[0x15] = uVar8;
  puVar10[0x16] = uVar8;
  puVar10[0x17] = uVar8;
  puVar10[0x18] = uVar8;
  puVar10[0x19] = uVar8;
  puVar10[0x1a] = uVar8;
  puVar10[0x1b] = uVar8;
  puVar10[0x1c] = uVar8;
  puVar10[0x1d] = uVar8;
  puVar10[0x1e] = 0;
  puVar10[0x1f] = 0;
  uVar15 = DAT_0029bc98;
  puVar10[0x20] = 0;
  puVar10[0x21] = 0;
  puVar10[0x22] = uVar15;
  puVar10[0x23] = uVar8;
  puVar10[0x24] = uVar15;
  *(undefined1 *)(puVar10 + 0x25) = 1;
  iVar9 = *(int *)(param_1 + 0xf8);
  func_001224C8(*(undefined4 **)(param_1 + 0xf4),uVar5,iVar9);
  iVar7 = *(int *)(param_1 + 0xf4);
  uVar8 = **(undefined4 **)(iVar6 + *(char *)(param_1 + 0x141) * 8 + 4);
  *(undefined4 *)(iVar7 + 0x1c) = uVar8;
  *(undefined4 *)(iVar7 + 0x20) = uVar14;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xf4) + 0x90) = uVar15;
  func_00122688(*(int **)(param_1 + 0xf4),uVar8,iVar9);
  puVar2 = DAT_0029bcac;
  piVar1 = DAT_0029bca0;
  *(undefined1 *)(*DAT_0029bc9c + 0x2c1b) = 0;
  puVar10 = DAT_0029bca4;
  iVar7 = *piVar1;
  iVar6 = *(int *)(param_1 + 0xf4);
  *(undefined4 *)(iVar6 + 0x6c) = *DAT_0029bca4;
  *(undefined4 *)(iVar6 + 0x70) = puVar10[1];
  *(undefined4 *)(iVar6 + 0x74) = puVar10[2];
  puVar10 = (undefined4 *)func_005841A8(iVar7,*puVar2,*(int **)(DAT_0029bca8 + iVar7));
  uVar14 = DAT_0029bcb8;
  puVar12 = DAT_0029bcb4;
  puVar13 = *(undefined4 **)(DAT_0029bcb0 + iVar7);
  do {
    if (puVar10 == puVar13) {
      return;
    }
    puVar11 = (undefined4 *)*puVar10;
    if (puVar11 != (undefined4 *)0x0) {
      if (((*puVar12 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0029bcb4), iVar6 != 0)) {
        *DAT_0029bcbc = uVar14;
      }
      iVar6 = (**(code **)*puVar11)(puVar11,DAT_0029bcbc);
      if (iVar6 == 0) {
        puVar11 = (undefined4 *)0x0;
      }
      if (*(char *)(puVar11 + 0x159) == '\0') {
        iVar6 = *(int *)(param_1 + 0xf4);
        *(undefined4 *)(iVar6 + 0x6c) = puVar11[0xf4];
        *(undefined4 *)(iVar6 + 0x70) = puVar11[0xf5];
        *(undefined4 *)(iVar6 + 0x74) = puVar11[0xf6];
        return;
      }
    }
    puVar10 = (undefined4 *)func_005841A8(iVar7,*puVar2,puVar10 + 1);
  } while( true );
}

