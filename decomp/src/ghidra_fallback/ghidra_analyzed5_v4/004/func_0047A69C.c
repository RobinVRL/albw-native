#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_0046019C(int *param_1,int param_2,undefined4 param_3,uint param_4);
extern int func_0047B5E4(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int *DAT_0047a6d8;
extern int DAT_0047a6f8;
extern char s_SE_S_ITEM_SHORT_CUT_START_0047a6dc[];

// USA 0047A69C <- EU 0047A674 (Ghidra, non-matching)
// GLOBAL DAT_0047a6d8 int *
// GLOBAL DAT_0047a6f8 int
// GLOBAL s_SE_S_ITEM_SHORT_CUT_START_0047a6dc string

undefined4 func_0047A69C(int param_1)

{
  undefined4 in_r2;
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_0012C790(*(int *)(param_1 + 500));
  if (*(char *)(param_1 + 0x310) == '\0') {
    func_0047B5E4(param_1);
  }
  if (*(int **)(*DAT_0047a6d8 + 0xe8) != (int *)0x0) {
    func_0046019C(*(int **)(*DAT_0047a6d8 + 0xe8),1,in_r2,in_r3);
  }
  local_c = s_SE_S_ITEM_SHORT_CUT_START_0047a6dc;
  local_10 = DAT_0047a6f8;
  return func_00533078(*(undefined4 *)(param_1 + 0x1f8),&local_10,0);
}

