#include "ghidra_types.h"

extern int func_00100858(uint *param_1,uint *param_2,uint param_3);
extern int func_003D22CC(undefined4 *param_1,undefined4 *param_2);
extern int func_003D22F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00563C54(int param_1,int param_2,uint param_3);
extern undefined4 *DAT_00563db4;

// USA 00563D24 <- EU 00563CFC (Ghidra, non-matching)
// GLOBAL DAT_00563db4 undefined4 *

uint func_00563D24(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(uint *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  if (param_2 == 0) {
    uVar3 = *(uint *)(param_1 + 0x210);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3c0);
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      iVar1 = func_00563C54(param_1,param_2,uVar2);
      if (iVar1 == 0 || iVar1 == -0x20) {
        func_003D22F4(&local_28,DAT_00563db4);
      }
      else {
        func_003D22CC(&local_28,(undefined4 *)(iVar1 + 0x20));
      }
      local_30 = local_28;
      uStack_2c = uStack_24;
      iVar1 = func_00100858(param_3,&local_30,8);
      if (iVar1 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0xffffffff;
}

