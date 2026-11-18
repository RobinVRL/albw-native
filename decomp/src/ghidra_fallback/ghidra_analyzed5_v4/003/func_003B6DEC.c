#include "ghidra_types.h"

extern int func_0032C750(int param_1,float *param_2,uint param_3);
extern float DAT_003b6ea4;

// USA 003B6DEC <- EU 003B6DC8 (Ghidra, non-matching)
// GLOBAL DAT_003b6ea4 float

undefined4 func_003B6DEC(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  iVar4 = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar5 = *(int *)(iVar4 + 0xa48);
  }
  else {
    iVar5 = *(int *)(iVar4 + 0x970);
  }
  if (*(char *)(iVar5 + 0x30) != '\0') {
    if (*(int *)(param_1 + 8) == param_3) {
      iVar1 = 1;
    }
    else if (*(int *)(param_1 + 0xc) == param_3) {
      iVar1 = 2;
    }
    else {
      if (*(int *)(param_1 + 0x10) != param_3) {
        return 0;
      }
      iVar1 = 0;
    }
    if (*(char *)(param_1 + 0x14) == '\0') {
      iVar2 = 3;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = iVar2 + iVar1;
    if (uVar3 < 3) {
      iVar4 = iVar4 + 0x8c4;
    }
    else {
      uVar3 = uVar3 - 3;
      iVar4 = iVar4 + 0x99c;
    }
    func_0032C750(iVar4,&local_18,uVar3);
    local_14 = local_14 + DAT_003b6ea4;
    iVar4 = *(int *)(*(int *)(iVar5 + 0x24) + 0x14) + param_3 * 0x30;
    *(float *)(iVar4 + 0xc) = local_18;
    *(float *)(iVar4 + 0x1c) = local_14;
    *(undefined4 *)(iVar4 + 0x2c) = local_10;
    return 1;
  }
  return 0;
}

