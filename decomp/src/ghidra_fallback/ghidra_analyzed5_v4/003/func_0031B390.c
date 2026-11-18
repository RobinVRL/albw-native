#include "ghidra_types.h"

extern int func_0031B348(int param_1,uint param_2);
extern int func_0031B438(int param_1,uint param_2,int param_3,int param_4);
extern undefined4 DAT_0031b548;

// USA 0031B390 <- EU 0031B36C (Ghidra, non-matching)
// GLOBAL DAT_0031b548 undefined4

/* WARNING: Removing unreachable block (ram,0x0031b4b4) */
/* WARNING: Removing unreachable block (ram,0x0031b498) */
/* WARNING: Removing unreachable block (ram,0x0031b44c) */
/* WARNING: Removing unreachable block (ram,0x0031b454) */
/* WARNING: Removing unreachable block (ram,0x0031b460) */
/* WARNING: Removing unreachable block (ram,0x0031b464) */
/* WARNING: Removing unreachable block (ram,0x0031b474) */
/* WARNING: Removing unreachable block (ram,0x0031b4a0) */
/* WARNING: Removing unreachable block (ram,0x0031b4d4) */
/* WARNING: Removing unreachable block (ram,0x0031b4dc) */
/* WARNING: Removing unreachable block (ram,0x0031b4fc) */
/* WARNING: Removing unreachable block (ram,0x0031b51c) */
/* WARNING: Removing unreachable block (ram,0x0031b490) */

void func_0031B390(int param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x44);
  if (iVar4 == 0) {
    return;
  }
  if ('\0' < *(char *)(param_1 + 0x140)) {
    if ((0x1f < param_2) || (iVar3 = *(int *)(param_1 + 0x6c + param_2 * 4), iVar3 == 0)) {
      *(char *)(param_1 + 0x142) = *(char *)(param_1 + 0x140) + -1;
      if (*(int *)(iVar4 + 0x2c) != 0) {
        func_0031B348(iVar4,0);
      }
      return;
    }
    func_0031B438(iVar4,param_2,iVar3,0);
    uVar1 = 0;
    if (0 < *(char *)(param_1 + 0x140)) {
      do {
        pbVar2 = (byte *)(param_1 + 0x120);
        if (uVar1 < 0x20) {
          pbVar2 = pbVar2 + uVar1;
        }
        if (*pbVar2 == param_2) {
          *(char *)(param_1 + 0x142) = (char)uVar1;
        }
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)*(char *)(param_1 + 0x140));
    }
  }
  return;
}

