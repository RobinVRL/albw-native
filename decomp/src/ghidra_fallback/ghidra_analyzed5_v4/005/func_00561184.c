#include "ghidra_types.h"

extern int func_005611C0(int param_1,uint *param_2,int param_3);

// USA 00561184 <- EU 0056115C (Ghidra, non-matching)

undefined4 func_00561184(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  #define local_c (*(char *)(albw_frame + 0x4))
  iVar1 = func_005611C0(param_1,&local_10,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (local_c == -0x2e) {
      *param_2 = local_10;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

