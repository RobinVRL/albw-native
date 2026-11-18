#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b85a0;
extern undefined4 *DAT_005b85a4;
extern undefined4 *DAT_005b85a8;
extern undefined DAT_005b85ac;
extern undefined4 DAT_005b85bc;
extern uint *DAT_005b85d0;
extern undefined4 DAT_005b85d4;
extern undefined4 *DAT_005b85d8;
extern undefined4 DAT_005b85dc;
extern undefined4 DAT_005b85e0;
extern char s_ObjRupeeGold_005b85c0[];

// USA 005B8534 <- EU 005B850C (Ghidra, non-matching)
// GLOBAL DAT_005b85a0 undefined4 *
// GLOBAL DAT_005b85a4 undefined4 *
// GLOBAL DAT_005b85a8 undefined4 *
// GLOBAL DAT_005b85ac undefined
// GLOBAL DAT_005b85bc undefined4
// GLOBAL DAT_005b85d0 uint *
// GLOBAL DAT_005b85d4 undefined4
// GLOBAL DAT_005b85d8 undefined4 *
// GLOBAL DAT_005b85dc undefined4
// GLOBAL DAT_005b85e0 undefined4
// GLOBAL s_ObjRupeeGold_005b85c0 string

undefined8 func_005B8534(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b85a0;
  *DAT_005b85a0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b85a4;
  *DAT_005b85a4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b85a8;
  puVar3 = DAT_005b85a8 + 3;
  *DAT_005b85a8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b85bc;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b85ac;
  local_18 = local_10;
  local_14 = s_ObjRupeeGold_005b85c0;
  uVar2 = func_0019B51C(DAT_005b85d8,DAT_005b85d4,*DAT_005b85d0,(int)&local_18,DAT_005b85a8,
                        &local_10,0);
  return CONCAT44(DAT_005b85e0,uVar2);
}

