#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00584B94(int param_1,int param_2);
extern float DAT_00423d80;
extern int DAT_00423d84;
extern int *DAT_00423d88;

// USA 00423CFC <- EU 00423CDC (Ghidra, non-matching)
// GLOBAL DAT_00423d80 float
// GLOBAL DAT_00423d84 int
// GLOBAL DAT_00423d88 int *

void func_00423CFC(int param_1)

{
  bool bVar1;
  ushort *puVar2;
  float fparam_0;
  
  fparam_0 = DAT_00423d80;
  puVar2 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar2 = *puVar2 | 0x40;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xb2) = 8;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xb0),fparam_0);
  bVar1 = func_00584B94(*DAT_00423d88,DAT_00423d84);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xbe) = 0xb;
  }
  else {
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xbe) = 10;
  }
  *(undefined2 *)(param_1 + 0xbc) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xbc),fparam_0);
  return;
}

