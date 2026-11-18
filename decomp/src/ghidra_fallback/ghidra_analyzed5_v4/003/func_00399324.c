#include "ghidra_types.h"

extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int *DAT_0039937c;
extern int *DAT_00399380;
extern int DAT_00399384;
extern char s_SE_PL_Net_SWING_0039939c[];
extern char s_SE_PL_Net_SWING_Lv2_00399388[];

// USA 00399324 <- EU 00399300 (Ghidra, non-matching)
// GLOBAL DAT_0039937c int *
// GLOBAL DAT_00399380 int *
// GLOBAL DAT_00399384 int
// GLOBAL s_SE_PL_Net_SWING_0039939c string
// GLOBAL s_SE_PL_Net_SWING_Lv2_00399388 string

undefined4 func_00399324(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)(param_1 + 0x38) = 0;
  func_004A8BFC(*DAT_0039937c,param_1 + 0x98,3);
  local_10 = DAT_00399384;
  if ('\x01' < *(char *)(param_1 + 0xc)) {
    local_c = s_SE_PL_Net_SWING_Lv2_00399388;
    return func_004EABB8(*DAT_00399380,&local_10,(undefined4 *)0x0);
  }
  local_c = s_SE_PL_Net_SWING_0039939c;
  return func_004EABB8(*DAT_00399380,&local_10,(undefined4 *)0x0);
}

