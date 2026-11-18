#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int DAT_003c3d00;

// USA 003C3BC4 <- EU 003C3BA0 (Ghidra, non-matching)
// GLOBAL DAT_003c3d00 int

undefined4 func_003C3BC4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  iVar1 = (**(code **)(*param_1 + 0x13c))(param_1);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = (int)(char)param_1[0x1c];
    if (iVar1 != -1) {
      iVar5 = param_1[0x23];
      pcVar4 = *(code **)(iVar5 + iVar1 * 8);
      if ((pcVar4 != (code *)0x0) ||
         ((uVar6 = *(uint *)(iVar5 + iVar1 * 8 + 4), (uVar6 & 1) != 0 && (uVar6 != 0)))) {
        uVar6 = *(uint *)(iVar5 + iVar1 * 8 + 4);
        piVar2 = (int *)(param_1[0x20] + ((int)uVar6 >> 1));
        if ((uVar6 & 1) != 0) {
          pcVar4 = *(code **)(pcVar4 + *piVar2);
        }
        (*pcVar4)(piVar2,param_2);
      }
    }
    iVar1 = param_1[0x1c];
    *(char *)(param_1 + 0x1c) = (char)param_2;
    param_1[0x1b] = 0;
    *(char *)((int)param_1 + 0x71) = (char)iVar1;
    if (param_1[0x1f] != 0) {
      if ((uint)(int)(char)param_1[0x1c] < (uint)param_1[0x1d]) {
        piVar2 = (int *)(param_1[0x1e] + (char)param_1[0x1c] * 0x24);
      }
      else {
        piVar2 = (int *)param_1[0x1e];
      }
      (**(code **)(*piVar2 + 8))(piVar2);
      local_1c = piVar2[1];
      local_20 = DAT_003c3d00;
      func_0010BEB4(param_1[0x1f],&local_20);
    }
    iVar1 = (int)(char)param_1[0x1c];
    iVar5 = param_1[0x21];
    pcVar4 = *(code **)(iVar5 + iVar1 * 8);
    if ((pcVar4 != (code *)0x0) ||
       ((uVar6 = *(uint *)(iVar5 + iVar1 * 8 + 4), (uVar6 & 1) != 0 && (uVar6 != 0)))) {
      uVar6 = *(uint *)(iVar5 + iVar1 * 8 + 4);
      if ((uVar6 & 1) != 0) {
        pcVar4 = *(code **)(pcVar4 + *(int *)(param_1[0x20] + ((int)uVar6 >> 1)));
      }
      (*pcVar4)((int)(param_1[0x20]) + ((int)uVar6 >> 1));
    }
    uVar3 = 1;
  }
  return uVar3;
}

