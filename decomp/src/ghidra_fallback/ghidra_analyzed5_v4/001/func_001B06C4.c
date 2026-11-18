#include "ghidra_types.h"

extern int func_0034C8F0(uint *param_1,int param_2,int param_3);
extern int func_004EA9E4(int param_1,int *param_2,undefined4 param_3);
extern int DAT_001b073c;
extern int *DAT_001b0740;
extern char s_SE_PL_Sword_HIT_SWORD_001b0724[];

// USA 001B06C4 <- EU 001B06C4 (Ghidra, non-matching)
// GLOBAL DAT_001b073c int
// GLOBAL DAT_001b0740 int *
// GLOBAL s_SE_PL_Sword_HIT_SWORD_001b0724 string

undefined4 func_001B06C4(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_0034C8F0(*(uint **)(param_1 + 0xa14),0,param_2);
  local_14 = s_SE_PL_Sword_HIT_SWORD_001b0724;
  local_18 = DAT_001b073c;
  func_004EA9E4(*DAT_001b0740,&local_18,param_2 + 0x10);
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0xa24) = (int)*(char *)(*(int *)(param_2 + 0x2c) + 1);
  }
  return 1;
}

