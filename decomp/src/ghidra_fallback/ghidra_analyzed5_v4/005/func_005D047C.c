#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005d05c4;
extern undefined4 *DAT_005d05c8;
extern undefined DAT_005d05cc;
extern undefined DAT_005d05d4;
extern undefined4 DAT_005d05d8;
extern undefined4 DAT_005d05dc;
extern undefined4 DAT_005d05e0;
extern undefined4 *DAT_005d05e4;
extern undefined4 DAT_005d06b0;
extern char s_itt_tutorial_bomb_005d062c[];
extern char s_itt_tutorial_boomerang_005d0670[];
extern char s_itt_tutorial_bow_005d069c[];
extern char s_itt_tutorial_firerod_005d0640[];
extern char s_itt_tutorial_hammer_005d0688[];
extern char s_itt_tutorial_hookshot_005d0658[];
extern char s_itt_tutorial_icerod_005d05e8[];
extern char s_itt_tutorial_sandrod_005d05fc[];
extern char s_itt_tutorial_tornaderod_005d0614[];

// USA 005D047C <- EU 005D0454 (Ghidra, non-matching)
// GLOBAL DAT_005d05c4 undefined4 *
// GLOBAL DAT_005d05c8 undefined4 *
// GLOBAL DAT_005d05cc undefined
// GLOBAL DAT_005d05d4 undefined
// GLOBAL DAT_005d05d8 undefined4
// GLOBAL DAT_005d05dc undefined4
// GLOBAL DAT_005d05e0 undefined4
// GLOBAL DAT_005d05e4 undefined4 *
// GLOBAL DAT_005d06b0 undefined4
// GLOBAL s_itt_tutorial_bomb_005d062c string
// GLOBAL s_itt_tutorial_boomerang_005d0670 string
// GLOBAL s_itt_tutorial_bow_005d069c string
// GLOBAL s_itt_tutorial_firerod_005d0640 string
// GLOBAL s_itt_tutorial_hammer_005d0688 string
// GLOBAL s_itt_tutorial_hookshot_005d0658 string
// GLOBAL s_itt_tutorial_icerod_005d05e8 string
// GLOBAL s_itt_tutorial_sandrod_005d05fc string
// GLOBAL s_itt_tutorial_tornaderod_005d0614 string

undefined4 func_005D047C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005d05c4;
  *DAT_005d05c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005d05d8;
  puVar1 = DAT_005d05c8;
  *DAT_005d05c8 = 0;
  puVar1[1] = 0;
  puVar1[3] = &DAT_005d05cc;
  puVar1[2] = uVar2;
  puVar1 = DAT_005d05e4;
  DAT_005d05e4[1] = s_itt_tutorial_icerod_005d05e8;
  *puVar1 = uVar2;
  puVar1[4] = s_itt_tutorial_sandrod_005d05fc;
  puVar1[3] = uVar2;
  puVar1[7] = s_itt_tutorial_tornaderod_005d0614;
  puVar1[6] = uVar2;
  puVar1[10] = s_itt_tutorial_bomb_005d062c;
  puVar1[9] = uVar2;
  puVar1[0xd] = s_itt_tutorial_firerod_005d0640;
  puVar1[0xc] = uVar2;
  puVar1[0x10] = s_itt_tutorial_hookshot_005d0658;
  puVar1[0xf] = uVar2;
  puVar1[0x13] = s_itt_tutorial_boomerang_005d0670;
  puVar1[0x12] = uVar2;
  puVar1[0x16] = s_itt_tutorial_hammer_005d0688;
  puVar1[0x15] = uVar2;
  puVar1[0x19] = s_itt_tutorial_bow_005d069c;
  puVar1[0x18] = uVar2;
  puVar1[0x1c] = &DAT_005d05d4;
  puVar1[0x1b] = uVar2;
  puVar1[0x1f] = &DAT_005d05d4;
  puVar1[0x1e] = uVar2;
  puVar1[0x22] = &DAT_005d05d4;
  puVar1[0x21] = uVar2;
  puVar1[0x25] = &DAT_005d05d4;
  puVar1[0x24] = uVar2;
  puVar1[0x28] = &DAT_005d05d4;
  puVar1[0x27] = uVar2;
  puVar1[0x2b] = &DAT_005d05d4;
  puVar1[0x2a] = uVar2;
  puVar1[0x2e] = &DAT_005d05d4;
  puVar1[0x2d] = uVar2;
  puVar1[0x31] = &DAT_005d05d4;
  puVar1[0x30] = uVar2;
  puVar1[0x34] = &DAT_005d05d4;
  puVar1[0x33] = uVar2;
  puVar1[0x37] = &DAT_005d05d4;
  puVar1[0x36] = uVar2;
  puVar1[0x3a] = &DAT_005d05d4;
  puVar1[0x39] = uVar2;
  puVar1[0x3d] = &DAT_005d05d4;
  puVar1[0x3c] = uVar2;
  puVar1[0x40] = &DAT_005d05d4;
  puVar1[0x3f] = uVar2;
  puVar1[0x42] = uVar2;
  puVar1[0x43] = &DAT_005d05d4;
  return func_005902C0(0);
}

