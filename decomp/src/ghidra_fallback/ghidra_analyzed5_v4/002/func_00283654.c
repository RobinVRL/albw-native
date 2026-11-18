#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern undefined DAT_002836d0;
extern int DAT_002836d8;
extern char s_chest_002836dc[];

// USA 00283654 <- EU 0028367C (Ghidra, non-matching)
// GLOBAL DAT_002836d0 undefined
// GLOBAL DAT_002836d8 int
// GLOBAL s_chest_002836dc string

void func_00283654(int param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_002836d8;
  local_14 = &DAT_002836d0;
  local_18 = DAT_002836d8;
  uVar2 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_18);
  *(uint *)(param_1 + 0x840) = uVar2;
  local_14 = s_chest_002836dc;
  local_18 = iVar1;
  uVar2 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_18);
  *(uint *)(param_1 + 0x844) = uVar2;
  return;
}

