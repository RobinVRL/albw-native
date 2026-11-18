#include "ghidra_types.h"

extern int func_0010144C(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_001014EC(void);
extern int func_001017AC(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_00101A70(byte param_1);
extern int func_00101BC8(int param_1);
extern int func_00101BE8(void);
extern int func_001024E0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int *DAT_0014adac;
extern undefined4 *DAT_0014adb0;

// USA 0014AD6C <- EU 0014AD6C (Ghidra, non-matching)
// GLOBAL DAT_0014adac int *
// GLOBAL DAT_0014adb0 undefined4 *

undefined4 func_0014AD6C(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 in_r2;
  
  func_00101BC8(*DAT_0014adac);
  func_00101BE8();
  iVar1 = func_001014EC();
  uVar2 = func_0010144C(iVar1,extraout_r1,in_r2);
  func_001024E0(uVar2,extraout_r1_00,in_r2);
  func_00101A70(0);
  return func_001017AC(0,0,*DAT_0014adb0);
}

