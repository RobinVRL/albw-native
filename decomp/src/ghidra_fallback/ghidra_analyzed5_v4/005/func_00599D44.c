#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_00599fe8;
extern undefined4 *DAT_00599fec;
extern int *DAT_00599ff0;
extern undefined DAT_00599ff4;
extern int DAT_0059a008;
extern uint *DAT_0059a014;
extern undefined4 DAT_0059a018;
extern undefined4 DAT_0059a01c;
extern undefined4 DAT_0059a020;
extern int *DAT_0059a030;
extern undefined DAT_0059a034;
extern uint *DAT_0059a054;
extern int *DAT_0059a058;
extern undefined DAT_0059a05c;
extern uint *DAT_0059a07c;
extern int *DAT_0059a080;
extern undefined DAT_0059a084;
extern uint *DAT_0059a0a0;
extern char s_ObjRockLDark_0059a090[];
extern char s_ObjRockL_0059a048[];
extern char s_ObjRockSDark_0059a06c[];
extern char s_ObjRock_0059a00c[];
extern char s_SinkSand_0059a024[];

// USA 00599D44 <- EU 00599D1C (Ghidra, non-matching)
// GLOBAL DAT_00599fe8 int
// GLOBAL DAT_00599fec undefined4 *
// GLOBAL DAT_00599ff0 int *
// GLOBAL DAT_00599ff4 undefined
// GLOBAL DAT_0059a008 int
// GLOBAL DAT_0059a014 uint *
// GLOBAL DAT_0059a018 undefined4
// GLOBAL DAT_0059a01c undefined4
// GLOBAL DAT_0059a020 undefined4
// GLOBAL DAT_0059a030 int *
// GLOBAL DAT_0059a034 undefined
// GLOBAL DAT_0059a054 uint *
// GLOBAL DAT_0059a058 int *
// GLOBAL DAT_0059a05c undefined
// GLOBAL DAT_0059a07c uint *
// GLOBAL DAT_0059a080 int *
// GLOBAL DAT_0059a084 undefined
// GLOBAL DAT_0059a0a0 uint *
// GLOBAL s_ObjRockLDark_0059a090 string
// GLOBAL s_ObjRockL_0059a048 string
// GLOBAL s_ObjRockSDark_0059a06c string
// GLOBAL s_ObjRock_0059a00c string
// GLOBAL s_SinkSand_0059a024 string

void func_00599D44(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(char * *)(albw_frame + 0x4))
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(char * *)(albw_frame + 0xc))
  #define local_60 (*(int *)(albw_frame + 0x10))
  #define local_5c (*(char * *)(albw_frame + 0x14))
  #define local_58 (*(int *)(albw_frame + 0x18))
  #define local_54 (*(char * *)(albw_frame + 0x1c))
  #define local_50 (*(int *)(albw_frame + 0x20))
  #define local_4c (*(char * *)(albw_frame + 0x24))
  #define local_48 (*(int *)(albw_frame + 0x28))
  #define local_44 (*(undefined * *)(albw_frame + 0x2c))
  #define local_40 (*(int *)(albw_frame + 0x30))
  #define local_3c (*(char * *)(albw_frame + 0x34))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(undefined * *)(albw_frame + 0x3c))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define local_2c (*(char * *)(albw_frame + 0x44))
  #define local_28 (*(int *)(albw_frame + 0x48))
  #define local_24 (*(undefined * *)(albw_frame + 0x4c))
  #define local_20 (*(int *)(albw_frame + 0x50))
  #define local_1c (*(char * *)(albw_frame + 0x54))
  #define local_18 (*(int *)(albw_frame + 0x58))
  #define local_14 (*(undefined * *)(albw_frame + 0x5c))
  iVar4 = DAT_00599fe8;
  *(undefined4 *)(DAT_00599fe8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0xc) = 0xffffffff;
  puVar1 = DAT_00599fec;
  *DAT_00599fec = 0;
  puVar1[1] = 0;
  iVar4 = DAT_0059a008;
  piVar2 = DAT_00599ff0;
  piVar5 = DAT_00599ff0 + 3;
  DAT_00599ff0[1] = 5;
  piVar2[2] = (int)piVar5;
  *piVar2 = 0;
  local_44 = &DAT_00599ff4;
  local_48 = iVar4;
  local_4c = s_ObjRock_0059a00c;
  local_50 = iVar4;
  func_0019B51C(piVar2 + 8,DAT_0059a018,*DAT_0059a014,(int)&local_50,piVar2,&local_48,0);
  local_6c = s_SinkSand_0059a024;
  local_70 = iVar4;
  (**(code **)(iVar4 + 8))(&local_70,*(code **)(iVar4 + 8),DAT_0059a01c);
  iVar3 = *piVar2;
  if (iVar3 < piVar2[1]) {
    *piVar2 = iVar3 + 1;
    *(char **)(piVar2[2] + iVar3 * 4) = local_6c;
  }
  piVar2 = DAT_0059a030;
  piVar5 = DAT_0059a030 + 3;
  DAT_0059a030[1] = 5;
  piVar2[2] = (int)piVar5;
  *piVar2 = 0;
  local_34 = &DAT_0059a034;
  local_38 = iVar4;
  local_3c = s_ObjRockL_0059a048;
  local_40 = iVar4;
  func_0019B51C(piVar2 + 8,DAT_0059a018,*DAT_0059a054,(int)&local_40,piVar2,&local_38,0);
  local_64 = s_SinkSand_0059a024;
  local_68 = iVar4;
  (**(code **)(iVar4 + 8))(&local_68,*(code **)(iVar4 + 8),DAT_0059a01c);
  iVar3 = *piVar2;
  if (iVar3 < piVar2[1]) {
    *piVar2 = iVar3 + 1;
    *(char **)(piVar2[2] + iVar3 * 4) = local_64;
  }
  piVar2 = DAT_0059a058;
  piVar5 = DAT_0059a058 + 3;
  DAT_0059a058[1] = 5;
  piVar2[2] = (int)piVar5;
  *piVar2 = 0;
  local_24 = &DAT_0059a05c;
  local_30 = iVar4;
  local_28 = iVar4;
  local_2c = s_ObjRockSDark_0059a06c;
  func_0019B51C(piVar2 + 8,DAT_0059a018,*DAT_0059a07c,(int)&local_30,piVar2,&local_28,0);
  local_5c = s_SinkSand_0059a024;
  local_60 = iVar4;
  (**(code **)(iVar4 + 8))(&local_60,*(code **)(iVar4 + 8),DAT_0059a01c);
  iVar3 = *piVar2;
  if (iVar3 < piVar2[1]) {
    *piVar2 = iVar3 + 1;
    *(char **)(piVar2[2] + iVar3 * 4) = local_5c;
  }
  piVar2 = DAT_0059a080;
  DAT_0059a080[2] = (int)(DAT_0059a080 + 3);
  piVar2[1] = 5;
  *piVar2 = 0;
  local_14 = &DAT_0059a084;
  local_1c = s_ObjRockLDark_0059a090;
  local_18 = iVar4;
  local_20 = iVar4;
  func_0019B51C(piVar2 + 8,DAT_0059a018,*DAT_0059a0a0,(int)&local_20,piVar2,&local_18,0);
  local_54 = s_SinkSand_0059a024;
  local_58 = iVar4;
  (**(code **)(iVar4 + 8))(&local_58,*(code **)(iVar4 + 8),DAT_0059a01c);
  iVar4 = *piVar2;
  if (iVar4 < piVar2[1]) {
    *piVar2 = iVar4 + 1;
    *(char **)(piVar2[2] + iVar4 * 4) = local_54;
  }
  return;
}

