#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f0710;
extern undefined4 *DAT_005f0714;
extern undefined4 *DAT_005f0718;
extern undefined DAT_005f071c;
extern undefined4 DAT_005f0734;
extern uint *DAT_005f0750;
extern undefined4 DAT_005f0754;
extern undefined4 *DAT_005f0758;
extern undefined4 DAT_005f075c;
extern undefined4 DAT_005f0760;
extern char s_AreaPlayerStateCheck_005f0738[];

// USA 005F06A4 <- EU 005F067C (Ghidra, non-matching)
// GLOBAL DAT_005f0710 undefined4 *
// GLOBAL DAT_005f0714 undefined4 *
// GLOBAL DAT_005f0718 undefined4 *
// GLOBAL DAT_005f071c undefined
// GLOBAL DAT_005f0734 undefined4
// GLOBAL DAT_005f0750 uint *
// GLOBAL DAT_005f0754 undefined4
// GLOBAL DAT_005f0758 undefined4 *
// GLOBAL DAT_005f075c undefined4
// GLOBAL DAT_005f0760 undefined4
// GLOBAL s_AreaPlayerStateCheck_005f0738 string

undefined8 func_005F06A4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005f0710;
  *DAT_005f0710 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f0714;
  *DAT_005f0714 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f0718;
  puVar3 = DAT_005f0718 + 3;
  *DAT_005f0718 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005f0734;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005f071c;
  local_18 = local_10;
  local_14 = s_AreaPlayerStateCheck_005f0738;
  uVar2 = func_0019B51C(DAT_005f0758,DAT_005f0754,*DAT_005f0750,(int)&local_18,DAT_005f0718,
                        &local_10,0);
  return CONCAT44(DAT_005f0760,uVar2);
}

