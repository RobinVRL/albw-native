#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_0059fe20;
extern undefined4 *DAT_0059fe24;
extern undefined DAT_0059fe28;
extern int DAT_0059fe30;
extern int DAT_0059fe40;
extern uint *DAT_0059fe44;
extern undefined4 DAT_0059fe48;
extern undefined4 *DAT_0059fe4c;
extern undefined4 DAT_0059fe50;
extern undefined4 DAT_0059fe54;
extern undefined4 *DAT_0059fe58;
extern undefined DAT_0059fe5c;
extern int DAT_0059fe70;
extern uint *DAT_0059fe74;
extern undefined4 *DAT_0059fe78;
extern undefined4 *DAT_0059fe7c;
extern undefined DAT_0059fe80;
extern int DAT_0059fea0;
extern uint *DAT_0059fea4;
extern undefined4 *DAT_0059fea8;
extern undefined4 *DAT_0059feac;
extern undefined DAT_0059feb0;
extern int DAT_0059fed0;
extern uint *DAT_0059fed4;
extern undefined4 *DAT_0059fed8;
extern int *DAT_0059fedc;
extern undefined DAT_0059fee0;
extern undefined DAT_0059fefc;
extern undefined4 DAT_0059ff1c;
extern int *DAT_0059ff20;
extern undefined4 DAT_0059ff40;
extern undefined4 *DAT_0059ff44;
extern undefined4 DAT_0059ff48;
extern undefined4 DAT_0059ff4c;
extern undefined4 DAT_0059ff50;
extern undefined4 *DAT_0059ff54;
extern undefined4 DAT_0059ff58;
extern undefined4 *DAT_0059ff68;
extern char s_EnemyAmos_0059fe34[];
extern char s_EnemyFireGimos_0059fec0[];
extern char s_EnemyGimos_0059fe64[];
extern char s_EnemyIceGimos_0059fe90[];
extern char s_Ice_Gimos_0059ff5c[];
extern char s_LavaAppear_0059ff24[];
extern char s_LavaDisappear_0059ff30[];
extern char s_damage_0059fef4[];
extern char s_jitabata_0059ff04[];
extern char s_piyopiyo_0059ff10[];
extern char s_touchdown_0059fee8[];

// USA 0059FB14 <- EU 0059FAEC (Ghidra, non-matching)
// GLOBAL DAT_0059fe20 int *
// GLOBAL DAT_0059fe24 undefined4 *
// GLOBAL DAT_0059fe28 undefined
// GLOBAL DAT_0059fe30 int
// GLOBAL DAT_0059fe40 int
// GLOBAL DAT_0059fe44 uint *
// GLOBAL DAT_0059fe48 undefined4
// GLOBAL DAT_0059fe4c undefined4 *
// GLOBAL DAT_0059fe50 undefined4
// GLOBAL DAT_0059fe54 undefined4
// GLOBAL DAT_0059fe58 undefined4 *
// GLOBAL DAT_0059fe5c undefined
// GLOBAL DAT_0059fe70 int
// GLOBAL DAT_0059fe74 uint *
// GLOBAL DAT_0059fe78 undefined4 *
// GLOBAL DAT_0059fe7c undefined4 *
// GLOBAL DAT_0059fe80 undefined
// GLOBAL DAT_0059fea0 int
// GLOBAL DAT_0059fea4 uint *
// GLOBAL DAT_0059fea8 undefined4 *
// GLOBAL DAT_0059feac undefined4 *
// GLOBAL DAT_0059feb0 undefined
// GLOBAL DAT_0059fed0 int
// GLOBAL DAT_0059fed4 uint *
// GLOBAL DAT_0059fed8 undefined4 *
// GLOBAL DAT_0059fedc int *
// GLOBAL DAT_0059fee0 undefined
// GLOBAL DAT_0059fefc undefined
// GLOBAL DAT_0059ff1c undefined4
// GLOBAL DAT_0059ff20 int *
// GLOBAL DAT_0059ff40 undefined4
// GLOBAL DAT_0059ff44 undefined4 *
// GLOBAL DAT_0059ff48 undefined4
// GLOBAL DAT_0059ff4c undefined4
// GLOBAL DAT_0059ff50 undefined4
// GLOBAL DAT_0059ff54 undefined4 *
// GLOBAL DAT_0059ff58 undefined4
// GLOBAL DAT_0059ff68 undefined4 *
// GLOBAL s_EnemyAmos_0059fe34 string
// GLOBAL s_EnemyFireGimos_0059fec0 string
// GLOBAL s_EnemyGimos_0059fe64 string
// GLOBAL s_EnemyIceGimos_0059fe90 string
// GLOBAL s_Ice_Gimos_0059ff5c string
// GLOBAL s_LavaAppear_0059ff24 string
// GLOBAL s_LavaDisappear_0059ff30 string
// GLOBAL s_damage_0059fef4 string
// GLOBAL s_jitabata_0059ff04 string
// GLOBAL s_piyopiyo_0059ff10 string
// GLOBAL s_touchdown_0059fee8 string

undefined8 func_0059FB14(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_74 (*(undefined1 *)(albw_frame + 0xc))
  #define local_73 (*(undefined1 *)(albw_frame + 0xd))
  #define local_72 (*(undefined1 *)(albw_frame + 0xe))
  #define local_71 (*(undefined1 *)(albw_frame + 0xf))
  #define local_70 (*(undefined1 *)(albw_frame + 0x10))
  #define local_68 (*(undefined1 *)(albw_frame + 0x18))
  #define local_67 (*(undefined1 *)(albw_frame + 0x19))
  #define local_66 (*(undefined1 *)(albw_frame + 0x1a))
  #define local_65 (*(undefined1 *)(albw_frame + 0x1b))
  #define local_64 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_60 (*(int *)(albw_frame + 0x20))
  #define local_5c (*(char * *)(albw_frame + 0x24))
  #define local_58 (*(int *)(albw_frame + 0x28))
  #define local_54 (*(undefined * *)(albw_frame + 0x2c))
  #define local_50 (*(int *)(albw_frame + 0x30))
  #define local_4c (*(char * *)(albw_frame + 0x34))
  #define local_48 (*(int *)(albw_frame + 0x38))
  #define local_44 (*(undefined * *)(albw_frame + 0x3c))
  #define local_40 (*(int *)(albw_frame + 0x40))
  #define local_3c (*(char * *)(albw_frame + 0x44))
  #define local_38 (*(int *)(albw_frame + 0x48))
  #define local_34 (*(undefined * *)(albw_frame + 0x4c))
  #define local_30 (*(int *)(albw_frame + 0x50))
  #define local_2c (*(char * *)(albw_frame + 0x54))
  #define local_28 (*(int *)(albw_frame + 0x58))
  #define local_24 (*(undefined * *)(albw_frame + 0x5c))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  piVar1 = DAT_0059fe20;
  DAT_0059fe20[4] = -1;
  piVar1[5] = -1;
  iVar2 = DAT_0059fe30;
  piVar1[6] = 0;
  piVar1[7] = 0;
  puVar5 = DAT_0059fe24;
  DAT_0059fe24[2] = DAT_0059fe24 + 3;
  puVar5[1] = 5;
  *puVar5 = 0;
  local_54 = &DAT_0059fe28;
  local_58 = iVar2;
  local_5c = s_EnemyAmos_0059fe34;
  local_60 = iVar2;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_0059fe40;
  }
  func_0019B51C(DAT_0059fe4c,DAT_0059fe48,*DAT_0059fe44,(int)&local_60,DAT_0059fe24,&local_58,iVar6)
  ;
  puVar5 = DAT_0059fe58;
  puVar7 = DAT_0059fe58 + 3;
  DAT_0059fe58[1] = 5;
  puVar5[2] = puVar7;
  *puVar5 = 0;
  local_44 = &DAT_0059fe5c;
  local_48 = iVar2;
  local_4c = s_EnemyGimos_0059fe64;
  local_50 = iVar2;
  iVar6 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar6 = DAT_0059fe70;
  }
  func_0019B51C(DAT_0059fe78,DAT_0059fe48,*DAT_0059fe74,(int)&local_50,DAT_0059fe58,&local_48,iVar6)
  ;
  puVar5 = DAT_0059fe7c;
  puVar7 = DAT_0059fe7c + 3;
  DAT_0059fe7c[1] = 5;
  puVar5[2] = puVar7;
  *puVar5 = 0;
  local_34 = &DAT_0059fe80;
  local_38 = iVar2;
  local_3c = s_EnemyIceGimos_0059fe90;
  local_40 = iVar2;
  iVar6 = piVar1[2];
  if (piVar1[2] == 0) {
    iVar6 = DAT_0059fea0;
  }
  func_0019B51C(DAT_0059fea8,DAT_0059fe48,*DAT_0059fea4,(int)&local_40,DAT_0059fe7c,&local_38,iVar6)
  ;
  puVar5 = DAT_0059feac;
  puVar7 = DAT_0059feac + 3;
  DAT_0059feac[1] = 5;
  puVar5[2] = puVar7;
  *puVar5 = 0;
  local_24 = &DAT_0059feb0;
  local_28 = iVar2;
  local_2c = s_EnemyFireGimos_0059fec0;
  local_30 = iVar2;
  iVar6 = piVar1[3];
  if (piVar1[3] == 0) {
    iVar6 = DAT_0059fed0;
  }
  func_0019B51C(DAT_0059fed8,DAT_0059fe48,*DAT_0059fed4,(int)&local_30,DAT_0059feac,&local_28,iVar6)
  ;
  piVar1 = DAT_0059fedc;
  DAT_0059fedc[1] = (int)&DAT_0059fee0;
  *piVar1 = iVar2;
  piVar1[3] = (int)s_touchdown_0059fee8;
  piVar1[2] = iVar2;
  piVar1[5] = (int)s_damage_0059fef4;
  piVar1[4] = iVar2;
  piVar1[7] = (int)&DAT_0059fefc;
  piVar1[6] = iVar2;
  piVar1[9] = (int)s_jitabata_0059ff04;
  piVar1[8] = iVar2;
  piVar1[10] = iVar2;
  piVar1[0xb] = (int)s_piyopiyo_0059ff10;
  piVar1 = DAT_0059ff20;
  DAT_0059ff20[1] = (int)s_LavaAppear_0059ff24;
  *piVar1 = iVar2;
  piVar1[2] = iVar2;
  piVar1[3] = (int)s_LavaDisappear_0059ff30;
  uVar4 = DAT_0059ff50;
  uVar3 = DAT_0059ff4c;
  puVar5 = DAT_0059ff44;
  *DAT_0059ff44 = DAT_0059ff48;
  puVar5[1] = uVar3;
  puVar5[2] = uVar4;
  local_68 = 0;
  local_67 = 0;
  local_66 = 0;
  local_65 = 0xff;
  local_64 = 0xff;
  func_004FC6FC(DAT_0059ff54,0,1,0,0,(undefined4 *)&local_68,0xb);
  local_74 = 0;
  local_73 = 0;
  local_72 = 0;
  local_71 = 0xff;
  local_70 = 0xff;
  local_1c = s_Ice_Gimos_0059ff5c;
  local_20 = iVar2;
  puVar5 = func_004FC5F8(DAT_0059ff68,&local_20,0,1,0,(undefined4 *)&local_74,0xb);
  return CONCAT44(DAT_0059ff58,puVar5);
}

