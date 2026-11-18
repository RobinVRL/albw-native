#include "ghidra_types.h"

extern int func_0052FD14(int param_1,undefined4 *param_2);
extern undefined4 DAT_005841dc;

// USA 005841D8 <- EU 005841B0 (Ghidra, non-matching)
// GLOBAL DAT_005841dc undefined4

int func_005841D8(int param_1,undefined4 param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  local_10 = DAT_005841dc;
  local_c = param_2;
  iVar1 = func_0052FD14(param_1 + 0x3dbbc,&local_10);
  return iVar1;
}

