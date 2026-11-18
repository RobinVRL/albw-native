#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002DFB38(int param_1);
extern int func_00459280(int param_1);
extern int func_0045A090(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int DAT_0045a770;
extern float DAT_0045a774;
extern int *DAT_0045a778;

// USA 0045A6E4 <- EU 0045A6BC (Ghidra, non-matching)
// GLOBAL DAT_0045a770 int
// GLOBAL DAT_0045a774 float
// GLOBAL DAT_0045a778 int *

undefined4 func_0045A6E4(int param_1)

{
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_0045a770 + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  fparam_0 = DAT_0045a774;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xfa) = 0xf;
  *(undefined2 *)(param_1 + 0xf8) = 2;
  func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x11e) = 0x1a;
  *(undefined2 *)(param_1 + 0x11c) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x11c),fparam_0);
  func_00459280(param_1);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  return func_002DFB38(*DAT_0045a778);
}

