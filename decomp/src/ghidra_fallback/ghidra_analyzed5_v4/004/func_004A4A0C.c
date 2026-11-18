#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00232468(int param_1);
extern float DAT_004a4a94;
extern float DAT_004a4a98;

// USA 004A4A0C <- EU 004A49E4 (Ghidra, non-matching)
// GLOBAL DAT_004a4a94 float
// GLOBAL DAT_004a4a98 float

void func_004A4A0C(int param_1)

{
  byte bVar1;
  float fparam_0;
  float fparam_0_00;
  
  func_00232468(param_1);
  fparam_0_00 = DAT_004a4a98;
  fparam_0 = DAT_004a4a94;
  bVar1 = *(byte *)(param_1 + 0x9d);
  *(byte *)(param_1 + 0x9d) = bVar1 & 0xf9;
  if ((bVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x5e) = 10;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x5c),fparam_0);
    func_00231340((short *)(param_1 + 0x5c));
    func_002317C0((undefined2 *)(param_1 + 0x68),fparam_0_00);
    return;
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x5e) = 9;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x68),fparam_0_00);
  func_002317C0((undefined2 *)(param_1 + 0x5c),fparam_0);
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) | 1;
  return;
}

