#include "ghidra_types.h"

extern int func_001C6FA8(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern undefined DAT_001c6e80;
extern int DAT_001c6ea4;
extern int *DAT_001c6ea8;
extern char s_cf_001c6e84[];
extern undefined4 _DAT_001c6e80;

// USA 001C6E20 <- EU 001C6E20 (Ghidra, non-matching)
// GLOBAL DAT_001c6e80 undefined
// GLOBAL DAT_001c6ea4 int
// GLOBAL DAT_001c6ea8 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001C6E20(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  uVar1 = _DAT_001c6e80;
  *(undefined4 *)(param_1 + 0x43c) = 0x3c;
  *(undefined4 *)(param_1 + 0x440) = uVar1;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined1 *)(param_1 + 0x444) = 1;
  func_001C6FA8(param_1);
  local_c = s_cf_001c6e84;
  local_10 = DAT_001c6ea4;
  return func_00587F74(*DAT_001c6ea8,&local_10,0);
}

