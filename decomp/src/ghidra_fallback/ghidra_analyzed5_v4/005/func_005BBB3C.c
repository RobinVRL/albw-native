#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005bbc00;
extern undefined4 *DAT_005bbc04;
extern undefined DAT_005bbc08;
extern undefined4 DAT_005bbc10;
extern int DAT_005bbc24;
extern uint *DAT_005bbc28;
extern undefined4 DAT_005bbc2c;
extern undefined4 *DAT_005bbc30;
extern undefined4 DAT_005bbc34;
extern undefined4 DAT_005bbc38;
extern undefined4 *DAT_005bbc3c;
extern undefined4 DAT_005bbc40;
extern char s_EnemyIronBall_005bbc14[];

// USA 005BBB3C <- EU 005BBB14 (Ghidra, non-matching)
// GLOBAL DAT_005bbc00 int *
// GLOBAL DAT_005bbc04 undefined4 *
// GLOBAL DAT_005bbc08 undefined
// GLOBAL DAT_005bbc10 undefined4
// GLOBAL DAT_005bbc24 int
// GLOBAL DAT_005bbc28 uint *
// GLOBAL DAT_005bbc2c undefined4
// GLOBAL DAT_005bbc30 undefined4 *
// GLOBAL DAT_005bbc34 undefined4
// GLOBAL DAT_005bbc38 undefined4
// GLOBAL DAT_005bbc3c undefined4 *
// GLOBAL DAT_005bbc40 undefined4
// GLOBAL s_EnemyIronBall_005bbc14 string

undefined8 func_005BBB3C(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined1 *)(albw_frame + 0x0))
  #define local_1f (*(undefined1 *)(albw_frame + 0x1))
  #define local_1e (*(undefined1 *)(albw_frame + 0x2))
  #define local_1d (*(undefined1 *)(albw_frame + 0x3))
  #define local_1c (*(undefined1 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  piVar1 = DAT_005bbc00;
  DAT_005bbc00[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005bbc04;
  puVar4 = DAT_005bbc04 + 3;
  DAT_005bbc04[1] = 5;
  puVar2[2] = puVar4;
  uStack_10 = DAT_005bbc10;
  *puVar2 = 0;
  puStack_c = &DAT_005bbc08;
  local_18 = uStack_10;
  local_14 = s_EnemyIronBall_005bbc14;
  iVar3 = *piVar1;
  if (*piVar1 == 0) {
    iVar3 = DAT_005bbc24;
  }
  func_0019B51C(DAT_005bbc30,DAT_005bbc2c,*DAT_005bbc28,(int)&local_18,DAT_005bbc04,&uStack_10,iVar3
               );
  local_20 = 0;
  local_1f = 0;
  local_1e = 0;
  local_1c = 0xff;
  local_1d = 0xff;
  puVar2 = func_004FC6FC(DAT_005bbc3c,0,0,0,0,(undefined4 *)&local_20,0xb);
  return CONCAT44(DAT_005bbc40,puVar2);
}

