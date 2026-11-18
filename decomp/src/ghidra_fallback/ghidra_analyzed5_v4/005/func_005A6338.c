#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a63a4;
extern undefined4 *DAT_005a63a8;
extern undefined4 *DAT_005a63ac;
extern undefined DAT_005a63b0;
extern undefined4 DAT_005a63bc;
extern uint *DAT_005a63cc;
extern undefined4 DAT_005a63d0;
extern undefined4 *DAT_005a63d4;
extern undefined4 DAT_005a63d8;
extern undefined4 DAT_005a63dc;
extern char s_MojLiftIce_005a63c0[];

// USA 005A6338 <- EU 005A6310 (Ghidra, non-matching)
// GLOBAL DAT_005a63a4 undefined4 *
// GLOBAL DAT_005a63a8 undefined4 *
// GLOBAL DAT_005a63ac undefined4 *
// GLOBAL DAT_005a63b0 undefined
// GLOBAL DAT_005a63bc undefined4
// GLOBAL DAT_005a63cc uint *
// GLOBAL DAT_005a63d0 undefined4
// GLOBAL DAT_005a63d4 undefined4 *
// GLOBAL DAT_005a63d8 undefined4
// GLOBAL DAT_005a63dc undefined4
// GLOBAL s_MojLiftIce_005a63c0 string

undefined8 func_005A6338(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a63a4;
  *DAT_005a63a4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a63a8;
  *DAT_005a63a8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a63ac;
  puVar3 = DAT_005a63ac + 3;
  *DAT_005a63ac = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a63bc;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005a63b0;
  local_18 = local_10;
  local_14 = s_MojLiftIce_005a63c0;
  uVar2 = func_0019B51C(DAT_005a63d4,DAT_005a63d0,*DAT_005a63cc,(int)&local_18,DAT_005a63ac,
                        &local_10,0);
  return CONCAT44(DAT_005a63dc,uVar2);
}

