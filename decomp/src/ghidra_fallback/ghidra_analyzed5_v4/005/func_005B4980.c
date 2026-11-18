#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005b4c14;
extern undefined4 *DAT_005b4c18;
extern int *DAT_005b4c1c;
extern undefined DAT_005b4c20;
extern int DAT_005b4c30;
extern uint *DAT_005b4c44;
extern undefined4 DAT_005b4c48;
extern undefined4 DAT_005b4c4c;
extern undefined4 DAT_005b4c50;
extern undefined DAT_005b4c54;
extern uint *DAT_005b4c74;
extern undefined4 DAT_005b4c78;
extern undefined DAT_005b4c7c;
extern uint *DAT_005b4ca0;
extern undefined4 DAT_005b4ca4;
extern undefined4 *DAT_005b4ca8;
extern undefined DAT_005b4cac;
extern uint *DAT_005b4cdc;
extern undefined4 DAT_005b4ce0;
extern undefined4 *DAT_005b4ce4;
extern undefined DAT_005b4ce8;
extern int *DAT_005b4cf8;
extern undefined DAT_005b4cfc;
extern undefined DAT_005b4d00;
extern undefined DAT_005b4d04;
extern undefined4 DAT_005b4d0c;
extern int *DAT_005b4d10;
extern undefined DAT_005b4d14;
extern uint DAT_005b4d1c;
extern char s_BREAK_005b4cf0[];
extern char s_MojJumpStandL_005b4c34[];
extern char s_MojJumpStandS_005b4c64[];
extern char s_MojLiftJumpStandCave_005b4cc4[];
extern char s_MojLiftJumpStandL_005b4c8c[];

// USA 005B4980 <- EU 005B4958 (Ghidra, non-matching)
// GLOBAL DAT_005b4c14 int
// GLOBAL DAT_005b4c18 undefined4 *
// GLOBAL DAT_005b4c1c int *
// GLOBAL DAT_005b4c20 undefined
// GLOBAL DAT_005b4c30 int
// GLOBAL DAT_005b4c44 uint *
// GLOBAL DAT_005b4c48 undefined4
// GLOBAL DAT_005b4c4c undefined4
// GLOBAL DAT_005b4c50 undefined4
// GLOBAL DAT_005b4c54 undefined
// GLOBAL DAT_005b4c74 uint *
// GLOBAL DAT_005b4c78 undefined4
// GLOBAL DAT_005b4c7c undefined
// GLOBAL DAT_005b4ca0 uint *
// GLOBAL DAT_005b4ca4 undefined4
// GLOBAL DAT_005b4ca8 undefined4 *
// GLOBAL DAT_005b4cac undefined
// GLOBAL DAT_005b4cdc uint *
// GLOBAL DAT_005b4ce0 undefined4
// GLOBAL DAT_005b4ce4 undefined4 *
// GLOBAL DAT_005b4ce8 undefined
// GLOBAL DAT_005b4cf8 int *
// GLOBAL DAT_005b4cfc undefined
// GLOBAL DAT_005b4d00 undefined
// GLOBAL DAT_005b4d04 undefined
// GLOBAL DAT_005b4d0c undefined4
// GLOBAL DAT_005b4d10 int *
// GLOBAL DAT_005b4d14 undefined
// GLOBAL DAT_005b4d1c uint
// GLOBAL s_BREAK_005b4cf0 string
// GLOBAL s_MojJumpStandL_005b4c34 string
// GLOBAL s_MojJumpStandS_005b4c64 string
// GLOBAL s_MojLiftJumpStandCave_005b4cc4 string
// GLOBAL s_MojLiftJumpStandL_005b4c8c string

longlong func_005B4980(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(undefined * *)(albw_frame + 0x4))
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_50 (*(int *)(albw_frame + 0x10))
  #define local_4c (*(char * *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(undefined * *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(char * *)(albw_frame + 0x24))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define local_34 (*(undefined * *)(albw_frame + 0x2c))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define local_2c (*(char * *)(albw_frame + 0x34))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(undefined * *)(albw_frame + 0x3c))
  #define local_20 (*(int *)(albw_frame + 0x40))
  #define local_1c (*(char * *)(albw_frame + 0x44))
  #define local_18 (*(int *)(albw_frame + 0x48))
  #define local_14 (*(undefined * *)(albw_frame + 0x4c))
  iVar1 = DAT_005b4c14;
  *(undefined4 *)(DAT_005b4c14 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b4c18;
  *DAT_005b4c18 = 0;
  puVar2[1] = 0;
  iVar1 = DAT_005b4c30;
  piVar3 = DAT_005b4c1c;
  piVar5 = DAT_005b4c1c + 3;
  DAT_005b4c1c[1] = 5;
  piVar3[2] = (int)piVar5;
  *piVar3 = 0;
  local_44 = &DAT_005b4c20;
  local_48 = iVar1;
  local_4c = s_MojJumpStandL_005b4c34;
  local_50 = iVar1;
  func_0019B51C(piVar3 + 8,DAT_005b4c48,*DAT_005b4c44,(int)&local_50,piVar3,&local_48,0);
  piVar3[0x9b] = 5;
  piVar3[0x9c] = (int)(piVar3 + 0x9d);
  piVar3[0x9a] = 0;
  local_34 = &DAT_005b4c54;
  local_3c = s_MojJumpStandS_005b4c64;
  local_38 = iVar1;
  local_40 = iVar1;
  func_0019B51C(piVar3 + 0xa2,DAT_005b4c78,*DAT_005b4c74,(int)&local_40,piVar3 + 0x9a,&local_38,0);
  piVar3[0x135] = 5;
  piVar3[0x136] = (int)(piVar3 + 0x137);
  piVar3[0x134] = 0;
  local_24 = &DAT_005b4c7c;
  local_2c = s_MojLiftJumpStandL_005b4c8c;
  local_28 = iVar1;
  local_30 = iVar1;
  func_0019B51C(piVar3 + 0x13c,DAT_005b4ca4,*DAT_005b4ca0,(int)&local_30,piVar3 + 0x134,&local_28,0)
  ;
  puVar2 = DAT_005b4ca8;
  DAT_005b4ca8[2] = DAT_005b4ca8 + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_14 = &DAT_005b4cac;
  local_1c = s_MojLiftJumpStandCave_005b4cc4;
  local_18 = iVar1;
  local_20 = iVar1;
  func_0019B51C(DAT_005b4ce4,DAT_005b4ce0,*DAT_005b4cdc,(int)&local_20,DAT_005b4ca8,&local_18,0);
  local_5c = &DAT_005b4ce8;
  local_60 = iVar1;
  (**(code **)(iVar1 + 8))(&local_60,*(code **)(iVar1 + 8),DAT_005b4c4c);
  iVar4 = *piVar3;
  if (iVar4 < piVar3[1]) {
    *piVar3 = iVar4 + 1;
    *(undefined **)(piVar3[2] + iVar4 * 4) = local_5c;
  }
  local_54 = s_BREAK_005b4cf0;
  local_58 = iVar1;
  (**(code **)(iVar1 + 8))(&local_58);
  iVar4 = *piVar3;
  if (iVar4 < piVar3[1]) {
    *piVar3 = iVar4 + 1;
    *(char **)(piVar3[2] + iVar4 * 4) = local_54;
  }
  piVar3 = DAT_005b4cf8;
  DAT_005b4cf8[1] = (int)&DAT_005b4cfc;
  *piVar3 = iVar1;
  piVar3[3] = (int)&DAT_005b4d00;
  piVar3[2] = iVar1;
  piVar3[4] = iVar1;
  piVar3[5] = (int)&DAT_005b4d04;
  piVar3 = DAT_005b4d10;
  DAT_005b4d10[1] = (int)&DAT_005b4d14;
  *piVar3 = iVar1;
  piVar3[2] = iVar1;
  piVar3[3] = (int)&DAT_005b4d00;
  return (ulonglong)DAT_005b4d1c << 0x20;
}

