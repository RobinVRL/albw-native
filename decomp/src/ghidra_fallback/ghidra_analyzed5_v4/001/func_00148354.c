// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0024FE90(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556A90();
extern int *DAT_001485f8;
extern int *DAT_001485fc;
extern uint *DAT_00148600;
extern undefined4 DAT_00148604;
extern undefined4 *DAT_00148608;
extern uint *DAT_0014860c;
extern undefined4 *DAT_00148610;

// USA 00148354 <- EU 00148354 (Ghidra, non-matching)
// GLOBAL DAT_001485f8 int *
// GLOBAL DAT_001485fc int *
// GLOBAL DAT_00148600 uint *
// GLOBAL DAT_00148604 undefined4
// GLOBAL DAT_00148608 undefined4 *
// GLOBAL DAT_0014860c uint *
// GLOBAL DAT_00148610 undefined4 *

undefined1 func_00148354(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  if (*(char *)(param_1 + 0x440) == '\0') {
    return 0;
  }
  puVar9 = (undefined4 *)0x0;
  uVar4 = func_00556A90(*DAT_001485f8);
  uVar2 = DAT_00148604;
  puVar7 = DAT_00148600;
  piVar1 = DAT_001485fc;
  if (uVar4 != 0) {
    puVar5 = (undefined4 *)func_0052FBA0(*DAT_001485fc + 0x3dbbc,uVar4);
    if (((*puVar7 & 1) == 0) && (iVar6 = func_00100174((int *)puVar7), iVar6 != 0)) {
      *DAT_00148608 = uVar2;
    }
    if ((puVar5 == (undefined4 *)0x0) || (iVar6 = (**(code **)*puVar5)(puVar5), iVar6 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 == (undefined4 *)0x0) goto LAB_00148490;
  }
  puVar9 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,0);
  if (((*DAT_0014860c & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0014860c), iVar6 != 0)) {
    *DAT_00148610 = uVar2;
  }
  if ((puVar9 == (undefined4 *)0x0) || (iVar6 = (**(code **)*puVar9)(puVar9), iVar6 == 0)) {
    puVar9 = (undefined4 *)0x0;
  }
LAB_00148490:
  uVar3 = 0;
  uVar4 = 0;
  if (0 < *(short *)(param_1 + 0x49c)) {
    uVar3 = 0;
    do {
      puVar7 = (uint *)(param_1 + 0x4ac);
      if (uVar4 < 0x10) {
        puVar7 = (uint *)(param_1 + 0x4ac) + uVar4;
      }
      puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*puVar7);
      if (((*DAT_00148600 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00148600), iVar6 != 0)) {
        *DAT_00148608 = uVar2;
      }
      if ((puVar5 == (undefined4 *)0x0) || (iVar6 = (**(code **)*puVar5)(puVar5), iVar6 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 != (undefined4 *)0x0) {
        if (puVar9 != (undefined4 *)0x0) {
          puVar8 = puVar9 + 0x1ab;
          if ((uint)(int)*(short *)(puVar9 + 0x1cb) < 0x10) {
            puVar8 = puVar9 + 0x1ab + *(short *)(puVar9 + 0x1cb);
          }
          *puVar8 = puVar5[0xb3];
          puVar8 = puVar9 + 0x17b;
          if ((uint)(int)*(short *)(puVar9 + 0x1cb) < 0x10) {
            puVar8 = puVar9 + 0x17b + *(short *)(puVar9 + 0x1cb) * 3;
          }
          *puVar8 = puVar5[0xf4];
          puVar8[1] = puVar5[0xf5];
          puVar8[2] = puVar5[0xf6];
          puVar8 = puVar9 + 0x1bb;
          if ((uint)(int)*(short *)(puVar9 + 0x1cb) < 0x10) {
            puVar8 = puVar9 + 0x1bb + *(short *)(puVar9 + 0x1cb);
          }
          *puVar8 = 0;
          *(short *)(puVar9 + 0x1cb) = *(short *)(puVar9 + 0x1cb) + 1;
        }
        func_0024FE90((int)puVar5);
        uVar3 = 1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)*(short *)(param_1 + 0x49c));
  }
  return uVar3;
}

