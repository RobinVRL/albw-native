#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a7548;
extern undefined4 *DAT_005a754c;
extern undefined4 *DAT_005a7550;
extern undefined4 DAT_005a7560;
extern undefined4 DAT_005a7588;
extern undefined4 DAT_005a758c;
extern undefined4 *DAT_005a7590;
extern undefined4 DAT_005a7600;
extern undefined4 *DAT_005a7604;
extern undefined DAT_005a7608;
extern uint *DAT_005a762c;
extern undefined4 DAT_005a7630;
extern undefined4 *DAT_005a7634;
extern undefined4 DAT_005a7638;
extern undefined4 *DAT_005a763c;
extern undefined DAT_005a7640;
extern uint *DAT_005a7670;
extern undefined4 *DAT_005a7674;
extern undefined4 *DAT_005a7678;
extern undefined DAT_005a767c;
extern uint *DAT_005a76b8;
extern undefined4 *DAT_005a76bc;
extern undefined4 *DAT_005a76c0;
extern undefined DAT_005a76c4;
extern uint *DAT_005a76f0;
extern undefined4 *DAT_005a76f4;
extern undefined4 *DAT_005a76f8;
extern undefined DAT_005a76fc;
extern uint *DAT_005a7720;
extern undefined4 *DAT_005a7724;
extern undefined4 *DAT_005a7728;
extern undefined DAT_005a772c;
extern uint *DAT_005a7758;
extern undefined4 *DAT_005a775c;
extern undefined4 *DAT_005a7760;
extern undefined DAT_005a7764;
extern uint *DAT_005a7794;
extern undefined4 *DAT_005a77b8;
extern char s_Dark_picture_005a75a4[];
extern char s_Dokuro_picture_005a75c4[];
extern char s_Hagure_picture_005a75b4[];
extern char s_Ice_picture_005a75e4[];
extern char s_Kame_picture_005a75d4[];
extern char s_N_ArrowB_00_005a7564[];
extern char s_N_ArrowL_00_005a7570[];
extern char s_N_ArrowR_00_005a757c[];
extern char s_N_ArrowT_00_005a7554[];
extern char s_ObjPictureBlacksmithBoy_005a7658[];
extern char s_ObjPictureInpa_005a7710[];
extern char s_ObjPictureMaple_005a761c[];
extern char s_ObjPictureMountaineer_005a7740[];
extern char s_ObjPicturePriestGirl_005a76d8[];
extern char s_ObjPictureSahasPupilWarp_005a769c[];
extern char s_ObjPictureZoraQueen_005a7780[];
extern char s_Sand_picture_005a7594[];
extern char s_Water_picture_005a75f0[];

// USA 005A71C8 <- EU 005A71A0 (Ghidra, non-matching)
// GLOBAL DAT_005a7548 undefined4 *
// GLOBAL DAT_005a754c undefined4 *
// GLOBAL DAT_005a7550 undefined4 *
// GLOBAL DAT_005a7560 undefined4
// GLOBAL DAT_005a7588 undefined4
// GLOBAL DAT_005a758c undefined4
// GLOBAL DAT_005a7590 undefined4 *
// GLOBAL DAT_005a7600 undefined4
// GLOBAL DAT_005a7604 undefined4 *
// GLOBAL DAT_005a7608 undefined
// GLOBAL DAT_005a762c uint *
// GLOBAL DAT_005a7630 undefined4
// GLOBAL DAT_005a7634 undefined4 *
// GLOBAL DAT_005a7638 undefined4
// GLOBAL DAT_005a763c undefined4 *
// GLOBAL DAT_005a7640 undefined
// GLOBAL DAT_005a7670 uint *
// GLOBAL DAT_005a7674 undefined4 *
// GLOBAL DAT_005a7678 undefined4 *
// GLOBAL DAT_005a767c undefined
// GLOBAL DAT_005a76b8 uint *
// GLOBAL DAT_005a76bc undefined4 *
// GLOBAL DAT_005a76c0 undefined4 *
// GLOBAL DAT_005a76c4 undefined
// GLOBAL DAT_005a76f0 uint *
// GLOBAL DAT_005a76f4 undefined4 *
// GLOBAL DAT_005a76f8 undefined4 *
// GLOBAL DAT_005a76fc undefined
// GLOBAL DAT_005a7720 uint *
// GLOBAL DAT_005a7724 undefined4 *
// GLOBAL DAT_005a7728 undefined4 *
// GLOBAL DAT_005a772c undefined
// GLOBAL DAT_005a7758 uint *
// GLOBAL DAT_005a775c undefined4 *
// GLOBAL DAT_005a7760 undefined4 *
// GLOBAL DAT_005a7764 undefined
// GLOBAL DAT_005a7794 uint *
// GLOBAL DAT_005a77b8 undefined4 *
// GLOBAL s_Dark_picture_005a75a4 string
// GLOBAL s_Dokuro_picture_005a75c4 string
// GLOBAL s_Hagure_picture_005a75b4 string
// GLOBAL s_Ice_picture_005a75e4 string
// GLOBAL s_Kame_picture_005a75d4 string
// GLOBAL s_N_ArrowB_00_005a7564 string
// GLOBAL s_N_ArrowL_00_005a7570 string
// GLOBAL s_N_ArrowR_00_005a757c string
// GLOBAL s_N_ArrowT_00_005a7554 string
// GLOBAL s_ObjPictureBlacksmithBoy_005a7658 string
// GLOBAL s_ObjPictureInpa_005a7710 string
// GLOBAL s_ObjPictureMaple_005a761c string
// GLOBAL s_ObjPictureMountaineer_005a7740 string
// GLOBAL s_ObjPicturePriestGirl_005a76d8 string
// GLOBAL s_ObjPictureSahasPupilWarp_005a769c string
// GLOBAL s_ObjPictureZoraQueen_005a7780 string
// GLOBAL s_Sand_picture_005a7594 string
// GLOBAL s_Water_picture_005a75f0 string

undefined8 func_005A71C8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(undefined4 *)(albw_frame + 0x0))
  #define local_7c (*(char * *)(albw_frame + 0x4))
  #define local_78 (*(undefined4 *)(albw_frame + 0x8))
  #define local_74 (*(undefined * *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(char * *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(undefined * *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(char * *)(albw_frame + 0x24))
  #define local_58 (*(undefined4 *)(albw_frame + 0x28))
  #define local_54 (*(undefined * *)(albw_frame + 0x2c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x30))
  #define local_4c (*(char * *)(albw_frame + 0x34))
  #define local_48 (*(undefined4 *)(albw_frame + 0x38))
  #define local_44 (*(undefined * *)(albw_frame + 0x3c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x40))
  #define local_3c (*(char * *)(albw_frame + 0x44))
  #define local_38 (*(undefined4 *)(albw_frame + 0x48))
  #define local_34 (*(undefined * *)(albw_frame + 0x4c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2c (*(char * *)(albw_frame + 0x54))
  #define local_28 (*(undefined4 *)(albw_frame + 0x58))
  #define local_24 (*(undefined * *)(albw_frame + 0x5c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  #define local_18 (*(undefined4 *)(albw_frame + 0x68))
  #define local_14 (*(undefined * *)(albw_frame + 0x6c))
  puVar1 = DAT_005a7548;
  *DAT_005a7548 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005a7560;
  puVar1 = DAT_005a754c;
  *DAT_005a754c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a7550;
  DAT_005a7550[1] = s_N_ArrowT_00_005a7554;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005a7564;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005a7570;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005a757c;
  puVar1 = DAT_005a7590;
  DAT_005a7590[1] = s_Sand_picture_005a7594;
  *puVar1 = uVar2;
  puVar1[3] = s_Dark_picture_005a75a4;
  puVar1[2] = uVar2;
  puVar1[5] = s_Hagure_picture_005a75b4;
  puVar1[4] = uVar2;
  puVar1[7] = s_Dokuro_picture_005a75c4;
  puVar1[6] = uVar2;
  puVar1[9] = s_Kame_picture_005a75d4;
  puVar1[8] = uVar2;
  puVar1[0xb] = s_Ice_picture_005a75e4;
  puVar1[10] = uVar2;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = s_Water_picture_005a75f0;
  puVar1 = DAT_005a7604;
  puVar3 = DAT_005a7604 + 3;
  DAT_005a7604[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_74 = &DAT_005a7608;
  local_7c = s_ObjPictureMaple_005a761c;
  local_78 = uVar2;
  local_80 = uVar2;
  func_0019B51C(DAT_005a7634,DAT_005a7630,*DAT_005a762c,(int)&local_80,DAT_005a7604,&local_78,0);
  puVar1 = DAT_005a763c;
  puVar3 = DAT_005a763c + 3;
  DAT_005a763c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_64 = &DAT_005a7640;
  local_6c = s_ObjPictureBlacksmithBoy_005a7658;
  local_68 = uVar2;
  local_70 = uVar2;
  func_0019B51C(DAT_005a7674,DAT_005a7630,*DAT_005a7670,(int)&local_70,DAT_005a763c,&local_68,0);
  puVar1 = DAT_005a7678;
  DAT_005a7678[2] = DAT_005a7678 + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_54 = &DAT_005a767c;
  local_5c = s_ObjPictureSahasPupilWarp_005a769c;
  local_58 = uVar2;
  local_60 = uVar2;
  func_0019B51C(DAT_005a76bc,DAT_005a7630,*DAT_005a76b8,(int)&local_60,DAT_005a7678,&local_58,0);
  puVar1 = DAT_005a76c0;
  puVar3 = DAT_005a76c0 + 3;
  DAT_005a76c0[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_44 = &DAT_005a76c4;
  local_4c = s_ObjPicturePriestGirl_005a76d8;
  local_48 = uVar2;
  local_50 = uVar2;
  func_0019B51C(DAT_005a76f4,DAT_005a7630,*DAT_005a76f0,(int)&local_50,DAT_005a76c0,&local_48,0);
  puVar1 = DAT_005a76f8;
  DAT_005a76f8[2] = DAT_005a76f8 + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_34 = &DAT_005a76fc;
  local_3c = s_ObjPictureInpa_005a7710;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005a7724,DAT_005a7630,*DAT_005a7720,(int)&local_40,DAT_005a76f8,&local_38,0);
  puVar1 = DAT_005a7728;
  puVar3 = DAT_005a7728 + 3;
  DAT_005a7728[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005a772c;
  local_2c = s_ObjPictureMountaineer_005a7740;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005a775c,DAT_005a7630,*DAT_005a7758,(int)&local_30,DAT_005a7728,&local_28,0);
  puVar1 = DAT_005a7760;
  puVar3 = DAT_005a7760 + 3;
  DAT_005a7760[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005a7764;
  local_1c = s_ObjPictureZoraQueen_005a7780;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005a77b8,DAT_005a7630,*DAT_005a7794,(int)&local_20,DAT_005a7760,
                        &local_18,0);
  return CONCAT44(DAT_005a7638,uVar2);
}

