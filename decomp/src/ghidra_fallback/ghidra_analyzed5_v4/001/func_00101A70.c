#include "ghidra_types.h"

extern int func_00102B84(byte param_1);
extern int func_00102E40(undefined1 param_1,undefined1 *param_2);
extern int func_001030B4(undefined1 param_1);
extern int func_00104338(uint param_1,int param_2);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern uint DAT_00101b0c;
extern uint DAT_00101b10;
extern uint DAT_00101b14;
extern uint DAT_00101b18;

// USA 00101A70 <- EU 00101A70 (Ghidra, non-matching)
// GLOBAL DAT_00101b0c uint
// GLOBAL DAT_00101b10 uint
// GLOBAL DAT_00101b14 uint
// GLOBAL DAT_00101b18 uint

uint func_00101A70(byte param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  func_00102E40(0,(undefined1 *)0x0);
  func_00102B84(9);
  uVar3 = DAT_00101b14;
  uVar2 = DAT_00101b10;
  uVar1 = DAT_00101b0c;
  while( true ) {
    func_00108DF8();
    uVar4 = func_001030B4(param_1 ^ 1);
    func_00108F4C();
    if ((uVar4 != uVar1 && uVar4 != uVar2) && uVar4 != uVar3) break;
    func_00104338((uint)((ulonglong)DAT_00101b18 * 10),(int)((ulonglong)DAT_00101b18 * 10 >> 0x20));
  }
  if ((int)uVar4 < 0) {
    func_0010AC24(uVar4,(int)"R$" /* EU 00101AD4 */);
  }
  return uVar4;
}

