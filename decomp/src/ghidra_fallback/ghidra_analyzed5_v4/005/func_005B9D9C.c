#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005ba124;
extern undefined4 *DAT_005ba128;
extern undefined DAT_005ba12c;
extern undefined4 DAT_005ba134;
extern int DAT_005ba144;
extern uint *DAT_005ba148;
extern undefined4 DAT_005ba14c;
extern undefined4 *DAT_005ba150;
extern undefined4 DAT_005ba154;
extern undefined4 DAT_005ba158;
extern undefined4 *DAT_005ba15c;
extern undefined DAT_005ba160;
extern int DAT_005ba174;
extern uint *DAT_005ba178;
extern undefined4 DAT_005ba17c;
extern undefined4 *DAT_005ba180;
extern undefined4 *DAT_005ba184;
extern undefined DAT_005ba188;
extern int DAT_005ba1a4;
extern uint *DAT_005ba1a8;
extern undefined4 DAT_005ba1ac;
extern undefined4 *DAT_005ba1b0;
extern undefined4 *DAT_005ba1b4;
extern undefined DAT_005ba1b8;
extern int DAT_005ba1d4;
extern uint *DAT_005ba1d8;
extern undefined4 DAT_005ba1dc;
extern undefined4 *DAT_005ba1e0;
extern undefined4 *DAT_005ba1e4;
extern undefined DAT_005ba1e8;
extern int DAT_005ba204;
extern uint *DAT_005ba208;
extern undefined4 DAT_005ba20c;
extern undefined4 *DAT_005ba210;
extern undefined4 *DAT_005ba214;
extern undefined4 DAT_005ba270;
extern undefined4 DAT_005ba274;
extern undefined4 *DAT_005ba278;
extern undefined4 DAT_005ba27c;
extern undefined4 DAT_005ba280;
extern undefined4 DAT_005ba284;
extern undefined4 DAT_005ba288;
extern undefined4 *DAT_005ba28c;
extern undefined4 DAT_005ba290;
extern undefined4 *DAT_005ba294;
extern char s_EnemyBari_005ba168[];
extern char s_EnemyBiri_005ba138[];
extern char s_EnemyGigabari_005ba1f4[];
extern char s_EnemyKatabari_005ba194[];
extern char s_EnemyKatabiri_005ba1c4[];
extern char s_appear_005ba268[];
extern char s_damage_005ba244[];
extern char s_dead_ed_005ba254[];
extern char s_dead_st_005ba24c[];
extern char s_piyopiyo_005ba25c[];
extern char s_spark_ed_005ba238[];
extern char s_spark_md_005ba22c[];
extern char s_spark_st_005ba220[];
extern char s_wait00_005ba218[];

// USA 005B9D9C <- EU 005B9D74 (Ghidra, non-matching)
// GLOBAL DAT_005ba124 int *
// GLOBAL DAT_005ba128 undefined4 *
// GLOBAL DAT_005ba12c undefined
// GLOBAL DAT_005ba134 undefined4
// GLOBAL DAT_005ba144 int
// GLOBAL DAT_005ba148 uint *
// GLOBAL DAT_005ba14c undefined4
// GLOBAL DAT_005ba150 undefined4 *
// GLOBAL DAT_005ba154 undefined4
// GLOBAL DAT_005ba158 undefined4
// GLOBAL DAT_005ba15c undefined4 *
// GLOBAL DAT_005ba160 undefined
// GLOBAL DAT_005ba174 int
// GLOBAL DAT_005ba178 uint *
// GLOBAL DAT_005ba17c undefined4
// GLOBAL DAT_005ba180 undefined4 *
// GLOBAL DAT_005ba184 undefined4 *
// GLOBAL DAT_005ba188 undefined
// GLOBAL DAT_005ba1a4 int
// GLOBAL DAT_005ba1a8 uint *
// GLOBAL DAT_005ba1ac undefined4
// GLOBAL DAT_005ba1b0 undefined4 *
// GLOBAL DAT_005ba1b4 undefined4 *
// GLOBAL DAT_005ba1b8 undefined
// GLOBAL DAT_005ba1d4 int
// GLOBAL DAT_005ba1d8 uint *
// GLOBAL DAT_005ba1dc undefined4
// GLOBAL DAT_005ba1e0 undefined4 *
// GLOBAL DAT_005ba1e4 undefined4 *
// GLOBAL DAT_005ba1e8 undefined
// GLOBAL DAT_005ba204 int
// GLOBAL DAT_005ba208 uint *
// GLOBAL DAT_005ba20c undefined4
// GLOBAL DAT_005ba210 undefined4 *
// GLOBAL DAT_005ba214 undefined4 *
// GLOBAL DAT_005ba270 undefined4
// GLOBAL DAT_005ba274 undefined4
// GLOBAL DAT_005ba278 undefined4 *
// GLOBAL DAT_005ba27c undefined4
// GLOBAL DAT_005ba280 undefined4
// GLOBAL DAT_005ba284 undefined4
// GLOBAL DAT_005ba288 undefined4
// GLOBAL DAT_005ba28c undefined4 *
// GLOBAL DAT_005ba290 undefined4
// GLOBAL DAT_005ba294 undefined4 *
// GLOBAL s_EnemyBari_005ba168 string
// GLOBAL s_EnemyBiri_005ba138 string
// GLOBAL s_EnemyGigabari_005ba1f4 string
// GLOBAL s_EnemyKatabari_005ba194 string
// GLOBAL s_EnemyKatabiri_005ba1c4 string
// GLOBAL s_appear_005ba268 string
// GLOBAL s_damage_005ba244 string
// GLOBAL s_dead_ed_005ba254 string
// GLOBAL s_dead_st_005ba24c string
// GLOBAL s_piyopiyo_005ba25c string
// GLOBAL s_spark_ed_005ba238 string
// GLOBAL s_spark_md_005ba22c string
// GLOBAL s_spark_st_005ba220 string
// GLOBAL s_wait00_005ba218 string

undefined8 func_005B9D9C(void)

{
  int *piVar1;
  undefined4 uVar2;
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
  #define local_6c (*(undefined1 *)(albw_frame + 0x14))
  #define local_6b (*(undefined1 *)(albw_frame + 0x15))
  #define local_6a (*(undefined1 *)(albw_frame + 0x16))
  #define local_69 (*(undefined1 *)(albw_frame + 0x17))
  #define local_68 (*(undefined1 *)(albw_frame + 0x18))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(char * *)(albw_frame + 0x24))
  #define local_58 (*(undefined4 *)(albw_frame + 0x28))
  #define local_54 (*(undefined * *)(albw_frame + 0x2c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x30))
  #define local_4c (*(char * *)(albw_frame + 0x34))
  #define local_48 (*(undefined4 *)(albw_frame + 0x38))
  #define local_44 (*(char * *)(albw_frame + 0x3c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x40))
  #define local_3c (*(undefined * *)(albw_frame + 0x44))
  #define local_38 (*(undefined4 *)(albw_frame + 0x48))
  #define local_34 (*(char * *)(albw_frame + 0x4c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2c (*(undefined * *)(albw_frame + 0x54))
  #define local_28 (*(undefined4 *)(albw_frame + 0x58))
  #define local_24 (*(undefined * *)(albw_frame + 0x5c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  #define local_18 (*(undefined4 *)(albw_frame + 0x68))
  #define local_14 (*(undefined * *)(albw_frame + 0x6c))
  piVar1 = DAT_005ba124;
  DAT_005ba124[6] = -1;
  piVar1[7] = -1;
  piVar1[8] = 0;
  piVar1[9] = 0;
  uVar2 = DAT_005ba134;
  puVar5 = DAT_005ba128;
  DAT_005ba128[2] = DAT_005ba128 + 3;
  puVar5[1] = 5;
  *puVar5 = 0;
  local_54 = &DAT_005ba12c;
  local_58 = uVar2;
  local_5c = s_EnemyBiri_005ba138;
  local_60 = uVar2;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005ba144;
  }
  func_0019B51C(DAT_005ba150,DAT_005ba14c,*DAT_005ba148,(int)&local_60,DAT_005ba128,&local_58,iVar6)
  ;
  puVar5 = DAT_005ba15c;
  puVar7 = DAT_005ba15c + 3;
  DAT_005ba15c[1] = 5;
  puVar5[2] = puVar7;
  *puVar5 = 0;
  local_3c = &DAT_005ba160;
  local_40 = uVar2;
  local_4c = s_EnemyBari_005ba168;
  local_50 = uVar2;
  iVar6 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar6 = DAT_005ba174;
  }
  func_0019B51C(DAT_005ba180,DAT_005ba17c,*DAT_005ba178,(int)&local_50,DAT_005ba15c,&local_40,iVar6)
  ;
  puVar5 = DAT_005ba184;
  puVar7 = DAT_005ba184 + 3;
  DAT_005ba184[1] = 5;
  puVar5[2] = puVar7;
  *puVar5 = 0;
  local_2c = &DAT_005ba188;
  local_30 = uVar2;
  local_34 = s_EnemyKatabari_005ba194;
  local_38 = uVar2;
  iVar6 = piVar1[2];
  if (piVar1[2] == 0) {
    iVar6 = DAT_005ba1a4;
  }
  func_0019B51C(DAT_005ba1b0,DAT_005ba1ac,*DAT_005ba1a8,(int)&local_38,DAT_005ba184,&local_30,iVar6)
  ;
  puVar5 = DAT_005ba1b4;
  DAT_005ba1b4[2] = DAT_005ba1b4 + 3;
  puVar5[1] = 5;
  *puVar5 = 0;
  local_24 = &DAT_005ba1b8;
  local_28 = uVar2;
  local_44 = s_EnemyKatabiri_005ba1c4;
  local_48 = uVar2;
  iVar6 = piVar1[3];
  if (piVar1[3] == 0) {
    iVar6 = DAT_005ba1d4;
  }
  func_0019B51C(DAT_005ba1e0,DAT_005ba1dc,*DAT_005ba1d8,(int)&local_48,DAT_005ba1b4,&local_28,iVar6)
  ;
  puVar5 = DAT_005ba1e4;
  puVar7 = DAT_005ba1e4 + 3;
  DAT_005ba1e4[1] = 5;
  puVar5[2] = puVar7;
  *puVar5 = 0;
  local_14 = &DAT_005ba1e8;
  local_18 = uVar2;
  local_1c = s_EnemyGigabari_005ba1f4;
  local_20 = uVar2;
  iVar6 = piVar1[4];
  if (piVar1[4] == 0) {
    iVar6 = DAT_005ba204;
  }
  func_0019B51C(DAT_005ba210,DAT_005ba20c,*DAT_005ba208,(int)&local_20,DAT_005ba1e4,&local_18,iVar6)
  ;
  puVar5 = DAT_005ba214;
  DAT_005ba214[1] = s_wait00_005ba218;
  *puVar5 = uVar2;
  puVar5[3] = s_spark_st_005ba220;
  puVar5[2] = uVar2;
  puVar5[5] = s_spark_md_005ba22c;
  puVar5[4] = uVar2;
  puVar5[7] = s_spark_ed_005ba238;
  puVar5[6] = uVar2;
  puVar5[9] = s_damage_005ba244;
  puVar5[8] = uVar2;
  puVar5[0xb] = s_dead_st_005ba24c;
  puVar5[10] = uVar2;
  puVar5[0xd] = s_dead_ed_005ba254;
  puVar5[0xc] = uVar2;
  puVar5[0xf] = s_piyopiyo_005ba25c;
  puVar5[0xe] = uVar2;
  puVar5[0x10] = uVar2;
  puVar5[0x11] = s_appear_005ba268;
  uVar4 = DAT_005ba280;
  uVar3 = DAT_005ba27c;
  puVar5 = DAT_005ba278;
  uVar2 = DAT_005ba274;
  *DAT_005ba278 = DAT_005ba274;
  puVar5[1] = uVar3;
  puVar5[2] = uVar4;
  uVar4 = DAT_005ba288;
  uVar3 = DAT_005ba284;
  puVar5[3] = uVar2;
  puVar5[4] = uVar3;
  puVar5[5] = uVar4;
  local_74 = 0;
  local_73 = 0;
  local_72 = 0;
  local_71 = 0xff;
  local_70 = 0xff;
  func_004FC6FC(DAT_005ba28c,0,1,0,0,(undefined4 *)&local_74,0xb);
  local_6c = 0;
  local_6b = 0;
  local_6a = 0;
  local_68 = 1;
  local_69 = 0xff;
  puVar5 = func_004FC6FC(DAT_005ba294,0,1,0,0,(undefined4 *)&local_6c,0xb);
  return CONCAT44(DAT_005ba290,puVar5);
}

