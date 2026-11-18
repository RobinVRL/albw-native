#include "ghidra_types.h"

extern int func_0012F7EC(int param_1,int param_2);
extern int func_0012FBAC(int param_1,int param_2);
extern int *DAT_004ce660;

// USA 004CE4C8 <- EU 004CE4A0 (Ghidra, non-matching)
// GLOBAL DAT_004ce660 int *

undefined4 func_004CE4C8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *DAT_004ce660;
  if ((int)param_3 < 0) {
    uVar1 = *(uint *)(param_1 + 0x164);
    if ((~(uVar1 >> 1) & 1) != param_2) {
      if (param_2 == 1) {
        uVar1 = uVar1 & 0xfffffff7;
      }
      else {
        uVar1 = uVar1 | 8;
      }
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
            func_0012FBAC(iVar3,iVar2);
          }
          else {
            if (uVar1 < *(uint *)(param_1 + 0x5c)) {
              iVar2 = *(int *)(*(int *)(param_1 + 100) + uVar1 * 4);
            }
            else {
              iVar2 = 0;
            }
            func_0012F7EC(iVar3,iVar2);
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
            func_0012FBAC(iVar3,iVar2);
          }
          else {
            if (uVar1 < *(uint *)(param_1 + 0x68)) {
              iVar2 = *(int *)(*(int *)(param_1 + 0x70) + uVar1 * 4);
            }
            else {
              iVar2 = 0;
            }
            func_0012F7EC(iVar3,iVar2);
          }
          uVar1 = uVar1 + 1;
        } while ((int)uVar1 < *(int *)(param_1 + 0x68));
      }
    }
  }
  else {
    if (param_2 == 0) {
      if (param_3 < *(uint *)(param_1 + 0x5c)) {
        iVar2 = *(int *)(*(int *)(param_1 + 100) + param_3 * 4);
      }
      else {
        iVar2 = 0;
      }
      func_0012FBAC(iVar3,iVar2);
    }
    else {
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) & 0xfffffffd;
      if (param_3 < *(uint *)(param_1 + 0x5c)) {
        iVar2 = *(int *)(*(int *)(param_1 + 100) + param_3 * 4);
      }
      else {
        iVar2 = 0;
      }
      func_0012F7EC(iVar3,iVar2);
    }
    uVar1 = *(uint *)(param_1 + 0x68);
    if (uVar1 != 0) {
      if (param_2 == 0) {
        if (param_3 < uVar1) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x70) + param_3 * 4);
        }
        else {
          iVar2 = 0;
        }
        return func_0012FBAC(iVar3,iVar2);
      }
      if (param_3 < uVar1) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x70) + param_3 * 4);
      }
      else {
        iVar2 = 0;
      }
      return func_0012F7EC(iVar3,iVar2);
    }
  }
  return 0;
}

