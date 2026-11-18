#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_0059bdbc;
extern undefined4 *DAT_0059bdc0;
extern undefined4 *DAT_0059bdc4;
extern undefined DAT_0059bdc8;
extern undefined4 DAT_0059bdd4;
extern uint *DAT_0059bde4;
extern undefined4 DAT_0059bde8;
extern undefined4 *DAT_0059bdec;
extern undefined4 DAT_0059bdf0;
extern undefined4 DAT_0059bdf4;
extern undefined4 *DAT_0059bdf8;
extern undefined DAT_0059bdfc;
extern uint *DAT_0059be14;
extern undefined4 *DAT_0059be18;
extern undefined4 *DAT_0059be1c;
extern undefined DAT_0059be20;
extern uint *DAT_0059be44;
extern undefined4 *DAT_0059be48;
extern undefined4 *DAT_0059be4c;
extern undefined DAT_0059be50;
extern uint *DAT_0059be74;
extern undefined4 *DAT_0059be78;
extern undefined4 *DAT_0059be7c;
extern undefined DAT_0059be80;
extern uint *DAT_0059bea0;
extern undefined4 *DAT_0059bea4;
extern undefined4 *DAT_0059bea8;
extern undefined DAT_0059beac;
extern uint *DAT_0059bec8;
extern undefined4 *DAT_0059becc;
extern undefined4 *DAT_0059bed0;
extern undefined DAT_0059bed4;
extern uint *DAT_0059bef0;
extern undefined4 *DAT_0059bef4;
extern undefined4 *DAT_0059bef8;
extern undefined DAT_0059befc;
extern uint *DAT_0059bf18;
extern undefined4 *DAT_0059bf1c;
extern undefined4 *DAT_0059bf20;
extern undefined DAT_0059bf24;
extern uint *DAT_0059bf40;
extern undefined4 *DAT_0059bf44;
extern char s_MassTreeApple_0059beb8[];
extern char s_MassTreeD_0059be08[];
extern char s_MassTreeDarkRed_0059be90[];
extern char s_MassTreeDarkYellow_0059be60[];
extern char s_MassTreeLightYellow_0059be30[];
extern char s_MassTreeSmall_0059bee0[];
extern char s_MassTreeStumpD_0059bf30[];
extern char s_MassTreeStump_0059bf08[];
extern char s_MassTree_0059bdd8[];

// USA 0059B9F8 <- EU 0059B9D0 (Ghidra, non-matching)
// GLOBAL DAT_0059bdbc int
// GLOBAL DAT_0059bdc0 undefined4 *
// GLOBAL DAT_0059bdc4 undefined4 *
// GLOBAL DAT_0059bdc8 undefined
// GLOBAL DAT_0059bdd4 undefined4
// GLOBAL DAT_0059bde4 uint *
// GLOBAL DAT_0059bde8 undefined4
// GLOBAL DAT_0059bdec undefined4 *
// GLOBAL DAT_0059bdf0 undefined4
// GLOBAL DAT_0059bdf4 undefined4
// GLOBAL DAT_0059bdf8 undefined4 *
// GLOBAL DAT_0059bdfc undefined
// GLOBAL DAT_0059be14 uint *
// GLOBAL DAT_0059be18 undefined4 *
// GLOBAL DAT_0059be1c undefined4 *
// GLOBAL DAT_0059be20 undefined
// GLOBAL DAT_0059be44 uint *
// GLOBAL DAT_0059be48 undefined4 *
// GLOBAL DAT_0059be4c undefined4 *
// GLOBAL DAT_0059be50 undefined
// GLOBAL DAT_0059be74 uint *
// GLOBAL DAT_0059be78 undefined4 *
// GLOBAL DAT_0059be7c undefined4 *
// GLOBAL DAT_0059be80 undefined
// GLOBAL DAT_0059bea0 uint *
// GLOBAL DAT_0059bea4 undefined4 *
// GLOBAL DAT_0059bea8 undefined4 *
// GLOBAL DAT_0059beac undefined
// GLOBAL DAT_0059bec8 uint *
// GLOBAL DAT_0059becc undefined4 *
// GLOBAL DAT_0059bed0 undefined4 *
// GLOBAL DAT_0059bed4 undefined
// GLOBAL DAT_0059bef0 uint *
// GLOBAL DAT_0059bef4 undefined4 *
// GLOBAL DAT_0059bef8 undefined4 *
// GLOBAL DAT_0059befc undefined
// GLOBAL DAT_0059bf18 uint *
// GLOBAL DAT_0059bf1c undefined4 *
// GLOBAL DAT_0059bf20 undefined4 *
// GLOBAL DAT_0059bf24 undefined
// GLOBAL DAT_0059bf40 uint *
// GLOBAL DAT_0059bf44 undefined4 *
// GLOBAL s_MassTreeApple_0059beb8 string
// GLOBAL s_MassTreeD_0059be08 string
// GLOBAL s_MassTreeDarkRed_0059be90 string
// GLOBAL s_MassTreeDarkYellow_0059be60 string
// GLOBAL s_MassTreeLightYellow_0059be30 string
// GLOBAL s_MassTreeSmall_0059bee0 string
// GLOBAL s_MassTreeStumpD_0059bf30 string
// GLOBAL s_MassTreeStump_0059bf08 string
// GLOBAL s_MassTree_0059bdd8 string

undefined8 func_0059B9F8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(undefined4 *)(albw_frame + 0x0))
  #define local_9c (*(char * *)(albw_frame + 0x4))
  #define local_98 (*(undefined4 *)(albw_frame + 0x8))
  #define local_94 (*(undefined * *)(albw_frame + 0xc))
  #define local_90 (*(undefined4 *)(albw_frame + 0x10))
  #define local_8c (*(char * *)(albw_frame + 0x14))
  #define local_88 (*(undefined4 *)(albw_frame + 0x18))
  #define local_84 (*(undefined * *)(albw_frame + 0x1c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(char * *)(albw_frame + 0x24))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define local_74 (*(undefined * *)(albw_frame + 0x2c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x30))
  #define local_6c (*(char * *)(albw_frame + 0x34))
  #define local_68 (*(undefined4 *)(albw_frame + 0x38))
  #define local_64 (*(undefined * *)(albw_frame + 0x3c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x40))
  #define local_5c (*(char * *)(albw_frame + 0x44))
  #define local_58 (*(undefined4 *)(albw_frame + 0x48))
  #define local_54 (*(undefined * *)(albw_frame + 0x4c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x50))
  #define local_4c (*(char * *)(albw_frame + 0x54))
  #define local_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_44 (*(undefined * *)(albw_frame + 0x5c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(char * *)(albw_frame + 0x64))
  #define local_38 (*(undefined4 *)(albw_frame + 0x68))
  #define local_34 (*(undefined * *)(albw_frame + 0x6c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x70))
  #define local_2c (*(char * *)(albw_frame + 0x74))
  #define local_28 (*(undefined4 *)(albw_frame + 0x78))
  #define local_24 (*(undefined * *)(albw_frame + 0x7c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x80))
  #define local_1c (*(char * *)(albw_frame + 0x84))
  #define local_18 (*(undefined4 *)(albw_frame + 0x88))
  #define local_14 (*(undefined * *)(albw_frame + 0x8c))
  iVar1 = DAT_0059bdbc;
  *(undefined4 *)(DAT_0059bdbc + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_0059bdc0;
  *DAT_0059bdc0 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_0059bdd4;
  puVar2 = DAT_0059bdc4;
  puVar4 = DAT_0059bdc4 + 3;
  DAT_0059bdc4[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_94 = &DAT_0059bdc8;
  local_9c = s_MassTree_0059bdd8;
  local_98 = uVar3;
  local_a0 = uVar3;
  func_0019B51C(DAT_0059bdec,DAT_0059bde8,*DAT_0059bde4,(int)&local_a0,DAT_0059bdc4,&local_98,0);
  puVar2 = DAT_0059bdf8;
  puVar4 = DAT_0059bdf8 + 3;
  DAT_0059bdf8[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_84 = &DAT_0059bdfc;
  local_8c = s_MassTreeD_0059be08;
  local_88 = uVar3;
  local_90 = uVar3;
  func_0019B51C(DAT_0059be18,DAT_0059bde8,*DAT_0059be14,(int)&local_90,DAT_0059bdf8,&local_88,0);
  puVar2 = DAT_0059be1c;
  DAT_0059be1c[2] = DAT_0059be1c + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_74 = &DAT_0059be20;
  local_7c = s_MassTreeLightYellow_0059be30;
  local_78 = uVar3;
  local_80 = uVar3;
  func_0019B51C(DAT_0059be48,DAT_0059bde8,*DAT_0059be44,(int)&local_80,DAT_0059be1c,&local_78,0);
  puVar2 = DAT_0059be4c;
  DAT_0059be4c[2] = DAT_0059be4c + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_64 = &DAT_0059be50;
  local_6c = s_MassTreeDarkYellow_0059be60;
  local_68 = uVar3;
  local_70 = uVar3;
  func_0019B51C(DAT_0059be78,DAT_0059bde8,*DAT_0059be74,(int)&local_70,DAT_0059be4c,&local_68,0);
  puVar2 = DAT_0059be7c;
  puVar4 = DAT_0059be7c + 3;
  DAT_0059be7c[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_54 = &DAT_0059be80;
  local_5c = s_MassTreeDarkRed_0059be90;
  local_58 = uVar3;
  local_60 = uVar3;
  func_0019B51C(DAT_0059bea4,DAT_0059bde8,*DAT_0059bea0,(int)&local_60,DAT_0059be7c,&local_58,0);
  puVar2 = DAT_0059bea8;
  puVar4 = DAT_0059bea8 + 3;
  DAT_0059bea8[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_44 = &DAT_0059beac;
  local_4c = s_MassTreeApple_0059beb8;
  local_48 = uVar3;
  local_50 = uVar3;
  func_0019B51C(DAT_0059becc,DAT_0059bde8,*DAT_0059bec8,(int)&local_50,DAT_0059bea8,&local_48,0);
  puVar2 = DAT_0059bed0;
  DAT_0059bed0[2] = DAT_0059bed0 + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_34 = &DAT_0059bed4;
  local_3c = s_MassTreeSmall_0059bee0;
  local_38 = uVar3;
  local_40 = uVar3;
  func_0019B51C(DAT_0059bef4,DAT_0059bde8,*DAT_0059bef0,(int)&local_40,DAT_0059bed0,&local_38,0);
  puVar2 = DAT_0059bef8;
  puVar4 = DAT_0059bef8 + 3;
  DAT_0059bef8[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_24 = &DAT_0059befc;
  local_2c = s_MassTreeStump_0059bf08;
  local_28 = uVar3;
  local_30 = uVar3;
  func_0019B51C(DAT_0059bf1c,DAT_0059bde8,*DAT_0059bf18,(int)&local_30,DAT_0059bef8,&local_28,0);
  puVar2 = DAT_0059bf20;
  puVar4 = DAT_0059bf20 + 3;
  DAT_0059bf20[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_14 = &DAT_0059bf24;
  local_1c = s_MassTreeStumpD_0059bf30;
  local_18 = uVar3;
  local_20 = uVar3;
  uVar3 = func_0019B51C(DAT_0059bf44,DAT_0059bde8,*DAT_0059bf40,(int)&local_20,DAT_0059bf20,
                        &local_18,0);
  return CONCAT44(DAT_0059bdf4,uVar3);
}

