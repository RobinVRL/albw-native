#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005af460;
extern int *DAT_005af464;
extern undefined DAT_005af468;
extern int DAT_005af46c;
extern undefined4 DAT_005af498;
extern undefined4 DAT_005af49c;
extern undefined4 *DAT_005af4a8;
extern undefined4 DAT_005af4ac;
extern undefined4 *DAT_005af4b0;
extern undefined4 *DAT_005af4b4;
extern undefined DAT_005af4b8;
extern int DAT_005af4d4;
extern uint *DAT_005af4d8;
extern undefined4 DAT_005af4dc;
extern undefined4 *DAT_005af4e0;
extern undefined4 DAT_005af4e4;
extern undefined4 *DAT_005af4e8;
extern undefined DAT_005af4ec;
extern int DAT_005af50c;
extern uint *DAT_005af510;
extern undefined4 *DAT_005af514;
extern char s_Creepee_005af4a0[];
extern char s_EnemyCreepee_005af4c4[];
extern char s_EnemyIceCreepee_005af4fc[];
extern char s_attack_005af470[];
extern char s_attack_ed_005af478[];
extern char s_damage_005af484[];
extern char s_piyopiyo_005af48c[];

// USA 005AF278 <- EU 005AF250 (Ghidra, non-matching)
// GLOBAL DAT_005af460 int *
// GLOBAL DAT_005af464 int *
// GLOBAL DAT_005af468 undefined
// GLOBAL DAT_005af46c int
// GLOBAL DAT_005af498 undefined4
// GLOBAL DAT_005af49c undefined4
// GLOBAL DAT_005af4a8 undefined4 *
// GLOBAL DAT_005af4ac undefined4
// GLOBAL DAT_005af4b0 undefined4 *
// GLOBAL DAT_005af4b4 undefined4 *
// GLOBAL DAT_005af4b8 undefined
// GLOBAL DAT_005af4d4 int
// GLOBAL DAT_005af4d8 uint *
// GLOBAL DAT_005af4dc undefined4
// GLOBAL DAT_005af4e0 undefined4 *
// GLOBAL DAT_005af4e4 undefined4
// GLOBAL DAT_005af4e8 undefined4 *
// GLOBAL DAT_005af4ec undefined
// GLOBAL DAT_005af50c int
// GLOBAL DAT_005af510 uint *
// GLOBAL DAT_005af514 undefined4 *
// GLOBAL s_Creepee_005af4a0 string
// GLOBAL s_EnemyCreepee_005af4c4 string
// GLOBAL s_EnemyIceCreepee_005af4fc string
// GLOBAL s_attack_005af470 string
// GLOBAL s_attack_ed_005af478 string
// GLOBAL s_damage_005af484 string
// GLOBAL s_piyopiyo_005af48c string

undefined8 func_005AF278(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(undefined1 *)(albw_frame + 0x8))
  #define local_57 (*(undefined1 *)(albw_frame + 0x9))
  #define local_56 (*(undefined1 *)(albw_frame + 0xa))
  #define local_55 (*(undefined1 *)(albw_frame + 0xb))
  #define local_54 (*(undefined1 *)(albw_frame + 0xc))
  #define local_50 (*(undefined1 *)(albw_frame + 0x10))
  #define local_4f (*(undefined1 *)(albw_frame + 0x11))
  #define local_4e (*(undefined1 *)(albw_frame + 0x12))
  #define local_4d (*(undefined1 *)(albw_frame + 0x13))
  #define local_4c (*(undefined1 *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(char * *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(char * *)(albw_frame + 0x24))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define local_34 (*(char * *)(albw_frame + 0x2c))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define local_2c (*(undefined * *)(albw_frame + 0x34))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(char * *)(albw_frame + 0x3c))
  #define local_20 (*(int *)(albw_frame + 0x40))
  #define local_1c (*(undefined * *)(albw_frame + 0x44))
  iVar6 = DAT_005af46c;
  piVar1 = DAT_005af460;
  DAT_005af460[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005af464;
  DAT_005af464[1] = (int)&DAT_005af468;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_attack_005af470;
  piVar2[2] = iVar6;
  piVar2[5] = (int)s_attack_ed_005af478;
  piVar2[4] = iVar6;
  piVar2[7] = (int)s_damage_005af484;
  piVar2[6] = iVar6;
  piVar2[8] = iVar6;
  piVar2[9] = (int)s_piyopiyo_005af48c;
  local_58 = 0;
  local_57 = 0;
  local_56 = 0;
  local_55 = 0xff;
  local_54 = 0xff;
  local_44 = s_Creepee_005af4a0;
  local_48 = iVar6;
  func_004FC5F8(DAT_005af4a8,&local_48,0,1,0,(undefined4 *)&local_58,0xb);
  local_50 = 0;
  local_4f = 0;
  local_4e = 0;
  local_4d = 0xff;
  local_4c = 0xff;
  local_40 = iVar6;
  local_3c = s_Creepee_005af4a0;
  func_004FC5F8(DAT_005af4b0,&local_40,0,1,0,(undefined4 *)&local_50,0xb);
  puVar3 = DAT_005af4b4;
  puVar7 = DAT_005af4b4 + 3;
  DAT_005af4b4[1] = 5;
  puVar3[2] = puVar7;
  *puVar3 = 0;
  local_2c = &DAT_005af4b8;
  local_30 = iVar6;
  local_34 = s_EnemyCreepee_005af4c4;
  local_38 = iVar6;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005af4d4;
  }
  func_0019B51C(DAT_005af4e0,DAT_005af4dc,*DAT_005af4d8,(int)&local_38,DAT_005af4b4,&local_30,iVar5)
  ;
  puVar3 = DAT_005af4e8;
  puVar7 = DAT_005af4e8 + 3;
  DAT_005af4e8[1] = 5;
  puVar3[2] = puVar7;
  *puVar3 = 0;
  local_1c = &DAT_005af4ec;
  local_20 = iVar6;
  local_24 = s_EnemyIceCreepee_005af4fc;
  local_28 = iVar6;
  iVar6 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar6 = DAT_005af50c;
  }
  uVar4 = func_0019B51C(DAT_005af514,DAT_005af4dc,*DAT_005af510,(int)&local_28,DAT_005af4e8,
                        &local_20,iVar6);
  return CONCAT44(DAT_005af4e4,uVar4);
}

