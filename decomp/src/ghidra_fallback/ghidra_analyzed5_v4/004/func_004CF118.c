#include "ghidra_types.h"

extern int func_001306E4(int param_1,int param_2);
extern int func_001308BC(int param_1,int param_2);
extern int *DAT_004cf204;

// USA 004CF118 <- EU 004CF0F0 (Ghidra, non-matching)
// GLOBAL DAT_004cf204 int *

void func_004CF118(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x164);
  if ((~(uVar1 >> 5) & 1) != param_2) {
    if (param_2 == 1) {
      uVar1 = uVar1 & 0xffffffdf;
    }
    else {
      uVar1 = uVar1 | 0x20;
    }
    iVar3 = *DAT_004cf204;
    *(uint *)(param_1 + 0x164) = uVar1;
    uVar1 = 0;
    if (0 < *(int *)(param_1 + 0x5c)) {
      do {
        if (param_2 == 0) {
          if (uVar1 < *(uint *)(param_1 + 0x5c)) {
            iVar2 = *(int *)(*(int *)(param_1 + 100) + uVar1 * 4);
          }
          else {
            iVar2 = 0;
          }
          func_001308BC(iVar3,iVar2);
        }
        else {
          if (uVar1 < *(uint *)(param_1 + 0x5c)) {
            iVar2 = *(int *)(*(int *)(param_1 + 100) + uVar1 * 4);
          }
          else {
            iVar2 = 0;
          }
          func_001306E4(iVar3,iVar2);
        }
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < *(int *)(param_1 + 0x5c));
    }
    uVar1 = 0;
    if (0 < *(int *)(param_1 + 0x68)) {
      do {
        if (param_2 == 0) {
          if (uVar1 < *(uint *)(param_1 + 0x68)) {
            iVar2 = *(int *)(*(int *)(param_1 + 0x70) + uVar1 * 4);
          }
          else {
            iVar2 = 0;
          }
          func_001308BC(iVar3,iVar2);
        }
        else {
          if (uVar1 < *(uint *)(param_1 + 0x68)) {
            iVar2 = *(int *)(*(int *)(param_1 + 0x70) + uVar1 * 4);
          }
          else {
            iVar2 = 0;
          }
          func_001306E4(iVar3,iVar2);
        }
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < *(int *)(param_1 + 0x68));
    }
  }
  return;
}

