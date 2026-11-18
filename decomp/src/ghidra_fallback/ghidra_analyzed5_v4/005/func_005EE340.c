#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ee420;
extern undefined4 *DAT_005ee424;
extern undefined4 *DAT_005ee428;
extern undefined DAT_005ee42c;
extern undefined4 DAT_005ee440;
extern uint *DAT_005ee45c;
extern undefined4 DAT_005ee460;
extern undefined4 *DAT_005ee464;
extern undefined4 DAT_005ee468;
extern undefined4 DAT_005ee46c;
extern undefined4 *DAT_005ee470;
extern undefined DAT_005ee474;
extern uint *DAT_005ee4a0;
extern undefined4 DAT_005ee4a4;
extern undefined4 *DAT_005ee4a8;
extern char s_MassBlockColorWidthBlue_005ee444[];
extern char s_MassBlockColorWidthRed_005ee488[];

// USA 005EE340 <- EU 005EE318 (Ghidra, non-matching)
// GLOBAL DAT_005ee420 undefined4 *
// GLOBAL DAT_005ee424 undefined4 *
// GLOBAL DAT_005ee428 undefined4 *
// GLOBAL DAT_005ee42c undefined
// GLOBAL DAT_005ee440 undefined4
// GLOBAL DAT_005ee45c uint *
// GLOBAL DAT_005ee460 undefined4
// GLOBAL DAT_005ee464 undefined4 *
// GLOBAL DAT_005ee468 undefined4
// GLOBAL DAT_005ee46c undefined4
// GLOBAL DAT_005ee470 undefined4 *
// GLOBAL DAT_005ee474 undefined
// GLOBAL DAT_005ee4a0 uint *
// GLOBAL DAT_005ee4a4 undefined4
// GLOBAL DAT_005ee4a8 undefined4 *
// GLOBAL s_MassBlockColorWidthBlue_005ee444 string
// GLOBAL s_MassBlockColorWidthRed_005ee488 string

undefined8 func_005EE340(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005ee420;
  *DAT_005ee420 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ee424;
  *DAT_005ee424 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005ee440;
  puVar1 = DAT_005ee428;
  puVar3 = DAT_005ee428 + 3;
  DAT_005ee428[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005ee42c;
  local_2c = s_MassBlockColorWidthBlue_005ee444;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005ee464,DAT_005ee460,*DAT_005ee45c,(int)&local_30,DAT_005ee428,&local_28,0);
  puVar1 = DAT_005ee470;
  puVar3 = DAT_005ee470 + 3;
  DAT_005ee470[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005ee474;
  local_1c = s_MassBlockColorWidthRed_005ee488;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005ee4a8,DAT_005ee4a4,*DAT_005ee4a0,(int)&local_20,DAT_005ee470,
                        &local_18,0);
  return CONCAT44(DAT_005ee46c,uVar2);
}

