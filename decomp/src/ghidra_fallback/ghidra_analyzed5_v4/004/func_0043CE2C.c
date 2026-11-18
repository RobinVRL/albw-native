#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00478A00(int param_1);
extern int func_00579CEC(int param_1);
extern float DAT_0043cf38;

// USA 0043CE2C <- EU 0043CE0C (Ghidra, non-matching)
// GLOBAL DAT_0043cf38 float

undefined4 func_0043CE2C(int param_1)

{
  int iVar1;
  float fparam_0;
  
  func_0012C790(*(int *)(param_1 + 0x120));
  func_0012C790(*(int *)(param_1 + 0x130));
  func_0012C790(*(int *)(param_1 + 0x140));
  func_00231448(param_1 + 0x124);
  func_00231448(param_1 + 0x134);
  fparam_0 = DAT_0043cf38;
  if ((*(byte *)(param_1 + 0x176) & 1) == 0) {
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x126) = 10;
    *(undefined2 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x136) = 0xe;
    *(undefined2 *)(param_1 + 0x134) = 0;
  }
  else {
    func_00231448(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x116) = 6;
    *(undefined2 *)(param_1 + 0x114) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x114),fparam_0);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x126) = 8;
    *(undefined2 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x136) = 0xc;
    *(undefined2 *)(param_1 + 0x134) = 0;
  }
  func_002317C0((undefined2 *)(param_1 + 0x124),fparam_0);
  func_002317C0((undefined2 *)(param_1 + 0x134),fparam_0);
  iVar1 = func_00579CEC(*(int *)(param_1 + 0x158));
  if (iVar1 != 0) {
    return func_00478A00(*(int *)(param_1 + 0x158));
  }
  return 0;
}

