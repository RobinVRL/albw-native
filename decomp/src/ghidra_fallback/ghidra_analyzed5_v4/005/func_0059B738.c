#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_0059b91c;
extern undefined4 *DAT_0059b920;
extern uint DAT_0059b924;
extern uint DAT_0059b928;
extern uint DAT_0059b92c;
extern undefined4 *DAT_0059b930;
extern undefined DAT_0059b934;
extern undefined4 DAT_0059b93c;
extern uint *DAT_0059b94c;
extern undefined4 DAT_0059b950;
extern undefined4 *DAT_0059b954;
extern undefined4 DAT_0059b958;
extern undefined4 DAT_0059b95c;
extern undefined4 *DAT_0059b960;
extern undefined DAT_0059b964;
extern uint *DAT_0059b978;
extern undefined4 *DAT_0059b97c;
extern undefined4 *DAT_0059b980;
extern undefined DAT_0059b984;
extern uint *DAT_0059b9a0;
extern undefined4 *DAT_0059b9a4;
extern undefined4 *DAT_0059b9a8;
extern undefined DAT_0059b9ac;
extern uint *DAT_0059b9c8;
extern undefined4 *DAT_0059b9cc;
extern char s_MassRockLDark_0059b9b8[];
extern char s_MassRockL_0059b96c[];
extern char s_MassRockSDark_0059b990[];
extern char s_MassRock_0059b940[];

// USA 0059B738 <- EU 0059B710 (Ghidra, non-matching)
// GLOBAL DAT_0059b91c int
// GLOBAL DAT_0059b920 undefined4 *
// GLOBAL DAT_0059b924 uint
// GLOBAL DAT_0059b928 uint
// GLOBAL DAT_0059b92c uint
// GLOBAL DAT_0059b930 undefined4 *
// GLOBAL DAT_0059b934 undefined
// GLOBAL DAT_0059b93c undefined4
// GLOBAL DAT_0059b94c uint *
// GLOBAL DAT_0059b950 undefined4
// GLOBAL DAT_0059b954 undefined4 *
// GLOBAL DAT_0059b958 undefined4
// GLOBAL DAT_0059b95c undefined4
// GLOBAL DAT_0059b960 undefined4 *
// GLOBAL DAT_0059b964 undefined
// GLOBAL DAT_0059b978 uint *
// GLOBAL DAT_0059b97c undefined4 *
// GLOBAL DAT_0059b980 undefined4 *
// GLOBAL DAT_0059b984 undefined
// GLOBAL DAT_0059b9a0 uint *
// GLOBAL DAT_0059b9a4 undefined4 *
// GLOBAL DAT_0059b9a8 undefined4 *
// GLOBAL DAT_0059b9ac undefined
// GLOBAL DAT_0059b9c8 uint *
// GLOBAL DAT_0059b9cc undefined4 *
// GLOBAL s_MassRockLDark_0059b9b8 string
// GLOBAL s_MassRockL_0059b96c string
// GLOBAL s_MassRockSDark_0059b990 string
// GLOBAL s_MassRock_0059b940 string

undefined8 func_0059B738(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined * *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(char * *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined * *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(char * *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined * *)(albw_frame + 0x3c))
  iVar1 = DAT_0059b91c;
  *(undefined4 *)(DAT_0059b91c + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_0059b920;
  puVar4 = DAT_0059b920 + -6;
  *DAT_0059b920 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_0059b924,0);
  *puVar4 = (int)uVar5;
  uVar5 = func_00114608(DAT_0059b928,(uint)((ulonglong)uVar5 >> 0x20));
  puVar2[-5] = (int)uVar5;
  uVar5 = func_00114608(DAT_0059b92c,(uint)((ulonglong)uVar5 >> 0x20));
  puVar2[-4] = (int)uVar5;
  puVar2 = DAT_0059b930;
  puVar4 = DAT_0059b930 + 3;
  DAT_0059b930[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  uVar3 = DAT_0059b93c;
  local_44 = &DAT_0059b934;
  local_4c = s_MassRock_0059b940;
  local_48 = DAT_0059b93c;
  local_50 = DAT_0059b93c;
  func_0019B51C(DAT_0059b954,DAT_0059b950,*DAT_0059b94c,(int)&local_50,DAT_0059b930,&local_48,0);
  puVar2 = DAT_0059b960;
  puVar4 = DAT_0059b960 + 3;
  DAT_0059b960[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_34 = &DAT_0059b964;
  local_3c = s_MassRockL_0059b96c;
  local_38 = uVar3;
  local_40 = uVar3;
  func_0019B51C(DAT_0059b97c,DAT_0059b950,*DAT_0059b978,(int)&local_40,DAT_0059b960,&local_38,0);
  puVar2 = DAT_0059b980;
  puVar4 = DAT_0059b980 + 3;
  DAT_0059b980[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_24 = &DAT_0059b984;
  local_2c = s_MassRockSDark_0059b990;
  local_28 = uVar3;
  local_30 = uVar3;
  func_0019B51C(DAT_0059b9a4,DAT_0059b950,*DAT_0059b9a0,(int)&local_30,DAT_0059b980,&local_28,0);
  puVar2 = DAT_0059b9a8;
  DAT_0059b9a8[2] = DAT_0059b9a8 + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_14 = &DAT_0059b9ac;
  local_1c = s_MassRockLDark_0059b9b8;
  local_18 = uVar3;
  local_20 = uVar3;
  uVar3 = func_0019B51C(DAT_0059b9cc,DAT_0059b950,*DAT_0059b9c8,(int)&local_20,DAT_0059b9a8,
                        &local_18,0);
  return CONCAT44(DAT_0059b95c,uVar3);
}

