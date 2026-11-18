#include "ghidra_types.h"

extern int func_0014AE1C(int param_1,int param_2);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0043CE2C(int param_1);
extern int func_00476BA8(int param_1);
extern int func_00479E9C(int param_1);
extern int func_004EC738(int param_1);
extern int func_0066C424(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0043d0a8;
extern int *DAT_0043d0ac;
extern float DAT_0043d0b0;
extern undefined4 *DAT_0043d0b4;

// USA 0043CFFC <- EU 0043CFDC (Ghidra, non-matching)
// GLOBAL DAT_0043d0a8 int *
// GLOBAL DAT_0043d0ac int *
// GLOBAL DAT_0043d0b0 float
// GLOBAL DAT_0043d0b4 undefined4 *

undefined4 func_0043CFFC(int param_1)

{
  float fparam_0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_004EC738(*DAT_0043d0a8);
  func_0014AE1C(*DAT_0043d0ac,1);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x40;
  *(undefined1 *)(param_1 + 0x70) = 3;
  iVar1 = func_00479E9C(*(int *)(param_1 + 0x158));
  if (iVar1 == 0) {
    func_00476BA8(*(int *)(param_1 + 0x158));
    uVar2 = *DAT_0043d0b4;
    uVar3 = DAT_0043d0b4[1];
    *(int *)(param_1 + 400) = param_1;
    *(undefined4 *)(param_1 + 0x194) = uVar2;
    *(undefined4 *)(param_1 + 0x198) = uVar3;
  }
  else {
    if ((*(byte *)(param_1 + 0x176) & 8) != 0) {
      func_00231448(param_1 + 0xf8);
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0xfa) = 2;
      fparam_0 = DAT_0043d0b0;
      *(undefined2 *)(param_1 + 0xf8) = 0;
      func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
      *(byte *)(param_1 + 0x176) = *(byte *)(param_1 + 0x176) & 0xf7;
    }
    func_0043CE2C(param_1);
  }
  return func_0066C424((undefined4 *)(param_1 + 0x98),5);
}

