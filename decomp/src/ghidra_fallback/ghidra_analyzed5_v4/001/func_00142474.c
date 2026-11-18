#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_001424ec;

// USA 00142474 <- EU 00142474 (Ghidra, non-matching)
// GLOBAL DAT_001424ec int *

bool func_00142474(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = func_0052FBA0(*DAT_001424ec + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(iVar1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(iVar1 + 0x3d4);
    *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(iVar1 + 0x3d8);
    *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x28);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    pfVar2 = (float *)(param_1 + 0x524);
    *pfVar2 = *(float *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x528) = uVar3;
    *(undefined4 *)(param_1 + 0x52c) = uVar4;
    func_00115C70(pfVar2,pfVar2,(float *)(param_1 + 0x530));
  }
  return iVar1 != 0;
}

