#include "ghidra_types.h"

extern int func_00102B84(byte param_1);
extern int func_00104338(uint param_1,int param_2);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_003E5AD8(void);
extern uint DAT_003e53e4;
extern uint DAT_003e53e8;
extern uint DAT_003e53ec;
extern uint DAT_003e53f0;

// USA 003E5388 <- EU 003E5368 (Ghidra, non-matching)
// GLOBAL DAT_003e53e4 uint
// GLOBAL DAT_003e53e8 uint
// GLOBAL DAT_003e53ec uint
// GLOBAL DAT_003e53f0 uint

void func_003E5388(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  func_00102B84(0xe);
  uVar3 = DAT_003e53ec;
  uVar2 = DAT_003e53e8;
  uVar1 = DAT_003e53e4;
  while( true ) {
    func_00108DF8();
    uVar4 = func_003E5AD8();
    func_00108F4C();
    if ((uVar4 != uVar1 && uVar4 != uVar2) && uVar4 != uVar3) break;
    func_00104338((uint)((ulonglong)DAT_003e53f0 * 10),(int)((ulonglong)DAT_003e53f0 * 10 >> 0x20));
  }
  return;
}

