#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00588154(int param_1,uint param_2);
extern int *DAT_00150cc8;
extern int DAT_00150ccc;

// USA 00150C80 <- EU 00150C80 (Ghidra, non-matching)
// GLOBAL DAT_00150cc8 int *
// GLOBAL DAT_00150ccc int

undefined4 func_00150C80(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  local_14 = func_00588154(*DAT_00150cc8,param_2);
  uVar1 = 0;
  if (local_14 != 0) {
    local_18 = DAT_00150ccc;
    uVar1 = func_00150A84(param_1,&local_18,param_3);
  }
  return uVar1;
}

