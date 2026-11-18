#include "ghidra_types.h"

extern int func_0044121C(int *param_1,undefined4 *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined4 DAT_002dfb04;
extern int *DAT_002dfb08;
extern int *DAT_002dfb0c;
extern char s_Common_002dfafc[];

// USA 002DFABC <- EU 002DFA98 (Ghidra, non-matching)
// GLOBAL DAT_002dfb04 undefined4
// GLOBAL DAT_002dfb08 int *
// GLOBAL DAT_002dfb0c int *
// GLOBAL s_Common_002dfafc string

void func_002DFABC(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x14))
  local_20[2] = 0;
  local_20[3] = 0xffffffff;
  local_20[0] = 0;
  local_20[1] = 0;
  local_c = s_Common_002dfafc;
  local_20[4] = DAT_002dfb04;
  iVar1 = func_005826A4(*DAT_002dfb0c,local_20,local_20 + 4,DAT_002dfb08);
  if (iVar1 != 0) {
    func_0044121C(*(int **)(param_1 + 0x14),local_20);
  }
  return;
}

