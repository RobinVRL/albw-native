#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_00213624;
extern int DAT_00213628;
extern char s_SE_GueldMan_V_DAMAGE_00213640[];
extern char s_SE_GueldMan_V_DIE_0021362c[];

// USA 002135D0 <- EU 002135D0 (Ghidra, non-matching)
// GLOBAL DAT_00213624 int
// GLOBAL DAT_00213628 int
// GLOBAL s_SE_GueldMan_V_DAMAGE_00213640 string
// GLOBAL s_SE_GueldMan_V_DIE_0021362c string

undefined4 func_002135D0(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_00213628;
  if (*(short *)(DAT_00213624 + (int)param_1) < 1) {
    local_c = s_SE_GueldMan_V_DIE_0021362c;
    return func_00150A84(param_1,&local_10,0);
  }
  local_c = s_SE_GueldMan_V_DAMAGE_00213640;
  return func_00150A84(param_1,&local_10,0);
}

