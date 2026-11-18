#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B705C(int param_1);
extern int func_00542D84(int param_1);
extern int func_0058A7D4(void);

// USA 003C3E9C <- EU 003C3E78 (Ghidra, non-matching)

undefined4 func_003C3E9C(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  func_002B705C(param_1[0x12]);
  if (*(int *)(param_1[0x12] + 1000) != *(int *)(param_1[0x12] + 0xa20)) {
    return 0;
  }
  puVar2 = (uint *)(**(code **)(*param_1 + 0xd4))(param_1);
  if ((*puVar2 < 10) || (bVar1 = func_00542D84(param_1[0x12]), !bVar1)) {
    iVar3 = (**(code **)(*param_1 + 0x134))(param_1);
    if (iVar3 == 0) {
      piVar5 = (int *)(**(code **)(*param_1 + 0xd4))(param_1);
      if (*piVar5 < param_1[0x13]) {
        return 0;
      }
      puVar2 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar2);
      uVar4 = (uint)((ulonglong)uVar4 * 0x65 >> 0x20);
      if (uVar4 < 0x1f) {
                    /* WARNING: Could not recover jumptable at 0x003c3f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*param_1 + 0x138))(param_1,1);
      }
      if (0x5a < uVar4) goto LAB_003c3f1c;
    }
    else {
      puVar2 = (uint *)(**(code **)(*param_1 + 0xd4))(param_1);
      if (*puVar2 < 10) {
        return 0;
      }
      puVar2 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar2);
      if ((uint)((ulonglong)uVar4 * 0x65 >> 0x20) < 0x33) {
LAB_003c3f1c:
                    /* WARNING: Could not recover jumptable at 0x003c3f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*param_1 + 0x138))(param_1,2,1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003c3fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x138))(param_1,5,1);
}

