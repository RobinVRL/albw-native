#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern undefined DAT_001cb978;
extern int DAT_001cb980;

// USA 001CB93C <- EU 001CB93C (Ghidra, non-matching)
// GLOBAL DAT_001cb978 undefined
// GLOBAL DAT_001cb980 int

void func_001CB93C(int param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined * *)(albw_frame + 0x4))
  local_c = &DAT_001cb978;
  local_10 = DAT_001cb980;
  uVar1 = func_00564A78(*(int *)(param_1 + 0x7a0),&local_10);
  *(uint *)(param_1 + 0x840) = uVar1;
  *(undefined4 *)(param_1 + 0x844) = 1;
  return;
}

