#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00103CBC(char *param_1);
extern int func_001224C8(undefined4 *param_1,int param_2,int param_3);
extern int func_00122688(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00122E08(undefined4 *param_1);
extern int func_002E1B70(int *param_1);
extern int func_00564ABC(short *param_1,uint *param_2,uint param_3);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int DAT_0025df98;
extern undefined4 DAT_0025df9c;
extern undefined4 DAT_0025dfa0;
extern undefined4 DAT_0025dfa4;
extern undefined4 DAT_0025dfa8;
extern int *DAT_0025dfac;
extern undefined4 *DAT_0025dfb0;
extern int *DAT_0025dfb4;
extern int DAT_0025dfb8;
extern undefined4 *DAT_0025dfbc;
extern int DAT_0025dfc0;
extern uint *DAT_0025dfc4;
extern undefined4 DAT_0025dfc8;
extern undefined4 *DAT_0025dfcc;

// USA 0025DCF8 <- EU 0025DD20 (Ghidra, non-matching)
// GLOBAL DAT_0025df98 int
// GLOBAL DAT_0025df9c undefined4
// GLOBAL DAT_0025dfa0 undefined4
// GLOBAL DAT_0025dfa4 undefined4
// GLOBAL DAT_0025dfa8 undefined4
// GLOBAL DAT_0025dfac int *
// GLOBAL DAT_0025dfb0 undefined4 *
// GLOBAL DAT_0025dfb4 int *
// GLOBAL DAT_0025dfb8 int
// GLOBAL DAT_0025dfbc undefined4 *
// GLOBAL DAT_0025dfc0 int
// GLOBAL DAT_0025dfc4 uint *
// GLOBAL DAT_0025dfc8 undefined4
// GLOBAL DAT_0025dfcc undefined4 *

void func_0025DCF8(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x94) = 1;
  func_00122E08(*(undefined4 **)(param_1 + 0xf0));
  iVar3 = DAT_0025df98;
  iVar5 = DAT_0025df98 + *(int *)(param_1 + 0x134) * 0x24;
  if (**(char **)(iVar5 + 0x18) != '\0') {
    iVar7 = *(int *)(*(int *)(param_1 + 0xec) + 0xc4);
    (**(code **)(*(int *)(iVar5 + 0x14) + 8))((int *)(iVar5 + 0x14));
    iVar7 = *(int *)(iVar7 + 0x30);
    puVar10 = *(uint **)(iVar5 + 0x18);
    uVar2 = func_00103CBC((char *)puVar10);
    uVar2 = func_00564ABC((short *)(iVar7 + 0x4c),puVar10,uVar2);
    if (uVar2 != 0xffff) {
      puVar6 = *(undefined4 **)(param_1 + 0xf0);
      *puVar6 = 0;
      func_002E1B70(puVar6 + 1);
      uVar11 = DAT_0025df9c;
      puVar6[7] = DAT_0025dfa0;
      puVar6[8] = uVar11;
      puVar6[9] = 0;
      puVar6[0xe] = 0;
      puVar6[0xf] = 0;
      uVar4 = DAT_0025dfa4;
      puVar6[0x10] = 0;
      puVar6[0x11] = 0;
      puVar6[0x12] = uVar4;
      puVar6[0x13] = uVar4;
      puVar6[0x14] = uVar4;
      puVar6[0x15] = uVar4;
      puVar6[0x16] = uVar4;
      puVar6[0x17] = uVar4;
      puVar6[0x18] = uVar4;
      puVar6[0x19] = uVar4;
      puVar6[0x1a] = uVar4;
      puVar6[0x1b] = uVar4;
      puVar6[0x1c] = uVar4;
      puVar6[0x1d] = uVar4;
      puVar6[0x1e] = 0;
      puVar6[0x1f] = 0;
      uVar12 = DAT_0025dfa8;
      puVar6[0x20] = 0;
      puVar6[0x21] = 0;
      puVar6[0x22] = uVar12;
      puVar6[0x23] = uVar4;
      puVar6[0x24] = uVar12;
      *(undefined1 *)(puVar6 + 0x25) = 1;
      iVar7 = *(int *)(param_1 + 0xec);
      func_001224C8(*(undefined4 **)(param_1 + 0xf0),uVar2,iVar7);
      iVar5 = *(int *)(param_1 + 0xf0);
      uVar4 = *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x134) * 0x24 + 0xc);
      *(undefined4 *)(iVar5 + 0x1c) = uVar4;
      *(undefined4 *)(iVar5 + 0x20) = uVar11;
      *(undefined4 *)(iVar5 + 0x24) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x90) = uVar12;
      func_00122688(*(int **)(param_1 + 0xf0),uVar4,iVar7);
      puVar6 = DAT_0025dfb0;
      *(undefined1 *)(*DAT_0025dfac + 0x2c1b) = 0;
      puVar1 = DAT_0025dfbc;
      iVar3 = *(int *)(param_1 + 0xf0);
      *(undefined4 *)(iVar3 + 0x6c) = *puVar6;
      *(undefined4 *)(iVar3 + 0x70) = puVar6[1];
      *(undefined4 *)(iVar3 + 0x74) = puVar6[2];
      iVar3 = *DAT_0025dfb4;
      puVar6 = (undefined4 *)func_005841A8(iVar3,*puVar1,*(int **)(DAT_0025dfb8 + iVar3));
      uVar11 = DAT_0025dfc8;
      puVar10 = DAT_0025dfc4;
      puVar9 = *(undefined4 **)(DAT_0025dfc0 + iVar3);
      for (; puVar6 != puVar9; puVar6 = (undefined4 *)func_005841A8(iVar3,*puVar1,puVar6 + 1)) {
        puVar8 = (undefined4 *)*puVar6;
        if (puVar8 != (undefined4 *)0x0) {
          if (((*puVar10 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0025dfc4), iVar5 != 0)) {
            *DAT_0025dfcc = uVar11;
          }
          iVar5 = (**(code **)*puVar8)(puVar8,DAT_0025dfcc);
          if (iVar5 == 0) {
            puVar8 = (undefined4 *)0x0;
          }
          if (*(char *)(puVar8 + 0x159) == '\0') {
            iVar3 = *(int *)(param_1 + 0xf0);
            *(undefined4 *)(iVar3 + 0x6c) = puVar8[0xf4];
            *(undefined4 *)(iVar3 + 0x70) = puVar8[0xf5];
            *(undefined4 *)(iVar3 + 0x74) = puVar8[0xf6];
            return;
          }
        }
      }
    }
  }
  return;
}

