#include "ghidra_types.h"

extern int func_003A0B1C(int param_1,uint param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int DAT_00480c34;
extern char s_SE_S_CROSS_RECORD_CHANGE_00480c18[];

// USA 00480C00 <- EU 00480BD8 (Ghidra, non-matching)
// GLOBAL DAT_00480c34 int
// GLOBAL s_SE_S_CROSS_RECORD_CHANGE_00480c18 string

undefined4 func_00480C00(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_003A0B1C(*(int *)(param_1 + 0x10c),*(uint *)(param_1 + 0x11c));
  local_c = s_SE_S_CROSS_RECORD_CHANGE_00480c18;
  local_10 = DAT_00480c34;
  return func_00533078(param_1,&local_10,0);
}

