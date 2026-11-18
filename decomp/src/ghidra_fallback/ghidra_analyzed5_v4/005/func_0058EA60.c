#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern int DAT_0058eaa8;

// USA 0058EA60 <- EU 0058EA38 (Ghidra, non-matching)
// GLOBAL DAT_0058eaa8 int

int func_0058EA60(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(iVar1 + 0x16b) == '\0') {
    iVar1 = iVar1 + 0x104;
  }
  else {
    local_10 = DAT_0058eaa8;
    uStack_c = param_2;
    uVar2 = func_00564A78(*(int *)(param_1 + 0xa0),&local_10);
    if (uVar2 == 0xffff) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x24) + 0x14) + uVar2 * 0x30;
  }
  return iVar1;
}

