#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00659024(undefined4 *param_1,undefined1 param_2);
extern int DAT_00177084;
extern char s_SE_FanL_MOVE_00177088[];
extern char s_SE_FanL_MOVE_END_00177098[];
extern char s_SE_FanS_MOVE_001770c0[];
extern char s_SE_FanS_MOVE_END_001770ac[];

// USA 00176FB0 <- EU 00176FB0 (Ghidra, non-matching)
// GLOBAL DAT_00177084 int
// GLOBAL s_SE_FanL_MOVE_00177088 string
// GLOBAL s_SE_FanL_MOVE_END_00177098 string
// GLOBAL s_SE_FanS_MOVE_001770c0 string
// GLOBAL s_SE_FanS_MOVE_END_001770ac string

undefined4 func_00176FB0(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_00177084;
  if ((uint)param_1[0x12a] <= (uint)param_1[0x129]) {
    if ((char)param_1[300] == '\0') {
      local_c = s_SE_FanS_MOVE_END_001770ac;
      func_00150A84(param_1,&local_10,0);
    }
    else {
      local_c = s_SE_FanL_MOVE_END_00177098;
      func_00150A84(param_1,&local_10,0);
    }
    return func_00659024(param_1 + 0x103,0);
  }
  param_1[0x129] = param_1[0x129] + 1;
  if ((char)param_1[300] != '\0') {
    local_c = s_SE_FanL_MOVE_00177088;
    return func_001507D8((int)param_1,&local_10,0);
  }
  local_c = s_SE_FanS_MOVE_001770c0;
  return func_001507D8((int)param_1,&local_10,0);
}

