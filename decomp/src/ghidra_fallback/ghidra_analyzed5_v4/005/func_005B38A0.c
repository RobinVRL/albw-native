#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b3980;
extern undefined4 *DAT_005b3984;
extern undefined4 *DAT_005b3988;
extern undefined DAT_005b398c;
extern undefined4 DAT_005b39a4;
extern uint *DAT_005b39b8;
extern undefined4 DAT_005b39bc;
extern undefined4 *DAT_005b39c0;
extern undefined4 DAT_005b39c4;
extern undefined4 DAT_005b39c8;
extern undefined4 *DAT_005b39cc;
extern undefined DAT_005b39d0;
extern uint *DAT_005b39fc;
extern undefined4 *DAT_005b3a00;
extern char s_MassPillarUpL_005b39ec[];
extern char s_MassPillarUp_005b39a8[];

// USA 005B38A0 <- EU 005B3878 (Ghidra, non-matching)
// GLOBAL DAT_005b3980 undefined4 *
// GLOBAL DAT_005b3984 undefined4 *
// GLOBAL DAT_005b3988 undefined4 *
// GLOBAL DAT_005b398c undefined
// GLOBAL DAT_005b39a4 undefined4
// GLOBAL DAT_005b39b8 uint *
// GLOBAL DAT_005b39bc undefined4
// GLOBAL DAT_005b39c0 undefined4 *
// GLOBAL DAT_005b39c4 undefined4
// GLOBAL DAT_005b39c8 undefined4
// GLOBAL DAT_005b39cc undefined4 *
// GLOBAL DAT_005b39d0 undefined
// GLOBAL DAT_005b39fc uint *
// GLOBAL DAT_005b3a00 undefined4 *
// GLOBAL s_MassPillarUpL_005b39ec string
// GLOBAL s_MassPillarUp_005b39a8 string

undefined8 func_005B38A0(void)

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
  puVar1 = DAT_005b3980;
  *DAT_005b3980 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b3984;
  *DAT_005b3984 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005b39a4;
  puVar1 = DAT_005b3988;
  puVar3 = DAT_005b3988 + 3;
  DAT_005b3988[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005b398c;
  local_2c = s_MassPillarUp_005b39a8;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005b39c0,DAT_005b39bc,*DAT_005b39b8,(int)&local_30,DAT_005b3988,&local_28,0);
  puVar1 = DAT_005b39cc;
  puVar3 = DAT_005b39cc + 3;
  DAT_005b39cc[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005b39d0;
  local_1c = s_MassPillarUpL_005b39ec;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005b3a00,DAT_005b39bc,*DAT_005b39fc,(int)&local_20,DAT_005b39cc,
                        &local_18,0);
  return CONCAT44(DAT_005b39c8,uVar2);
}

