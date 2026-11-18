#include "ghidra_types.h"

extern int func_003C98E4(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9);
extern int func_006760E0(int param_1);
extern uint DAT_003c7c58;
extern int DAT_003c7c5c;

// USA 003C7C28 <- EU 003C7C04 (Ghidra, non-matching)
// GLOBAL DAT_003c7c58 uint
// GLOBAL DAT_003c7c5c int

uint func_003C7C28(int param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 (*(uint *)(albw_frame + 0xc))
  #define auStack_10 ((undefined1 *)(albw_frame + 0x10))
  #define auStack_c ((undefined1 *)(albw_frame + 0x14))
  iVar1 = func_006760E0(param_1);
  uVar2 = DAT_003c7c58;
  if (iVar1 != 0) {
    local_14 = *(uint *)(DAT_003c7c5c + 0x10);
    uVar2 = func_003C98E4(&local_14,auStack_c,*(undefined4 *)(iVar1 + 8),
                          *(undefined4 *)(iVar1 + 0xc),0,auStack_10,1,auStack_c,1);
  }
  return uVar2;
}

