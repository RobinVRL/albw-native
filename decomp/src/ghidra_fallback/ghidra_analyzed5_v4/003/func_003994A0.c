#include "ghidra_types.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int DAT_003994d4;
extern char s_SE_PL_Net_SWING_003994ec[];
extern char s_SE_PL_Net_SWING_Lv2_003994d8[];

// USA 003994A0 <- EU 0039947C (Ghidra, non-matching)
// GLOBAL DAT_003994d4 int
// GLOBAL s_SE_PL_Net_SWING_003994ec string
// GLOBAL s_SE_PL_Net_SWING_Lv2_003994d8 string

undefined4 func_003994A0(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_003994d4;
  if ('\x01' < *(char *)(param_1 + 0xc)) {
    local_c = s_SE_PL_Net_SWING_Lv2_003994d8;
    return func_001509A4(*(int *)(param_1 + 4),&local_10,0);
  }
  local_c = s_SE_PL_Net_SWING_003994ec;
  return func_001509A4(*(int *)(param_1 + 4),&local_10,0);
}

