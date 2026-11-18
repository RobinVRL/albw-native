#include "ghidra_types.h"

extern int func_00560FDC(int *param_1,uint *param_2,uint *param_3);

// USA 00560EB0 <- EU 00560E88 (Ghidra, non-matching)

undefined4 func_00560EB0(int *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  #define local_c (*(char *)(albw_frame + 0x4))
  iVar1 = func_00560FDC(param_1,&local_10,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (local_c == -0x30) {
      *(bool *)param_2 = local_10 != 0;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

