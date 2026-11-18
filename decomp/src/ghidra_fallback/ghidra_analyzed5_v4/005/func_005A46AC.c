#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a4880;
extern undefined4 *DAT_005a4884;
extern undefined DAT_005a4888;
extern undefined4 DAT_005a4890;
extern int DAT_005a48a0;
extern uint *DAT_005a48a4;
extern undefined4 DAT_005a48a8;
extern undefined4 *DAT_005a48ac;
extern undefined4 DAT_005a48b0;
extern undefined4 DAT_005a48b4;
extern undefined4 *DAT_005a48b8;
extern undefined DAT_005a48bc;
extern int DAT_005a48d0;
extern uint *DAT_005a48d4;
extern undefined4 DAT_005a48d8;
extern undefined4 *DAT_005a48dc;
extern undefined4 *DAT_005a48e0;
extern undefined DAT_005a48e4;
extern undefined DAT_005a48ec;
extern undefined DAT_005a4910;
extern undefined4 DAT_005a4938;
extern undefined4 DAT_005a493c;
extern undefined4 *DAT_005a4940;
extern undefined4 DAT_005a4944;
extern undefined4 *DAT_005a4948;
extern undefined4 *DAT_005a494c;
extern undefined4 DAT_005a4950;
extern char s_EnemyGeeze_005a48c4[];
extern char s_EnemyGooze_005a4894[];
extern char s_damage_005a48f0[];
extern char s_dead_ed_005a4920[];
extern char s_dead_st_005a4918[];
extern char s_jitabata_005a48f8[];
extern char s_jitabata_sand_005a4928[];
extern char s_piyopiyo_005a4904[];

// USA 005A46AC <- EU 005A4684 (Ghidra, non-matching)
// GLOBAL DAT_005a4880 int *
// GLOBAL DAT_005a4884 undefined4 *
// GLOBAL DAT_005a4888 undefined
// GLOBAL DAT_005a4890 undefined4
// GLOBAL DAT_005a48a0 int
// GLOBAL DAT_005a48a4 uint *
// GLOBAL DAT_005a48a8 undefined4
// GLOBAL DAT_005a48ac undefined4 *
// GLOBAL DAT_005a48b0 undefined4
// GLOBAL DAT_005a48b4 undefined4
// GLOBAL DAT_005a48b8 undefined4 *
// GLOBAL DAT_005a48bc undefined
// GLOBAL DAT_005a48d0 int
// GLOBAL DAT_005a48d4 uint *
// GLOBAL DAT_005a48d8 undefined4
// GLOBAL DAT_005a48dc undefined4 *
// GLOBAL DAT_005a48e0 undefined4 *
// GLOBAL DAT_005a48e4 undefined
// GLOBAL DAT_005a48ec undefined
// GLOBAL DAT_005a4910 undefined
// GLOBAL DAT_005a4938 undefined4
// GLOBAL DAT_005a493c undefined4
// GLOBAL DAT_005a4940 undefined4 *
// GLOBAL DAT_005a4944 undefined4
// GLOBAL DAT_005a4948 undefined4 *
// GLOBAL DAT_005a494c undefined4 *
// GLOBAL DAT_005a4950 undefined4
// GLOBAL s_EnemyGeeze_005a48c4 string
// GLOBAL s_EnemyGooze_005a4894 string
// GLOBAL s_damage_005a48f0 string
// GLOBAL s_dead_ed_005a4920 string
// GLOBAL s_dead_st_005a4918 string
// GLOBAL s_jitabata_005a48f8 string
// GLOBAL s_jitabata_sand_005a4928 string
// GLOBAL s_piyopiyo_005a4904 string

undefined8 func_005A46AC(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005a4880;
  DAT_005a4880[4] = -1;
  piVar1[5] = -1;
  piVar1[6] = 0;
  piVar1[7] = 0;
  uVar2 = DAT_005a4890;
  puVar4 = DAT_005a4884;
  puVar6 = DAT_005a4884 + 3;
  DAT_005a4884[1] = 5;
  puVar4[2] = puVar6;
  *puVar4 = 0;
  local_24 = &DAT_005a4888;
  local_28 = uVar2;
  local_2c = s_EnemyGooze_005a4894;
  local_30 = uVar2;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005a48a0;
  }
  func_0019B51C(DAT_005a48ac,DAT_005a48a8,*DAT_005a48a4,(int)&local_30,DAT_005a4884,&local_28,iVar5)
  ;
  puVar4 = DAT_005a48b8;
  puVar6 = DAT_005a48b8 + 3;
  DAT_005a48b8[1] = 5;
  puVar4[2] = puVar6;
  *puVar4 = 0;
  local_14 = &DAT_005a48bc;
  local_18 = uVar2;
  local_1c = s_EnemyGeeze_005a48c4;
  local_20 = uVar2;
  iVar5 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar5 = DAT_005a48d0;
  }
  func_0019B51C(DAT_005a48dc,DAT_005a48d8,*DAT_005a48d4,(int)&local_20,DAT_005a48b8,&local_18,iVar5)
  ;
  puVar4 = DAT_005a48e0;
  DAT_005a48e0[1] = &DAT_005a48e4;
  *puVar4 = uVar2;
  puVar4[3] = &DAT_005a48ec;
  puVar4[2] = uVar2;
  puVar4[5] = s_damage_005a48f0;
  puVar4[4] = uVar2;
  puVar4[7] = s_jitabata_005a48f8;
  puVar4[6] = uVar2;
  puVar4[9] = s_piyopiyo_005a4904;
  puVar4[8] = uVar2;
  puVar4[0xb] = &DAT_005a4910;
  puVar4[10] = uVar2;
  puVar4[0xd] = s_dead_st_005a4918;
  puVar4[0xc] = uVar2;
  puVar4[0xf] = s_dead_ed_005a4920;
  puVar4[0xe] = uVar2;
  puVar4[0x10] = uVar2;
  puVar4[0x11] = s_jitabata_sand_005a4928;
  uVar3 = DAT_005a4944;
  puVar4 = DAT_005a4940;
  uVar2 = DAT_005a493c;
  *DAT_005a4940 = DAT_005a493c;
  puVar4[1] = uVar3;
  puVar4[2] = uVar2;
  puVar4 = DAT_005a4948;
  *(undefined1 *)DAT_005a4948 = 0;
  *(undefined1 *)((int)puVar4 + 1) = 0;
  *(undefined1 *)((int)puVar4 + 2) = 1;
  *(undefined1 *)((int)puVar4 + 3) = 0xff;
  *(undefined1 *)(puVar4 + 1) = 0xff;
  puVar4 = func_004FC6FC(DAT_005a494c,0,1,0,0,DAT_005a4948,0xb);
  return CONCAT44(DAT_005a4950,puVar4);
}

