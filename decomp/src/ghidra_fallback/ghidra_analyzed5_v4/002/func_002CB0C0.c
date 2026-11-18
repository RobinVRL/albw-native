#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern undefined4 DAT_002cb0e4;
extern undefined4 DAT_002cb0e8;

// USA 002CB0C0 <- EU 002CB09C (Ghidra, non-matching)
// GLOBAL DAT_002cb0e4 undefined4
// GLOBAL DAT_002cb0e8 undefined4

void func_002CB0C0(int param_1,int *param_2)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  local_18 = DAT_002cb0e8;
  local_14 = DAT_002cb0e4;
  piVar1 = func_0010B954(0x800,(int)&local_18,param_2,1,0);
  *(int **)(param_1 + 0x10) = piVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

