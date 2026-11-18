#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b65e0;
extern undefined4 *DAT_005b65e4;
extern undefined4 *DAT_005b65e8;
extern undefined DAT_005b65ec;
extern undefined4 DAT_005b65f4;
extern uint *DAT_005b6608;
extern undefined4 DAT_005b660c;
extern undefined4 *DAT_005b6610;
extern undefined4 DAT_005b6614;
extern undefined4 DAT_005b6618;
extern undefined4 *DAT_005b661c;
extern undefined DAT_005b6628;
extern uint DAT_005b6630;
extern char s_MojWaterFlow_005b65f8[];
extern char s_appear_005b6620[];

// USA 005B6544 <- EU 005B651C (Ghidra, non-matching)
// GLOBAL DAT_005b65e0 undefined4 *
// GLOBAL DAT_005b65e4 undefined4 *
// GLOBAL DAT_005b65e8 undefined4 *
// GLOBAL DAT_005b65ec undefined
// GLOBAL DAT_005b65f4 undefined4
// GLOBAL DAT_005b6608 uint *
// GLOBAL DAT_005b660c undefined4
// GLOBAL DAT_005b6610 undefined4 *
// GLOBAL DAT_005b6614 undefined4
// GLOBAL DAT_005b6618 undefined4
// GLOBAL DAT_005b661c undefined4 *
// GLOBAL DAT_005b6628 undefined
// GLOBAL DAT_005b6630 uint
// GLOBAL s_MojWaterFlow_005b65f8 string
// GLOBAL s_appear_005b6620 string

longlong func_005B6544(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b65e0;
  *DAT_005b65e0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005b65f4;
  puVar1 = DAT_005b65e4;
  *DAT_005b65e4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b65e8;
  puVar3 = DAT_005b65e8 + 3;
  *DAT_005b65e8 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  local_c = &DAT_005b65ec;
  local_14 = s_MojWaterFlow_005b65f8;
  local_10 = uVar2;
  uStack_18 = uVar2;
  func_0019B51C(DAT_005b6610,DAT_005b660c,*DAT_005b6608,(int)&uStack_18,DAT_005b65e8,&local_10,0);
  puVar1 = DAT_005b661c;
  DAT_005b661c[1] = s_appear_005b6620;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005b6628;
  return (ulonglong)DAT_005b6630 << 0x20;
}

