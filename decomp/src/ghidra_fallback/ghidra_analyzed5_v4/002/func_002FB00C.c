#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_002fb02c;
extern char s_SE_StalfosBone_BREAK_002fb014[];

// USA 002FB00C <- EU 002FAFE8 (Ghidra, non-matching)
// GLOBAL DAT_002fb02c int
// GLOBAL s_SE_StalfosBone_BREAK_002fb014 string

undefined4 func_002FB00C(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_StalfosBone_BREAK_002fb014;
  local_10 = DAT_002fb02c;
  return func_00150A84(param_1,&local_10,0);
}

