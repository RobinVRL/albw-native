#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0066F7C8(undefined4 *param_1,undefined1 param_2);
extern float DAT_004a48dc;

// USA 004A4860 <- EU 004A4838 (Ghidra, non-matching)
// GLOBAL DAT_004a48dc float

void func_004A4860(int param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  
  func_0066F7C8((undefined4 *)(param_1 + 0x38),0);
  if (param_3 == 0) {
    bVar1 = *(byte *)(param_1 + 0x9d) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x9d) | 1;
  }
  *(byte *)(param_1 + 0x9d) = bVar1;
  if (param_4 == 0) {
    bVar1 = bVar1 & 0xfd;
  }
  else {
    bVar1 = bVar1 | 2;
  }
  *(byte *)(param_1 + 0x9d) = bVar1;
  func_00231448(param_1 + 0x74);
  if (param_2 < 4) {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
    *(short *)(param_1 + 0x76) = (short)(param_2 << 1);
    *(undefined2 *)(param_1 + 0x74) = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x76) = 7;
    *(undefined2 *)(param_1 + 0x74) = 0;
  }
  func_002317C0((undefined2 *)(param_1 + 0x74),DAT_004a48dc);
  *(char *)(param_1 + 0x9c) = (char)param_2;
  return;
}

