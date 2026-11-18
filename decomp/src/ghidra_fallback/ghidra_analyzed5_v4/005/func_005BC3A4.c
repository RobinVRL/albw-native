#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005bc4e4;
extern undefined4 *DAT_005bc4e8;
extern undefined DAT_005bc4ec;
extern undefined4 DAT_005bc4f4;
extern undefined DAT_005bc4f8;
extern undefined DAT_005bc534;
extern undefined4 DAT_005bc53c;
extern undefined4 DAT_005bc540;
extern undefined4 *DAT_005bc544;
extern undefined4 DAT_005bc548;
extern undefined4 *DAT_005bc54c;
extern undefined DAT_005bc550;
extern int DAT_005bc56c;
extern uint *DAT_005bc570;
extern undefined4 DAT_005bc574;
extern undefined4 *DAT_005bc578;
extern undefined4 DAT_005bc57c;
extern char s_EnemyNuranuru_005bc55c[];
extern char s_bomb_end_005bc508[];
extern char s_bomb_st_005bc500[];
extern char s_damage_005bc514[];
extern char s_jitabata_005bc51c[];
extern char s_piyopiyo_005bc528[];

// USA 005BC3A4 <- EU 005BC37C (Ghidra, non-matching)
// GLOBAL DAT_005bc4e4 int *
// GLOBAL DAT_005bc4e8 undefined4 *
// GLOBAL DAT_005bc4ec undefined
// GLOBAL DAT_005bc4f4 undefined4
// GLOBAL DAT_005bc4f8 undefined
// GLOBAL DAT_005bc534 undefined
// GLOBAL DAT_005bc53c undefined4
// GLOBAL DAT_005bc540 undefined4
// GLOBAL DAT_005bc544 undefined4 *
// GLOBAL DAT_005bc548 undefined4
// GLOBAL DAT_005bc54c undefined4 *
// GLOBAL DAT_005bc550 undefined
// GLOBAL DAT_005bc56c int
// GLOBAL DAT_005bc570 uint *
// GLOBAL DAT_005bc574 undefined4
// GLOBAL DAT_005bc578 undefined4 *
// GLOBAL DAT_005bc57c undefined4
// GLOBAL s_EnemyNuranuru_005bc55c string
// GLOBAL s_bomb_end_005bc508 string
// GLOBAL s_bomb_st_005bc500 string
// GLOBAL s_damage_005bc514 string
// GLOBAL s_jitabata_005bc51c string
// GLOBAL s_piyopiyo_005bc528 string

undefined8 func_005BC3A4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
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
  piVar1 = DAT_005bc4e4;
  DAT_005bc4e4[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005bc4f4;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005bc4e8;
  DAT_005bc4e8[1] = &DAT_005bc4ec;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005bc4f8;
  puVar2[2] = uVar3;
  puVar2[5] = s_bomb_st_005bc500;
  puVar2[4] = uVar3;
  puVar2[7] = s_bomb_end_005bc508;
  puVar2[6] = uVar3;
  puVar2[9] = s_damage_005bc514;
  puVar2[8] = uVar3;
  puVar2[0xb] = s_jitabata_005bc51c;
  puVar2[10] = uVar3;
  puVar2[0xd] = s_piyopiyo_005bc528;
  puVar2[0xc] = uVar3;
  puVar2[0xe] = uVar3;
  puVar2[0xf] = &DAT_005bc534;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005bc544,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005bc54c;
  DAT_005bc54c[2] = DAT_005bc54c + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_14 = &DAT_005bc550;
  local_18 = uVar3;
  local_1c = s_EnemyNuranuru_005bc55c;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005bc56c;
  }
  uVar3 = func_0019B51C(DAT_005bc578,DAT_005bc574,*DAT_005bc570,(int)&local_20,DAT_005bc54c,
                        &local_18,iVar4);
  return CONCAT44(DAT_005bc57c,uVar3);
}

