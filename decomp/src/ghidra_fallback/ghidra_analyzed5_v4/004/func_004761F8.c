#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern float DAT_00476264;

// USA 004761F8 <- EU 004761D0 (Ghidra, non-matching)
// GLOBAL DAT_00476264 float

void func_004761F8(int param_1)

{
  undefined2 *puVar1;
  ushort *puVar2;
  float fVar3;
  
  func_00231448(param_1 + 0x38);
  func_00231448(param_1 + 0x44);
  func_00231448(param_1 + 0x50);
  fVar3 = DAT_00476264;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    func_00231448(param_1 + 0x2c);
    puVar1 = (undefined2 *)(param_1 + 0x20);
  }
  else {
    func_00231448(param_1 + 0x20);
    puVar1 = (undefined2 *)(param_1 + 0x2c);
  }
  func_002317C0(puVar1,fVar3);
  *(undefined1 *)(param_1 + 0xb4) = 0;
  puVar2 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar2 = *puVar2 & 0xffbf;
  func_002C00A8(*(int *)(param_1 + 0x14));
  puVar2 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar2 = *puVar2 & 0xfffd;
  return;
}

