#include "ghidra_types.h"

extern int func_00130778(int param_1,int param_2);
extern int func_00130930(int param_1,int param_2);
extern int *DAT_004cf380;

// USA 004CF294 <- EU 004CF26C (Ghidra, non-matching)
// GLOBAL DAT_004cf380 int *

void func_004CF294(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x164);
  if ((~(uVar1 >> 4) & 1) != param_2) {
    if (param_2 == 1) {
      uVar1 = uVar1 & 0xffffffef;
    }
    else {
      uVar1 = uVar1 | 0x10;
    }
    iVar3 = *DAT_004cf380;
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
          func_00130930(iVar3,iVar2);
        }
        else {
          if (uVar1 < *(uint *)(param_1 + 0x5c)) {
            iVar2 = *(int *)(*(int *)(param_1 + 100) + uVar1 * 4);
          }
          else {
            iVar2 = 0;
          }
          func_00130778(iVar3,iVar2);
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
          func_00130930(iVar3,iVar2);
        }
        else {
          if (uVar1 < *(uint *)(param_1 + 0x68)) {
            iVar2 = *(int *)(*(int *)(param_1 + 0x70) + uVar1 * 4);
          }
          else {
            iVar2 = 0;
          }
          func_00130778(iVar3,iVar2);
        }
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < *(int *)(param_1 + 0x68));
    }
  }
  return;
}

