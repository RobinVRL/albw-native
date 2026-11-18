#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b509c;
extern undefined4 *DAT_005b50a0;
extern undefined4 *DAT_005b50a4;
extern undefined DAT_005b50a8;
extern undefined4 DAT_005b50b0;
extern uint *DAT_005b50c4;
extern undefined4 DAT_005b50c8;
extern undefined4 *DAT_005b50cc;
extern undefined4 DAT_005b50d0;
extern undefined4 DAT_005b50d4;
extern undefined4 *DAT_005b50d8;
extern undefined DAT_005b50dc;
extern uint *DAT_005b50f8;
extern undefined4 DAT_005b50fc;
extern undefined4 *DAT_005b5100;
extern undefined4 *DAT_005b5104;
extern undefined DAT_005b5108;
extern uint *DAT_005b5124;
extern undefined4 *DAT_005b5128;
extern undefined4 *DAT_005b512c;
extern undefined DAT_005b5130;
extern uint *DAT_005b514c;
extern undefined4 *DAT_005b5150;
extern undefined4 *DAT_005b5154;
extern undefined DAT_005b5158;
extern uint *DAT_005b5174;
extern undefined4 *DAT_005b5178;
extern undefined4 *DAT_005b517c;
extern undefined DAT_005b5180;
extern uint *DAT_005b51a8;
extern undefined4 *DAT_005b51ac;
extern char s_MojQuicksandBoss_005b5194[];
extern char s_MojQuicksandF3S_005b513c[];
extern char s_MojQuicksandF3W_005b5164[];
extern char s_MojQuicksandFall_005b50e4[];
extern char s_MojQuicksandFlow_005b5110[];
extern char s_MojQuicksand_005b50b4[];

// USA 005B4E1C <- EU 005B4DF4 (Ghidra, non-matching)
// GLOBAL DAT_005b509c undefined4 *
// GLOBAL DAT_005b50a0 undefined4 *
// GLOBAL DAT_005b50a4 undefined4 *
// GLOBAL DAT_005b50a8 undefined
// GLOBAL DAT_005b50b0 undefined4
// GLOBAL DAT_005b50c4 uint *
// GLOBAL DAT_005b50c8 undefined4
// GLOBAL DAT_005b50cc undefined4 *
// GLOBAL DAT_005b50d0 undefined4
// GLOBAL DAT_005b50d4 undefined4
// GLOBAL DAT_005b50d8 undefined4 *
// GLOBAL DAT_005b50dc undefined
// GLOBAL DAT_005b50f8 uint *
// GLOBAL DAT_005b50fc undefined4
// GLOBAL DAT_005b5100 undefined4 *
// GLOBAL DAT_005b5104 undefined4 *
// GLOBAL DAT_005b5108 undefined
// GLOBAL DAT_005b5124 uint *
// GLOBAL DAT_005b5128 undefined4 *
// GLOBAL DAT_005b512c undefined4 *
// GLOBAL DAT_005b5130 undefined
// GLOBAL DAT_005b514c uint *
// GLOBAL DAT_005b5150 undefined4 *
// GLOBAL DAT_005b5154 undefined4 *
// GLOBAL DAT_005b5158 undefined
// GLOBAL DAT_005b5174 uint *
// GLOBAL DAT_005b5178 undefined4 *
// GLOBAL DAT_005b517c undefined4 *
// GLOBAL DAT_005b5180 undefined
// GLOBAL DAT_005b51a8 uint *
// GLOBAL DAT_005b51ac undefined4 *
// GLOBAL s_MojQuicksandBoss_005b5194 string
// GLOBAL s_MojQuicksandF3S_005b513c string
// GLOBAL s_MojQuicksandF3W_005b5164 string
// GLOBAL s_MojQuicksandFall_005b50e4 string
// GLOBAL s_MojQuicksandFlow_005b5110 string
// GLOBAL s_MojQuicksand_005b50b4 string

undefined8 func_005B4E1C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(undefined4 *)(albw_frame + 0x0))
  #define local_6c (*(char * *)(albw_frame + 0x4))
  #define local_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 (*(undefined * *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(char * *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined * *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(char * *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined * *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(char * *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined * *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_2c (*(char * *)(albw_frame + 0x44))
  #define local_28 (*(undefined4 *)(albw_frame + 0x48))
  #define local_24 (*(undefined * *)(albw_frame + 0x4c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x50))
  #define local_1c (*(char * *)(albw_frame + 0x54))
  #define local_18 (*(undefined4 *)(albw_frame + 0x58))
  #define local_14 (*(undefined * *)(albw_frame + 0x5c))
  puVar1 = DAT_005b509c;
  *DAT_005b509c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b50a0;
  *DAT_005b50a0 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005b50b0;
  puVar1 = DAT_005b50a4;
  puVar3 = DAT_005b50a4 + 3;
  DAT_005b50a4[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_64 = &DAT_005b50a8;
  local_6c = s_MojQuicksand_005b50b4;
  local_68 = uVar2;
  local_70 = uVar2;
  func_0019B51C(DAT_005b50cc,DAT_005b50c8,*DAT_005b50c4,(int)&local_70,DAT_005b50a4,&local_68,0);
  puVar1 = DAT_005b50d8;
  puVar3 = DAT_005b50d8 + 3;
  DAT_005b50d8[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_54 = &DAT_005b50dc;
  local_5c = s_MojQuicksandFall_005b50e4;
  local_58 = uVar2;
  local_60 = uVar2;
  func_0019B51C(DAT_005b5100,DAT_005b50fc,*DAT_005b50f8,(int)&local_60,DAT_005b50d8,&local_58,0);
  puVar1 = DAT_005b5104;
  puVar3 = DAT_005b5104 + 3;
  DAT_005b5104[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_44 = &DAT_005b5108;
  local_4c = s_MojQuicksandFlow_005b5110;
  local_48 = uVar2;
  local_50 = uVar2;
  func_0019B51C(DAT_005b5128,DAT_005b50fc,*DAT_005b5124,(int)&local_50,DAT_005b5104,&local_48,0);
  puVar1 = DAT_005b512c;
  puVar3 = DAT_005b512c + 3;
  DAT_005b512c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_005b5130;
  local_3c = s_MojQuicksandF3S_005b513c;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005b5150,DAT_005b50c8,*DAT_005b514c,(int)&local_40,DAT_005b512c,&local_38,0);
  puVar1 = DAT_005b5154;
  puVar3 = DAT_005b5154 + 3;
  DAT_005b5154[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005b5158;
  local_2c = s_MojQuicksandF3W_005b5164;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005b5178,DAT_005b50fc,*DAT_005b5174,(int)&local_30,DAT_005b5154,&local_28,0);
  puVar1 = DAT_005b517c;
  puVar3 = DAT_005b517c + 3;
  DAT_005b517c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005b5180;
  local_1c = s_MojQuicksandBoss_005b5194;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005b51ac,DAT_005b50c8,*DAT_005b51a8,(int)&local_20,DAT_005b517c,
                        &local_18,0);
  return CONCAT44(DAT_005b50d4,uVar2);
}

