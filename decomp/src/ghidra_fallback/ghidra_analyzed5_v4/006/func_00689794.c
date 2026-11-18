#include "ghidra_types.h"

extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern undefined4 DAT_006897cc;
extern undefined4 DAT_006897d0;
extern undefined4 DAT_006897d4;

// USA 00689794 <- EU 0068976C (Ghidra, non-matching)
// GLOBAL DAT_006897cc undefined4
// GLOBAL DAT_006897d0 undefined4
// GLOBAL DAT_006897d4 undefined4

undefined4 *
func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define uStack_8 (*(uint *)(albw_frame + 0x8))
  #define uStack_4 (*(undefined4 *)(albw_frame + 0xc))
  param_1[1] = param_1 + 3;
  param_1[2] = 0x40;
  *(undefined1 *)(param_1[1] + 0x3f) = 0;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = DAT_006897d4;
  uStack_8 = param_3;
  uStack_4 = param_4;
  func_00111A20((int)param_1,param_2,&uStack_8);
  return param_1;
}

