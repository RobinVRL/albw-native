#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059b314;
extern undefined4 *DAT_0059b318;
extern undefined4 *DAT_0059b31c;
extern undefined DAT_0059b320;
extern undefined4 DAT_0059b330;
extern uint *DAT_0059b340;
extern undefined4 DAT_0059b344;
extern undefined4 *DAT_0059b348;
extern undefined4 DAT_0059b34c;
extern undefined4 DAT_0059b350;
extern char s_MapField_0059b334[];

// USA 0059B2A8 <- EU 0059B280 (Ghidra, non-matching)
// GLOBAL DAT_0059b314 undefined4 *
// GLOBAL DAT_0059b318 undefined4 *
// GLOBAL DAT_0059b31c undefined4 *
// GLOBAL DAT_0059b320 undefined
// GLOBAL DAT_0059b330 undefined4
// GLOBAL DAT_0059b340 uint *
// GLOBAL DAT_0059b344 undefined4
// GLOBAL DAT_0059b348 undefined4 *
// GLOBAL DAT_0059b34c undefined4
// GLOBAL DAT_0059b350 undefined4
// GLOBAL s_MapField_0059b334 string

undefined8 func_0059B2A8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_0059b314;
  *DAT_0059b314 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059b318;
  *DAT_0059b318 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059b31c;
  puVar3 = DAT_0059b31c + 3;
  *DAT_0059b31c = 0;
  puVar1[1] = 5;
  local_10 = DAT_0059b330;
  puVar1[2] = puVar3;
  puStack_c = &DAT_0059b320;
  local_18 = local_10;
  local_14 = s_MapField_0059b334;
  uVar2 = func_0019B51C(DAT_0059b348,DAT_0059b344,*DAT_0059b340,(int)&local_18,DAT_0059b31c,
                        &local_10,0);
  return CONCAT44(DAT_0059b350,uVar2);
}

