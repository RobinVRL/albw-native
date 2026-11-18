#include "ghidra_types.h"

extern int func_00560E5C(int *param_1,int param_2);
extern int func_00560FDC(int *param_1,uint *param_2,uint *param_3);

// USA 00561114 <- EU 005610EC (Ghidra, non-matching)

undefined4 func_00561114(int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  #define local_14 (*(char *)(albw_frame + 0xc))
  #define local_10 (*(int *)(albw_frame + 0x10))
  iVar1 = func_00560FDC(param_1,&local_18,param_3);
  if (((iVar1 != 0) && (local_14 != -1)) && (local_14 == -0x60)) {
    local_10 = *(int *)(*param_1 + 8) + *param_1;
    iVar1 = func_00560E5C(&local_10,local_18);
    *param_2 = iVar1;
    return 1;
  }
  return 0;
}

