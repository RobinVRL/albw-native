#include "ghidra_types.h"

extern int func_004A1CC8(int param_1,undefined4 param_2,int param_3);
extern int func_004A1F20(int param_1);
extern int func_004A66FC(int param_1,undefined4 param_2,int param_3);
extern int func_004A6784(int param_1);
extern int *DAT_00352584;

// USA 003524B0 <- EU 0035248C (Ghidra, non-matching)
// GLOBAL DAT_00352584 int *

undefined4 func_003524B0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint in_r1;
  uint uVar3;
  uint extraout_r1;
  float fVar4;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = *(uint *)(iVar1 + 0xc);
    in_r1 = uVar3;
  }
  if ((iVar1 != 0 && in_r1 != 0) && -1 < (int)uVar3) {
    fVar4 = *(float *)(*(int *)(iVar1 + 0x14) + 8);
    if (*(char *)(param_1 + 0x3b) != '\0') {
      func_004A1CC8(*(int *)(param_1 + 0x20),(int)fVar4,0);
      in_r1 = extraout_r1;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 != 0) {
      in_r1 = (uint)*(byte *)(param_1 + 0x3c);
    }
    if (iVar1 != 0 && in_r1 != 0) {
      func_004A66FC(iVar1,(int)fVar4,0);
    }
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    if ((*(char *)(iVar1 + 0x30) == '\0') || ((*(byte *)(iVar1 + 0x168) & 1) == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x42) = uVar2;
  }
  func_004A1F20(*(int *)(param_1 + 0x20));
  if (((*(int *)(param_1 + 0x24) != 0) && (*(char *)(*DAT_00352584 + 0x79) == '\0')) &&
     (*(char *)(*DAT_00352584 + 0x7a) == '\0')) {
    return func_004A6784(*(int *)(param_1 + 0x24));
  }
  return 0;
}

