#include "ghidra_types.h"

extern int func_00150688(undefined4 param_1,int param_2,undefined2 *param_3);
extern float func_004FAD90(int param_1);
extern int func_0058A6B0(int *param_1,int param_2);

// USA 0020B8F8 <- EU 0020B8F8 (Ghidra, non-matching)

void func_004FC570(int *param_1)

{
  if ((param_1[0x168] & 0x20000U) != 0) {
    func_004FAD90((int)param_1);
    return;
  }
  if (param_1[0x108] != 0) {
    func_00150688(param_1,param_1[0x108],(undefined2 *)param_1[0xe8]);
    func_0058A6B0(param_1,param_1[0x108]);
  }
  if (param_1[0x10a] != 0) {
    func_00150688(param_1,param_1[0x10a],(undefined2 *)param_1[0xe8]);
    func_0058A6B0(param_1,param_1[0x10a]);
    return;
  }
  return;
}

