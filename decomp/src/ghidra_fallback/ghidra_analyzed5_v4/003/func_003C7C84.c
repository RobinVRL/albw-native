#include "ghidra_types.h"

extern int func_003C9950(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined1 param_11);
extern int func_003E30DC(uint param_1);
extern int DAT_003c7cd4;

// USA 003C7C84 <- EU 003C7C60 (Ghidra, non-matching)
// GLOBAL DAT_003c7cd4 int

uint func_003C7C84(uint param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 ** *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 ((uint *)(albw_frame + 0x10))
  uVar1 = func_003E30DC(param_2);
  uVar2 = func_003E30DC(param_1);
  local_28 = &local_28;
  local_24 = 1;
  local_20[0] = *(uint *)(DAT_003c7cd4 + 0x10);
  uVar1 = func_003C9950(local_20,4,1,local_28,1,0x200,param_2,param_1,uVar1,uVar2,param_3);
  return uVar1;
}

