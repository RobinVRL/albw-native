#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c13e8;
extern undefined4 *DAT_005c13ec;
extern undefined4 DAT_005c13f0;
extern undefined4 *DAT_005c13f4;
extern undefined4 DAT_005c13f8;
extern undefined4 DAT_005c13fc;
extern uint DAT_005c1400;
extern undefined4 *DAT_005c1404;
extern undefined DAT_005c1408;
extern undefined4 DAT_005c141c;
extern int DAT_005c1430;
extern uint *DAT_005c1434;
extern undefined4 DAT_005c1438;
extern undefined4 *DAT_005c143c;
extern undefined4 DAT_005c1440;
extern undefined4 DAT_005c1444;
extern undefined4 *DAT_005c1448;
extern undefined DAT_005c144c;
extern uint *DAT_005c146c;
extern undefined4 *DAT_005c1470;
extern char s_EnemyTainonFake_005c145c[];
extern char s_ObjTainonWall_005c1420[];

// USA 005C12D0 <- EU 005C12A8 (Ghidra, non-matching)
// GLOBAL DAT_005c13e8 undefined4 *
// GLOBAL DAT_005c13ec undefined4 *
// GLOBAL DAT_005c13f0 undefined4
// GLOBAL DAT_005c13f4 undefined4 *
// GLOBAL DAT_005c13f8 undefined4
// GLOBAL DAT_005c13fc undefined4
// GLOBAL DAT_005c1400 uint
// GLOBAL DAT_005c1404 undefined4 *
// GLOBAL DAT_005c1408 undefined
// GLOBAL DAT_005c141c undefined4
// GLOBAL DAT_005c1430 int
// GLOBAL DAT_005c1434 uint *
// GLOBAL DAT_005c1438 undefined4
// GLOBAL DAT_005c143c undefined4 *
// GLOBAL DAT_005c1440 undefined4
// GLOBAL DAT_005c1444 undefined4
// GLOBAL DAT_005c1448 undefined4 *
// GLOBAL DAT_005c144c undefined
// GLOBAL DAT_005c146c uint *
// GLOBAL DAT_005c1470 undefined4 *
// GLOBAL s_EnemyTainonFake_005c145c string
// GLOBAL s_ObjTainonWall_005c1420 string

undefined8 func_005C12D0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005c13e8;
  DAT_005c13e8[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar5 = DAT_005c13f0;
  puVar1 = DAT_005c13ec;
  *DAT_005c13ec = 0;
  puVar1[1] = 0;
  uVar3 = DAT_005c13fc;
  uVar2 = DAT_005c13f8;
  puVar6 = DAT_005c13f4;
  puVar1 = DAT_005c13e8;
  *DAT_005c13f4 = uVar5;
  puVar6[1] = uVar5;
  puVar6[2] = uVar5;
  puVar6[3] = uVar5;
  puVar6[4] = uVar2;
  puVar6[5] = uVar3;
  uVar7 = func_00114608(DAT_005c1400,0);
  *puVar1 = (int)uVar7;
  puVar1 = DAT_005c1404;
  puVar6 = DAT_005c1404 + 3;
  DAT_005c1404[1] = 5;
  puVar1[2] = puVar6;
  *puVar1 = 0;
  iVar4 = DAT_005c1430;
  uVar5 = DAT_005c141c;
  local_24 = &DAT_005c1408;
  local_2c = s_ObjTainonWall_005c1420;
  local_28 = DAT_005c141c;
  local_30 = DAT_005c141c;
  func_0019B51C(DAT_005c143c,DAT_005c1438,*DAT_005c1434,(int)&local_30,DAT_005c1404,&local_28,
                DAT_005c1430);
  puVar1 = DAT_005c1448;
  puVar6 = DAT_005c1448 + 3;
  DAT_005c1448[1] = 5;
  puVar1[2] = puVar6;
  *puVar1 = 0;
  local_14 = &DAT_005c144c;
  local_1c = s_EnemyTainonFake_005c145c;
  local_18 = uVar5;
  local_20 = uVar5;
  uVar5 = func_0019B51C(DAT_005c1470,DAT_005c1438,*DAT_005c146c,(int)&local_20,DAT_005c1448,
                        &local_18,iVar4);
  return CONCAT44(DAT_005c1444,uVar5);
}

