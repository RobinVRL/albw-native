#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010DA24(int param_1,undefined4 param_2);
extern int func_0010FD28(uint *param_1,undefined4 param_2);
extern int func_0048F4A4(int param_1,uint param_2,undefined1 param_3,undefined1 param_4);
extern ulonglong func_004981A4(int param_1,int param_2,int param_3);
extern int func_0049BB30(uint *param_1,uint param_2);
extern undefined *DAT_0019b040;
extern int DAT_0019b044;
extern int *DAT_0019b048;

// USA 0019AF4C <- EU 0019AF4C (Ghidra, non-matching)
// GLOBAL DAT_0019b040 undefined *
// GLOBAL DAT_0019b044 int
// GLOBAL DAT_0019b048 int *

int func_0019AF4C(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((uint *)(albw_frame + 0x0))
  iVar1 = func_00100118(param_1 + 0x10,DAT_0019b040,400,4);
  func_0010FD28((uint *)(iVar1 + 0x650),extraout_r1);
  *(undefined1 *)(iVar1 + 0x660) = 0;
  *(undefined1 *)(iVar1 + 0x661) = 0;
  *(undefined1 *)(iVar1 + 0x662) = 0;
  *(undefined1 *)(iVar1 + 0x663) = 0;
  *(undefined4 *)(iVar1 + 0xa64) = 0;
  *(undefined4 *)(iVar1 + 0xa68) = 0;
  uVar2 = 0;
  *(undefined4 *)(iVar1 + 0xa6c) = *(undefined4 *)(DAT_0019b044 + 8);
  if (*(int *)(*DAT_0019b048 + 0xd0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(*DAT_0019b048 + 0xd8);
  }
  do {
    iVar3 = iVar1 + uVar2 * 400;
    func_004981A4(iVar3,iVar4,1);
    func_0048F4A4(iVar3 + 0x10,0xff0000,0x14,6);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  *(undefined4 *)(iVar1 + 0x640) = 0;
  *(undefined4 *)(iVar1 + 0x644) = 0;
  *(undefined4 *)(iVar1 + 0x648) = 0;
  *(undefined4 *)(iVar1 + 0x64c) = 0;
  local_20[0] = func_0010DA24((int)local_20,extraout_r1_00);
  software_interrupt(0x28);
  func_0049BB30((uint *)(iVar1 + 0x650),local_20[0]);
  return iVar1 + -0x10;
}

