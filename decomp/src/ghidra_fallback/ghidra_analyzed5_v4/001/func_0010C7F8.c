#include "ghidra_types.h"

extern undefined4 DAT_0010c860;

// USA 0010C7F8 <- EU 0010C7F8 (Ghidra, non-matching)
// GLOBAL DAT_0010c860 undefined4

undefined4 func_0010C7F8(int param_1,int param_2,float fparam_0)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint in_fpscr;
  float fVar4;
  
  uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 4) == fparam_0) << 0x1e;
  if (SUB41(uVar1 >> 0x1e,0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    *(float *)(param_1 + 8) = fparam_0;
    *(int *)(param_1 + 0x10) = param_2;
    uVar2 = DAT_0010c860;
    if (param_2 == 0) {
      puVar3 = *(undefined4 **)(param_1 + 0x14);
      *(float *)(param_1 + 4) = fparam_0;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010c85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)*puVar3)(puVar3);
      }
    }
    else {
      fVar4 = (float)VectorUnsignedToFloat(param_2,(byte)(uVar1 >> 0x15) & 3);
      *(float *)(param_1 + 0xc) = (*(float *)(param_1 + 4) - fparam_0) / fVar4;
    }
  }
  return 0;
}

