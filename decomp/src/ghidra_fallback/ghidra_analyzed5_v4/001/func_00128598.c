#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_00128614;
extern int DAT_00128618;
extern char s_SE_Chasupa_V_DIE_0012861c[];
extern char s_SE_Keese_V_DIE_00128630[];

// USA 00128598 <- EU 00128598 (Ghidra, non-matching)
// GLOBAL DAT_00128614 int *
// GLOBAL DAT_00128618 int
// GLOBAL s_SE_Chasupa_V_DIE_0012861c string
// GLOBAL s_SE_Keese_V_DIE_00128630 string

undefined4 func_00128598(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if ((short)param_1[0x142] < 1) {
    iVar1 = func_00588BE4((int)param_1);
    local_10 = DAT_00128618;
    if (iVar1 != *DAT_00128614) {
      local_c = s_SE_Keese_V_DIE_00128630;
      return func_00150A84(param_1,&local_10,0);
    }
    local_c = s_SE_Chasupa_V_DIE_0012861c;
    func_00150A84(param_1,&local_10,0);
  }
  return 0;
}

