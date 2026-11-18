#include "ghidra_types.h"

extern int func_00101390(int param_1,int param_2);
extern int func_001013C4(void);
extern int func_00101DC4(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_0010A98C(uint param_1);
extern int DAT_00100e48;
extern uint DAT_00100e4c;

// USA 00100DA4 <- EU 00100DA4 (Ghidra, non-matching)
// GLOBAL DAT_00100e48 int
// GLOBAL DAT_00100e4c uint

undefined4 func_00100DA4(uint param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x0))
  iVar1 = DAT_00100e48;
  uVar2 = DAT_00100e4c;
  if ((param_1 & 0xfff) == 0) {
    if (*(uint *)(DAT_00100e48 + 8) < param_1) {
      uVar2 = func_00101DC4(&uStack_10,*(uint *)(DAT_00100e48 + 8) + 0x8000000,3);
    }
    else {
      uVar2 = func_00101DC4(&uStack_10,param_1 + 0x8000000,1);
    }
    if (-1 < (int)uVar2) {
      *(uint *)(iVar1 + 8) = param_1;
    }
  }
  if ((int)uVar2 < 0) {
    func_0010A98C(uVar2);
  }
  func_00101390(0x8000000,*(int *)(iVar1 + 8));
  return func_001013C4();
}

