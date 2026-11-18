#include "ghidra_types.h"

extern int func_00440CE4(int param_1);
extern int func_004EC690(int param_1,int param_2,undefined2 param_3);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int DAT_00486c2c;
extern int *DAT_00486c30;
extern char s_SE_S_BOARD_START_00486c18[];

// USA 00486BF8 <- EU 00486BD0 (Ghidra, non-matching)
// GLOBAL DAT_00486c2c int
// GLOBAL DAT_00486c30 int *
// GLOBAL s_SE_S_BOARD_START_00486c18 string

undefined4 func_00486BF8(int param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_00440CE4(param_1);
  piVar1 = DAT_00486c30;
  local_10 = DAT_00486c2c;
  local_c = s_SE_S_BOARD_START_00486c18;
  func_00587F74(*DAT_00486c30,&local_10,0);
  return func_004EC690(*piVar1,0,0);
}

