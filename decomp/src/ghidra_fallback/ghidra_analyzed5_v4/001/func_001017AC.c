#include "ghidra_types.h"

extern int func_00102AB8(void);
extern int func_00102B84(byte param_1);
extern int func_00102E40(undefined1 param_1,undefined1 *param_2);
extern int func_00103060(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_001030B4(undefined1 param_1);
extern int func_00104338(uint param_1,int param_2);
extern int func_00104A70(void);
extern int func_001052E8(void);
extern int func_001052FC(int param_1);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern uint DAT_001018fc;
extern uint DAT_00101900;
extern uint DAT_00101904;
extern uint DAT_00101908;

// USA 001017AC <- EU 001017AC (Ghidra, non-matching)
// GLOBAL DAT_001018fc uint
// GLOBAL DAT_00101900 uint
// GLOBAL DAT_00101904 uint
// GLOBAL DAT_00101908 uint

uint func_001017AC(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  
  cVar4 = func_00104A70();
  uVar3 = DAT_00101904;
  uVar2 = DAT_00101900;
  uVar1 = DAT_001018fc;
  if (cVar4 != '\t') {
    func_00102E40(0,(undefined1 *)0x0);
    func_00102B84(9);
    while( true ) {
      func_00108DF8();
      uVar5 = func_001030B4(1);
      func_00108F4C();
      if ((uVar5 != uVar1 && uVar5 != uVar2) && uVar5 != uVar3) break;
      func_00104338((uint)((ulonglong)DAT_00101908 * 10),(int)((ulonglong)DAT_00101908 * 10 >> 0x20)
                   );
    }
    if ((int)uVar5 < 0) {
      func_0010AC24(uVar5,0x101828);
    }
  }
  func_00102AB8();
  func_001052FC(0);
  while( true ) {
    func_00108DF8();
    uVar5 = func_00103060(param_1,param_2,param_3);
    func_00108F4C();
    if ((uVar5 != uVar1 && uVar5 != uVar2) && uVar5 != uVar3) break;
    func_00104338((uint)((ulonglong)DAT_00101908 * 10),(int)((ulonglong)DAT_00101908 * 10 >> 0x20));
  }
  if ((int)uVar5 < 0) {
    func_0010AC24(uVar5,0x101880);
  }
  func_001052E8();
  software_interrupt(3);
  return uVar5;
}

