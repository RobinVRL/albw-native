#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a03b0;
extern undefined4 *DAT_005a03b4;
extern undefined DAT_005a03b8;
extern undefined4 DAT_005a03c0;
extern int DAT_005a03d0;
extern uint *DAT_005a03d4;
extern undefined4 DAT_005a03d8;
extern undefined4 *DAT_005a03dc;
extern undefined4 DAT_005a03e0;
extern undefined4 DAT_005a03e4;
extern undefined4 *DAT_005a03e8;
extern undefined DAT_005a03ec;
extern int DAT_005a0404;
extern uint *DAT_005a0408;
extern undefined4 *DAT_005a040c;
extern undefined4 *DAT_005a0410;
extern undefined DAT_005a0414;
extern undefined DAT_005a041c;
extern undefined4 DAT_005a045c;
extern undefined4 *DAT_005a0460;
extern undefined4 DAT_005a0464;
extern undefined4 DAT_005a0468;
extern undefined4 DAT_005a046c;
extern undefined4 *DAT_005a0470;
extern undefined4 DAT_005a0474;
extern char s_EnemyPopo_005a03c4[];
extern char s_EnemyRedPopo_005a03f4[];
extern char s_appear_005a0424[];
extern char s_damage_005a0444[];
extern char s_dead_ed_005a0454[];
extern char s_dead_st_005a044c[];
extern char s_jitabata_005a042c[];
extern char s_piyopiyo_005a0438[];

// USA 005A01F0 <- EU 005A01C8 (Ghidra, non-matching)
// GLOBAL DAT_005a03b0 int *
// GLOBAL DAT_005a03b4 undefined4 *
// GLOBAL DAT_005a03b8 undefined
// GLOBAL DAT_005a03c0 undefined4
// GLOBAL DAT_005a03d0 int
// GLOBAL DAT_005a03d4 uint *
// GLOBAL DAT_005a03d8 undefined4
// GLOBAL DAT_005a03dc undefined4 *
// GLOBAL DAT_005a03e0 undefined4
// GLOBAL DAT_005a03e4 undefined4
// GLOBAL DAT_005a03e8 undefined4 *
// GLOBAL DAT_005a03ec undefined
// GLOBAL DAT_005a0404 int
// GLOBAL DAT_005a0408 uint *
// GLOBAL DAT_005a040c undefined4 *
// GLOBAL DAT_005a0410 undefined4 *
// GLOBAL DAT_005a0414 undefined
// GLOBAL DAT_005a041c undefined
// GLOBAL DAT_005a045c undefined4
// GLOBAL DAT_005a0460 undefined4 *
// GLOBAL DAT_005a0464 undefined4
// GLOBAL DAT_005a0468 undefined4
// GLOBAL DAT_005a046c undefined4
// GLOBAL DAT_005a0470 undefined4 *
// GLOBAL DAT_005a0474 undefined4
// GLOBAL s_EnemyPopo_005a03c4 string
// GLOBAL s_EnemyRedPopo_005a03f4 string
// GLOBAL s_appear_005a0424 string
// GLOBAL s_damage_005a0444 string
// GLOBAL s_dead_ed_005a0454 string
// GLOBAL s_dead_st_005a044c string
// GLOBAL s_jitabata_005a042c string
// GLOBAL s_piyopiyo_005a0438 string

undefined8 func_005A01F0(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined1 *)(albw_frame + 0x8))
  #define local_37 (*(undefined1 *)(albw_frame + 0x9))
  #define local_36 (*(undefined1 *)(albw_frame + 0xa))
  #define local_35 (*(undefined1 *)(albw_frame + 0xb))
  #define local_34 (*(undefined1 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  piVar1 = DAT_005a03b0;
  DAT_005a03b0[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  uVar2 = DAT_005a03c0;
  puVar4 = DAT_005a03b4;
  puVar6 = DAT_005a03b4 + 3;
  DAT_005a03b4[1] = 5;
  puVar4[2] = puVar6;
  *puVar4 = 0;
  local_24 = &DAT_005a03b8;
  local_28 = uVar2;
  local_2c = s_EnemyPopo_005a03c4;
  local_30 = uVar2;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005a03d0;
  }
  func_0019B51C(DAT_005a03dc,DAT_005a03d8,*DAT_005a03d4,(int)&local_30,DAT_005a03b4,&local_28,iVar5)
  ;
  puVar4 = DAT_005a03e8;
  puVar6 = DAT_005a03e8 + 3;
  DAT_005a03e8[1] = 5;
  puVar4[2] = puVar6;
  *puVar4 = 0;
  local_14 = &DAT_005a03ec;
  local_18 = uVar2;
  local_1c = s_EnemyRedPopo_005a03f4;
  local_20 = uVar2;
  iVar5 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar5 = DAT_005a0404;
  }
  func_0019B51C(DAT_005a040c,DAT_005a03d8,*DAT_005a0408,(int)&local_20,DAT_005a03e8,&local_18,iVar5)
  ;
  puVar4 = DAT_005a0410;
  DAT_005a0410[1] = &DAT_005a0414;
  *puVar4 = uVar2;
  puVar4[3] = &DAT_005a041c;
  puVar4[2] = uVar2;
  puVar4[5] = s_appear_005a0424;
  puVar4[4] = uVar2;
  puVar4[7] = s_jitabata_005a042c;
  puVar4[6] = uVar2;
  puVar4[9] = s_piyopiyo_005a0438;
  puVar4[8] = uVar2;
  puVar4[0xb] = s_damage_005a0444;
  puVar4[10] = uVar2;
  puVar4[0xd] = s_dead_st_005a044c;
  puVar4[0xc] = uVar2;
  puVar4[0xe] = uVar2;
  puVar4[0xf] = s_dead_ed_005a0454;
  uVar3 = DAT_005a046c;
  uVar2 = DAT_005a0468;
  puVar4 = DAT_005a0460;
  *DAT_005a0460 = DAT_005a0464;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  puVar4 = func_004FC6FC(DAT_005a0470,0,0,0,0,(undefined4 *)&local_38,0xb);
  return CONCAT44(DAT_005a0474,puVar4);
}

