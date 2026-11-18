#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ca468;
extern undefined4 *DAT_005ca46c;
extern undefined4 *DAT_005ca470;
extern undefined DAT_005ca474;
extern undefined4 DAT_005ca48c;
extern uint *DAT_005ca4a0;
extern undefined4 DAT_005ca4a4;
extern undefined4 *DAT_005ca4a8;
extern undefined4 DAT_005ca4ac;
extern undefined4 DAT_005ca4b0;
extern char s_TagCameraTrail_005ca490[];

// USA 005CA3FC <- EU 005CA3D4 (Ghidra, non-matching)
// GLOBAL DAT_005ca468 undefined4 *
// GLOBAL DAT_005ca46c undefined4 *
// GLOBAL DAT_005ca470 undefined4 *
// GLOBAL DAT_005ca474 undefined
// GLOBAL DAT_005ca48c undefined4
// GLOBAL DAT_005ca4a0 uint *
// GLOBAL DAT_005ca4a4 undefined4
// GLOBAL DAT_005ca4a8 undefined4 *
// GLOBAL DAT_005ca4ac undefined4
// GLOBAL DAT_005ca4b0 undefined4
// GLOBAL s_TagCameraTrail_005ca490 string

undefined8 func_005CA3FC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ca468;
  *DAT_005ca468 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca46c;
  *DAT_005ca46c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ca470;
  puVar3 = DAT_005ca470 + 3;
  *DAT_005ca470 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ca48c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ca474;
  local_18 = local_10;
  local_14 = s_TagCameraTrail_005ca490;
  uVar2 = func_0019B51C(DAT_005ca4a8,DAT_005ca4a4,*DAT_005ca4a0,(int)&local_18,DAT_005ca470,
                        &local_10,0);
  return CONCAT44(DAT_005ca4b0,uVar2);
}

