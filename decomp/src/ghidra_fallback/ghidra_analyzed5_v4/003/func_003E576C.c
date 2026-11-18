#include "ghidra_types.h"

extern int func_0010173C(int param_1);
extern int func_00102A2C(int param_1);
extern int func_00102B84(byte param_1);
extern int func_00104338(uint param_1,int param_2);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_003E4470(void);
extern int func_003E5B40(undefined4 param_1);
extern uint DAT_003e5824;
extern uint DAT_003e5828;
extern uint DAT_003e582c;
extern uint DAT_003e5830;
extern uint DAT_003e5834;

// USA 003E576C <- EU 003E574C (Ghidra, non-matching)
// GLOBAL DAT_003e5824 uint
// GLOBAL DAT_003e5828 uint
// GLOBAL DAT_003e582c uint
// GLOBAL DAT_003e5830 uint
// GLOBAL DAT_003e5834 uint

uint func_003E576C(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  func_00102B84(4);
  iVar4 = func_003E4470();
  uVar1 = DAT_003e582c;
  uVar2 = DAT_003e5828;
  uVar3 = DAT_003e5824;
  if (iVar4 != 0) {
    func_0010173C(1);
    uVar1 = DAT_003e582c;
    uVar2 = DAT_003e5828;
    uVar3 = DAT_003e5824;
  }
  while( true ) {
    func_00108DF8();
    uVar5 = func_003E5B40(param_1);
    func_00108F4C();
    if ((uVar5 != uVar3 && uVar5 != uVar2) && uVar5 != uVar1) break;
    func_00104338((uint)((ulonglong)DAT_003e5830 * 10),(int)((ulonglong)DAT_003e5830 * 10 >> 0x20));
  }
  if (iVar4 == 0) {
    iVar4 = func_003E4470();
    if (iVar4 != 0) {
      func_0010173C(1);
    }
  }
  else {
    iVar4 = func_003E4470();
    if (iVar4 == 0) {
      func_00102A2C(1);
    }
  }
  if (uVar5 == DAT_003e5834) {
    uVar5 = 0;
  }
  return uVar5;
}

