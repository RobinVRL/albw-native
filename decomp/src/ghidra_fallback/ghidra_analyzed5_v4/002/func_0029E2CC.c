#include "ghidra_types.h"

extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_004289CC(int param_1,int *param_2);
extern undefined4 DAT_0029e310;
extern char s_T_Message_00_0029e314[];
extern char s_T_Message_01_0029e324[];

// USA 0029E2CC <- EU 0029E2A8 (Ghidra, non-matching)
// GLOBAL DAT_0029e310 undefined4
// GLOBAL s_T_Message_00_0029e314 string
// GLOBAL s_T_Message_01_0029e324 string

undefined4 func_0029E2CC(int param_1,int param_2)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  undefined4 in_r2;
  int in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_10 = DAT_0029e310;
    if (param_2 == 0) {
      local_c = s_T_Message_01_0029e324;
      func_004289CC(*(int *)(param_1 + 0x1c),&local_10);
      uVar1 = extraout_r1_00;
    }
    else {
      local_c = s_T_Message_00_0029e314;
      func_004289CC(*(int *)(param_1 + 0x1c),&local_10);
      uVar1 = extraout_r1;
    }
    return func_001B6C2C(*(int **)(param_1 + 0x1c),uVar1,in_r2,in_r3);
  }
  return 0;
}

