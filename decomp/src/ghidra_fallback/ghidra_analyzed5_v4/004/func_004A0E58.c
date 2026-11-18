#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int *DAT_004a1050;

// USA 004A0E58 <- EU 004A0E30 (Ghidra, non-matching)
// GLOBAL DAT_004a1050 int *

undefined4 * func_004A0E58(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define uStack_34 (*(uint *)(albw_frame + 0xc))
  #define uStack_30 (*(uint *)(albw_frame + 0x10))
  #define local_2c (*(uint *)(albw_frame + 0x14))
  #define local_28 (*(uint *)(albw_frame + 0x18))
  uVar1 = param_2;
  if (param_2 < 4) {
    uVar1 = 4;
  }
  iVar6 = *DAT_004a1050;
  uVar1 = uVar1 + 3 & 0xfffffffc;
  puVar2 = (undefined4 *)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f));
  if (((uint)puVar2 & (int)puVar2 - 1U) == 0) {
    iVar5 = 0;
    if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
      func_0010C0B8(param_1 + 0x54);
      iVar5 = param_1 + 0x54;
    }
    iVar3 = (int)*(char *)(param_1 + 0x50) * param_3;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      puVar2 = (undefined4 *)((int)*(undefined4 **)(param_1 + 0x78) - uVar1);
      if (*(undefined4 **)(param_1 + 0x78) < puVar2) {
        if (iVar6 != 0) {
          puVar2 = *(undefined4 **)(iVar6 + 4);
        }
        if (iVar6 != 0 && puVar2 != (undefined4 *)0x0) {
          local_38 = param_1;
          uStack_34 = param_2;
          uStack_30 = param_3;
          local_2c = uVar1;
          local_28 = iVar3;
          (**(code **)*puVar2)(puVar2,&local_38);
        }
      }
      else {
        puVar7 = (undefined4 *)((uint)puVar2 & ~(iVar3 - 1U));
        if (*(undefined4 **)(param_1 + 0x74) <= puVar7) {
          *(undefined4 **)(param_1 + 0x78) = puVar7;
          goto LAB_004a1038;
        }
        if (iVar6 != 0) {
          puVar2 = *(undefined4 **)(iVar6 + 4);
        }
        if (iVar6 != 0 && puVar2 != (undefined4 *)0x0) {
          local_38 = param_1;
          uStack_34 = param_2;
          uStack_30 = param_3;
          local_2c = uVar1;
          local_28 = iVar3;
          (**(code **)*puVar2)(puVar2,&local_38);
        }
      }
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x74) + (iVar3 - 1U));
      puVar7 = (undefined4 *)((uint)puVar2 & ~(iVar3 - 1U));
      puVar4 = (undefined4 *)((int)puVar7 + uVar1);
      if (puVar4 < puVar7) {
        if (iVar6 != 0) {
          puVar2 = *(undefined4 **)(iVar6 + 4);
        }
        if (iVar6 != 0 && puVar2 != (undefined4 *)0x0) {
          local_38 = param_1;
          uStack_34 = param_2;
          uStack_30 = param_3;
          local_2c = uVar1;
          local_28 = iVar3;
          (**(code **)*puVar2)(puVar2,&local_38);
        }
      }
      else {
        puVar2 = *(undefined4 **)(param_1 + 0x78);
        if (puVar4 <= puVar2) {
          *(undefined4 **)(param_1 + 0x74) = puVar4;
LAB_004a1038:
          if (iVar5 != 0) {
            func_0010EEE0(iVar5);
          }
          return puVar7;
        }
        if (iVar6 != 0) {
          puVar2 = *(undefined4 **)(iVar6 + 4);
        }
        if (iVar6 != 0 && puVar2 != (undefined4 *)0x0) {
          local_38 = param_1;
          uStack_34 = param_2;
          uStack_30 = param_3;
          local_2c = uVar1;
          local_28 = iVar3;
          (**(code **)*puVar2)(puVar2,&local_38);
        }
      }
    }
    if (iVar5 != 0) {
      func_0010EEE0(iVar5);
    }
  }
  else {
    if (iVar6 != 0) {
      puVar2 = *(undefined4 **)(iVar6 + 4);
    }
    if (iVar6 != 0 && puVar2 != (undefined4 *)0x0) {
      local_38 = param_1;
      uStack_34 = param_2;
      uStack_30 = param_3;
      local_2c = uVar1;
      local_28 = param_3;
      (**(code **)*puVar2)(puVar2,&local_38);
    }
  }
  return (undefined4 *)0x0;
}

