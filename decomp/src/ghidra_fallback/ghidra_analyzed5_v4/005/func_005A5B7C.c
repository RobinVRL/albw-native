#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a5be8;
extern undefined4 *DAT_005a5bec;
extern undefined4 *DAT_005a5bf0;
extern undefined DAT_005a5bf4;
extern undefined4 DAT_005a5c04;
extern uint *DAT_005a5c14;
extern undefined4 DAT_005a5c18;
extern undefined4 *DAT_005a5c1c;
extern undefined4 DAT_005a5c20;
extern undefined4 DAT_005a5c24;
extern char s_MapDungeon_005a5c08[];

// USA 005A5B7C <- EU 005A5B54 (Ghidra, non-matching)
// GLOBAL DAT_005a5be8 undefined4 *
// GLOBAL DAT_005a5bec undefined4 *
// GLOBAL DAT_005a5bf0 undefined4 *
// GLOBAL DAT_005a5bf4 undefined
// GLOBAL DAT_005a5c04 undefined4
// GLOBAL DAT_005a5c14 uint *
// GLOBAL DAT_005a5c18 undefined4
// GLOBAL DAT_005a5c1c undefined4 *
// GLOBAL DAT_005a5c20 undefined4
// GLOBAL DAT_005a5c24 undefined4
// GLOBAL s_MapDungeon_005a5c08 string

undefined8 func_005A5B7C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a5be8;
  *DAT_005a5be8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a5bec;
  *DAT_005a5bec = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a5bf0;
  puVar3 = DAT_005a5bf0 + 3;
  *DAT_005a5bf0 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a5c04;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005a5bf4;
  local_18 = local_10;
  local_14 = s_MapDungeon_005a5c08;
  uVar2 = func_0019B51C(DAT_005a5c1c,DAT_005a5c18,*DAT_005a5c14,(int)&local_18,DAT_005a5bf0,
                        &local_10,0);
  return CONCAT44(DAT_005a5c24,uVar2);
}

