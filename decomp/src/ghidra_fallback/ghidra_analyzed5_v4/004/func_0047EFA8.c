#include "ghidra_types.h"

extern int func_00453950(int *param_1,uint param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_0047efe0;
extern int DAT_0047efe4;
extern char s_SE_S_COUNT_0047efe8[];
extern char s_SE_S_TIME_UP_0047eff4[];

// USA 0047EFA8 <- EU 0047EF80 (Ghidra, non-matching)
// GLOBAL DAT_0047efe0 int *
// GLOBAL DAT_0047efe4 int
// GLOBAL s_SE_S_COUNT_0047efe8 string
// GLOBAL s_SE_S_TIME_UP_0047eff4 string

undefined4 func_0047EFA8(int *param_1,uint param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_00453950(param_1,param_2);
  local_10 = DAT_0047efe4;
  if (param_2 != 5) {
    local_c = s_SE_S_COUNT_0047efe8;
    return func_00587F74(*DAT_0047efe0,&local_10,0);
  }
  local_c = s_SE_S_TIME_UP_0047eff4;
  return func_00587F74(*DAT_0047efe0,&local_10,0);
}

