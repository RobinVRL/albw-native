#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c48c0;
extern undefined4 *DAT_005c48c4;
extern undefined4 *DAT_005c48c8;
extern undefined DAT_005c48cc;
extern undefined4 DAT_005c48d8;
extern uint *DAT_005c48f0;
extern undefined4 DAT_005c48f4;
extern undefined4 *DAT_005c48f8;
extern undefined4 DAT_005c48fc;
extern undefined4 DAT_005c4900;
extern undefined4 *DAT_005c4904;
extern undefined DAT_005c4908;
extern uint *DAT_005c4928;
extern undefined4 *DAT_005c492c;
extern char s_MassHammerStopDark_005c4914[];
extern char s_MassHammerStopLight_005c48dc[];

// USA 005C47E0 <- EU 005C47B8 (Ghidra, non-matching)
// GLOBAL DAT_005c48c0 undefined4 *
// GLOBAL DAT_005c48c4 undefined4 *
// GLOBAL DAT_005c48c8 undefined4 *
// GLOBAL DAT_005c48cc undefined
// GLOBAL DAT_005c48d8 undefined4
// GLOBAL DAT_005c48f0 uint *
// GLOBAL DAT_005c48f4 undefined4
// GLOBAL DAT_005c48f8 undefined4 *
// GLOBAL DAT_005c48fc undefined4
// GLOBAL DAT_005c4900 undefined4
// GLOBAL DAT_005c4904 undefined4 *
// GLOBAL DAT_005c4908 undefined
// GLOBAL DAT_005c4928 uint *
// GLOBAL DAT_005c492c undefined4 *
// GLOBAL s_MassHammerStopDark_005c4914 string
// GLOBAL s_MassHammerStopLight_005c48dc string

undefined8 func_005C47E0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005c48c0;
  *DAT_005c48c0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c48c4;
  *DAT_005c48c4 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005c48d8;
  puVar1 = DAT_005c48c8;
  puVar3 = DAT_005c48c8 + 3;
  DAT_005c48c8[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005c48cc;
  local_2c = s_MassHammerStopLight_005c48dc;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005c48f8,DAT_005c48f4,*DAT_005c48f0,(int)&local_30,DAT_005c48c8,&local_28,0);
  puVar1 = DAT_005c4904;
  puVar3 = DAT_005c4904 + 3;
  DAT_005c4904[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005c4908;
  local_1c = s_MassHammerStopDark_005c4914;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005c492c,DAT_005c48f4,*DAT_005c4928,(int)&local_20,DAT_005c4904,
                        &local_18,0);
  return CONCAT44(DAT_005c4900,uVar2);
}

