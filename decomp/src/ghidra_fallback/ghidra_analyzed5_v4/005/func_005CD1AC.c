#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005cd41c;
extern undefined4 *DAT_005cd420;
extern undefined DAT_005cd424;
extern undefined4 DAT_005cd42c;
extern undefined DAT_005cd430;
extern undefined DAT_005cd434;
extern undefined DAT_005cd438;
extern undefined DAT_005cd43c;
extern undefined DAT_005cd448;
extern undefined DAT_005cd454;
extern undefined DAT_005cd468;
extern undefined DAT_005cd478;
extern undefined DAT_005cd488;
extern undefined DAT_005cd49c;
extern undefined DAT_005cd4a8;
extern undefined DAT_005cd4b8;
extern undefined DAT_005cd4c8;
extern undefined DAT_005cd4d0;
extern undefined DAT_005cd4dc;
extern undefined DAT_005cd4ec;
extern undefined DAT_005cd4f8;
extern undefined DAT_005cd504;
extern undefined DAT_005cd510;
extern undefined DAT_005cd51c;
extern undefined DAT_005cd528;
extern undefined DAT_005cd530;
extern undefined DAT_005cd538;
extern undefined DAT_005cd544;
extern undefined DAT_005cd550;
extern undefined DAT_005cd558;
extern undefined DAT_005cd560;
extern undefined DAT_005cd56c;
extern undefined DAT_005cd578;
extern undefined DAT_005cd58c;
extern undefined DAT_005cd594;
extern undefined4 DAT_005cd5a0;
extern undefined4 DAT_005cd5a4;
extern undefined4 *DAT_005cd5a8;
extern undefined4 DAT_005cd5ac;
extern undefined4 *DAT_005cd5b0;
extern undefined4 DAT_005cd5b4;
extern undefined4 DAT_005cd5b8;
extern undefined4 DAT_005cd5bc;
extern undefined DAT_005cd5c0;
extern int DAT_005cd5e4;
extern undefined4 DAT_005cd5e8;
extern uint *DAT_005cd5ec;
extern undefined4 DAT_005cd5f0;
extern undefined4 *DAT_005cd5f4;
extern undefined4 DAT_005cd5f8;
extern char s_EnemyShadowLink_005cd5d4[];

// USA 005CD1AC <- EU 005CD184 (Ghidra, non-matching)
// GLOBAL DAT_005cd41c int *
// GLOBAL DAT_005cd420 undefined4 *
// GLOBAL DAT_005cd424 undefined
// GLOBAL DAT_005cd42c undefined4
// GLOBAL DAT_005cd430 undefined
// GLOBAL DAT_005cd434 undefined
// GLOBAL DAT_005cd438 undefined
// GLOBAL DAT_005cd43c undefined
// GLOBAL DAT_005cd448 undefined
// GLOBAL DAT_005cd454 undefined
// GLOBAL DAT_005cd468 undefined
// GLOBAL DAT_005cd478 undefined
// GLOBAL DAT_005cd488 undefined
// GLOBAL DAT_005cd49c undefined
// GLOBAL DAT_005cd4a8 undefined
// GLOBAL DAT_005cd4b8 undefined
// GLOBAL DAT_005cd4c8 undefined
// GLOBAL DAT_005cd4d0 undefined
// GLOBAL DAT_005cd4dc undefined
// GLOBAL DAT_005cd4ec undefined
// GLOBAL DAT_005cd4f8 undefined
// GLOBAL DAT_005cd504 undefined
// GLOBAL DAT_005cd510 undefined
// GLOBAL DAT_005cd51c undefined
// GLOBAL DAT_005cd528 undefined
// GLOBAL DAT_005cd530 undefined
// GLOBAL DAT_005cd538 undefined
// GLOBAL DAT_005cd544 undefined
// GLOBAL DAT_005cd550 undefined
// GLOBAL DAT_005cd558 undefined
// GLOBAL DAT_005cd560 undefined
// GLOBAL DAT_005cd56c undefined
// GLOBAL DAT_005cd578 undefined
// GLOBAL DAT_005cd58c undefined
// GLOBAL DAT_005cd594 undefined
// GLOBAL DAT_005cd5a0 undefined4
// GLOBAL DAT_005cd5a4 undefined4
// GLOBAL DAT_005cd5a8 undefined4 *
// GLOBAL DAT_005cd5ac undefined4
// GLOBAL DAT_005cd5b0 undefined4 *
// GLOBAL DAT_005cd5b4 undefined4
// GLOBAL DAT_005cd5b8 undefined4
// GLOBAL DAT_005cd5bc undefined4
// GLOBAL DAT_005cd5c0 undefined
// GLOBAL DAT_005cd5e4 int
// GLOBAL DAT_005cd5e8 undefined4
// GLOBAL DAT_005cd5ec uint *
// GLOBAL DAT_005cd5f0 undefined4
// GLOBAL DAT_005cd5f4 undefined4 *
// GLOBAL DAT_005cd5f8 undefined4
// GLOBAL s_EnemyShadowLink_005cd5d4 string

undefined8 func_005CD1AC(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005cd41c;
  DAT_005cd41c[2] = -1;
  piVar1[3] = -1;
  uVar5 = DAT_005cd42c;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005cd420;
  DAT_005cd420[1] = &DAT_005cd424;
  *puVar2 = uVar5;
  puVar2[3] = &DAT_005cd430;
  puVar2[2] = uVar5;
  puVar2[5] = &DAT_005cd434;
  puVar2[4] = uVar5;
  puVar2[7] = &DAT_005cd438;
  puVar2[6] = uVar5;
  puVar2[9] = &DAT_005cd43c;
  puVar2[8] = uVar5;
  puVar2[0xb] = &DAT_005cd448;
  puVar2[10] = uVar5;
  puVar2[0xd] = &DAT_005cd454;
  puVar2[0xc] = uVar5;
  puVar2[0xf] = &DAT_005cd468;
  puVar2[0xe] = uVar5;
  puVar2[0x11] = &DAT_005cd478;
  puVar2[0x10] = uVar5;
  puVar2[0x13] = &DAT_005cd488;
  puVar2[0x12] = uVar5;
  puVar2[0x15] = &DAT_005cd49c;
  puVar2[0x14] = uVar5;
  puVar2[0x17] = &DAT_005cd4a8;
  puVar2[0x16] = uVar5;
  puVar2[0x19] = &DAT_005cd4b8;
  puVar2[0x18] = uVar5;
  puVar2[0x1b] = &DAT_005cd4c8;
  puVar2[0x1a] = uVar5;
  puVar2[0x1d] = &DAT_005cd4d0;
  puVar2[0x1c] = uVar5;
  puVar2[0x1f] = &DAT_005cd4dc;
  puVar2[0x1e] = uVar5;
  puVar2[0x21] = &DAT_005cd4ec;
  puVar2[0x20] = uVar5;
  puVar2[0x23] = &DAT_005cd4f8;
  puVar2[0x22] = uVar5;
  puVar2[0x25] = &DAT_005cd504;
  puVar2[0x24] = uVar5;
  puVar2[0x27] = &DAT_005cd510;
  puVar2[0x26] = uVar5;
  puVar2[0x29] = &DAT_005cd51c;
  puVar2[0x28] = uVar5;
  puVar2[0x2b] = &DAT_005cd528;
  puVar2[0x2a] = uVar5;
  puVar2[0x2d] = &DAT_005cd530;
  puVar2[0x2c] = uVar5;
  puVar2[0x2f] = &DAT_005cd538;
  puVar2[0x2e] = uVar5;
  puVar2[0x31] = &DAT_005cd544;
  puVar2[0x30] = uVar5;
  puVar2[0x33] = &DAT_005cd550;
  puVar2[0x32] = uVar5;
  puVar2[0x35] = &DAT_005cd558;
  puVar2[0x34] = uVar5;
  puVar2[0x37] = &DAT_005cd560;
  puVar2[0x36] = uVar5;
  puVar2[0x39] = &DAT_005cd56c;
  puVar2[0x38] = uVar5;
  puVar2[0x3b] = &DAT_005cd578;
  puVar2[0x3a] = uVar5;
  puVar2[0x3d] = &DAT_005cd58c;
  puVar2[0x3c] = uVar5;
  puVar2[0x3e] = uVar5;
  puVar2[0x3f] = &DAT_005cd594;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005cd5a8,5,0,0,0,(undefined4 *)&local_28,0xb);
  uVar4 = DAT_005cd5bc;
  uVar3 = DAT_005cd5b8;
  puVar2 = DAT_005cd5b0;
  *DAT_005cd5b0 = DAT_005cd5b4;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[-0xab] = 5;
  puVar2[-0xaa] = puVar2 + -0xa9;
  puVar2[-0xac] = 0;
  local_14 = &DAT_005cd5c0;
  local_18 = uVar5;
  local_1c = s_EnemyShadowLink_005cd5d4;
  local_20 = uVar5;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005cd5e4;
  }
  uVar5 = func_0019B51C(DAT_005cd5f4,DAT_005cd5f0,*DAT_005cd5ec,(int)&local_20,DAT_005cd5e8,
                        &local_18,iVar6);
  return CONCAT44(DAT_005cd5f8,uVar5);
}

