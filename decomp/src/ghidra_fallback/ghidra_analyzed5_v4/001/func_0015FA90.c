#include "ghidra_types.h"

extern int func_0015C534(undefined4 *param_1);
extern int func_003178B4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4, int param_5,undefined4 *param_6,int param_7);

// USA 0015FA90 <- EU 0015FA94 (Ghidra, non-matching)

undefined4 func_0015FA90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_1c (*(undefined4 * *)(albw_frame + 0x14))
  #define puStack_18 (*(undefined4 * *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  uVar2 = 0;
  puStack_1c = param_1;
  puStack_18 = param_2;
  uStack_14 = param_3;
  if (((*(ushort *)((int)param_1 + 0x2e) & 0xff) != 0) &&
     (iVar1 = func_0015C534(param_1), iVar1 != 0)) {
    uVar2 = 1;
  }
  local_20 = 0;
  uStack_24 = param_1[0xb3];
  return func_003178B4(param_2,&uStack_14,&uStack_24,uVar2,0,&local_20,0);
}

