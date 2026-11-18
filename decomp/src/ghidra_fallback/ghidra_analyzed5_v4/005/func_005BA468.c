#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005ba554;
extern undefined4 *DAT_005ba558;
extern undefined DAT_005ba55c;
extern undefined4 DAT_005ba568;
extern int DAT_005ba57c;
extern uint *DAT_005ba580;
extern undefined4 DAT_005ba584;
extern undefined4 *DAT_005ba588;
extern undefined4 DAT_005ba58c;
extern uint DAT_005ba590;
extern undefined4 *DAT_005ba594;
extern uint DAT_005ba598;
extern undefined4 *DAT_005ba59c;
extern undefined4 DAT_005ba5a0;
extern undefined4 DAT_005ba5a4;
extern undefined4 DAT_005ba5a8;
extern undefined4 *DAT_005ba5ac;
extern undefined4 DAT_005ba5b0;
extern char s_EnemyBuzzBlob_005ba56c[];

// USA 005BA468 <- EU 005BA440 (Ghidra, non-matching)
// GLOBAL DAT_005ba554 int *
// GLOBAL DAT_005ba558 undefined4 *
// GLOBAL DAT_005ba55c undefined
// GLOBAL DAT_005ba568 undefined4
// GLOBAL DAT_005ba57c int
// GLOBAL DAT_005ba580 uint *
// GLOBAL DAT_005ba584 undefined4
// GLOBAL DAT_005ba588 undefined4 *
// GLOBAL DAT_005ba58c undefined4
// GLOBAL DAT_005ba590 uint
// GLOBAL DAT_005ba594 undefined4 *
// GLOBAL DAT_005ba598 uint
// GLOBAL DAT_005ba59c undefined4 *
// GLOBAL DAT_005ba5a0 undefined4
// GLOBAL DAT_005ba5a4 undefined4
// GLOBAL DAT_005ba5a8 undefined4
// GLOBAL DAT_005ba5ac undefined4 *
// GLOBAL DAT_005ba5b0 undefined4
// GLOBAL s_EnemyBuzzBlob_005ba56c string

undefined8 func_005BA468(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define puStack_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005ba554;
  DAT_005ba554[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar4 = DAT_005ba558;
  DAT_005ba558[2] = DAT_005ba558 + 3;
  puVar4[1] = 5;
  uStack_18 = DAT_005ba568;
  *puVar4 = 0;
  puStack_14 = &DAT_005ba55c;
  local_20 = uStack_18;
  local_1c = s_EnemyBuzzBlob_005ba56c;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005ba57c;
  }
  func_0019B51C(DAT_005ba588,DAT_005ba584,*DAT_005ba580,(int)&local_20,DAT_005ba558,&uStack_18,iVar5
               );
  puVar4 = DAT_005ba594;
  uVar6 = func_00114608(DAT_005ba598,DAT_005ba590);
  *puVar4 = (int)uVar6;
  uVar3 = DAT_005ba5a8;
  uVar2 = DAT_005ba5a4;
  puVar4 = DAT_005ba59c;
  *DAT_005ba59c = DAT_005ba5a0;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  local_28 = 0;
  local_27 = 0;
  local_26 = 1;
  local_24 = 0xff;
  local_25 = 0xff;
  puVar4 = func_004FC6FC(DAT_005ba5ac,1,1,0,0,(undefined4 *)&local_28,0xb);
  return CONCAT44(DAT_005ba5b0,puVar4);
}

