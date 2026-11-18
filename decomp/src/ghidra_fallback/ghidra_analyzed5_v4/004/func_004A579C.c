#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066F90C(undefined4 *param_1,undefined1 param_2);
extern float DAT_004a57f4;
extern float DAT_004a57f8;
extern int DAT_004a580c;
extern char s_SE_S_DECIDE_S_004a57fc[];

// USA 004A579C <- EU 004A5774 (Ghidra, non-matching)
// GLOBAL DAT_004a57f4 float
// GLOBAL DAT_004a57f8 float
// GLOBAL DAT_004a580c int
// GLOBAL s_SE_S_DECIDE_S_004a57fc string

undefined4 func_004A579C(int param_1)

{
  float fparam_0;
  ushort *puVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x62) = 2;
  fparam_0 = DAT_004a57f4;
  *(undefined2 *)(param_1 + 0x60) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x60),fparam_0);
  func_002317C0((undefined2 *)(param_1 + 0x6c),DAT_004a57f8);
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 | 2;
  func_0066F90C((undefined4 *)(param_1 + 0x20),1);
  local_c = s_SE_S_DECIDE_S_004a57fc;
  local_10 = DAT_004a580c;
  return func_00533078(param_1,&local_10,0);
}

