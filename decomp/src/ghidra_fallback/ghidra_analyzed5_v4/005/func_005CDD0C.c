#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005cdd78;
extern undefined4 *DAT_005cdd7c;
extern undefined4 *DAT_005cdd80;
extern undefined DAT_005cdd84;
extern undefined4 DAT_005cdd98;
extern uint *DAT_005cddac;
extern undefined4 DAT_005cddb0;
extern undefined4 *DAT_005cddb4;
extern undefined4 DAT_005cddb8;
extern undefined4 DAT_005cddbc;
extern char s_MapLoruleCastle_005cdd9c[];

// USA 005CDD0C <- EU 005CDCE4 (Ghidra, non-matching)
// GLOBAL DAT_005cdd78 undefined4 *
// GLOBAL DAT_005cdd7c undefined4 *
// GLOBAL DAT_005cdd80 undefined4 *
// GLOBAL DAT_005cdd84 undefined
// GLOBAL DAT_005cdd98 undefined4
// GLOBAL DAT_005cddac uint *
// GLOBAL DAT_005cddb0 undefined4
// GLOBAL DAT_005cddb4 undefined4 *
// GLOBAL DAT_005cddb8 undefined4
// GLOBAL DAT_005cddbc undefined4
// GLOBAL s_MapLoruleCastle_005cdd9c string

undefined8 func_005CDD0C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005cdd78;
  *DAT_005cdd78 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cdd7c;
  *DAT_005cdd7c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005cdd80;
  puVar3 = DAT_005cdd80 + 3;
  *DAT_005cdd80 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005cdd98;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005cdd84;
  local_18 = local_10;
  local_14 = s_MapLoruleCastle_005cdd9c;
  uVar2 = func_0019B51C(DAT_005cddb4,DAT_005cddb0,*DAT_005cddac,(int)&local_18,DAT_005cdd80,
                        &local_10,0);
  return CONCAT44(DAT_005cddbc,uVar2);
}

