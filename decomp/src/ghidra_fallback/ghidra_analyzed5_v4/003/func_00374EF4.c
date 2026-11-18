#include "ghidra_types.h"

extern int func_00290320(int param_1,int param_2);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_004FA8A0(int param_1);
extern int *DAT_00374f74;
extern float DAT_00374f78;

// USA 00374EF4 <- EU 00374ED0 (Ghidra, non-matching)
// GLOBAL DAT_00374f74 int *
// GLOBAL DAT_00374f78 float

undefined4 func_00374EF4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    iVar2 = *DAT_00374f74;
    if (cVar1 == '\x05') {
      func_00290320(iVar2,-(int)**(short **)(param_1 + 0x3a0));
    }
    else if (cVar1 == '\b') {
      func_00291A38(iVar2,param_1 + 0x3d0,DAT_00374f78);
    }
    else if (cVar1 == '\t') {
      func_004FA8A0(param_2);
    }
    else if (cVar1 == '\x0e') {
      func_00291FE0(iVar2,param_1 + 0x3d0,DAT_00374f78);
    }
  }
  return 0;
}

