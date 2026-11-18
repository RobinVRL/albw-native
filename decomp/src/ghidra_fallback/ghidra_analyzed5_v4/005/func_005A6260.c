#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a62cc;
extern undefined4 *DAT_005a62d0;
extern undefined4 *DAT_005a62d4;
extern undefined DAT_005a62d8;
extern undefined4 DAT_005a62ec;
extern uint *DAT_005a62fc;
extern undefined4 DAT_005a6300;
extern undefined4 *DAT_005a6304;
extern undefined4 DAT_005a6308;
extern undefined4 DAT_005a630c;
extern char s_MojIceCube_005a62f0[];

// USA 005A6260 <- EU 005A6238 (Ghidra, non-matching)
// GLOBAL DAT_005a62cc undefined4 *
// GLOBAL DAT_005a62d0 undefined4 *
// GLOBAL DAT_005a62d4 undefined4 *
// GLOBAL DAT_005a62d8 undefined
// GLOBAL DAT_005a62ec undefined4
// GLOBAL DAT_005a62fc uint *
// GLOBAL DAT_005a6300 undefined4
// GLOBAL DAT_005a6304 undefined4 *
// GLOBAL DAT_005a6308 undefined4
// GLOBAL DAT_005a630c undefined4
// GLOBAL s_MojIceCube_005a62f0 string

undefined8 func_005A6260(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a62cc;
  *DAT_005a62cc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a62d0;
  *DAT_005a62d0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a62d4;
  puVar3 = DAT_005a62d4 + 3;
  *DAT_005a62d4 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a62ec;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005a62d8;
  local_18 = local_10;
  local_14 = s_MojIceCube_005a62f0;
  uVar2 = func_0019B51C(DAT_005a6304,DAT_005a6300,*DAT_005a62fc,(int)&local_18,DAT_005a62d4,
                        &local_10,0);
  return CONCAT44(DAT_005a630c,uVar2);
}

