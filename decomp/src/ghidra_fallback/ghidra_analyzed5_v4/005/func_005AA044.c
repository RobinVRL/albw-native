#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005aa178;
extern undefined4 *DAT_005aa17c;
extern undefined DAT_005aa180;
extern undefined4 DAT_005aa184;
extern undefined DAT_005aa188;
extern undefined DAT_005aa1a8;
extern undefined4 DAT_005aa1b8;
extern uint DAT_005aa1bc;
extern uint DAT_005aa1c0;
extern undefined4 *DAT_005aa1c4;
extern undefined4 DAT_005aa1c8;
extern undefined4 *DAT_005aa1cc;
extern undefined DAT_005aa1d0;
extern int DAT_005aa1e4;
extern uint *DAT_005aa1e8;
extern undefined4 DAT_005aa1ec;
extern undefined4 *DAT_005aa1f0;
extern undefined4 DAT_005aa1f4;
extern char s_EnemyLeever_005aa1d8[];
extern char s_damage_005aa1b0[];
extern char s_jitabata_005aa19c[];
extern char s_piyopiyo_005aa190[];

// USA 005AA044 <- EU 005AA01C (Ghidra, non-matching)
// GLOBAL DAT_005aa178 int *
// GLOBAL DAT_005aa17c undefined4 *
// GLOBAL DAT_005aa180 undefined
// GLOBAL DAT_005aa184 undefined4
// GLOBAL DAT_005aa188 undefined
// GLOBAL DAT_005aa1a8 undefined
// GLOBAL DAT_005aa1b8 undefined4
// GLOBAL DAT_005aa1bc uint
// GLOBAL DAT_005aa1c0 uint
// GLOBAL DAT_005aa1c4 undefined4 *
// GLOBAL DAT_005aa1c8 undefined4
// GLOBAL DAT_005aa1cc undefined4 *
// GLOBAL DAT_005aa1d0 undefined
// GLOBAL DAT_005aa1e4 int
// GLOBAL DAT_005aa1e8 uint *
// GLOBAL DAT_005aa1ec undefined4
// GLOBAL DAT_005aa1f0 undefined4 *
// GLOBAL DAT_005aa1f4 undefined4
// GLOBAL s_EnemyLeever_005aa1d8 string
// GLOBAL s_damage_005aa1b0 string
// GLOBAL s_jitabata_005aa19c string
// GLOBAL s_piyopiyo_005aa190 string

undefined8 func_005AA044(void)

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
  piVar1 = DAT_005aa178;
  DAT_005aa178[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005aa184;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005aa17c;
  DAT_005aa17c[1] = &DAT_005aa180;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005aa188;
  puVar2[2] = uVar3;
  puVar2[5] = s_piyopiyo_005aa190;
  puVar2[4] = uVar3;
  puVar2[7] = s_jitabata_005aa19c;
  puVar2[6] = uVar3;
  puVar2[9] = &DAT_005aa1a8;
  puVar2[8] = uVar3;
  puVar2[10] = uVar3;
  puVar2[0xb] = s_damage_005aa1b0;
  uVar6 = func_00114608(DAT_005aa1c0,DAT_005aa1bc);
  piVar1[1] = (int)uVar6;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005aa1c4,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005aa1cc;
  puVar5 = DAT_005aa1cc + 3;
  DAT_005aa1cc[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005aa1d0;
  local_18 = uVar3;
  local_1c = s_EnemyLeever_005aa1d8;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005aa1e4;
  }
  uVar3 = func_0019B51C(DAT_005aa1f0,DAT_005aa1ec,*DAT_005aa1e8,(int)&local_20,DAT_005aa1cc,
                        &local_18,iVar4);
  return CONCAT44(DAT_005aa1f4,uVar3);
}

