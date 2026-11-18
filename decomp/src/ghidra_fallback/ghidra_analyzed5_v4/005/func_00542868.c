#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern int DAT_005428b4;
extern char s_Giibo_nucleus_005428a4[];

// USA 00542868 <- EU 00542840 (Ghidra, non-matching)
// GLOBAL DAT_005428b4 int
// GLOBAL s_Giibo_nucleus_005428a4 string

void func_00542868(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  local_14 = s_Giibo_nucleus_005428a4;
  local_18 = DAT_005428b4;
  uVar1 = func_00564A78(*(int *)(param_1 + 0x40c),&local_18);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) + uVar1 * 0x30;
  *param_2 = *(undefined4 *)(iVar2 + 0xc);
  param_2[1] = *(undefined4 *)(iVar2 + 0x1c);
  param_2[2] = *(undefined4 *)(iVar2 + 0x2c);
  return;
}

