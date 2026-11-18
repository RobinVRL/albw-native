#include "ghidra_types.h"

extern int func_00560FDC(int *param_1,uint *param_2,uint *param_3);

// USA 00560EF8 <- EU 00560ED0 (Ghidra, non-matching)

bool func_00560EF8(int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  #define local_14 (*(char *)(albw_frame + 0xc))
  iVar1 = func_00560FDC(param_1,&local_18,param_3);
  if (iVar1 != 0) {
    if (local_14 == -0x40 || local_14 == -0x3f) {
      iVar1 = *param_1;
      iVar2 = local_18 + iVar1;
      goto LAB_00560f18;
    }
    if (local_14 == -1) {
      iVar1 = *param_1;
      iVar2 = 0;
      goto LAB_00560f18;
    }
  }
  iVar1 = 0;
  iVar2 = 0;
LAB_00560f18:
  *param_2 = iVar1;
  param_2[1] = iVar2;
  return iVar1 != 0;
}

