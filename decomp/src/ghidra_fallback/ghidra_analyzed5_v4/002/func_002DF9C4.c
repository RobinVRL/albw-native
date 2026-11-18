#include "ghidra_types.h"

extern int func_0044121C(int *param_1,undefined4 *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined4 DAT_002dfa0c;
extern int *DAT_002dfa10;
extern int *DAT_002dfa14;
extern char s_Common_002dfa04[];

// USA 002DF9C4 <- EU 002DF9A0 (Ghidra, non-matching)
// GLOBAL DAT_002dfa0c undefined4
// GLOBAL DAT_002dfa10 int *
// GLOBAL DAT_002dfa14 int *
// GLOBAL s_Common_002dfa04 string

void func_002DF9C4(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x14))
  local_20[2] = 0;
  local_20[3] = 0xffffffff;
  local_20[0] = 0;
  local_20[1] = 0;
  local_c = s_Common_002dfa04;
  local_20[4] = DAT_002dfa0c;
  iVar1 = func_005826A4(*DAT_002dfa14,local_20,local_20 + 4,DAT_002dfa10);
  if (iVar1 != 0) {
    func_0044121C(*(int **)(param_1 + 0x14),local_20);
  }
  return;
}

