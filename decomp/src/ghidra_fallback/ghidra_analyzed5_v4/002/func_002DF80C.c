#include "ghidra_types.h"

extern int func_0044121C(int *param_1,undefined4 *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined4 DAT_002df854;
extern int *DAT_002df858;
extern int *DAT_002df85c;
extern char s_Common_002df84c[];

// USA 002DF80C <- EU 002DF7E8 (Ghidra, non-matching)
// GLOBAL DAT_002df854 undefined4
// GLOBAL DAT_002df858 int *
// GLOBAL DAT_002df85c int *
// GLOBAL s_Common_002df84c string

void func_002DF80C(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x14))
  local_20[2] = 0;
  local_20[3] = 0xffffffff;
  local_20[0] = 0;
  local_20[1] = 0;
  local_c = s_Common_002df84c;
  local_20[4] = DAT_002df854;
  iVar1 = func_005826A4(*DAT_002df85c,local_20,local_20 + 4,DAT_002df858);
  if (iVar1 != 0) {
    func_0044121C(*(int **)(param_1 + 0x14),local_20);
  }
  return;
}

