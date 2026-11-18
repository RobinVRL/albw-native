#include "ghidra_types.h"

extern int func_00560D54(int *param_1,uint *param_2,int param_3);
extern int func_00560D98(int *param_1,undefined4 *param_2,int param_3);

// USA 005611C0 <- EU 00561198 (Ghidra, non-matching)

undefined4 func_005611C0(int param_1,uint *param_2,int param_3)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(char * *)(albw_frame + 0x0))
  local_10 = *(char **)(param_1 + 4);
  if (local_10 != (char *)0x0) {
    if (*local_10 == -0x40) {
      uVar1 = func_00560D98((int *)&local_10,param_2,param_3);
      return uVar1;
    }
    if (*local_10 == -0x3f) {
      uVar1 = func_00560D54((int *)&local_10,param_2,param_3);
      return uVar1;
    }
  }
  return 0;
}

