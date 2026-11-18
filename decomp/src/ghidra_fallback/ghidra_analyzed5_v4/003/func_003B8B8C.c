#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_003B8E10(int param_1);
extern int func_0058A7D4(void);

// USA 003B8B8C <- EU 003B8B68 (Ghidra, non-matching)

void func_003B8B8C(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint in_fpscr;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x918) = 0;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  if ((uint)((ulonglong)uVar2 * 0x65 >> 0x20) < 0x1f) {
    puVar1 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar1);
    *(int *)(param_1 + 0x58) = (int)((ulonglong)uVar2 * 3 >> 0x20) + 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 1;
  }
  func_003B8E10(param_1);
  *(undefined4 *)(param_1 + 0x54) = 0;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  uVar3 = ALBW_AS_U32(VectorSignedToFloat((int)((ulonglong)uVar2 * 3 >> 0x20),(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x90) = 0;
  return;
}

