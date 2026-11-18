#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005aeebc;
extern undefined4 *DAT_005aeec0;
extern undefined4 *DAT_005aeec4;
extern undefined DAT_005aeec8;
extern undefined4 DAT_005aeed4;
extern uint *DAT_005aeee8;
extern undefined4 DAT_005aeeec;
extern undefined4 *DAT_005aeef0;
extern undefined4 DAT_005aeef4;
extern undefined4 DAT_005aeef8;
extern char s_AreaWarpTile_005aeed8[];

// USA 005AEE50 <- EU 005AEE28 (Ghidra, non-matching)
// GLOBAL DAT_005aeebc undefined4 *
// GLOBAL DAT_005aeec0 undefined4 *
// GLOBAL DAT_005aeec4 undefined4 *
// GLOBAL DAT_005aeec8 undefined
// GLOBAL DAT_005aeed4 undefined4
// GLOBAL DAT_005aeee8 uint *
// GLOBAL DAT_005aeeec undefined4
// GLOBAL DAT_005aeef0 undefined4 *
// GLOBAL DAT_005aeef4 undefined4
// GLOBAL DAT_005aeef8 undefined4
// GLOBAL s_AreaWarpTile_005aeed8 string

undefined8 func_005AEE50(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005aeebc;
  *DAT_005aeebc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aeec0;
  *DAT_005aeec0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005aeec4;
  puVar3 = DAT_005aeec4 + 3;
  *DAT_005aeec4 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005aeed4;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005aeec8;
  local_18 = local_10;
  local_14 = s_AreaWarpTile_005aeed8;
  uVar2 = func_0019B51C(DAT_005aeef0,DAT_005aeeec,*DAT_005aeee8,(int)&local_18,DAT_005aeec4,
                        &local_10,0);
  return CONCAT44(DAT_005aeef8,uVar2);
}

