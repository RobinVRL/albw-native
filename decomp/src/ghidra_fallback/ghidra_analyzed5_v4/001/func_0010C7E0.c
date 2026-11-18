#include "ghidra_types.h"

extern undefined4 DAT_0010c860;

// USA 0010C7E0 <- EU 0010C7E0 (Ghidra, non-matching)
// GLOBAL DAT_0010c860 undefined4

undefined4 func_0010C7E0(int param_1,int param_2,float fparam_0)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint in_fpscr;
  float fVar5;
  
  if (*(uint *)(param_1 + 0x178) < 2) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x180) + 4);
  }
  uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar3 + 4) == fparam_0) << 0x1e;
  if (SUB41(uVar1 >> 0x1e,0)) {
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  else {
    *(float *)(iVar3 + 8) = fparam_0;
    *(int *)(iVar3 + 0x10) = param_2;
    uVar2 = DAT_0010c860;
    if (param_2 == 0) {
      puVar4 = *(undefined4 **)(iVar3 + 0x14);
      *(float *)(iVar3 + 4) = fparam_0;
      *(undefined4 *)(iVar3 + 0xc) = uVar2;
      if (puVar4 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010c85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)*puVar4)(puVar4);
      }
    }
    else {
      fVar5 = (float)VectorUnsignedToFloat(param_2,(byte)(uVar1 >> 0x15) & 3);
      *(float *)(iVar3 + 0xc) = (*(float *)(iVar3 + 4) - fparam_0) / fVar5;
    }
  }
  return 0;
}

