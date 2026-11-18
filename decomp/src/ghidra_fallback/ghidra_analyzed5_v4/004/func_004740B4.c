#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00474138(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern undefined DAT_004740e4;
extern int DAT_004740fc;
extern int *DAT_00474100;
extern char s__SE_S_FLOOR_CHANGE_004740e7[];
extern undefined4 _DAT_004740e4;

// USA 004740B4 <- EU 0047408C (Ghidra, non-matching)
// GLOBAL DAT_004740e4 undefined
// GLOBAL DAT_004740fc int
// GLOBAL DAT_00474100 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_004740B4(int param_1)

{
  undefined4 extraout_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_001B6C04(param_1);
  func_002317C0((undefined2 *)(param_1 + 0x74),ALBW_AS_F32(_DAT_004740e4));
  func_00474138(param_1,extraout_r1,in_r2,in_r3);
  local_10 = DAT_004740fc;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x84);
  local_c = s__SE_S_FLOOR_CHANGE_004740e7 + 1;
  return func_00587F74(*DAT_00474100,&local_10,0);
}

