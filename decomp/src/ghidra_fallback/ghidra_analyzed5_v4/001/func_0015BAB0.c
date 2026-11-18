#include "ghidra_types.h"

extern void func_0015D0E0(int param_1);
extern int func_002228D0(int param_1,int param_2,uint param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_0015bb14;

// USA 0015BAB0 <- EU 0015BAB4 (Ghidra, non-matching)
// GLOBAL DAT_0015bb14 undefined4

void func_0015BAB0(int param_1)

{
  undefined4 uVar1;
  
  func_004FC07C(param_1,1,0xffffffff,0);
  if (*(int *)(param_1 + 0x960) != 0) {
    func_002228D0(*(int *)(param_1 + 0x960),1,0xffffffff);
  }
  func_0015D0E0(param_1);
  uVar1 = DAT_0015bb14;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffff8;
  *(undefined1 *)(param_1 + 0x9ae) = 0;
  *(undefined4 *)(param_1 + 0xfa4) = uVar1;
  return;
}

