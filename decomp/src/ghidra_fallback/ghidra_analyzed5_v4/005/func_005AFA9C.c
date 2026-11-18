#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005afd38;
extern undefined4 *DAT_005afd3c;
extern undefined DAT_005afd40;
extern undefined4 DAT_005afd50;
extern int DAT_005afd64;
extern uint *DAT_005afd68;
extern undefined4 DAT_005afd6c;
extern undefined4 *DAT_005afd70;
extern undefined4 DAT_005afd74;
extern undefined4 DAT_005afd78;
extern undefined4 *DAT_005afd7c;
extern undefined DAT_005afd80;
extern int DAT_005afda4;
extern uint *DAT_005afda8;
extern undefined4 *DAT_005afdac;
extern undefined4 *DAT_005afdb0;
extern undefined DAT_005afdb4;
extern int DAT_005afdd4;
extern uint *DAT_005afdd8;
extern undefined4 *DAT_005afddc;
extern undefined4 *DAT_005afde0;
extern undefined DAT_005afde4;
extern undefined DAT_005afdec;
extern uint DAT_005afe3c;
extern undefined4 *DAT_005afe40;
extern uint DAT_005afe44;
extern uint DAT_005afe48;
extern undefined4 *DAT_005afe4c;
extern undefined4 DAT_005afe50;
extern undefined4 DAT_005afe54;
extern undefined4 DAT_005afe58;
extern uint DAT_005afe5c;
extern uint DAT_005afe60;
extern uint DAT_005afe64;
extern undefined4 *DAT_005afe68;
extern undefined4 DAT_005afe6c;
extern char s_EnemyBlueEyegore_005afd90[];
extern char s_EnemyEyegore_005afd54[];
extern char s_EnemyRedEyegore_005afdc4[];
extern char s_damage_005afe0c[];
extern char s_dead_ed_005afe1c[];
extern char s_dead_st_005afe14[];
extern char s_eye_close_005afdf4[];
extern char s_eye_open_005afe00[];
extern char s_jitabata_005afe30[];
extern char s_piyopiyo_005afe24[];

// USA 005AFA9C <- EU 005AFA74 (Ghidra, non-matching)
// GLOBAL DAT_005afd38 int *
// GLOBAL DAT_005afd3c undefined4 *
// GLOBAL DAT_005afd40 undefined
// GLOBAL DAT_005afd50 undefined4
// GLOBAL DAT_005afd64 int
// GLOBAL DAT_005afd68 uint *
// GLOBAL DAT_005afd6c undefined4
// GLOBAL DAT_005afd70 undefined4 *
// GLOBAL DAT_005afd74 undefined4
// GLOBAL DAT_005afd78 undefined4
// GLOBAL DAT_005afd7c undefined4 *
// GLOBAL DAT_005afd80 undefined
// GLOBAL DAT_005afda4 int
// GLOBAL DAT_005afda8 uint *
// GLOBAL DAT_005afdac undefined4 *
// GLOBAL DAT_005afdb0 undefined4 *
// GLOBAL DAT_005afdb4 undefined
// GLOBAL DAT_005afdd4 int
// GLOBAL DAT_005afdd8 uint *
// GLOBAL DAT_005afddc undefined4 *
// GLOBAL DAT_005afde0 undefined4 *
// GLOBAL DAT_005afde4 undefined
// GLOBAL DAT_005afdec undefined
// GLOBAL DAT_005afe3c uint
// GLOBAL DAT_005afe40 undefined4 *
// GLOBAL DAT_005afe44 uint
// GLOBAL DAT_005afe48 uint
// GLOBAL DAT_005afe4c undefined4 *
// GLOBAL DAT_005afe50 undefined4
// GLOBAL DAT_005afe54 undefined4
// GLOBAL DAT_005afe58 undefined4
// GLOBAL DAT_005afe5c uint
// GLOBAL DAT_005afe60 uint
// GLOBAL DAT_005afe64 uint
// GLOBAL DAT_005afe68 undefined4 *
// GLOBAL DAT_005afe6c undefined4
// GLOBAL s_EnemyBlueEyegore_005afd90 string
// GLOBAL s_EnemyEyegore_005afd54 string
// GLOBAL s_EnemyRedEyegore_005afdc4 string
// GLOBAL s_damage_005afe0c string
// GLOBAL s_dead_ed_005afe1c string
// GLOBAL s_dead_st_005afe14 string
// GLOBAL s_eye_close_005afdf4 string
// GLOBAL s_eye_open_005afe00 string
// GLOBAL s_jitabata_005afe30 string
// GLOBAL s_piyopiyo_005afe24 string

undefined8 func_005AFA9C(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined1 *)(albw_frame + 0x8))
  #define local_47 (*(undefined1 *)(albw_frame + 0x9))
  #define local_46 (*(undefined1 *)(albw_frame + 0xa))
  #define local_45 (*(undefined1 *)(albw_frame + 0xb))
  #define local_44 (*(undefined1 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined * *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(char * *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined * *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(char * *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined * *)(albw_frame + 0x3c))
  piVar1 = DAT_005afd38;
  DAT_005afd38[10] = -1;
  piVar1[0xb] = -1;
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  uVar2 = DAT_005afd50;
  puVar4 = DAT_005afd3c;
  puVar6 = DAT_005afd3c + 3;
  DAT_005afd3c[1] = 5;
  puVar4[2] = puVar6;
  *puVar4 = 0;
  local_34 = &DAT_005afd40;
  local_38 = uVar2;
  local_3c = s_EnemyEyegore_005afd54;
  local_40 = uVar2;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005afd64;
  }
  func_0019B51C(DAT_005afd70,DAT_005afd6c,*DAT_005afd68,(int)&local_40,DAT_005afd3c,&local_38,iVar5)
  ;
  puVar4 = DAT_005afd7c;
  puVar6 = DAT_005afd7c + 3;
  DAT_005afd7c[1] = 5;
  puVar4[2] = puVar6;
  *puVar4 = 0;
  local_24 = &DAT_005afd80;
  local_28 = uVar2;
  local_2c = s_EnemyBlueEyegore_005afd90;
  local_30 = uVar2;
  iVar5 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar5 = DAT_005afda4;
  }
  func_0019B51C(DAT_005afdac,DAT_005afd6c,*DAT_005afda8,(int)&local_30,DAT_005afd7c,&local_28,iVar5)
  ;
  puVar4 = DAT_005afdb0;
  puVar6 = DAT_005afdb0 + 3;
  DAT_005afdb0[1] = 5;
  puVar4[2] = puVar6;
  *puVar4 = 0;
  local_14 = &DAT_005afdb4;
  local_18 = uVar2;
  local_1c = s_EnemyRedEyegore_005afdc4;
  local_20 = uVar2;
  iVar5 = piVar1[2];
  if (piVar1[2] == 0) {
    iVar5 = DAT_005afdd4;
  }
  func_0019B51C(DAT_005afddc,DAT_005afd6c,*DAT_005afdd8,(int)&local_20,DAT_005afdb0,&local_18,iVar5)
  ;
  puVar4 = DAT_005afde0;
  DAT_005afde0[1] = &DAT_005afde4;
  *puVar4 = uVar2;
  puVar4[3] = &DAT_005afdec;
  puVar4[2] = uVar2;
  puVar4[5] = s_eye_close_005afdf4;
  puVar4[4] = uVar2;
  puVar4[7] = s_eye_open_005afe00;
  puVar4[6] = uVar2;
  puVar4[9] = s_damage_005afe0c;
  puVar4[8] = uVar2;
  puVar4[0xb] = s_dead_st_005afe14;
  puVar4[10] = uVar2;
  puVar4[0xd] = s_dead_ed_005afe1c;
  puVar4[0xc] = uVar2;
  puVar4[0xf] = s_piyopiyo_005afe24;
  puVar4[0xe] = uVar2;
  puVar4[0x10] = uVar2;
  puVar4[0x11] = s_jitabata_005afe30;
  puVar4 = DAT_005afe40;
  uVar7 = func_00114608(DAT_005afe44,DAT_005afe3c);
  *puVar4 = (int)uVar7;
  uVar8 = func_00114608(DAT_005afe48,(uint)((ulonglong)uVar7 >> 0x20));
  puVar4[1] = (int)uVar8;
  uVar3 = DAT_005afe58;
  uVar2 = DAT_005afe54;
  puVar6 = DAT_005afe4c;
  *DAT_005afe4c = DAT_005afe50;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  uVar8 = func_00114608(DAT_005afe5c,(uint)((ulonglong)uVar8 >> 0x20));
  puVar4[2] = (int)uVar8;
  uVar8 = func_00114608(DAT_005afe60,(uint)((ulonglong)uVar8 >> 0x20));
  puVar4[3] = (int)uVar8;
  puVar4[4] = (int)uVar7;
  uVar7 = func_00114608(DAT_005afe64,(uint)(puVar4 + 4));
  puVar4[5] = (int)uVar7;
  local_48 = 0;
  local_47 = 0;
  local_46 = 0;
  local_44 = 2;
  local_45 = 0xff;
  puVar4 = func_004FC6FC(DAT_005afe68,0,1,0,0,(undefined4 *)&local_48,0xb);
  return CONCAT44(DAT_005afe6c,puVar4);
}

