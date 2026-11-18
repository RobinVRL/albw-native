#include "ghidra_types.h"

extern void func_0015D0E0(int param_1);
extern int func_002228D0(int param_1,int param_2,uint param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int *DAT_0015fc88;
extern undefined *DAT_0015fc8c;

// USA 0015FC0C <- EU 0015FC10 (Ghidra, non-matching)
// GLOBAL DAT_0015fc88 int *
// GLOBAL DAT_0015fc8c undefined *

void func_0015FC0C(int param_1)

{
  func_004FC07C(param_1,9,0xffffffff,0);
  if (*(int *)(param_1 + 0x960) != 0) {
    func_002228D0(*(int *)(param_1 + 0x960),9,0xffffffff);
  }
  if ((*(ushort *)(param_1 + 0x2e) & 0xff) == 0) {
    func_00588C14(param_1,1,1);
  }
  func_0052FD7C(*DAT_0015fc88 + 0x3dbbc,DAT_0015fc8c,0);
  func_0015D0E0(param_1);
  return;
}

