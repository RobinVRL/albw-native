#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005ba784;
extern undefined4 *DAT_005ba788;
extern undefined DAT_005ba78c;
extern undefined4 DAT_005ba79c;
extern int DAT_005ba7b0;
extern uint *DAT_005ba7b4;
extern undefined4 DAT_005ba7b8;
extern undefined4 *DAT_005ba7bc;
extern undefined4 DAT_005ba7c0;
extern undefined4 DAT_005ba7c4;
extern undefined4 *DAT_005ba7c8;
extern undefined DAT_005ba7cc;
extern undefined DAT_005ba7d4;
extern undefined DAT_005ba7d8;
extern undefined DAT_005ba7ec;
extern undefined DAT_005ba804;
extern undefined4 DAT_005ba818;
extern undefined4 *DAT_005ba81c;
extern uint DAT_005ba82c;
extern uint DAT_005ba830;
extern uint DAT_005ba834;
extern uint DAT_005ba838;
extern undefined4 *DAT_005ba83c;
extern undefined4 DAT_005ba840;
extern char s_DeadRock_005ba820[];
extern char s_EnemyDeadRock_005ba7a0[];
extern char s_jitabata_005ba80c[];
extern char s_kyorokyoro_005ba7e0[];
extern char s_revive_005ba7fc[];
extern char s_shake_005ba7f4[];

// USA 005BA5DC <- EU 005BA5B4 (Ghidra, non-matching)
// GLOBAL DAT_005ba784 int *
// GLOBAL DAT_005ba788 undefined4 *
// GLOBAL DAT_005ba78c undefined
// GLOBAL DAT_005ba79c undefined4
// GLOBAL DAT_005ba7b0 int
// GLOBAL DAT_005ba7b4 uint *
// GLOBAL DAT_005ba7b8 undefined4
// GLOBAL DAT_005ba7bc undefined4 *
// GLOBAL DAT_005ba7c0 undefined4
// GLOBAL DAT_005ba7c4 undefined4
// GLOBAL DAT_005ba7c8 undefined4 *
// GLOBAL DAT_005ba7cc undefined
// GLOBAL DAT_005ba7d4 undefined
// GLOBAL DAT_005ba7d8 undefined
// GLOBAL DAT_005ba7ec undefined
// GLOBAL DAT_005ba804 undefined
// GLOBAL DAT_005ba818 undefined4
// GLOBAL DAT_005ba81c undefined4 *
// GLOBAL DAT_005ba82c uint
// GLOBAL DAT_005ba830 uint
// GLOBAL DAT_005ba834 uint
// GLOBAL DAT_005ba838 uint
// GLOBAL DAT_005ba83c undefined4 *
// GLOBAL DAT_005ba840 undefined4
// GLOBAL s_DeadRock_005ba820 string
// GLOBAL s_EnemyDeadRock_005ba7a0 string
// GLOBAL s_jitabata_005ba80c string
// GLOBAL s_kyorokyoro_005ba7e0 string
// GLOBAL s_revive_005ba7fc string
// GLOBAL s_shake_005ba7f4 string

undefined8 func_005BA5DC(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
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
  piVar1 = DAT_005ba784;
  DAT_005ba784[4] = -1;
  piVar1[5] = -1;
  piVar1[6] = 0;
  piVar1[7] = 0;
  uVar2 = DAT_005ba79c;
  puVar3 = DAT_005ba788;
  puVar5 = DAT_005ba788 + 3;
  DAT_005ba788[1] = 5;
  puVar3[2] = puVar5;
  *puVar3 = 0;
  local_14 = &DAT_005ba78c;
  local_18 = uVar2;
  local_1c = s_EnemyDeadRock_005ba7a0;
  local_20 = uVar2;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005ba7b0;
  }
  func_0019B51C(DAT_005ba7bc,DAT_005ba7b8,*DAT_005ba7b4,(int)&local_20,DAT_005ba788,&local_18,iVar4)
  ;
  puVar3 = DAT_005ba7c8;
  DAT_005ba7c8[1] = &DAT_005ba7cc;
  *puVar3 = uVar2;
  puVar3[3] = &DAT_005ba7d4;
  puVar3[2] = uVar2;
  puVar3[5] = &DAT_005ba7d8;
  puVar3[4] = uVar2;
  puVar3[7] = s_kyorokyoro_005ba7e0;
  puVar3[6] = uVar2;
  puVar3[9] = &DAT_005ba7ec;
  puVar3[8] = uVar2;
  puVar3[0xb] = s_shake_005ba7f4;
  puVar3[10] = uVar2;
  puVar3[0xd] = s_revive_005ba7fc;
  puVar3[0xc] = uVar2;
  puVar3[0xf] = &DAT_005ba804;
  puVar3[0xe] = uVar2;
  puVar3[0x10] = uVar2;
  puVar3[0x11] = s_jitabata_005ba80c;
  puVar3 = DAT_005ba81c;
  DAT_005ba81c[1] = s_DeadRock_005ba820;
  *puVar3 = uVar2;
  puVar3[3] = &DAT_005ba7ec;
  puVar3[2] = uVar2;
  puVar3[4] = uVar2;
  puVar3[5] = &DAT_005ba804;
  uVar6 = func_00114608(DAT_005ba830,DAT_005ba82c);
  piVar1[1] = (int)uVar6;
  uVar6 = func_00114608(DAT_005ba834,(uint)((ulonglong)uVar6 >> 0x20));
  piVar1[2] = (int)uVar6;
  uVar6 = func_00114608(DAT_005ba838,(uint)((ulonglong)uVar6 >> 0x20));
  piVar1[3] = (int)uVar6;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  puVar3 = func_004FC6FC(DAT_005ba83c,0,1,0,0,(undefined4 *)&local_28,0xb);
  return CONCAT44(DAT_005ba840,puVar3);
}

