#include "ghidra_types.h"

extern int func_00691884(int *param_1,int *param_2);
extern int DAT_004b0810;

// USA 004B0730 <- EU 004B0708 (Ghidra, non-matching)
// GLOBAL DAT_004b0810 int

void func_004B0730(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  piVar2 = (int *)(param_1 + 0x1418);
  if (param_2 < 0x10) {
    piVar2 = piVar2 + param_2;
  }
  if ((int *)*piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*(int *)*piVar2 + 0xc))((int *)*piVar2);
    (**(code **)(*param_3 + 8))(param_3);
    iVar1 = DAT_004b0810;
    local_24 = param_3[1];
    if (*(int *)(iVar3 + 0x20) != 0) {
      iVar4 = *(int *)(iVar3 + 0x20);
      iVar6 = *(int *)(iVar4 + 0x50);
      local_28 = DAT_004b0810;
      for (iVar3 = *(int *)(iVar4 + 0x48) - iVar6; iVar3 != (iVar4 + 0x44) - iVar6;
          iVar3 = *(int *)(iVar3 + iVar6 + 4) - iVar6) {
        local_1c = *(undefined4 *)(*(int *)(iVar3 + 8) + 4);
        local_20 = iVar1;
        iVar5 = func_00691884(&local_28,&local_20);
        if (iVar5 != 0) {
          iVar5 = *(int *)(iVar3 + 0x20);
          if (((iVar5 != 0) && (*(int *)(iVar3 + 0x24) == *(int *)(iVar5 + 0xc))) &&
             (0 < *(int *)(iVar5 + 4))) {
            *(undefined1 *)(iVar5 + 0x280) = 1;
          }
          *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffb | 8;
        }
      }
    }
  }
  return;
}

