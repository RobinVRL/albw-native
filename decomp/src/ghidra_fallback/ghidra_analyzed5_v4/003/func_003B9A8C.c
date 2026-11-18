#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00542F3C(void);
extern int func_005430D4(int param_1);
extern int func_0058A7D4(void);
extern int DAT_003b9b24;
extern int DAT_003b9b28;

// USA 003B9A8C <- EU 003B9A68 (Ghidra, non-matching)
// GLOBAL DAT_003b9b24 int
// GLOBAL DAT_003b9b28 int

void func_003B9A8C(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  param_1[0x13] = (int)((ulonglong)uVar3 * 0x3d >> 0x20) + 0x3c;
  iVar4 = func_005430D4(param_1[0x12]);
  if ((iVar4 != 0) && (bVar1 = func_00542F3C(), bVar1)) {
    param_1[0x13] = 0x3c;
  }
  iVar4 = (**(code **)(*param_1 + 0x140))(param_1);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x130))(param_1);
  }
  if (*(char *)(param_1[0x12] + 0x936) == '\x02') {
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    param_1[0x13] = (int)((ulonglong)uVar3 * 0x1f >> 0x20) + 0x1e;
    iVar4 = DAT_003b9b24;
    if (*(char *)(*(int *)(param_1[0x12] + 0x8bc) + 4) == '\0') {
      iVar4 = DAT_003b9b28;
    }
    param_1[0x14] = iVar4;
  }
  return;
}

