#include "ghidra_types.h"

extern int func_00489D04(int *param_1,int param_2);

// USA 00494374 <- EU 0049434C (Ghidra, non-matching)

int func_00494374(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  if (param_1[0x14] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 8);
    bVar3 = iVar1 == 0;
    if (bVar3) {
      iVar1 = *(int *)(param_2 + 0x10);
    }
    if (bVar3 && iVar1 == 0) {
      local_18 = 0;
      local_14 = 0;
      iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x1c))((int *)param_1[0x14],param_2,&local_18);
      iVar1 = 0;
      if (iVar2 != 0) {
        *(undefined4 *)(param_2 + 0x1c) = local_14;
        *(undefined1 *)(param_2 + 0x24) = 0;
        *(undefined4 *)(param_2 + 0x20) = local_14;
        return iVar2;
      }
    }
    else {
      iVar1 = func_00489D04(param_1,param_2);
    }
  }
  return iVar1;
}

