#include "ghidra_types.h"

extern undefined *DAT_003e5624;
extern undefined *DAT_003e5628;

// GLOBAL DAT_003e5624 undefined *
// GLOBAL DAT_003e5628 undefined *
// USA 003E5510 <- EU 003E54F0 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_003E5510(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  _Alignas(8) unsigned char albw_frame[0x50]; /* entry_sp - 0x0 .. entry_sp + 0x50 */
#define stack0x00000004 (*(undefined4 *)(albw_frame + 0x4))
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int unaff_r7;
  code *pcVar3;
  uint unaff_r9;
  undefined4 uStack00000004;
  int iStack00000008;
  int iStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  uint uStack0000001c;
  uint in_stack_00000024;
  int iStack0000002c;
  uint uStack00000034;
  int iStack00000044;
  
  uStack0000001c = unaff_r5 >> 2;
  iStack0000002c = 0x80;
  switch(param_2) {
  case 0:
  case 1:
    iStack00000008 = uStack0000001c * 4 + 3;
    uStack00000010 = 3;
    pcVar3 = DAT_003e5624;
    break;
  case 2:
  case 3:
  case 4:
    iStack00000008 = uStack0000001c * 4 + 2;
    uStack00000010 = 2;
    pcVar3 = DAT_003e5628;
    break;
  default:
    goto switchD_003e5528_default;
  }
  iStack0000000c = uStack0000001c << 2;
  uStack00000014 = 0;
  uStack00000004 = 0;
  if ((param_1 != 0) && (uStack00000034 = 0, in_stack_00000024 != 0)) {
    iStack00000044 = uStack0000001c * param_4;
    do {
      uVar2 = 0;
      iVar1 = unaff_r7;
      do {
        (*pcVar3)(param_1,iVar1,uStack0000001c,&stack0x00000004);
        uVar2 = uVar2 + 8;
        iVar1 = iVar1 + 0x20;
        param_1 = param_1 + 0x100;
      } while (uVar2 < unaff_r9);
      unaff_r7 = unaff_r7 + iStack00000044 * 4;
      param_1 = param_1 + iStack0000002c * 4;
      uStack00000034 = uStack00000034 + 8;
    } while (uStack00000034 < in_stack_00000024);
  }
switchD_003e5528_default:
  return;
}

