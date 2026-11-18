#include "ghidra_types.h"

extern int func_005464DC(int param_1,undefined4 param_2,float fparam_0);
extern undefined4 *DAT_005467f8;
extern undefined4 DAT_005467fc;
extern undefined4 DAT_00546800;

// USA 005467E4 <- EU 005467BC (Ghidra, non-matching)
// GLOBAL DAT_005467f8 undefined4 *
// GLOBAL DAT_005467fc undefined4
// GLOBAL DAT_00546800 undefined4

undefined4 func_005467E4(int param_1,float fparam_0)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined1 * *)(albw_frame + 0x10))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_8 (*(undefined4 *)(albw_frame + 0x18))
  local_10 = (undefined1 *)&local_18;
  local_14 = DAT_005467fc;
  uStack_c = *DAT_005467f8;
  uStack_8 = DAT_005467f8[1];
  local_18 = DAT_00546800;
  uVar1 = func_005464DC(param_1,&local_14,fparam_0);
  return uVar1;
}

