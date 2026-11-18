#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e2dd8;
extern undefined4 *DAT_005e2ddc;
extern undefined4 *DAT_005e2de0;
extern undefined DAT_005e2de4;
extern undefined4 DAT_005e2df8;
extern uint *DAT_005e2e10;
extern undefined4 DAT_005e2e14;
extern undefined4 *DAT_005e2e18;
extern undefined4 DAT_005e2e1c;
extern undefined4 DAT_005e2e20;
extern char s_ObjMediumThunder_005e2dfc[];

// USA 005E2D6C <- EU 005E2D44 (Ghidra, non-matching)
// GLOBAL DAT_005e2dd8 undefined4 *
// GLOBAL DAT_005e2ddc undefined4 *
// GLOBAL DAT_005e2de0 undefined4 *
// GLOBAL DAT_005e2de4 undefined
// GLOBAL DAT_005e2df8 undefined4
// GLOBAL DAT_005e2e10 uint *
// GLOBAL DAT_005e2e14 undefined4
// GLOBAL DAT_005e2e18 undefined4 *
// GLOBAL DAT_005e2e1c undefined4
// GLOBAL DAT_005e2e20 undefined4
// GLOBAL s_ObjMediumThunder_005e2dfc string

undefined8 func_005E2D6C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005e2dd8;
  *DAT_005e2dd8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e2ddc;
  *DAT_005e2ddc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e2de0;
  puVar3 = DAT_005e2de0 + 3;
  *DAT_005e2de0 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005e2df8;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005e2de4;
  local_18 = local_10;
  local_14 = s_ObjMediumThunder_005e2dfc;
  uVar2 = func_0019B51C(DAT_005e2e18,DAT_005e2e14,*DAT_005e2e10,(int)&local_18,DAT_005e2de0,
                        &local_10,0);
  return CONCAT44(DAT_005e2e20,uVar2);
}

