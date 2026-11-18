#include "ghidra_types.h"

extern int func_002BEE00(int param_1);
extern int func_0047A5B4(int param_1,undefined4 *param_2,int param_3);
extern int func_0051B1E4(int param_1);
extern int *DAT_0043daa4;
extern undefined4 DAT_0043daa8;
extern undefined4 DAT_0043daac;

// USA 0043DA74 <- EU 0043DA54 (Ghidra, non-matching)
// GLOBAL DAT_0043daa4 int *
// GLOBAL DAT_0043daa8 undefined4
// GLOBAL DAT_0043daac undefined4

undefined4 func_0043DA74(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  func_0051B1E4(*DAT_0043daa4);
  func_002BEE00(*(int *)(param_1 + 0x130));
  local_10 = DAT_0043daa8;
  uStack_c = DAT_0043daac;
  return func_0047A5B4(*(int *)(param_1 + 0x158),&local_10,(uint)((*(byte *)(param_1 + 0x176) & 1) != 0));
}

