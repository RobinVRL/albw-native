#include "ghidra_types.h"

extern int func_00568068(int param_1,uint *param_2,int param_3,float fparam_0);
extern float func_00590D4C(float fparam_0);
extern float func_00590DEC(undefined4 param_1,undefined4 param_2,undefined4 param_3,float fparam_0, float fparam_1);
extern float DAT_00133508;
extern float DAT_0013350c;

// USA 0013346C <- EU 0013346C (Ghidra, non-matching)
// GLOBAL DAT_00133508 float
// GLOBAL DAT_0013350c float

undefined4 func_0013346C(uint *param_1,int param_2,int param_3,float fparam_0)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fparam_1;
  
  uVar1 = (uint)*(byte *)(param_2 + 4);
  fparam_1 = *(float *)(param_2 + 8);
  if ((*(byte *)(param_2 + 4) & 1) == 0) {
    if ((fparam_0 <= fparam_1) && (fparam_1 = fparam_0, fparam_0 < DAT_00133508)) {
      fparam_1 = DAT_00133508;
    }
  }
  else {
    iVar2 = param_2;
    iVar3 = param_3;
    if (fparam_0 < DAT_00133508) {
      fVar4 = func_00590D4C(-fparam_0 / fparam_1);
      fparam_0 = fparam_0 + (fVar4 + DAT_0013350c) * fparam_1;
      iVar2 = extraout_r1;
    }
    fparam_1 = func_00590DEC(uVar1,iVar2,iVar3,fparam_0,fparam_1);
  }
  return func_00568068(param_2,param_1,param_3,fparam_1);
}

