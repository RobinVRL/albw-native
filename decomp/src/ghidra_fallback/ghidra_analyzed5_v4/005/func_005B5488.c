#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b551c;
extern undefined4 *DAT_005b5520;
extern undefined4 DAT_005b5530;
extern undefined4 DAT_005b5534;
extern undefined4 DAT_005b5538;
extern undefined4 *DAT_005b553c;
extern undefined DAT_005b5540;
extern uint *DAT_005b5564;
extern undefined4 DAT_005b5568;
extern undefined4 *DAT_005b556c;
extern undefined4 DAT_005b5570;
extern char s_MojSwitchHit_005b5554[];
extern char s_SwitchHit_005b5524[];

// USA 005B5488 <- EU 005B5460 (Ghidra, non-matching)
// GLOBAL DAT_005b551c undefined4 *
// GLOBAL DAT_005b5520 undefined4 *
// GLOBAL DAT_005b5530 undefined4
// GLOBAL DAT_005b5534 undefined4
// GLOBAL DAT_005b5538 undefined4
// GLOBAL DAT_005b553c undefined4 *
// GLOBAL DAT_005b5540 undefined
// GLOBAL DAT_005b5564 uint *
// GLOBAL DAT_005b5568 undefined4
// GLOBAL DAT_005b556c undefined4 *
// GLOBAL DAT_005b5570 undefined4
// GLOBAL s_MojSwitchHit_005b5554 string
// GLOBAL s_SwitchHit_005b5524 string

undefined8 func_005B5488(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005b551c;
  *DAT_005b551c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005b5530;
  puVar1 = DAT_005b5520;
  *DAT_005b5520 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_SwitchHit_005b5524;
  puVar1[2] = local_18;
  puVar1 = DAT_005b553c;
  puVar3 = DAT_005b553c + 3;
  *DAT_005b553c = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005b5540;
  uStack_10 = local_18;
  local_c = s_MojSwitchHit_005b5554;
  uVar2 = func_0019B51C(DAT_005b556c,DAT_005b5568,*DAT_005b5564,(int)&uStack_10,DAT_005b553c,
                        &local_18,0);
  return CONCAT44(DAT_005b5570,uVar2);
}

