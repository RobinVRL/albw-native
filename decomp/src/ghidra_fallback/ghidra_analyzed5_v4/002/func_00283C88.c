#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern undefined DAT_00283d04;
extern int DAT_00283d0c;
extern char s_chest_00283d10[];

// USA 00283C88 <- EU 00283CB0 (Ghidra, non-matching)
// GLOBAL DAT_00283d04 undefined
// GLOBAL DAT_00283d0c int
// GLOBAL s_chest_00283d10 string

void func_00283C88(int param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_00283d0c;
  local_14 = &DAT_00283d04;
  local_18 = DAT_00283d0c;
  uVar2 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_18);
  *(uint *)(param_1 + 0x840) = uVar2;
  local_14 = s_chest_00283d10;
  local_18 = iVar1;
  uVar2 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_18);
  *(uint *)(param_1 + 0x844) = uVar2;
  return;
}

