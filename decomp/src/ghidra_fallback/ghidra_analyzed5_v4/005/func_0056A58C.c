#include "ghidra_types.h"

extern int func_0056D40C(uint *param_1,uint *param_2,uint param_3);
extern int DAT_0056a59c;

// USA 0056A58C <- EU 0056A564 (Ghidra, non-matching)
// GLOBAL DAT_0056a59c int

int func_0056A58C(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  local_10 = in_r3;
  iVar1 = func_0056D40C((uint *)(param_1 + 4),&local_10,9);
  iVar2 = DAT_0056a59c;
  if (iVar1 != 0) {
    iVar2 = local_10 + param_1 + *(int *)(local_10 + param_1 + 4);
  }
  return iVar2;
}

