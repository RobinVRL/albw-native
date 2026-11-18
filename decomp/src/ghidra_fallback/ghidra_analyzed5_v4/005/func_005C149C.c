#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c15b0;
extern undefined4 *DAT_005c15b4;
extern undefined4 *DAT_005c15b8;
extern undefined4 DAT_005c15c8;
extern undefined4 DAT_005c15f0;
extern undefined4 DAT_005c15f4;
extern undefined4 *DAT_005c15f8;
extern undefined DAT_005c1608;
extern undefined DAT_005c1610;
extern undefined DAT_005c1618;
extern undefined DAT_005c1620;
extern undefined DAT_005c1628;
extern undefined4 DAT_005c1630;
extern undefined4 *DAT_005c1634;
extern undefined DAT_005c1638;
extern uint *DAT_005c1660;
extern undefined4 DAT_005c1664;
extern undefined4 *DAT_005c1668;
extern undefined4 DAT_005c166c;
extern char s_N_ArrowB_00_005c15cc[];
extern char s_N_ArrowL_00_005c15d8[];
extern char s_N_ArrowR_00_005c15e4[];
extern char s_N_ArrowT_00_005c15bc[];
extern char s_ObjTurtleTurn_005c1650[];
extern char s_struggle_005c15fc[];

// USA 005C149C <- EU 005C1474 (Ghidra, non-matching)
// GLOBAL DAT_005c15b0 undefined4 *
// GLOBAL DAT_005c15b4 undefined4 *
// GLOBAL DAT_005c15b8 undefined4 *
// GLOBAL DAT_005c15c8 undefined4
// GLOBAL DAT_005c15f0 undefined4
// GLOBAL DAT_005c15f4 undefined4
// GLOBAL DAT_005c15f8 undefined4 *
// GLOBAL DAT_005c1608 undefined
// GLOBAL DAT_005c1610 undefined
// GLOBAL DAT_005c1618 undefined
// GLOBAL DAT_005c1620 undefined
// GLOBAL DAT_005c1628 undefined
// GLOBAL DAT_005c1630 undefined4
// GLOBAL DAT_005c1634 undefined4 *
// GLOBAL DAT_005c1638 undefined
// GLOBAL DAT_005c1660 uint *
// GLOBAL DAT_005c1664 undefined4
// GLOBAL DAT_005c1668 undefined4 *
// GLOBAL DAT_005c166c undefined4
// GLOBAL s_N_ArrowB_00_005c15cc string
// GLOBAL s_N_ArrowL_00_005c15d8 string
// GLOBAL s_N_ArrowR_00_005c15e4 string
// GLOBAL s_N_ArrowT_00_005c15bc string
// GLOBAL s_ObjTurtleTurn_005c1650 string
// GLOBAL s_struggle_005c15fc string

undefined8 func_005C149C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005c15b0;
  *DAT_005c15b0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005c15c8;
  puVar1 = DAT_005c15b4;
  *DAT_005c15b4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c15b8;
  DAT_005c15b8[1] = s_N_ArrowT_00_005c15bc;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005c15cc;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005c15d8;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005c15e4;
  puVar1 = DAT_005c15f8;
  DAT_005c15f8[1] = s_struggle_005c15fc;
  *puVar1 = local_18;
  puVar1[3] = &DAT_005c1608;
  puVar1[2] = local_18;
  puVar1[5] = &DAT_005c1610;
  puVar1[4] = local_18;
  puVar1[7] = &DAT_005c1618;
  puVar1[6] = local_18;
  puVar1[9] = &DAT_005c1620;
  puVar1[8] = local_18;
  puVar1[10] = local_18;
  puVar1[0xb] = &DAT_005c1628;
  puVar1 = DAT_005c1634;
  puVar3 = DAT_005c1634 + 3;
  *DAT_005c1634 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005c1638;
  uStack_10 = local_18;
  local_c = s_ObjTurtleTurn_005c1650;
  uVar2 = func_0019B51C(DAT_005c1668,DAT_005c1664,*DAT_005c1660,(int)&uStack_10,DAT_005c1634,
                        &local_18,0);
  return CONCAT44(DAT_005c166c,uVar2);
}

