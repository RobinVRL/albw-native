#include "ghidra_types.h"

extern void func_0015D0E0(int param_1);
extern int func_002228D0(int param_1,int param_2,uint param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);

// USA 0015E388 <- EU 0015E38C (Ghidra, non-matching)

undefined4 func_0015E388(int param_1)

{
  func_0015D0E0(param_1);
  func_004FC07C(param_1,0xe,0xffffffff,0);
  if (*(int *)(param_1 + 0x960) != 0) {
    return func_002228D0(*(int *)(param_1 + 0x960),0xe,0xffffffff);
  }
  return 0;
}

