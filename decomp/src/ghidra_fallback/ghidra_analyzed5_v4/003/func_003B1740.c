#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00383E8C(int param_1);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00543170(int param_1);
extern int func_0058A7D4(void);
extern undefined4 DAT_003b17fc;
extern float DAT_003b1800;

// USA 003B1740 <- EU 003B171C (Ghidra, non-matching)
// GLOBAL DAT_003b17fc undefined4
// GLOBAL DAT_003b1800 float

undefined4 func_003B1740(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = DAT_003b17fc;
  iVar2 = param_1[0x12];
  *(undefined4 *)(iVar2 + 0xa2c) = DAT_003b17fc;
  *(undefined4 *)(iVar2 + 0xa30) = uVar1;
  *(undefined4 *)(iVar2 + 0xa34) = uVar1;
  *(undefined1 *)(param_1[0x12] + 0xb3f) = 1;
  func_00383E8C(param_1[0x12] + 0x8c0);
  func_0051D2CC((int *)(param_1[0x12] + 1000),*(int *)(param_1[0x12] + 0xa20),DAT_003b1800);
  piVar3 = (int *)(**(code **)(*param_1 + 0xd4))(param_1);
  if (*piVar3 < param_1[0x13]) {
    iVar6 = param_1[0x12];
    iVar2 = func_00543170(iVar6);
    if ((iVar2 != 0) || (*(char *)(iVar6 + 0xb40) == '\0')) {
      return 0;
    }
  }
  puVar4 = (uint *)func_0058A7D4();
  uVar5 = func_00111A64(puVar4);
  if (0x4f < (uint)((ulonglong)uVar5 * 0x65 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x003b17e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*param_1 + 0x138))(param_1,2);
  }
                    /* WARNING: Could not recover jumptable at 0x003b17f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x138))(param_1,1,1);
}

