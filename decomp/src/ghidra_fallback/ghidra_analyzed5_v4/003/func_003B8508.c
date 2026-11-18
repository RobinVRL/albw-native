#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B705C(int param_1);
extern int func_00542E58(int param_1);
extern int func_00542F3C(void);
extern int func_005430D4(int param_1);
extern int func_00543170(int param_1);
extern int func_0058A7D4(void);

// USA 003B8508 <- EU 003B84E4 (Ghidra, non-matching)

undefined4 func_003B8508(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  
  func_002B705C(param_1[0x12]);
  iVar7 = param_1[0x12];
  if (*(char *)(iVar7 + 0x936) == '\x02') {
    if (*(char *)(iVar7 + 0xb35) != '\0') goto LAB_003b860c;
  }
  else {
    if (*(char *)(iVar7 + 0xb3d) != '\0') {
      *(undefined1 *)(iVar7 + 0x935) = 0;
      return 0;
    }
    iVar2 = func_00543170(iVar7);
    if ((iVar2 == 0) && (*(char *)(iVar7 + 0xb40) != '\0')) {
      *(undefined1 *)(param_1[0x12] + 0x935) = 0;
    }
  }
  puVar3 = (uint *)(**(code **)(*param_1 + 0xd4))(param_1);
  if ((((*puVar3 < 0x3c) || (iVar7 = (**(code **)(*param_1 + 0x134))(param_1), iVar7 != 0)) ||
      (bVar1 = func_00542E58(param_1[0x12]), bVar1)) ||
     (piVar4 = (int *)(**(code **)(*param_1 + 0xd4))(param_1), *piVar4 < param_1[0x13])) {
    return 0;
  }
  iVar2 = param_1[0x12];
  iVar7 = func_00543170(iVar2);
  if (((iVar7 == 0) && (*(char *)(iVar2 + 0xb40) != '\0')) ||
     ((iVar7 = func_005430D4(param_1[0x12]), iVar7 == 0 || (bVar1 = func_00542F3C(), !bVar1)))) {
    uVar6 = (ushort)*(byte *)(param_1[0x12] + 0x936);
    bVar1 = uVar6 == 2;
    if (bVar1) {
      uVar6 = *(ushort *)(param_1 + 0x24);
    }
    if (!bVar1 || uVar6 != 0) {
      puVar3 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar3);
      uVar5 = (uint)((ulonglong)uVar5 * 0x65 >> 0x20);
      if (uVar5 < 0x47) {
                    /* WARNING: Could not recover jumptable at 0x003b8674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*param_1 + 0x138))(param_1,1);
      }
      if (0x5a < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x003b86a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*param_1 + 0x138))(param_1,0,1);
      }
                    /* WARNING: Could not recover jumptable at 0x003b8698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x138))(param_1,2);
    }
  }
LAB_003b860c:
                    /* WARNING: Could not recover jumptable at 0x003b8624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x138))(param_1,10,1);
}

