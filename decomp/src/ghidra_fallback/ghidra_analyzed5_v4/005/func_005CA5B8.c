#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ca624;
extern undefined4 *DAT_005ca628;
extern undefined4 *DAT_005ca62c;
extern undefined DAT_005ca630;
extern undefined4 DAT_005ca644;
extern uint *DAT_005ca658;
extern undefined4 DAT_005ca65c;
extern undefined4 *DAT_005ca660;
extern undefined4 DAT_005ca664;
extern undefined4 DAT_005ca668;
extern char s_TagRupeeAppear_005ca648[];

// USA 005CA5B8 <- EU 005CA590 (Ghidra, non-matching)
// GLOBAL DAT_005ca624 undefined4 *
// GLOBAL DAT_005ca628 undefined4 *
// GLOBAL DAT_005ca62c undefined4 *
// GLOBAL DAT_005ca630 undefined
// GLOBAL DAT_005ca644 undefined4
// GLOBAL DAT_005ca658 uint *
// GLOBAL DAT_005ca65c undefined4
// GLOBAL DAT_005ca660 undefined4 *
// GLOBAL DAT_005ca664 undefined4
// GLOBAL DAT_005ca668 undefined4
// GLOBAL s_TagRupeeAppear_005ca648 string

undefined8 func_005CA5B8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ca624;
  *DAT_005ca624 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca628;
  *DAT_005ca628 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ca62c;
  puVar3 = DAT_005ca62c + 3;
  *DAT_005ca62c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ca644;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ca630;
  local_18 = local_10;
  local_14 = s_TagRupeeAppear_005ca648;
  uVar2 = func_0019B51C(DAT_005ca660,DAT_005ca65c,*DAT_005ca658,(int)&local_18,DAT_005ca62c,
                        &local_10,0);
  return CONCAT44(DAT_005ca668,uVar2);
}

