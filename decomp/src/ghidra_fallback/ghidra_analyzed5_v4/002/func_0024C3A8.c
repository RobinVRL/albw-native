#include "ghidra_types.h"

extern int func_0052FD14(int param_1,undefined4 *param_2);
extern undefined4 DAT_0024c3d8;
extern int *DAT_0024c3dc;

// USA 0024C3A8 <- EU 0024C3A8 (Ghidra, non-matching)
// GLOBAL DAT_0024c3d8 undefined4
// GLOBAL DAT_0024c3dc int *

bool func_0024C3A8(void)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_8 ((undefined4 *)(albw_frame + 0x8))
  local_8[0] = DAT_0024c3d8;
  iVar1 = func_0052FD14(*DAT_0024c3dc + 0x3dbbc,local_8);
  return iVar1 != 0;
}

