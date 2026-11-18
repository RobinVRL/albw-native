#include "ghidra_types.h"

extern int func_00440E38(int param_1);
extern int func_004EC8E8(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_00486c74;
extern int DAT_00486c88;
extern char s_SE_S_BOARD_END_00486c78[];

// USA 00486C5C <- EU 00486C34 (Ghidra, non-matching)
// GLOBAL DAT_00486c74 int *
// GLOBAL DAT_00486c88 int
// GLOBAL s_SE_S_BOARD_END_00486c78 string

undefined4 func_00486C5C(int param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_00440E38(param_1);
  piVar1 = DAT_00486c74;
  func_004EC8E8(*DAT_00486c74);
  local_c = s_SE_S_BOARD_END_00486c78;
  local_10 = DAT_00486c88;
  return func_00587F74(*piVar1,&local_10,0);
}

