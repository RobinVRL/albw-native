#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined4 DAT_00318c38;

// USA 00318BB4 <- EU 00318B90 (Ghidra, non-matching)
// GLOBAL DAT_00318c38 undefined4

/* WARNING: Removing unreachable block (ram,0x00318bf0) */

void func_00318BB4(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define aiStack_d0 ((int *)(albw_frame + 0x0))
  puVar1 = (uint *)func_002C11E8(aiStack_d0,1,0,0);
  func_0016898C(*(int *)(param_1 + 0x414),puVar1);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x414) + 0x14) + 0x10) = DAT_00318c38;
  return;
}

