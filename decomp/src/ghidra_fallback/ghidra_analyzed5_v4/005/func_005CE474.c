#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ce4e0;
extern undefined4 *DAT_005ce4e4;
extern undefined4 *DAT_005ce4e8;
extern undefined DAT_005ce4ec;
extern undefined4 DAT_005ce4f8;
extern uint *DAT_005ce50c;
extern undefined4 DAT_005ce510;
extern undefined4 *DAT_005ce514;
extern undefined4 DAT_005ce518;
extern undefined4 DAT_005ce51c;
extern char s_MojNeedleRoller_005ce4fc[];

// USA 005CE474 <- EU 005CE44C (Ghidra, non-matching)
// GLOBAL DAT_005ce4e0 undefined4 *
// GLOBAL DAT_005ce4e4 undefined4 *
// GLOBAL DAT_005ce4e8 undefined4 *
// GLOBAL DAT_005ce4ec undefined
// GLOBAL DAT_005ce4f8 undefined4
// GLOBAL DAT_005ce50c uint *
// GLOBAL DAT_005ce510 undefined4
// GLOBAL DAT_005ce514 undefined4 *
// GLOBAL DAT_005ce518 undefined4
// GLOBAL DAT_005ce51c undefined4
// GLOBAL s_MojNeedleRoller_005ce4fc string

undefined8 func_005CE474(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ce4e0;
  *DAT_005ce4e0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ce4e4;
  *DAT_005ce4e4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ce4e8;
  puVar3 = DAT_005ce4e8 + 3;
  *DAT_005ce4e8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ce4f8;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ce4ec;
  local_18 = local_10;
  local_14 = s_MojNeedleRoller_005ce4fc;
  uVar2 = func_0019B51C(DAT_005ce514,DAT_005ce510,*DAT_005ce50c,(int)&local_18,DAT_005ce4e8,
                        &local_10,0);
  return CONCAT44(DAT_005ce51c,uVar2);
}

