#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005ba3dc;
extern undefined4 *DAT_005ba3e0;
extern undefined4 DAT_005ba3ec;
extern undefined4 DAT_005ba3f8;
extern uint DAT_005ba3fc;
extern uint DAT_005ba400;
extern undefined4 *DAT_005ba404;
extern undefined4 DAT_005ba408;
extern undefined4 *DAT_005ba40c;
extern undefined DAT_005ba410;
extern int DAT_005ba42c;
extern uint *DAT_005ba430;
extern undefined4 DAT_005ba434;
extern undefined4 *DAT_005ba438;
extern undefined4 DAT_005ba43c;
extern char s_EnemyBombZako_005ba41c[];
extern char s_hit00_005ba3f0[];
extern char s_wait00_005ba3e4[];

// USA 005BA2C0 <- EU 005BA298 (Ghidra, non-matching)
// GLOBAL DAT_005ba3dc int *
// GLOBAL DAT_005ba3e0 undefined4 *
// GLOBAL DAT_005ba3ec undefined4
// GLOBAL DAT_005ba3f8 undefined4
// GLOBAL DAT_005ba3fc uint
// GLOBAL DAT_005ba400 uint
// GLOBAL DAT_005ba404 undefined4 *
// GLOBAL DAT_005ba408 undefined4
// GLOBAL DAT_005ba40c undefined4 *
// GLOBAL DAT_005ba410 undefined
// GLOBAL DAT_005ba42c int
// GLOBAL DAT_005ba430 uint *
// GLOBAL DAT_005ba434 undefined4
// GLOBAL DAT_005ba438 undefined4 *
// GLOBAL DAT_005ba43c undefined4
// GLOBAL s_EnemyBombZako_005ba41c string
// GLOBAL s_hit00_005ba3f0 string
// GLOBAL s_wait00_005ba3e4 string

undefined8 func_005BA2C0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005ba3dc;
  DAT_005ba3dc[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005ba3ec;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005ba3e0;
  DAT_005ba3e0[1] = s_wait00_005ba3e4;
  *puVar2 = uVar3;
  puVar2[3] = s_hit00_005ba3f0;
  puVar2[2] = uVar3;
  puVar2[5] = s_hit00_005ba3f0;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_hit00_005ba3f0;
  uVar6 = func_00114608(DAT_005ba400,DAT_005ba3fc);
  piVar1[1] = (int)uVar6;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005ba404,0,0,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005ba40c;
  puVar5 = DAT_005ba40c + 3;
  DAT_005ba40c[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005ba410;
  local_18 = uVar3;
  local_1c = s_EnemyBombZako_005ba41c;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005ba42c;
  }
  uVar3 = func_0019B51C(DAT_005ba438,DAT_005ba434,*DAT_005ba430,(int)&local_20,DAT_005ba40c,
                        &local_18,iVar4);
  return CONCAT44(DAT_005ba43c,uVar3);
}

