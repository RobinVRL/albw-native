#include "ghidra_types.h"

extern int func_003178B4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4, int param_5,undefined4 *param_6,int param_7);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00663434(undefined4 *param_1,undefined1 param_2);

// USA 002C81E8 <- EU 002C81C4 (Ghidra, non-matching)

undefined4 func_002C81E8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 ((undefined4 *)(albw_frame + 0x10))
  sVar1 = *(short *)(param_1 + 0x2c);
  uVar2 = 5;
  if (sVar1 == 0) {
    uVar2 = 3;
  }
  else if (sVar1 == 1) {
    uVar2 = 4;
  }
  else if (sVar1 == 2) {
    uVar2 = 1;
  }
  else if (sVar1 != 3) {
    uVar2 = 2;
  }
  local_14 = *(undefined4 *)(param_1 + 0x2cc);
  local_10[0] = *(undefined4 *)(param_1 + 0x20);
  func_003178B4((undefined4 *)(param_1 + 0x3d0),(undefined4 *)(param_1 + 1000),&local_14,uVar2,1,
                local_10,(uint)(*(short *)(param_1 + 0x38) != 0));
  if (*(short *)(param_1 + 0x36) != 0) {
    func_00588C14(param_1,0,1);
  }
  return func_00663434((undefined4 *)(param_1 + 0x40c),4);
}

