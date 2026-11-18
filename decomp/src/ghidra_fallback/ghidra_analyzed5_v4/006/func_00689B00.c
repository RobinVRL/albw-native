#include "ghidra_types.h"

extern int func_00499548(int param_1,undefined4 param_2,uint *param_3);
extern undefined4 DAT_00689b34;
extern undefined4 DAT_00689b38;
extern undefined4 DAT_00689b3c;

// USA 00689B00 <- EU 00689AD8 (Ghidra, non-matching)
// GLOBAL DAT_00689b34 undefined4
// GLOBAL DAT_00689b38 undefined4
// GLOBAL DAT_00689b3c undefined4

undefined4 *
func_00689B00(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define uStack_8 (*(uint *)(albw_frame + 0x8))
  #define uStack_4 (*(undefined4 *)(albw_frame + 0xc))
  param_1[1] = param_1 + 3;
  param_1[2] = 0x10;
  *(undefined2 *)(param_1[1] + 0x1e) = 0;
  *(undefined2 *)param_1[1] = 0;
  *param_1 = DAT_00689b3c;
  uStack_8 = param_3;
  uStack_4 = param_4;
  func_00499548((int)param_1,param_2,&uStack_8);
  return param_1;
}

