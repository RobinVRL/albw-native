#include "ghidra_types.h"

extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0047A5B4(int param_1,undefined4 *param_2,int param_3);
extern int func_00579CEC(int param_1);
extern undefined4 DAT_0043d5a4;
extern undefined4 DAT_0043d5a8;

// USA 0043D560 <- EU 0043D540 (Ghidra, non-matching)
// GLOBAL DAT_0043d5a4 undefined4
// GLOBAL DAT_0043d5a8 undefined4

void func_0043D560(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  func_001B6C2C(*(int **)(param_1 + 0x120),param_2,param_3,param_4);
  func_001B6C2C(*(int **)(param_1 + 0x130),extraout_r1,param_3,param_4);
  func_001B6C2C(*(int **)(param_1 + 0x140),extraout_r1_00,param_3,param_4);
  iVar1 = func_00579CEC(*(int *)(param_1 + 0x158));
  if (iVar1 != 0) {
    local_10 = DAT_0043d5a4;
    uStack_c = DAT_0043d5a8;
    func_0047A5B4(*(int *)(param_1 + 0x158),&local_10,(uint)((*(byte *)(param_1 + 0x176) & 1) != 0))
    ;
  }
  return;
}

