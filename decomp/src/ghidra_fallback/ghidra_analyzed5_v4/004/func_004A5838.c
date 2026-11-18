#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_004a5880;
extern float DAT_004a5884;

// USA 004A5838 <- EU 004A5810 (Ghidra, non-matching)
// GLOBAL DAT_004a5880 float
// GLOBAL DAT_004a5884 float

void func_004A5838(int param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  if (param_2 == 0) {
    func_002313DC(param_1 + 0x60);
    func_002317C0((undefined2 *)(param_1 + 0x6c),DAT_004a5884);
  }
  else {
    func_00231524(param_1 + 0x60);
    func_002317C0((undefined2 *)(param_1 + 0x6c),DAT_004a5880);
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

