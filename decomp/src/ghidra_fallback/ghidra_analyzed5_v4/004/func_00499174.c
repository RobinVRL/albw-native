#include "ghidra_types.h"

extern int func_00410E38(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00410F1C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00569658(int param_1);
extern int func_0058FA08();
extern int func_0058FA5C();
extern int DAT_004991b8;

// USA 00499174 <- EU 0049914C (Ghidra, non-matching)
// GLOBAL DAT_004991b8 int

undefined4 func_00499174(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar3;
  undefined4 in_r2;
  
  iVar2 = DAT_004991b8 + 0x20;
  *param_1 = DAT_004991b8;
  param_1[2] = iVar2;
  bVar1 = func_00569658((int)(param_1 + 2));
  uVar3 = extraout_r1;
  if (bVar1) {
    func_00410E38((int)(param_1 + 2),extraout_r1,in_r2);
    uVar3 = extraout_r1_00;
  }
  if (param_1[0x68] != 0) {
    func_0058FA08(param_1[0x68]);
    param_1[0x68] = 0;
    uVar3 = extraout_r1_01;
  }
  if (param_1[0x69] != 0) {
    func_0058FA08(param_1[0x69]);
    param_1[0x69] = 0;
    uVar3 = extraout_r1_02;
  }
  iVar2 = func_00410F1C(param_1 + 2,uVar3,in_r2);
  return func_0058FA5C(iVar2 + -8);
}

