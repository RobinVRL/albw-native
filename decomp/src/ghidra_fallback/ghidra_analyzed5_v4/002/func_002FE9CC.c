#include "ghidra_types.h"

extern int func_0010E0E0(int *param_1);
extern int func_003CC054(int *param_1,int param_2);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FF760(void);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern undefined4 *DAT_002fea10;
extern undefined4 DAT_002fea14;

// USA 002FE9CC <- EU 002FE9A8 (Ghidra, non-matching)
// GLOBAL DAT_002fea10 undefined4 *
// GLOBAL DAT_002fea14 undefined4

int func_002FE9CC(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 extraout_r1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  local_10 = param_4;
  func_0010E0E0((int *)*DAT_002fea10);
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_006003D8(DAT_002fea14,(int *)(param_1 + 0x24));
  func_005FF418(*(uint *)(param_1 + (uint)*(byte *)(param_1 + 0x44) * 4 + 0x28),extraout_r1,param_3)
  ;
  func_005FF760();
  func_006003D8(0x208,&local_10);
  func_003CC054((int *)(param_1 + 0x10),local_10);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  return param_1 + 0x10;
}

