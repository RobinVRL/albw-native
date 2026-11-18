#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int *DAT_004f2b40;
extern float DAT_004f2b44;

// USA 004F2AC4 <- EU 004F2A9C (Ghidra, non-matching)
// GLOBAL DAT_004f2b40 int *
// GLOBAL DAT_004f2b44 float

undefined4 func_004F2AC4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(int *)(param_2 + 0x2c) != 0) && (*(short *)(param_1 + 0x918) < 1)) {
    cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    iVar2 = *DAT_004f2b40;
    if (cVar1 == '\x05') {
      func_002917A4(iVar2,param_1 + 0x3d0,0,DAT_004f2b44);
    }
    else if (cVar1 == '\b') {
      func_00291A38(iVar2,param_1 + 0x3d0,DAT_004f2b44);
    }
    else if (cVar1 == '\x0e') {
      func_00291FE0(iVar2,param_1 + 0x3d0,DAT_004f2b44);
    }
    *(undefined2 *)(param_1 + 0x918) = 0x1e;
    return 1;
  }
  return 0;
}

