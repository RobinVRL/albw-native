#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float func_0034C0E4(int param_1,int param_2,int param_3,undefined4 param_4);
extern float DAT_0046d048;

// USA 0046D008 <- EU 0046CFE0 (Ghidra, non-matching)
// GLOBAL DAT_0046d048 float

void func_0046D008(int param_1)

{
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x9a) = 2;
  fparam_0 = DAT_0046d048;
  *(undefined2 *)(param_1 + 0x98) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x98),fparam_0);
  func_0034C0E4(*(int *)(param_1 + 0xb8),*(int *)(param_1 + 200),
                *(int *)(param_1 + 0xc4) + *(int *)(param_1 + 200),0x78);
  func_0034C0E4(*(int *)(param_1 + 0xb4),*(int *)(param_1 + 0xc4),0,0x78);
  *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x58) = 0;
  return;
}

