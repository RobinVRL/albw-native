#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0043c7ec;
extern int DAT_0043c7f0;
extern undefined4 *DAT_0043c7f4;

// USA 0043C6E4 <- EU 0043C6C4 (Ghidra, non-matching)
// GLOBAL DAT_0043c7ec float
// GLOBAL DAT_0043c7f0 int
// GLOBAL DAT_0043c7f4 undefined4 *

void func_0043C6E4(int param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fparam_0;
  float fparam_0_00;
  
  func_00231448(param_1 + 0x124);
  func_00231448(param_1 + 0x134);
  fparam_0_00 = DAT_0043c7ec;
  if ((*(byte *)(param_1 + 0x176) & 1) == 0) {
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x126) = 0xb;
    *(undefined2 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x136) = 0xf;
    *(undefined2 *)(param_1 + 0x134) = 0;
  }
  else {
    if (*(short *)(DAT_0043c7f0 + param_1) != 7) {
      func_00231448(param_1 + 0x114);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x116) = 7;
      *(undefined2 *)(param_1 + 0x114) = 0;
      func_002317C0((undefined2 *)(param_1 + 0x114),fparam_0_00);
    }
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x126) = 9;
    *(undefined2 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x136) = 0xd;
    *(undefined2 *)(param_1 + 0x134) = 0;
  }
  fparam_0 = func_002317C0((undefined2 *)(param_1 + 0x124),fparam_0_00);
  uVar2 = *DAT_0043c7f4;
  uVar3 = DAT_0043c7f4[1];
  *(int *)(param_1 + 400) = param_1;
  *(undefined4 *)(param_1 + 0x194) = uVar2;
  *(undefined4 *)(param_1 + 0x198) = uVar3;
  puVar1 = (undefined2 *)(param_1 + 0x134);
  if (puVar1 != (undefined2 *)0x0) {
    fparam_0 = fparam_0_00;
  }
  *(undefined2 **)(param_1 + 0x178) = puVar1;
  *(int *)(param_1 + 0x180) = param_1 + 0x18c;
  if (puVar1 != (undefined2 *)0x0) {
    func_002317C0(puVar1,fparam_0);
  }
  *(undefined1 *)(param_1 + 0x188) = 1;
  return;
}

