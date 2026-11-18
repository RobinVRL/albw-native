#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern undefined DAT_004da6ac;
extern int DAT_004da6b4;
extern char s_chest_004da6b8[];

// USA 004DA680 <- EU 004DA658 (Ghidra, non-matching)
// GLOBAL DAT_004da6ac undefined
// GLOBAL DAT_004da6b4 int
// GLOBAL s_chest_004da6b8 string

void func_004DA680(int param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_004da6b4;
  local_14 = &DAT_004da6ac;
  local_18 = DAT_004da6b4;
  uVar2 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_18);
  *(uint *)(param_1 + 0x840) = uVar2;
  local_14 = s_chest_004da6b8;
  local_18 = iVar1;
  uVar2 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_18);
  *(uint *)(param_1 + 0x844) = uVar2;
  return;
}

