#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B7508(int param_1,undefined2 param_2,int param_3);
extern int func_00542D84(int param_1);
extern int func_0058A7D4(void);

// USA 003B0A30 <- EU 003B0A0C (Ghidra, non-matching)

undefined4 func_003B0A30(int *param_1,undefined2 param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  
  func_002B7508(param_1[0x12],param_2,0);
  if ((*(int *)(param_1[0x12] + 1000) == *(int *)(param_1[0x12] + 0xa20)) &&
     (((iVar3 = (**(code **)(*param_1 + 0x104))(param_1,0), iVar3 != 0 ||
       (iVar3 = (**(code **)(*param_1 + 0x104))(param_1,2), iVar3 != 0)) ||
      (iVar3 = (**(code **)(*param_1 + 0x104))(param_1,1), iVar3 != 0)))) {
    puVar4 = (uint *)(**(code **)(*param_1 + 0xd4))(param_1);
    if ((0x1d < *puVar4) && (bVar2 = func_00542D84(param_1[0x12]), bVar2)) {
LAB_003b0b68:
                    /* WARNING: Could not recover jumptable at 0x003b0b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x138))(param_1,5,0);
    }
    sVar1 = (short)param_1[0x18] + -1;
    *(short *)(param_1 + 0x18) = sVar1;
    if (sVar1 < 1) {
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      *(short *)(param_1 + 0x18) = (short)((ulonglong)uVar5 * 0x3d >> 0x20) + 0x3c;
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      if (0x31 < (uint)((ulonglong)uVar5 * 0x65 >> 0x20)) goto LAB_003b0b68;
    }
    iVar3 = (**(code **)(*param_1 + 0x134))(param_1);
    if (iVar3 == 0) {
      piVar6 = (int *)(**(code **)(*param_1 + 0xd4))(param_1);
      if (param_1[0x13] <= *piVar6) {
        puVar4 = (uint *)func_0058A7D4();
        uVar5 = func_00111A64(puVar4);
        uVar5 = (uint)((ulonglong)uVar5 * 0x65 >> 0x20);
        if (uVar5 < 0x1f) {
                    /* WARNING: Could not recover jumptable at 0x003b0bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          return (**(code **)(*param_1 + 0x138))(param_1,1,0);
        }
        if (0x5a < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x003b0bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          return (**(code **)(*param_1 + 0x138))(param_1,2,0);
        }
        goto LAB_003b0b68;
      }
    }
    else {
      piVar6 = (int *)(**(code **)(*param_1 + 0xd4))(param_1);
      if (9 < *piVar6) {
        puVar4 = (uint *)func_0058A7D4();
        uVar5 = func_00111A64(puVar4);
        if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0xb) goto LAB_003b0b68;
      }
    }
  }
  return 0;
}

