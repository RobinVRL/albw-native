#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern undefined DAT_0050f590;
extern int DAT_0050f598;
extern char s_chest_0050f59c[];

// USA 0050F564 <- EU 0050F53C (Ghidra, non-matching)
// GLOBAL DAT_0050f590 undefined
// GLOBAL DAT_0050f598 int
// GLOBAL s_chest_0050f59c string

void func_0050F564(int param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_0050f598;
  local_14 = &DAT_0050f590;
  local_18 = DAT_0050f598;
  uVar2 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_18);
  *(uint *)(param_1 + 0x840) = uVar2;
  local_14 = s_chest_0050f59c;
  local_18 = iVar1;
  uVar2 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_18);
  *(uint *)(param_1 + 0x844) = uVar2;
  return;
}

