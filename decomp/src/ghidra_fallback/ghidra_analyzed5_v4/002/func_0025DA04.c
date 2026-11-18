#include "ghidra_types.h"

extern int func_00122C78(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_0014AC28(int param_1,int param_2);
extern int func_001E30D0(undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int *DAT_0025dacc;

// USA 0025DA04 <- EU 0025DA2C (Ghidra, non-matching)
// GLOBAL DAT_0025dacc int *

undefined4 func_0025DA04(int param_1,undefined4 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  
  func_001E30D0(param_1,param_2,param_3,param_4);
  func_0014AC28(*DAT_0025dacc,1);
  func_00122C78(*(int **)(param_1 + 0xf0),extraout_r1,param_3);
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe4) + *(char *)(param_1 + 0xcc) * 8 + 4);
  piVar3 = (int *)(*(int *)(param_1 + 0xe4) + *(char *)(param_1 + 0xcc) * 8);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0xdc) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 200) + 1;
  *(int *)(param_1 + 200) = iVar2;
  if (*(int *)(param_1 + 0xd8) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0xd8),1,fparam_0);
  }
                    /* WARNING: Could not recover jumptable at 0x0025dac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(**(int **)(param_1 + 0xf4) + 8))(*(int **)(param_1 + 0xf4));
}

