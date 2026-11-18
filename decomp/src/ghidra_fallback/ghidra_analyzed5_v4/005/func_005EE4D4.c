#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ee540;
extern undefined4 *DAT_005ee544;
extern undefined4 *DAT_005ee548;
extern undefined DAT_005ee54c;
extern undefined4 DAT_005ee560;
extern uint *DAT_005ee578;
extern undefined4 DAT_005ee57c;
extern undefined4 *DAT_005ee580;
extern undefined4 DAT_005ee584;
extern undefined4 DAT_005ee588;
extern char s_MojColiseumAudience_005ee564[];

// USA 005EE4D4 <- EU 005EE4AC (Ghidra, non-matching)
// GLOBAL DAT_005ee540 undefined4 *
// GLOBAL DAT_005ee544 undefined4 *
// GLOBAL DAT_005ee548 undefined4 *
// GLOBAL DAT_005ee54c undefined
// GLOBAL DAT_005ee560 undefined4
// GLOBAL DAT_005ee578 uint *
// GLOBAL DAT_005ee57c undefined4
// GLOBAL DAT_005ee580 undefined4 *
// GLOBAL DAT_005ee584 undefined4
// GLOBAL DAT_005ee588 undefined4
// GLOBAL s_MojColiseumAudience_005ee564 string

undefined8 func_005EE4D4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ee540;
  *DAT_005ee540 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ee544;
  *DAT_005ee544 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ee548;
  puVar3 = DAT_005ee548 + 3;
  *DAT_005ee548 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ee560;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ee54c;
  local_18 = local_10;
  local_14 = s_MojColiseumAudience_005ee564;
  uVar2 = func_0019B51C(DAT_005ee580,DAT_005ee57c,*DAT_005ee578,(int)&local_18,DAT_005ee548,
                        &local_10,0);
  return CONCAT44(DAT_005ee588,uVar2);
}

