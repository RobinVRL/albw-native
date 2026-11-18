#include "ghidra_types.h"

extern int func_005464DC(int param_1,undefined4 param_2,float fparam_0);
extern undefined4 *DAT_005464a8;
extern undefined4 DAT_005464ac;
extern undefined4 DAT_005464b0;

// USA 00546494 <- EU 0054646C (Ghidra, non-matching)
// GLOBAL DAT_005464a8 undefined4 *
// GLOBAL DAT_005464ac undefined4
// GLOBAL DAT_005464b0 undefined4

undefined4 func_00546494(int param_1,float fparam_0)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined1 * *)(albw_frame + 0x10))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_8 (*(undefined4 *)(albw_frame + 0x18))
  local_10 = (undefined1 *)&local_18;
  local_14 = DAT_005464ac;
  uStack_c = *DAT_005464a8;
  uStack_8 = DAT_005464a8[1];
  local_18 = DAT_005464b0;
  uVar1 = func_005464DC(param_1,&local_14,fparam_0);
  return uVar1;
}

