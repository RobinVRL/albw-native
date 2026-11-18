#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_0046019C(int *param_1,int param_2,undefined4 param_3,uint param_4);
extern int func_0047B5E4(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int *DAT_0047a650;
extern int DAT_0047a670;
extern char s_SE_S_ITEM_SHORT_CUT_START_0047a654[];

// USA 0047A614 <- EU 0047A5EC (Ghidra, non-matching)
// GLOBAL DAT_0047a650 int *
// GLOBAL DAT_0047a670 int
// GLOBAL s_SE_S_ITEM_SHORT_CUT_START_0047a654 string

undefined4 func_0047A614(int param_1)

{
  undefined4 in_r2;
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_0012C790(*(int *)(param_1 + 0x1f8));
  if (*(char *)(param_1 + 0x310) == '\0') {
    func_0047B5E4(param_1);
  }
  if (*(int **)(*DAT_0047a650 + 0xe8) != (int *)0x0) {
    func_0046019C(*(int **)(*DAT_0047a650 + 0xe8),2,in_r2,in_r3);
  }
  local_c = s_SE_S_ITEM_SHORT_CUT_START_0047a654;
  local_10 = DAT_0047a670;
  return func_00533078(*(undefined4 *)(param_1 + 500),&local_10,0);
}

