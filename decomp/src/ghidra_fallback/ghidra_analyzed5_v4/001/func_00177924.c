#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00659024(undefined4 *param_1,undefined1 param_2);
extern int DAT_001779b0;
extern char s_SE_FanL_MOVE_START_001779b4[];
extern char s_SE_FanS_MOVE_START_001779c8[];

// USA 00177924 <- EU 00177924 (Ghidra, non-matching)
// GLOBAL DAT_001779b0 int
// GLOBAL s_SE_FanL_MOVE_START_001779b4 string
// GLOBAL s_SE_FanS_MOVE_START_001779c8 string

void func_00177924(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if ((uint)param_1[0x129] < (uint)param_1[0x12a]) {
    param_1[0x129] = param_1[0x129] + 1;
  }
  else {
    local_10 = DAT_001779b0;
    if ((char)param_1[300] == '\0') {
      local_c = s_SE_FanS_MOVE_START_001779c8;
      func_00150A84(param_1,&local_10,0);
    }
    else {
      local_c = s_SE_FanL_MOVE_START_001779b4;
      func_00150A84(param_1,&local_10,0);
    }
    func_00659024(param_1 + 0x103,2);
  }
  return;
}

