#include "ghidra_types.h"

extern int func_00560CC8(undefined4 *param_1,uint *param_2,uint param_3);
extern int func_00560DF0(int *param_1,uint *param_2);

// USA 00560FDC <- EU 00560FB4 (Ghidra, non-matching)

undefined4 func_00560FDC(int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  if (((char *)param_1[1] != (char *)0x0) && (*(char *)param_1[1] == -0x3f)) {
    local_14 = *(int *)(*param_1 + 4) + *param_1;
    uVar1 = func_00560DF0(&local_14,param_3);
    if (-1 < (int)uVar1) {
      local_18 = param_1[1];
      uVar2 = func_00560CC8(&local_18,param_2,uVar1);
      return uVar2;
    }
  }
  return 0;
}

