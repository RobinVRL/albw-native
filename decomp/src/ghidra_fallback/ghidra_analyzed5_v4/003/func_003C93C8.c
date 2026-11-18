#include "ghidra_types.h"

extern int func_003C97C4(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_0056130C(int param_1);
extern undefined4 DAT_003c93f8;

// USA 003C93C8 <- EU 003C93A4 (Ghidra, non-matching)
// GLOBAL DAT_003c93f8 undefined4

undefined4 * func_003C93C8(undefined4 *param_1)

{
  undefined4 extraout_r1;
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  *param_1 = DAT_003c93f8;
  iVar1 = param_1[2];
  iVar2 = param_1[3];
  if (iVar1 != 0 || iVar2 != 0) {
    local_18 = func_0056130C((int)param_1);
    func_003C97C4(&local_18,extraout_r1,iVar1,iVar2);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[1] = 0;
  return param_1;
}

