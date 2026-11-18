#include "ghidra_types.h"

extern int func_00370A58(undefined4 *param_1,int *param_2);
extern int func_005583F8(char *param_1);

// USA 00548798 <- EU 00548770 (Ghidra, non-matching)

int func_00548798(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define acStack_48 ((char *)(albw_frame + 0x8))
  func_00370A58((undefined4 *)acStack_48,param_1);
  iVar1 = func_005583F8(acStack_48);
  return iVar1;
}

