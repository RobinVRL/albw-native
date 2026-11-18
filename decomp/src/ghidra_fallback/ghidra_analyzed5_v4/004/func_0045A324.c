#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002DFB38(int param_1);
extern int func_00459280(int param_1);
extern int func_0045A090(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int DAT_0045a3b0;
extern float DAT_0045a3b4;
extern int *DAT_0045a3b8;

// USA 0045A324 <- EU 0045A2FC (Ghidra, non-matching)
// GLOBAL DAT_0045a3b0 int
// GLOBAL DAT_0045a3b4 float
// GLOBAL DAT_0045a3b8 int *

undefined4 func_0045A324(int param_1)

{
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_0045a3b0 + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  fparam_0 = DAT_0045a3b4;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xfa) = 0xf;
  *(undefined2 *)(param_1 + 0xf8) = 2;
  func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x12a) = 0x1d;
  *(undefined2 *)(param_1 + 0x128) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x128),fparam_0);
  func_00459280(param_1);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  return func_002DFB38(*DAT_0045a3b8);
}

