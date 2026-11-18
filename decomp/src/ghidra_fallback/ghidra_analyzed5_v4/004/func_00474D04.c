#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0047F9CC(int param_1,int param_2);
extern float DAT_00474d2c;

// USA 00474D04 <- EU 00474CDC (Ghidra, non-matching)
// GLOBAL DAT_00474d2c float

void func_00474D04(int param_1)

{
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xee) = 0xd;
  fparam_0 = DAT_00474d2c;
  *(undefined2 *)(param_1 + 0xec) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xec),fparam_0);
  if (*(char *)(param_1 + 0x100) != '\0') {
    func_0047F9CC(*(int *)(param_1 + 0xfc),(uint)*(byte *)(param_1 + 0xf8));
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return;
}

