#include "ghidra_types.h"

extern int func_001510A4();
extern int func_00361610(int param_1,undefined1 param_2);
extern int func_0036CB64(undefined4 *param_1);
extern int func_0036D0E0(int *param_1);
extern int DAT_00162e5c;
extern int *DAT_00162e60;
extern int DAT_00162e64;

// USA 00162D9C <- EU 00162DA0 (Ghidra, non-matching)
// GLOBAL DAT_00162e5c int
// GLOBAL DAT_00162e60 int *
// GLOBAL DAT_00162e64 int

undefined4 func_00162D9C(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = DAT_00162e5c;
  param_1[200] = DAT_00162e5c + 0x84;
  *param_1 = iVar2;
  uVar1 = *(ushort *)((int)param_1 + 0x2e) & 0xff;
  if ((uVar1 < 4) && (1 < uVar1)) {
    iVar2 = uVar1 - 2;
  }
  else {
    iVar2 = -1;
  }
  if ((iVar2 < 0) && ((char)param_1[999] != '\0')) {
    func_00361610(*DAT_00162e60,0);
  }
  puVar3 = func_0036CB64(param_1 + 0x398);
  func_0036D0E0(puVar3 + -0x1e);
  func_0036D0E0(puVar3 + -0x1f);
  func_0036D0E0(puVar3 + -0x20);
  func_0036D0E0(puVar3 + -0x21);
  iVar2 = DAT_00162e64;
  puVar3[-0x2d0] = DAT_00162e64 + 0x84;
  puVar3[-0x398] = iVar2;
  return func_001510A4(puVar3 + -0x398);
}

