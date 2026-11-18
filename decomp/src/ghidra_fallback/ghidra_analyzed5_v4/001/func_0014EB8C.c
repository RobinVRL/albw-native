#include "ghidra_types.h"

extern int func_00435BE8(int param_1,undefined2 *param_2);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int *DAT_0014ebfc;

// USA 0014EB8C <- EU 0014EB8C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:2 undefined2
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:2 undefined2
// GLOBAL DAT_0014ebfc int *

undefined4
func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5,
             undefined4 param_6,undefined2 param_7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar1 = func_004EDEA0(param_1,param_4);
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined2 *)(param_1 + 0x32) = param_7;
  if (param_3 == (undefined2 *)0x0) {
    uVar1 = 0;
  }
  *(undefined2 *)(param_1 + 0x18) = param_5;
  if (param_3 != (undefined2 *)0x0) {
    func_00435BE8(param_1 + 0x20,param_3);
    func_004A8BFC(*DAT_0014ebfc,param_1,(ushort)param_3[2] & 0xff);
    uVar1 = 1;
  }
  return uVar1;
}

