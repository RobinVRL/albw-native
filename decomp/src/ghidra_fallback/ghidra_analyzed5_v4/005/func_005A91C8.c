#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a9234;
extern undefined4 *DAT_005a9238;
extern undefined4 *DAT_005a923c;
extern undefined DAT_005a9240;
extern undefined4 DAT_005a9248;
extern uint *DAT_005a9258;
extern undefined4 DAT_005a925c;
extern undefined4 *DAT_005a9260;
extern undefined4 DAT_005a9264;
extern undefined4 DAT_005a9268;
extern char s_AreaThunder_005a924c[];

// USA 005A91C8 <- EU 005A91A0 (Ghidra, non-matching)
// GLOBAL DAT_005a9234 undefined4 *
// GLOBAL DAT_005a9238 undefined4 *
// GLOBAL DAT_005a923c undefined4 *
// GLOBAL DAT_005a9240 undefined
// GLOBAL DAT_005a9248 undefined4
// GLOBAL DAT_005a9258 uint *
// GLOBAL DAT_005a925c undefined4
// GLOBAL DAT_005a9260 undefined4 *
// GLOBAL DAT_005a9264 undefined4
// GLOBAL DAT_005a9268 undefined4
// GLOBAL s_AreaThunder_005a924c string

undefined8 func_005A91C8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a9234;
  *DAT_005a9234 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a9238;
  *DAT_005a9238 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a923c;
  puVar3 = DAT_005a923c + 3;
  *DAT_005a923c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a9248;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005a9240;
  local_18 = local_10;
  local_14 = s_AreaThunder_005a924c;
  uVar2 = func_0019B51C(DAT_005a9260,DAT_005a925c,*DAT_005a9258,(int)&local_18,DAT_005a923c,
                        &local_10,0);
  return CONCAT44(DAT_005a9268,uVar2);
}

