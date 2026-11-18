#include "ghidra_types.h"

extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00656F2C(undefined4 *param_1,undefined1 param_2);
extern float DAT_00136714;

// USA 00136678 <- EU 00136678 (Ghidra, non-matching)
// GLOBAL DAT_00136714 float

void func_00136678(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *(float **)(param_1 + 0x4a0);
  *(float *)(param_1 + 0x49c) = pfVar2[4];
  if (0x2c < *(int *)(param_1 + 0x40c)) {
    fVar3 = func_0051CF68(pfVar2 + 3,*pfVar2,pfVar2[1],pfVar2[2]);
    pfVar2[4] = fVar3;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x484) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_00136714) {
      if (DAT_00136714 < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    func_00656F2C((undefined4 *)(param_1 + 0x40c),1);
  }
  return;
}

