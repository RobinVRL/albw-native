#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_003C5604(int param_1);
extern undefined4 *DAT_005b63c8;
extern undefined4 *DAT_005b63cc;
extern undefined DAT_005b63d0;
extern undefined4 DAT_005b63e8;
extern uint *DAT_005b63fc;
extern undefined4 DAT_005b6400;
extern undefined4 *DAT_005b6404;
extern undefined4 DAT_005b6408;
extern undefined4 DAT_005b640c;
extern char s_MojWarpSages_005b63ec[];

// USA 005B634C <- EU 005B6324 (Ghidra, non-matching)
// GLOBAL DAT_005b63c8 undefined4 *
// GLOBAL DAT_005b63cc undefined4 *
// GLOBAL DAT_005b63d0 undefined
// GLOBAL DAT_005b63e8 undefined4
// GLOBAL DAT_005b63fc uint *
// GLOBAL DAT_005b6400 undefined4
// GLOBAL DAT_005b6404 undefined4 *
// GLOBAL DAT_005b6408 undefined4
// GLOBAL DAT_005b640c undefined4
// GLOBAL s_MojWarpSages_005b63ec string

undefined8 func_005B634C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b63c8;
  DAT_005b63c8[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar2 = func_003C5604(0x36);
  *puVar1 = uVar2;
  puVar1 = DAT_005b63cc;
  puVar3 = DAT_005b63cc + 3;
  *DAT_005b63cc = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b63e8;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b63d0;
  local_18 = local_10;
  local_14 = s_MojWarpSages_005b63ec;
  uVar2 = func_0019B51C(DAT_005b6404,DAT_005b6400,*DAT_005b63fc,(int)&local_18,DAT_005b63cc,
                        &local_10,0);
  return CONCAT44(DAT_005b640c,uVar2);
}

