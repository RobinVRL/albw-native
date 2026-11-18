#include "ghidra_types.h"

extern int func_00166C00(int param_1,int param_2);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002DFB38(int param_1);
extern int func_00459280(int param_1);
extern int func_0045A090(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int func_0066E58C(undefined4 *param_1,char param_2);
extern int DAT_0045b304;
extern float DAT_0045b308;
extern int *DAT_0045b30c;
extern int *DAT_0045b310;

// USA 0045B224 <- EU 0045B1FC (Ghidra, non-matching)
// GLOBAL DAT_0045b304 int
// GLOBAL DAT_0045b308 float
// GLOBAL DAT_0045b30c int *
// GLOBAL DAT_0045b310 int *

undefined4 func_0045B224(int param_1)

{
  int *piVar1;
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_0045b304 + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  fparam_0 = DAT_0045b308;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xfa) = 0x10;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x106) = 0x11;
  *(undefined2 *)(param_1 + 0x104) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x104),fparam_0);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x112) = 0x12;
  *(undefined2 *)(param_1 + 0x110) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x110),fparam_0);
  piVar1 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x214) < 3) {
    piVar1 = piVar1 + *(uint *)(param_1 + 0x214);
  }
  func_0066E58C((undefined4 *)(*piVar1 + 200),'\a');
  func_00459280(param_1);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  func_002DFB38(*DAT_0045b30c);
  return func_00166C00(*DAT_0045b310,0);
}

