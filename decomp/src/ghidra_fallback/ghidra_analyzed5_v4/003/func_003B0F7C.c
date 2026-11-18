#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B7A88(int param_1);
extern int func_00542D5C(void);
extern int func_0058A7D4(void);
extern undefined4 DAT_003b101c;
extern int *DAT_003b1020;

// USA 003B0F7C <- EU 003B0F58 (Ghidra, non-matching)
// GLOBAL DAT_003b101c undefined4
// GLOBAL DAT_003b1020 int *

undefined4 func_003B0F7C(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (**(code **)(*param_1 + 0xfc))(param_1);
  uVar6 = DAT_003b101c;
  iVar2 = param_1[0x12];
  *(undefined4 *)(iVar2 + 0xa2c) = DAT_003b101c;
  *(undefined4 *)(iVar2 + 0xa30) = uVar6;
  *(undefined4 *)(iVar2 + 0xa34) = uVar6;
  puVar3 = (uint *)func_0058A7D4();
  uVar4 = func_00111A64(puVar3);
  param_1[0x13] = (int)((ulonglong)uVar4 * 0x33 >> 0x20) + 10;
  bVar1 = func_00542D5C();
  if (bVar1) {
    iVar2 = param_1[0x12];
    uVar4 = iVar2 + 0xb00;
    bVar1 = *(char *)(iVar2 + 0xb37) == '\0';
    if (bVar1) {
      uVar4 = (uint)*(byte *)(iVar2 + 0xb35);
    }
    if (!bVar1 || uVar4 != 0) {
      param_1[0x13] = 5;
    }
  }
  iVar2 = param_1[0x12];
  puVar5 = *(undefined4 **)(*DAT_003b1020 + 0x1c);
  uVar6 = *puVar5;
  uVar7 = puVar5[1];
  *(undefined4 *)(iVar2 + 0xa10) = puVar5[2];
  *(undefined4 *)(iVar2 + 0xa08) = uVar6;
  *(undefined4 *)(iVar2 + 0xa0c) = uVar7;
  func_002B7A88(param_1[0x12]);
                    /* WARNING: Could not recover jumptable at 0x003b1018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x130))(param_1);
}

