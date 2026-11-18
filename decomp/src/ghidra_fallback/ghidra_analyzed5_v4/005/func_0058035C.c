#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_005804EC(int param_1,uint param_2,int param_3);
extern int func_00580588(int param_1,uint param_2,int param_3,int param_4);
extern int func_00580654(int param_1,uint param_2,int param_3,int param_4);

// USA 0058035C <- EU 00580334 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x00580438) */
/* WARNING: Removing unreachable block (ram,0x00580444) */
/* WARNING: Removing unreachable block (ram,0x00580450) */
/* WARNING: Removing unreachable block (ram,0x0058043c) */

undefined4 func_0058035C(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  
  uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if ((uVar1 & uVar1 - 1) != 0) {
    return 0;
  }
  iVar4 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar4 = param_1 + 0x54;
  }
  iVar3 = (int)*(char *)(param_1 + 0x50) * param_2;
  if (iVar3 < 0) {
    if (iVar3 == -4 || -iVar3 < 4) {
      iVar3 = 0;
      if (*(int *)(param_1 + 0x80) < 1) {
        iVar2 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x78) == 0) goto LAB_00580490;
        iVar2 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x84);
      }
      if (iVar2 == 0) goto LAB_005804b0;
      do {
        if ((3 < *(uint *)(iVar2 + 8)) &&
           ((iVar3 == 0 || (*(uint *)(iVar3 + 8) < *(uint *)(iVar2 + 8))))) {
          iVar3 = iVar2;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x84) + iVar2);
        bVar6 = iVar2 == param_1 + 0x78;
        if (!bVar6) {
          iVar2 = iVar2 - *(int *)(param_1 + 0x84);
          bVar6 = iVar2 == 0;
        }
      } while (!bVar6);
    }
    else {
      iVar3 = func_00580654(param_1,4,-iVar3,2);
    }
  }
  else if (iVar3 < 5) {
    iVar3 = func_005804EC(param_1,4,2);
  }
  else {
    iVar3 = func_00580588(param_1,4,iVar3,2);
  }
LAB_00580490:
  if (iVar3 != 0) {
    uVar5 = *(undefined4 *)(iVar3 + 8);
    if (iVar4 != 0) {
      func_0010EEE0(iVar4);
    }
    return uVar5;
  }
LAB_005804b0:
  if (iVar4 != 0) {
    func_0010EEE0(iVar4);
  }
  return 0;
}

