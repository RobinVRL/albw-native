#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a58e0;
extern undefined4 *DAT_005a58e4;
extern undefined DAT_005a58e8;
extern undefined4 DAT_005a58f0;
extern undefined DAT_005a58f4;
extern undefined DAT_005a58fc;
extern undefined DAT_005a5920;
extern undefined4 DAT_005a5928;
extern undefined4 DAT_005a592c;
extern undefined4 *DAT_005a5930;
extern undefined4 DAT_005a5934;
extern undefined4 *DAT_005a5938;
extern undefined DAT_005a593c;
extern int DAT_005a5950;
extern uint *DAT_005a5954;
extern undefined4 DAT_005a5958;
extern undefined4 *DAT_005a595c;
extern undefined4 DAT_005a5960;
extern undefined4 *DAT_005a5964;
extern undefined DAT_005a5968;
extern int DAT_005a597c;
extern uint *DAT_005a5980;
extern undefined4 DAT_005a5984;
extern undefined4 *DAT_005a5988;
extern char s_EnemyGoo_005a5970[];
extern char s_EnemyPeace_005a5944[];
extern char s_damage_005a5900[];
extern char s_jitabata_005a5908[];
extern char s_piyopiyo_005a5914[];

// USA 005A5740 <- EU 005A5718 (Ghidra, non-matching)
// GLOBAL DAT_005a58e0 int *
// GLOBAL DAT_005a58e4 undefined4 *
// GLOBAL DAT_005a58e8 undefined
// GLOBAL DAT_005a58f0 undefined4
// GLOBAL DAT_005a58f4 undefined
// GLOBAL DAT_005a58fc undefined
// GLOBAL DAT_005a5920 undefined
// GLOBAL DAT_005a5928 undefined4
// GLOBAL DAT_005a592c undefined4
// GLOBAL DAT_005a5930 undefined4 *
// GLOBAL DAT_005a5934 undefined4
// GLOBAL DAT_005a5938 undefined4 *
// GLOBAL DAT_005a593c undefined
// GLOBAL DAT_005a5950 int
// GLOBAL DAT_005a5954 uint *
// GLOBAL DAT_005a5958 undefined4
// GLOBAL DAT_005a595c undefined4 *
// GLOBAL DAT_005a5960 undefined4
// GLOBAL DAT_005a5964 undefined4 *
// GLOBAL DAT_005a5968 undefined
// GLOBAL DAT_005a597c int
// GLOBAL DAT_005a5980 uint *
// GLOBAL DAT_005a5984 undefined4
// GLOBAL DAT_005a5988 undefined4 *
// GLOBAL s_EnemyGoo_005a5970 string
// GLOBAL s_EnemyPeace_005a5944 string
// GLOBAL s_damage_005a5900 string
// GLOBAL s_jitabata_005a5908 string
// GLOBAL s_piyopiyo_005a5914 string

undefined8 func_005A5740(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
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
  piVar1 = DAT_005a58e0;
  DAT_005a58e0[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005a58f0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005a58e4;
  DAT_005a58e4[1] = &DAT_005a58e8;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005a58f4;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005a58fc;
  puVar2[4] = uVar3;
  puVar2[7] = s_damage_005a5900;
  puVar2[6] = uVar3;
  puVar2[9] = s_jitabata_005a5908;
  puVar2[8] = uVar3;
  puVar2[0xb] = s_piyopiyo_005a5914;
  puVar2[10] = uVar3;
  puVar2[0xc] = uVar3;
  puVar2[0xd] = &DAT_005a5920;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  func_004FC6FC(DAT_005a5930,0,0,0,0,(undefined4 *)&local_38,0xb);
  puVar2 = DAT_005a5938;
  puVar5 = DAT_005a5938 + 3;
  DAT_005a5938[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_24 = &DAT_005a593c;
  local_28 = uVar3;
  local_2c = s_EnemyPeace_005a5944;
  local_30 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a5950;
  }
  func_0019B51C(DAT_005a595c,DAT_005a5958,*DAT_005a5954,(int)&local_30,DAT_005a5938,&local_28,iVar4)
  ;
  puVar2 = DAT_005a5964;
  puVar5 = DAT_005a5964 + 3;
  DAT_005a5964[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005a5968;
  local_18 = uVar3;
  local_1c = s_EnemyGoo_005a5970;
  local_20 = uVar3;
  iVar4 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar4 = DAT_005a597c;
  }
  uVar3 = func_0019B51C(DAT_005a5988,DAT_005a5984,*DAT_005a5980,(int)&local_20,DAT_005a5964,
                        &local_18,iVar4);
  return CONCAT44(DAT_005a5960,uVar3);
}

