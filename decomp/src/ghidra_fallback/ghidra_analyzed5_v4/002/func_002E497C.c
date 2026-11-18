#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int *DAT_002e49fc;
extern float DAT_002e4a00;

// USA 002E497C <- EU 002E4958 (Ghidra, non-matching)
// GLOBAL DAT_002e49fc int *
// GLOBAL DAT_002e4a00 float

undefined4 func_002E497C(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(int *)(param_2 + 0x2c) != 0) && (*(short *)(param_1 + 0x914) < 1)) {
    cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    iVar2 = *DAT_002e49fc;
    if (cVar1 == '\x05') {
      func_002917A4(iVar2,param_1 + 0x3d0,0,DAT_002e4a00);
    }
    else if (cVar1 == '\b') {
      func_00291A38(iVar2,param_1 + 0x3d0,DAT_002e4a00);
    }
    else if (cVar1 == '\x0e') {
      func_00291FE0(iVar2,param_1 + 0x3d0,DAT_002e4a00);
    }
    *(undefined2 *)(param_1 + 0x914) = 0x1e;
    return 1;
  }
  return 0;
}

