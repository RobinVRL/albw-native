#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_005681C0(int param_1,int *param_2);
extern int func_00568224(int param_1,int *param_2,int param_3,int *param_4,int param_5);
extern int func_005683D0(int param_1,int *param_2,int param_3,uint param_4);
extern int func_00568798(int param_1,int *param_2,int *param_3);
extern int *DAT_00170868;
extern uint *DAT_0017086c;
extern undefined4 *DAT_00170870;
extern undefined4 DAT_00170874;
extern uint DAT_00170878;
extern undefined4 DAT_0017087c;
extern uint *DAT_00170880;
extern undefined4 DAT_00170884;
extern undefined4 DAT_00170888;
extern undefined4 *DAT_0017088c;
extern int *DAT_00170890;
extern int DAT_00170894;
extern int DAT_00170898;

// USA 00170558 <- EU 00170558 (Ghidra, non-matching)
// GLOBAL DAT_00170868 int *
// GLOBAL DAT_0017086c uint *
// GLOBAL DAT_00170870 undefined4 *
// GLOBAL DAT_00170874 undefined4
// GLOBAL DAT_00170878 uint
// GLOBAL DAT_0017087c undefined4
// GLOBAL DAT_00170880 uint *
// GLOBAL DAT_00170884 undefined4
// GLOBAL DAT_00170888 undefined4
// GLOBAL DAT_0017088c undefined4 *
// GLOBAL DAT_00170890 int *
// GLOBAL DAT_00170894 int
// GLOBAL DAT_00170898 int

undefined4 func_00170558(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  
  puVar9 = *(undefined4 **)(*DAT_00170868 + 0x1c);
  if (((*DAT_0017086c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0017086c), iVar4 != 0)) {
    *DAT_00170870 = DAT_00170874;
  }
  if ((puVar9 == (undefined4 *)0x0) ||
     (iVar4 = (**(code **)*puVar9)(puVar9,DAT_00170870), iVar4 == 0)) {
    puVar9 = (undefined4 *)0x0;
  }
  uVar1 = DAT_0017087c;
  uVar7 = DAT_00170878;
  iVar4 = *(int *)(param_1 + 0x98);
  if ((puVar9 == (undefined4 *)0x0) || (puVar9[0x23] != *(int *)(param_1 + 0x8c))) {
    iVar5 = *(int *)(param_1 + 0x8c);
    if (*(char *)(iVar5 + 0x16b) == '\0') {
      puVar10 = (uint *)*param_2;
      *puVar10 = *(byte *)(iVar4 + 0x1a) | 0x80000000;
      puVar10[1] = uVar7;
      func_001150CC(puVar10 + 2,(undefined4 *)(iVar5 + 0x104),uVar1);
      *param_2 = (int)(puVar10 + 0x10);
    }
    else {
      puVar10 = (uint *)*param_2;
      if (((*DAT_00170880 & 1) == 0) &&
         (iVar5 = func_00100174((int *)DAT_00170880), puVar9 = DAT_0017088c, uVar3 = DAT_00170888,
         uVar2 = DAT_00170884, iVar5 != 0)) {
        puVar6 = DAT_0017088c + 4;
        *DAT_0017088c = DAT_00170884;
        puVar9[1] = uVar3;
        puVar9[2] = uVar3;
        puVar9[3] = uVar3;
        *puVar6 = uVar3;
        puVar9[5] = uVar2;
        puVar9[6] = uVar3;
        puVar9[7] = uVar3;
        puVar9[8] = uVar3;
        puVar9[9] = uVar3;
        puVar9[10] = uVar2;
        puVar9[0xb] = uVar3;
      }
      puVar9 = DAT_0017088c;
      *puVar10 = *(byte *)(iVar4 + 10) | 0x80000000;
      puVar10[1] = uVar7;
      func_001150CC(puVar10 + 2,puVar9,uVar1);
      *param_2 = (int)(puVar10 + 0x10);
    }
  }
  iVar4 = *(int *)(param_1 + 0x8c);
  uVar7 = *(uint *)(iVar4 + 0x164) & 0x2000000;
  if (*(char *)(iVar4 + 0x16b) == '\0') {
    if (uVar7 == 0) {
      return func_005681C0(*(int *)(param_1 + 0x90),param_2);
    }
    iVar5 = *DAT_00170890;
    uVar7 = *(uint *)(iVar4 + 0x13c);
    iVar4 = iVar5 + (int)(short)(ushort)*(byte *)(DAT_00170898 + iVar5) * (int)(short)DAT_00170894 *
                    4;
    if (*(char *)(iVar4 + 0x8c) == '\0') {
      iVar4 = iVar5 + (1 - (uint)*(byte *)(DAT_00170898 + iVar5)) * DAT_00170894 * 4;
    }
    if (uVar7 < *(uint *)(iVar4 + 0x90)) {
      iVar5 = *(int *)(iVar4 + 0x98) + uVar7 * 0x70;
    }
    else {
      iVar5 = *(int *)(iVar4 + 0x98);
    }
    if (*(char *)(iVar5 + 0x6c) == '\0') {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(iVar4 + 0x98);
      if (uVar7 < *(uint *)(iVar4 + 0x90)) {
        piVar8 = piVar8 + uVar7 * 0x1c;
      }
      piVar8 = (int *)(*piVar8 + *(int *)(param_1 + 0xa0) * 0xc);
    }
    return func_00568798(*(int *)(param_1 + 0x90),param_2,piVar8);
  }
  if (uVar7 == 0) {
    return func_005683D0(*(int *)(param_1 + 0x90),param_2,*(int *)(iVar4 + 0x24),
                  *(int *)(param_1 + 0x98) + 0x18);
  }
  iVar11 = *DAT_00170890;
  uVar7 = *(uint *)(iVar4 + 0x13c);
  iVar5 = iVar11 + (int)(short)(ushort)*(byte *)(DAT_00170898 + iVar11) * (int)(short)DAT_00170894 *
                   4;
  if (*(char *)(iVar5 + 0x8c) == '\0') {
    iVar5 = iVar11 + (1 - (uint)*(byte *)(DAT_00170898 + iVar11)) * DAT_00170894 * 4;
  }
  if (uVar7 < *(uint *)(iVar5 + 0x90)) {
    iVar11 = *(int *)(iVar5 + 0x98) + uVar7 * 0x70;
  }
  else {
    iVar11 = *(int *)(iVar5 + 0x98);
  }
  if (*(char *)(iVar11 + 0x6c) == '\0') {
    piVar8 = (int *)0x0;
  }
  else {
    if (uVar7 < *(uint *)(iVar5 + 0x90)) {
      piVar8 = (int *)(*(int *)(iVar5 + 0x98) + uVar7 * 0x70);
    }
    else {
      piVar8 = *(int **)(iVar5 + 0x98);
    }
    piVar8 = (int *)(*piVar8 + *(int *)(param_1 + 0xa0) * 0xc);
  }
  return func_00568224(*(int *)(param_1 + 0x90),param_2,*(int *)(iVar4 + 0x24),piVar8,
                *(int *)(param_1 + 0x98) + 0x18);
}

