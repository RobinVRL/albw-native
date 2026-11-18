#include "ghidra_types.h"

extern int func_003C9714(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,int param_7);
extern int func_0056130C(int param_1);
extern uint DAT_003c8ef4;

// USA 003C8EC0 <- EU 003C8E9C (Ghidra, non-matching)
// GLOBAL DAT_003c8ef4 uint

uint func_003C8EC0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_24 ((uint *)(albw_frame + 0xc))
  uVar4 = param_2[2];
  uVar1 = DAT_003c8ef4;
  if (uVar4 < 0x201) {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    local_24[0] = func_0056130C(param_1);
    uVar1 = func_003C9714(local_24,0,uVar2,uVar3,uVar5,uVar6,uVar4);
  }
  return uVar1;
}

