#include "ghidra_types.h"

extern int func_003CA554(int param_1,int param_2);
extern int func_003CA75C(int param_1,undefined4 *param_2,int param_3,int param_4);
extern int func_003CB134(int param_1);
extern int func_003CB3DC(int param_1);

// USA 003CA380 <- EU 003CA35C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

void func_003CA380(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_2 + 4);
  *(char *)(param_1 + 3) = (char)uVar2;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  iVar3 = 0;
  piVar1 = (int *)(param_2 + 8);
  for (uVar2 = uVar2 & 0xff; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_1[iVar3 + 4] = *piVar1 + param_2;
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  }
  param_1[0x24] = piVar1[2] + (int)piVar1;
  param_1[0x25] = piVar1[3];
  iVar4 = piVar1[4];
  param_1[0x27] = piVar1[5];
  func_003CA554((int)param_1,param_5);
  iVar3 = param_1[0x27];
  if (iVar3 != 0) {
    iVar5 = 0;
    puVar6 = (undefined4 *)(iVar4 + (int)piVar1);
    do {
      iVar3 = iVar3 + -1;
      *(undefined4 *)(param_1[0x26] + iVar5 * 4) = *puVar6;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar3 != 0);
  }
  iVar3 = param_1[0x28];
  func_003CB3DC((int)param_1);
  func_003CB134((int)param_1);
  *param_1 = param_3;
  param_1[1] = param_4;
  uVar2 = 0;
  iVar4 = 0;
  param_1[2] = *(int *)(param_1[0x31] + param_4 * 4 + 4) + *(int *)(param_1[0x31] + param_3 * 4 + 4)
  ;
  if (-1 < param_4) {
    *(undefined1 *)(param_1 + 0x28) = 3;
  }
  uVar8 = 0;
  if ((char)param_1[3] != '\0') {
    do {
      if (*(char *)(param_1[uVar8 + 4] + 6) == '\0') {
        param_1[1] = -1;
        func_003CA75C((int)param_1,(undefined4 *)(param_1[0x2b] + iVar4 * 4),uVar8,-1);
        uVar7 = 0;
        iVar5 = uVar2 * 4;
        uVar2 = uVar2 + 1 & 0xff;
        iVar4 = iVar4 + *(int *)(param_1[0x2c] + iVar5);
        if ((char)param_1[3] != '\0') {
          do {
            if (*(char *)(param_1[uVar7 + 4] + 6) != '\0') {
              param_1[1] = uVar7;
              func_003CA75C((int)param_1,(undefined4 *)(param_1[0x2b] + iVar4 * 4),uVar8,uVar7);
              iVar5 = uVar2 * 4;
              uVar2 = uVar2 + 1 & 0xff;
              iVar4 = iVar4 + *(int *)(param_1[0x2c] + iVar5);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(byte *)(param_1 + 3));
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(param_1 + 3));
  }
  param_1[1] = param_4;
  if (param_4 < 0) {
    *(char *)(param_1 + 0x28) = (char)iVar3;
  }
  return;
}

