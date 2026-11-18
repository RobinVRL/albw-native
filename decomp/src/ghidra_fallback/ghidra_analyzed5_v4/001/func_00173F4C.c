#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00658B14(undefined4 *param_1,undefined1 param_2);
extern int DAT_00173fb4;
extern char s_SE_EyeStand_ON_00173fa4[];

// USA 00173F4C <- EU 00173F4C (Ghidra, non-matching)
// GLOBAL DAT_00173fb4 int
// GLOBAL s_SE_EyeStand_ON_00173fa4 string

bool func_00173F4C(int *param_1)

{
  bool bVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  bVar1 = (char)param_1[0x107] == '\0';
  if (bVar1) {
    func_00658B14(param_1 + 0x106,1);
    local_c = s_SE_EyeStand_ON_00173fa4;
    local_10 = DAT_00173fb4;
    func_00150A84(param_1,&local_10,0);
  }
  return bVar1;
}

