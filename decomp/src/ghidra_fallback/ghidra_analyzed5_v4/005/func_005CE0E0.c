#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ce180;
extern undefined4 *DAT_005ce184;
extern undefined4 *DAT_005ce188;
extern undefined DAT_005ce18c;
extern undefined4 DAT_005ce194;
extern undefined4 DAT_005ce1a4;
extern undefined4 DAT_005ce1a8;
extern undefined4 *DAT_005ce1ac;
extern undefined DAT_005ce1b0;
extern uint *DAT_005ce1d0;
extern undefined4 DAT_005ce1d4;
extern undefined4 *DAT_005ce1d8;
extern undefined4 DAT_005ce1dc;
extern char s_MojBeltConveyor_005ce1c0[];
extern char s_playback_005ce198[];

// USA 005CE0E0 <- EU 005CE0B8 (Ghidra, non-matching)
// GLOBAL DAT_005ce180 undefined4 *
// GLOBAL DAT_005ce184 undefined4 *
// GLOBAL DAT_005ce188 undefined4 *
// GLOBAL DAT_005ce18c undefined
// GLOBAL DAT_005ce194 undefined4
// GLOBAL DAT_005ce1a4 undefined4
// GLOBAL DAT_005ce1a8 undefined4
// GLOBAL DAT_005ce1ac undefined4 *
// GLOBAL DAT_005ce1b0 undefined
// GLOBAL DAT_005ce1d0 uint *
// GLOBAL DAT_005ce1d4 undefined4
// GLOBAL DAT_005ce1d8 undefined4 *
// GLOBAL DAT_005ce1dc undefined4
// GLOBAL s_MojBeltConveyor_005ce1c0 string
// GLOBAL s_playback_005ce198 string

undefined8 func_005CE0E0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005ce180;
  *DAT_005ce180 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005ce194;
  puVar1 = DAT_005ce184;
  *DAT_005ce184 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ce188;
  DAT_005ce188[1] = &DAT_005ce18c;
  *puVar1 = local_18;
  puVar1[2] = local_18;
  puVar1[3] = s_playback_005ce198;
  puVar1 = DAT_005ce1ac;
  puVar3 = DAT_005ce1ac + 3;
  *DAT_005ce1ac = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005ce1b0;
  uStack_10 = local_18;
  local_c = s_MojBeltConveyor_005ce1c0;
  uVar2 = func_0019B51C(DAT_005ce1d8,DAT_005ce1d4,*DAT_005ce1d0,(int)&uStack_10,DAT_005ce1ac,
                        &local_18,0);
  return CONCAT44(DAT_005ce1dc,uVar2);
}

