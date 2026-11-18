#include "ghidra_types.h"

extern int func_00130040(int param_1,int param_2);
extern int func_001302A8(int param_1,int param_2);
extern int *DAT_004cf9fc;

// USA 004CF828 <- EU 004CF800 (Ghidra, non-matching)
// GLOBAL DAT_004cf9fc int *

/* WARNING: Removing unreachable block (ram,0x004cf8c0) */
/* WARNING: Removing unreachable block (ram,0x004cf8e4) */
/* WARNING: Removing unreachable block (ram,0x004cf8dc) */
/* WARNING: Removing unreachable block (ram,0x004cf874) */
/* WARNING: Removing unreachable block (ram,0x004cf858) */
/* WARNING: Removing unreachable block (ram,0x004cf88c) */
/* WARNING: Removing unreachable block (ram,0x004cf860) */
/* WARNING: Removing unreachable block (ram,0x004cf878) */
/* WARNING: Removing unreachable block (ram,0x004cf87c) */
/* WARNING: Removing unreachable block (ram,0x004cf880) */
/* WARNING: Removing unreachable block (ram,0x004cf884) */
/* WARNING: Removing unreachable block (ram,0x004cf894) */
/* WARNING: Removing unreachable block (ram,0x004cf898) */
/* WARNING: Removing unreachable block (ram,0x004cf89c) */
/* WARNING: Removing unreachable block (ram,0x004cf8a0) */
/* WARNING: Removing unreachable block (ram,0x004cf8a4) */
/* WARNING: Removing unreachable block (ram,0x004cf8a8) */
/* WARNING: Removing unreachable block (ram,0x004cf8b4) */
/* WARNING: Removing unreachable block (ram,0x004cf8bc) */
/* WARNING: Removing unreachable block (ram,0x004cf8c4) */
/* WARNING: Removing unreachable block (ram,0x004cf8c8) */
/* WARNING: Removing unreachable block (ram,0x004cf8d8) */
/* WARNING: Removing unreachable block (ram,0x004cf8e0) */
/* WARNING: Removing unreachable block (ram,0x004cf8e8) */
/* WARNING: Removing unreachable block (ram,0x004cf8cc) */

void func_004CF828(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 0x10) + 0x164);
  if (param_2 == 0) {
    uVar3 = uVar3 & 0xffdfffff;
  }
  else {
    uVar3 = uVar3 | 0x200000;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x164) = uVar3;
  uVar3 = *(uint *)(*(int *)(param_1 + 0x10) + 0x164);
  if (param_2 == 0) {
    uVar3 = uVar3 & 0xfffffffe;
  }
  else {
    uVar3 = uVar3 | 1;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x164) = uVar3;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar4 = *DAT_004cf9fc;
  uVar3 = *(uint *)(iVar1 + 0x164);
  if ((~(uVar3 >> 3) & 1) != param_2) {
    if (param_2 == 1) {
      uVar3 = uVar3 & 0xfffffff7;
    }
    else {
      uVar3 = uVar3 | 8;
    }
    *(uint *)(iVar1 + 0x164) = uVar3;
    uVar3 = 0;
    if (0 < *(int *)(iVar1 + 0x5c)) {
      do {
        if (param_2 == 0) {
          if (uVar3 < *(uint *)(iVar1 + 0x5c)) {
            iVar2 = *(int *)(*(int *)(iVar1 + 100) + uVar3 * 4);
          }
          else {
            iVar2 = 0;
          }
          func_001302A8(iVar4,iVar2);
        }
        else {
          if (uVar3 < *(uint *)(iVar1 + 0x5c)) {
            iVar2 = *(int *)(*(int *)(iVar1 + 100) + uVar3 * 4);
          }
          else {
            iVar2 = 0;
          }
          func_00130040(iVar4,iVar2);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(iVar1 + 0x5c));
    }
    uVar3 = 0;
    if (0 < *(int *)(iVar1 + 0x68)) {
      do {
        if (param_2 == 0) {
          if (uVar3 < *(uint *)(iVar1 + 0x68)) {
            iVar2 = *(int *)(*(int *)(iVar1 + 0x70) + uVar3 * 4);
          }
          else {
            iVar2 = 0;
          }
          func_001302A8(iVar4,iVar2);
        }
        else {
          if (uVar3 < *(uint *)(iVar1 + 0x68)) {
            iVar2 = *(int *)(*(int *)(iVar1 + 0x70) + uVar3 * 4);
          }
          else {
            iVar2 = 0;
          }
          func_00130040(iVar4,iVar2);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(iVar1 + 0x68));
    }
  }
  return;
}

