#include "ghidra_types.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int DAT_0038ded8;
extern char s_SE_PL_Net_SWING_0038def0[];
extern char s_SE_PL_Net_SWING_Lv2_0038dedc[];

// USA 0038DE90 <- EU 0038DE6C (Ghidra, non-matching)
// GLOBAL DAT_0038ded8 int
// GLOBAL s_SE_PL_Net_SWING_0038def0 string
// GLOBAL s_SE_PL_Net_SWING_Lv2_0038dedc string

undefined4 func_0038DE90(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(short *)(*(int *)(param_1 + 0x2c) + 0x42) == 0x9d) {
    local_10 = DAT_0038ded8;
    if (*(uint *)(*(int *)(param_1 + 0x28) + 0x468) < 3) {
      local_c = s_SE_PL_Net_SWING_0038def0;
      return func_001509A4(*(int *)(param_1 + 0x28),&local_10,0);
    }
    local_c = s_SE_PL_Net_SWING_Lv2_0038dedc;
    func_001509A4(*(int *)(param_1 + 0x28),&local_10,0);
  }
  return 0;
}

