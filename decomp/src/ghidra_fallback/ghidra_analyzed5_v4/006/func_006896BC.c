#include "ghidra_types.h"

extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern undefined4 DAT_006896f4;
extern undefined4 DAT_006896f8;
extern undefined4 DAT_006896fc;

// USA 006896BC <- EU 00689694 (Ghidra, non-matching)
// GLOBAL DAT_006896f4 undefined4
// GLOBAL DAT_006896f8 undefined4
// GLOBAL DAT_006896fc undefined4

undefined4 *
func_006896BC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define uStack_8 (*(uint *)(albw_frame + 0x8))
  #define uStack_4 (*(undefined4 *)(albw_frame + 0xc))
  param_1[1] = param_1 + 3;
  param_1[2] = 0x20;
  *(undefined1 *)(param_1[1] + 0x1f) = 0;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = DAT_006896fc;
  uStack_8 = param_3;
  uStack_4 = param_4;
  func_00111A20((int)param_1,param_2,&uStack_8);
  return param_1;
}

