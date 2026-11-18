#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005cbe00;
extern undefined4 *DAT_005cbe04;
extern undefined4 *DAT_005cbe08;
extern undefined DAT_005cbe0c;
extern undefined4 DAT_005cbe20;
extern uint *DAT_005cbe34;
extern undefined4 DAT_005cbe38;
extern undefined4 *DAT_005cbe3c;
extern undefined4 DAT_005cbe40;
extern undefined4 DAT_005cbe44;
extern char s_AreaRockChecker_005cbe24[];

// USA 005CBD94 <- EU 005CBD6C (Ghidra, non-matching)
// GLOBAL DAT_005cbe00 undefined4 *
// GLOBAL DAT_005cbe04 undefined4 *
// GLOBAL DAT_005cbe08 undefined4 *
// GLOBAL DAT_005cbe0c undefined
// GLOBAL DAT_005cbe20 undefined4
// GLOBAL DAT_005cbe34 uint *
// GLOBAL DAT_005cbe38 undefined4
// GLOBAL DAT_005cbe3c undefined4 *
// GLOBAL DAT_005cbe40 undefined4
// GLOBAL DAT_005cbe44 undefined4
// GLOBAL s_AreaRockChecker_005cbe24 string

undefined8 func_005CBD94(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005cbe00;
  *DAT_005cbe00 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cbe04;
  *DAT_005cbe04 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005cbe08;
  puVar3 = DAT_005cbe08 + 3;
  *DAT_005cbe08 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005cbe20;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005cbe0c;
  local_18 = local_10;
  local_14 = s_AreaRockChecker_005cbe24;
  uVar2 = func_0019B51C(DAT_005cbe3c,DAT_005cbe38,*DAT_005cbe34,(int)&local_18,DAT_005cbe08,
                        &local_10,0);
  return CONCAT44(DAT_005cbe44,uVar2);
}

