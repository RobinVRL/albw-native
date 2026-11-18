#include "ghidra_types.h"

extern int func_00297138(int param_1,int *param_2);
extern int func_0029E230(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern undefined4 *DAT_0025e2dc;
extern undefined4 DAT_0025e2e0;
extern int *DAT_0025e2e4;
extern int *DAT_0025e2e8;

// USA 0025E25C <- EU 0025E284 (Ghidra, non-matching)
// GLOBAL DAT_0025e2dc undefined4 *
// GLOBAL DAT_0025e2e0 undefined4
// GLOBAL DAT_0025e2e4 int *
// GLOBAL DAT_0025e2e8 int *

undefined4 func_0025E25C(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  software_interrupt(0x28);
  *(int *)(param_1 + 0x140) = param_1;
  *(undefined4 *)(param_1 + 0x144) = param_2;
  *(undefined4 *)(param_1 + 0x148) = 0;
  local_c = *DAT_0025e2dc;
  local_10 = DAT_0025e2e0;
  uVar1 = DAT_0025e2e0;
  func_00297138(*DAT_0025e2e4,&local_10);
  return func_0029E230(*DAT_0025e2e8,extraout_r1,uVar1,param_4);
}

