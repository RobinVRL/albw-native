#include "ghidra_types.h"

extern int func_001E89AC(int param_1);
extern int func_0034F5B8(int param_1,float *param_2,uint param_3,int param_4);
extern int func_00351964(undefined4 *param_1,undefined4 *param_2,undefined1 param_3);
extern int *DAT_001e8264;

// USA 001E81A8 <- EU 001E81A8 (Ghidra, non-matching)
// GLOBAL DAT_001e8264 int *

void func_001E81A8(int param_1,float *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  local_18 = param_4;
  func_001E89AC(param_1);
  iVar1 = *(int *)(param_1 + 0xe30);
  iVar3 = *(int *)(param_1 + 0xe28);
  if (iVar1 < iVar3) {
    *(int *)(param_1 + 0xe30) = iVar1 + 1;
    iVar1 = iVar1 + *(int *)(param_1 + 0xe2c);
    if (iVar3 <= iVar1) {
      iVar1 = iVar1 - iVar3;
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xe24) + iVar1 * 0x2d0);
    if (puVar2 != (undefined4 *)0x0) {
      local_18 = *(int *)(param_1 + 0x10);
      iVar1 = func_00351964(puVar2,&local_18,1);
      goto LAB_001e8218;
    }
  }
  iVar1 = 0;
LAB_001e8218:
  *(int *)(param_1 + 0xe34) = iVar1;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  func_0034F5B8(iVar1,param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0xefc) = 0xffffffff;
  *(bool *)(param_1 + 0xef8) =
       *(char *)(*DAT_001e8264 + 0x18) == '\a' || *(char *)(*DAT_001e8264 + 0x18) == '%';
  return;
}

