#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f8898;
extern undefined4 *DAT_005f889c;
extern undefined4 *DAT_005f88a0;
extern undefined DAT_005f88a4;
extern undefined4 DAT_005f88b8;
extern uint *DAT_005f88d4;
extern undefined4 DAT_005f88d8;
extern undefined4 *DAT_005f88dc;
extern undefined4 DAT_005f88e0;
extern undefined4 DAT_005f88e4;
extern char s_TagDoorOpenCloseChecker_005f88bc[];

// USA 005F882C <- EU 005F8804 (Ghidra, non-matching)
// GLOBAL DAT_005f8898 undefined4 *
// GLOBAL DAT_005f889c undefined4 *
// GLOBAL DAT_005f88a0 undefined4 *
// GLOBAL DAT_005f88a4 undefined
// GLOBAL DAT_005f88b8 undefined4
// GLOBAL DAT_005f88d4 uint *
// GLOBAL DAT_005f88d8 undefined4
// GLOBAL DAT_005f88dc undefined4 *
// GLOBAL DAT_005f88e0 undefined4
// GLOBAL DAT_005f88e4 undefined4
// GLOBAL s_TagDoorOpenCloseChecker_005f88bc string

undefined8 func_005F882C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005f8898;
  *DAT_005f8898 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f889c;
  *DAT_005f889c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f88a0;
  puVar3 = DAT_005f88a0 + 3;
  *DAT_005f88a0 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005f88b8;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005f88a4;
  local_18 = local_10;
  local_14 = s_TagDoorOpenCloseChecker_005f88bc;
  uVar2 = func_0019B51C(DAT_005f88dc,DAT_005f88d8,*DAT_005f88d4,(int)&local_18,DAT_005f88a0,
                        &local_10,0);
  return CONCAT44(DAT_005f88e4,uVar2);
}

