#include "ghidra_types.h"

extern int func_0052A05C(int param_1,uint param_2);
extern int func_0052A07C(int param_1,uint param_2);
extern int func_0052A1B4(int param_1,uint param_2);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_005822fc;

// USA 005822A0 <- EU 00582278 (Ghidra, non-matching)
// GLOBAL DAT_005822fc int *

bool func_005822A0(int param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  
  if (param_2 == 0) {
switchD_00582284_default:
    return false;
  }
  switch(param_3) {
  case 0:
    bVar1 = false;
    if ((*(uint *)(param_1 + 0x76a4 + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) != 0) {
      bVar1 = true;
    }
    break;
  case 1:
    bVar1 = func_0052A07C(*(int *)(param_1 + 0x40),param_2);
    return bVar1;
  case 2:
    bVar1 = func_0052A1B4(*(int *)(param_1 + 0x40),param_2);
    return bVar1;
  case 3:
    bVar1 = func_0052A05C(*(int *)(param_1 + 0x40),param_2);
    return bVar1;
  case 4:
    bVar1 = false;
    if (*DAT_005822fc != 0) {
      bVar1 = func_00584B94(*DAT_005822fc,param_2 & 0xffff);
      return bVar1;
    }
    break;
  default:
    goto switchD_00582284_default;
  }
  return bVar1;
}

