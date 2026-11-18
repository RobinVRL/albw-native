#include "ghidra_types.h"

extern int func_0010173C(int param_1);
extern int func_00102A2C(int param_1);
extern int func_00102A8C(void);
extern int func_00102B84(byte param_1);
extern int func_00102E40(undefined1 param_1,undefined1 *param_2);
extern int func_00104338(uint param_1,int param_2);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_003E4470(void);
extern int func_003E5B08(undefined4 param_1);
extern uint DAT_003e5738;
extern uint DAT_003e573c;
extern uint DAT_003e5740;
extern uint DAT_003e5744;
extern uint DAT_003e5748;

// USA 003E5660 <- EU 003E5640 (Ghidra, non-matching)
// GLOBAL DAT_003e5738 uint
// GLOBAL DAT_003e573c uint
// GLOBAL DAT_003e5740 uint
// GLOBAL DAT_003e5744 uint
// GLOBAL DAT_003e5748 uint

uint func_003E5660(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  func_00102E40(0,(undefined1 *)0x0);
  func_00102B84(5);
  iVar5 = func_003E4470();
  uVar1 = DAT_003e5740;
  uVar2 = DAT_003e573c;
  uVar3 = DAT_003e5738;
  if (iVar5 != 0) {
    func_0010173C(1);
    uVar1 = DAT_003e5740;
    uVar2 = DAT_003e573c;
    uVar3 = DAT_003e5738;
  }
  while( true ) {
    func_00108DF8();
    uVar6 = func_003E5B08(param_1);
    func_00108F4C();
    if ((uVar6 != uVar3 && uVar6 != uVar2) && uVar6 != uVar1) break;
    func_00104338((uint)((ulonglong)DAT_003e5744 * 10),(int)((ulonglong)DAT_003e5744 * 10 >> 0x20));
  }
  if (iVar5 == 0) {
    iVar5 = func_003E4470();
    if (iVar5 != 0) {
      func_0010173C(1);
    }
  }
  else {
    iVar5 = func_003E4470();
    if (iVar5 == 0) {
      func_00102A2C(1);
    }
  }
  bVar4 = func_00102A8C();
  if ((bVar4) && (uVar6 == DAT_003e5748)) {
    uVar6 = 0;
  }
  return uVar6;
}

