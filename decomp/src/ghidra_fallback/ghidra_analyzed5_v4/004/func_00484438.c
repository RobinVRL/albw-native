#include "ghidra_types.h"

extern int func_00533048(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0055BF20(int param_1);
extern int func_0066F030(undefined4 *param_1,undefined1 param_2);
extern int DAT_00484490;
extern char s_SE_S_CROSS_RESULT_GAUGE_00484478[];

// USA 00484438 <- EU 00484410 (Ghidra, non-matching)
// GLOBAL DAT_00484490 int
// GLOBAL s_SE_S_CROSS_RESULT_GAUGE_00484478 string

undefined4 func_00484438(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = func_0055BF20(*(int *)(param_1 + 0xe4));
  if ((iVar1 != 0) && (iVar1 = func_0055BF20(*(int *)(param_1 + 0xe8)), iVar1 != 0)) {
    return func_0066F030((undefined4 *)(param_1 + 0x74),2);
  }
  local_c = s_SE_S_CROSS_RESULT_GAUGE_00484478;
  local_10 = DAT_00484490;
  return func_00533048(param_1,&local_10,0);
}

