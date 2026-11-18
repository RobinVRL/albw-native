#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int *DAT_004a0544;

// USA 004A0454 <- EU 004A042C (Ghidra, non-matching)
// GLOBAL DAT_004a0544 int *

undefined4 * func_004A0454(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define piStack_2c (*(int * *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  iVar5 = *DAT_004a0544;
  piVar1 = DAT_004a0544;
  if (((param_3 < 0) || (piVar1 = *(int **)(param_1 + 0x74), (param_3 - 1U & (uint)piVar1) != 0)) ||
     (piVar1 < param_2)) {
    if (iVar5 != 0) {
      piVar1 = *(int **)(iVar5 + 4);
    }
    if (iVar5 != 0 && piVar1 != (int *)0x0) {
      local_30 = param_1;
      piStack_2c = param_2;
      local_28 = param_3;
      local_24 = param_2;
      local_20 = param_3;
      (**(code **)*piVar1)(piVar1,&local_30);
    }
  }
  else {
    puVar2 = (undefined4 *)(param_1 + 0x54);
    puVar3 = puVar2;
    puVar4 = (undefined4 *)0x0;
    if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
      puVar3 = (undefined4 *)func_0010C0B8((int)puVar2);
      puVar4 = puVar2;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x84);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x84) = *puVar2;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x74);
      if (puVar4 != (undefined4 *)0x0) {
        func_0010EEE0((int)puVar4);
      }
      return puVar2;
    }
    if (iVar5 != 0) {
      puVar3 = *(undefined4 **)(iVar5 + 4);
    }
    if (iVar5 != 0 && puVar3 != (undefined4 *)0x0) {
      local_24 = *(int **)(param_1 + 0x74);
      local_30 = param_1;
      piStack_2c = param_2;
      local_28 = param_3;
      local_20 = param_3;
      (**(code **)*puVar3)(puVar3,&local_30);
    }
    if (puVar4 != (undefined4 *)0x0) {
      func_0010EEE0((int)puVar4);
    }
  }
  return (undefined4 *)0x0;
}

