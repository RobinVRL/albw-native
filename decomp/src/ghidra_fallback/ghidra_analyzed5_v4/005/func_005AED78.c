#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005aede4;
extern undefined4 *DAT_005aede8;
extern undefined4 *DAT_005aedec;
extern undefined DAT_005aedf0;
extern undefined4 DAT_005aee00;
extern uint *DAT_005aee14;
extern undefined4 DAT_005aee18;
extern undefined4 *DAT_005aee1c;
extern undefined4 DAT_005aee20;
extern undefined4 DAT_005aee24;
extern char s_AreaWarpHole_005aee04[];

// USA 005AED78 <- EU 005AED50 (Ghidra, non-matching)
// GLOBAL DAT_005aede4 undefined4 *
// GLOBAL DAT_005aede8 undefined4 *
// GLOBAL DAT_005aedec undefined4 *
// GLOBAL DAT_005aedf0 undefined
// GLOBAL DAT_005aee00 undefined4
// GLOBAL DAT_005aee14 uint *
// GLOBAL DAT_005aee18 undefined4
// GLOBAL DAT_005aee1c undefined4 *
// GLOBAL DAT_005aee20 undefined4
// GLOBAL DAT_005aee24 undefined4
// GLOBAL s_AreaWarpHole_005aee04 string

undefined8 func_005AED78(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005aede4;
  *DAT_005aede4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aede8;
  *DAT_005aede8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005aedec;
  puVar3 = DAT_005aedec + 3;
  *DAT_005aedec = 0;
  puVar1[1] = 5;
  local_10 = DAT_005aee00;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005aedf0;
  local_18 = local_10;
  local_14 = s_AreaWarpHole_005aee04;
  uVar2 = func_0019B51C(DAT_005aee1c,DAT_005aee18,*DAT_005aee14,(int)&local_18,DAT_005aedec,
                        &local_10,0);
  return CONCAT44(DAT_005aee24,uVar2);
}

