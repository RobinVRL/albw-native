#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bf310;
extern undefined4 *DAT_005bf314;
extern undefined4 *DAT_005bf318;
extern undefined DAT_005bf31c;
extern undefined4 DAT_005bf32c;
extern uint *DAT_005bf340;
extern undefined4 DAT_005bf344;
extern undefined4 *DAT_005bf348;
extern undefined4 DAT_005bf34c;
extern undefined4 DAT_005bf350;
extern char s_MojTrialModel_005bf330[];

// USA 005BF2A4 <- EU 005BF27C (Ghidra, non-matching)
// GLOBAL DAT_005bf310 undefined4 *
// GLOBAL DAT_005bf314 undefined4 *
// GLOBAL DAT_005bf318 undefined4 *
// GLOBAL DAT_005bf31c undefined
// GLOBAL DAT_005bf32c undefined4
// GLOBAL DAT_005bf340 uint *
// GLOBAL DAT_005bf344 undefined4
// GLOBAL DAT_005bf348 undefined4 *
// GLOBAL DAT_005bf34c undefined4
// GLOBAL DAT_005bf350 undefined4
// GLOBAL s_MojTrialModel_005bf330 string

undefined8 func_005BF2A4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005bf310;
  *DAT_005bf310 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bf314;
  *DAT_005bf314 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005bf318;
  puVar3 = DAT_005bf318 + 3;
  *DAT_005bf318 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005bf32c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005bf31c;
  local_18 = local_10;
  local_14 = s_MojTrialModel_005bf330;
  uVar2 = func_0019B51C(DAT_005bf348,DAT_005bf344,*DAT_005bf340,(int)&local_18,DAT_005bf318,
                        &local_10,0);
  return CONCAT44(DAT_005bf350,uVar2);
}

