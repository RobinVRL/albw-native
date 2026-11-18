#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bf714;
extern undefined4 *DAT_005bf718;
extern undefined4 DAT_005bf71c;
extern undefined4 *DAT_005bf720;
extern undefined4 DAT_005bf724;
extern undefined4 DAT_005bf728;
extern undefined4 DAT_005bf72c;
extern undefined4 DAT_005bf730;
extern undefined4 DAT_005bf734;
extern undefined4 DAT_005bf738;
extern undefined4 DAT_005bf73c;
extern undefined4 *DAT_005bf740;
extern undefined4 *DAT_005bf744;
extern undefined DAT_005bf748;
extern undefined4 DAT_005bf758;
extern uint *DAT_005bf76c;
extern undefined4 DAT_005bf770;
extern undefined4 *DAT_005bf774;
extern undefined4 DAT_005bf778;
extern undefined4 DAT_005bf77c;
extern undefined4 *DAT_005bf780;
extern undefined DAT_005bf784;
extern uint *DAT_005bf7a4;
extern undefined4 DAT_005bf7a8;
extern undefined4 *DAT_005bf7ac;
extern undefined4 *DAT_005bf7b0;
extern undefined DAT_005bf7b4;
extern uint *DAT_005bf7d4;
extern undefined4 DAT_005bf7d8;
extern undefined4 *DAT_005bf7dc;
extern undefined4 *DAT_005bf7e0;
extern undefined DAT_005bf7e4;
extern uint *DAT_005bf804;
extern undefined4 DAT_005bf808;
extern undefined4 *DAT_005bf80c;
extern undefined4 *DAT_005bf810;
extern undefined DAT_005bf814;
extern uint *DAT_005bf834;
extern undefined4 DAT_005bf838;
extern undefined4 *DAT_005bf83c;
extern undefined4 *DAT_005bf840;
extern undefined DAT_005bf844;
extern uint *DAT_005bf864;
extern undefined4 DAT_005bf868;
extern undefined4 *DAT_005bf86c;
extern undefined4 *DAT_005bf870;
extern undefined DAT_005bf874;
extern uint *DAT_005bf894;
extern undefined4 DAT_005bf898;
extern undefined4 *DAT_005bf89c;
extern undefined4 *DAT_005bf8a0;
extern undefined DAT_005bf8a4;
extern uint *DAT_005bf8c4;
extern undefined4 DAT_005bf8f0;
extern undefined4 *DAT_005bf8f4;
extern char s_MojWaterModel1_005bf75c[];
extern char s_MojWaterModel2_005bf794[];
extern char s_MojWaterModel3_005bf7c4[];
extern char s_MojWaterModel4_005bf7f4[];
extern char s_MojWaterModel5_005bf824[];
extern char s_MojWaterModel6_005bf854[];
extern char s_MojWaterModel7_005bf884[];
extern char s_MojWaterModel8_005bf8b4[];

// USA 005BF37C <- EU 005BF354 (Ghidra, non-matching)
// GLOBAL DAT_005bf714 undefined4 *
// GLOBAL DAT_005bf718 undefined4 *
// GLOBAL DAT_005bf71c undefined4
// GLOBAL DAT_005bf720 undefined4 *
// GLOBAL DAT_005bf724 undefined4
// GLOBAL DAT_005bf728 undefined4
// GLOBAL DAT_005bf72c undefined4
// GLOBAL DAT_005bf730 undefined4
// GLOBAL DAT_005bf734 undefined4
// GLOBAL DAT_005bf738 undefined4
// GLOBAL DAT_005bf73c undefined4
// GLOBAL DAT_005bf740 undefined4 *
// GLOBAL DAT_005bf744 undefined4 *
// GLOBAL DAT_005bf748 undefined
// GLOBAL DAT_005bf758 undefined4
// GLOBAL DAT_005bf76c uint *
// GLOBAL DAT_005bf770 undefined4
// GLOBAL DAT_005bf774 undefined4 *
// GLOBAL DAT_005bf778 undefined4
// GLOBAL DAT_005bf77c undefined4
// GLOBAL DAT_005bf780 undefined4 *
// GLOBAL DAT_005bf784 undefined
// GLOBAL DAT_005bf7a4 uint *
// GLOBAL DAT_005bf7a8 undefined4
// GLOBAL DAT_005bf7ac undefined4 *
// GLOBAL DAT_005bf7b0 undefined4 *
// GLOBAL DAT_005bf7b4 undefined
// GLOBAL DAT_005bf7d4 uint *
// GLOBAL DAT_005bf7d8 undefined4
// GLOBAL DAT_005bf7dc undefined4 *
// GLOBAL DAT_005bf7e0 undefined4 *
// GLOBAL DAT_005bf7e4 undefined
// GLOBAL DAT_005bf804 uint *
// GLOBAL DAT_005bf808 undefined4
// GLOBAL DAT_005bf80c undefined4 *
// GLOBAL DAT_005bf810 undefined4 *
// GLOBAL DAT_005bf814 undefined
// GLOBAL DAT_005bf834 uint *
// GLOBAL DAT_005bf838 undefined4
// GLOBAL DAT_005bf83c undefined4 *
// GLOBAL DAT_005bf840 undefined4 *
// GLOBAL DAT_005bf844 undefined
// GLOBAL DAT_005bf864 uint *
// GLOBAL DAT_005bf868 undefined4
// GLOBAL DAT_005bf86c undefined4 *
// GLOBAL DAT_005bf870 undefined4 *
// GLOBAL DAT_005bf874 undefined
// GLOBAL DAT_005bf894 uint *
// GLOBAL DAT_005bf898 undefined4
// GLOBAL DAT_005bf89c undefined4 *
// GLOBAL DAT_005bf8a0 undefined4 *
// GLOBAL DAT_005bf8a4 undefined
// GLOBAL DAT_005bf8c4 uint *
// GLOBAL DAT_005bf8f0 undefined4
// GLOBAL DAT_005bf8f4 undefined4 *
// GLOBAL s_MojWaterModel1_005bf75c string
// GLOBAL s_MojWaterModel2_005bf794 string
// GLOBAL s_MojWaterModel3_005bf7c4 string
// GLOBAL s_MojWaterModel4_005bf7f4 string
// GLOBAL s_MojWaterModel5_005bf824 string
// GLOBAL s_MojWaterModel6_005bf854 string
// GLOBAL s_MojWaterModel7_005bf884 string
// GLOBAL s_MojWaterModel8_005bf8b4 string

undefined8 func_005BF37C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(undefined4 *)(albw_frame + 0x0))
  #define local_8c (*(char * *)(albw_frame + 0x4))
  #define local_88 (*(undefined4 *)(albw_frame + 0x8))
  #define local_84 (*(undefined * *)(albw_frame + 0xc))
  #define local_80 (*(undefined4 *)(albw_frame + 0x10))
  #define local_7c (*(char * *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(undefined * *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(char * *)(albw_frame + 0x24))
  #define local_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_64 (*(undefined * *)(albw_frame + 0x2c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c (*(char * *)(albw_frame + 0x34))
  #define local_58 (*(undefined4 *)(albw_frame + 0x38))
  #define local_54 (*(undefined * *)(albw_frame + 0x3c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x40))
  #define local_4c (*(char * *)(albw_frame + 0x44))
  #define local_48 (*(undefined4 *)(albw_frame + 0x48))
  #define local_44 (*(undefined * *)(albw_frame + 0x4c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x50))
  #define local_3c (*(char * *)(albw_frame + 0x54))
  #define local_38 (*(undefined4 *)(albw_frame + 0x58))
  #define local_34 (*(undefined * *)(albw_frame + 0x5c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x60))
  #define local_2c (*(char * *)(albw_frame + 0x64))
  #define local_28 (*(undefined4 *)(albw_frame + 0x68))
  #define local_24 (*(undefined * *)(albw_frame + 0x6c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x70))
  #define local_1c (*(char * *)(albw_frame + 0x74))
  #define local_18 (*(undefined4 *)(albw_frame + 0x78))
  #define local_14 (*(undefined * *)(albw_frame + 0x7c))
  puVar1 = DAT_005bf714;
  *DAT_005bf714 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005bf724;
  puVar1 = DAT_005bf718;
  *DAT_005bf718 = 0;
  puVar1[1] = 0;
  uVar3 = DAT_005bf728;
  puVar1 = DAT_005bf720;
  uVar4 = DAT_005bf71c;
  *DAT_005bf720 = uVar2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar3;
  uVar2 = DAT_005bf730;
  puVar1[3] = DAT_005bf72c;
  puVar1[4] = uVar4;
  puVar1[5] = uVar2;
  uVar2 = DAT_005bf738;
  puVar1[6] = DAT_005bf734;
  puVar1[7] = uVar4;
  puVar1[8] = uVar2;
  uVar3 = DAT_005bf758;
  uVar2 = DAT_005bf73c;
  puVar1[9] = uVar4;
  puVar1[10] = uVar4;
  puVar1[0xb] = uVar2;
  puVar1 = DAT_005bf740;
  *DAT_005bf740 = uVar4;
  puVar1[1] = uVar4;
  puVar1[2] = uVar2;
  puVar1 = DAT_005bf744;
  puVar5 = DAT_005bf744 + 3;
  DAT_005bf744[1] = 5;
  puVar1[2] = puVar5;
  *puVar1 = 0;
  local_84 = &DAT_005bf748;
  local_8c = s_MojWaterModel1_005bf75c;
  local_88 = uVar3;
  local_90 = uVar3;
  func_0019B51C(DAT_005bf774,DAT_005bf770,*DAT_005bf76c,(int)&local_90,DAT_005bf744,&local_88,0);
  puVar1 = DAT_005bf780;
  DAT_005bf780[2] = DAT_005bf780 + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_74 = &DAT_005bf784;
  local_7c = s_MojWaterModel2_005bf794;
  local_78 = uVar3;
  local_80 = uVar3;
  func_0019B51C(DAT_005bf7ac,DAT_005bf7a8,*DAT_005bf7a4,(int)&local_80,DAT_005bf780,&local_78,0);
  puVar1 = DAT_005bf7b0;
  puVar5 = DAT_005bf7b0 + 3;
  DAT_005bf7b0[1] = 5;
  puVar1[2] = puVar5;
  *puVar1 = 0;
  local_64 = &DAT_005bf7b4;
  local_6c = s_MojWaterModel3_005bf7c4;
  local_68 = uVar3;
  local_70 = uVar3;
  func_0019B51C(DAT_005bf7dc,DAT_005bf7d8,*DAT_005bf7d4,(int)&local_70,DAT_005bf7b0,&local_68,0);
  puVar1 = DAT_005bf7e0;
  puVar5 = DAT_005bf7e0 + 3;
  DAT_005bf7e0[1] = 5;
  puVar1[2] = puVar5;
  *puVar1 = 0;
  local_54 = &DAT_005bf7e4;
  local_5c = s_MojWaterModel4_005bf7f4;
  local_58 = uVar3;
  local_60 = uVar3;
  func_0019B51C(DAT_005bf80c,DAT_005bf808,*DAT_005bf804,(int)&local_60,DAT_005bf7e0,&local_58,0);
  puVar1 = DAT_005bf810;
  puVar5 = DAT_005bf810 + 3;
  DAT_005bf810[1] = 5;
  puVar1[2] = puVar5;
  *puVar1 = 0;
  local_44 = &DAT_005bf814;
  local_4c = s_MojWaterModel5_005bf824;
  local_48 = uVar3;
  local_50 = uVar3;
  func_0019B51C(DAT_005bf83c,DAT_005bf838,*DAT_005bf834,(int)&local_50,DAT_005bf810,&local_48,0);
  puVar1 = DAT_005bf840;
  puVar5 = DAT_005bf840 + 3;
  DAT_005bf840[1] = 5;
  puVar1[2] = puVar5;
  *puVar1 = 0;
  local_34 = &DAT_005bf844;
  local_3c = s_MojWaterModel6_005bf854;
  local_38 = uVar3;
  local_40 = uVar3;
  func_0019B51C(DAT_005bf86c,DAT_005bf868,*DAT_005bf864,(int)&local_40,DAT_005bf840,&local_38,0);
  puVar1 = DAT_005bf870;
  puVar5 = DAT_005bf870 + 3;
  DAT_005bf870[1] = 5;
  puVar1[2] = puVar5;
  *puVar1 = 0;
  local_24 = &DAT_005bf874;
  local_2c = s_MojWaterModel7_005bf884;
  local_28 = uVar3;
  local_30 = uVar3;
  func_0019B51C(DAT_005bf89c,DAT_005bf898,*DAT_005bf894,(int)&local_30,DAT_005bf870,&local_28,0);
  puVar1 = DAT_005bf8a0;
  puVar5 = DAT_005bf8a0 + 3;
  DAT_005bf8a0[1] = 5;
  puVar1[2] = puVar5;
  *puVar1 = 0;
  local_14 = &DAT_005bf8a4;
  local_1c = s_MojWaterModel8_005bf8b4;
  local_18 = uVar3;
  local_20 = uVar3;
  uVar4 = func_0019B51C(DAT_005bf8f4,DAT_005bf8f0,*DAT_005bf8c4,(int)&local_20,DAT_005bf8a0,
                        &local_18,0);
  return CONCAT44(DAT_005bf77c,uVar4);
}

