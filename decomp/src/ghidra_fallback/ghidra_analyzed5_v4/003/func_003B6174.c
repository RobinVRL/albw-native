#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_003b61e8;
extern float DAT_003b61ec;

// USA 003B6174 <- EU 003B6150 (Ghidra, non-matching)
// GLOBAL DAT_003b61e8 float
// GLOBAL DAT_003b61ec float

void func_003B6174(int param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x4a) = 2;
    *(undefined2 *)(param_1 + 0x48) = 2;
    func_002313DC(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x144) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x54),DAT_003b61ec);
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x4a) = 1;
    *(undefined2 *)(param_1 + 0x48) = 0;
    func_00231524(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x144) = 1;
    func_002317C0((undefined2 *)(param_1 + 0x54),DAT_003b61e8);
  }
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  uVar2 = *puVar1;
  if (param_2 == 0) {
    uVar2 = uVar2 & 0xfffd;
  }
  else {
    uVar2 = uVar2 | 2;
  }
  *puVar1 = uVar2;
  return;
}

