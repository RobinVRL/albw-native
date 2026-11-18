#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005dea7c;
extern int *DAT_005dea80;
extern undefined DAT_005dea84;
extern int DAT_005dea8c;
extern undefined DAT_005deaa4;
extern undefined4 DAT_005deab8;
extern undefined4 DAT_005deabc;
extern undefined4 *DAT_005deac0;
extern undefined4 DAT_005deac4;
extern undefined4 DAT_005deac8;
extern undefined4 DAT_005deacc;
extern undefined4 *DAT_005deae0;
extern undefined4 DAT_005deae4;
extern undefined4 *DAT_005deae8;
extern undefined DAT_005deaec;
extern int DAT_005deb14;
extern uint *DAT_005deb18;
extern undefined4 DAT_005deb1c;
extern undefined4 *DAT_005deb20;
extern undefined4 DAT_005deb24;
extern char s_Big_Ice_Gimos_005dead0[];
extern char s_EnemyBigIceGimos_005deb00[];
extern char s_damage_005dea9c[];
extern char s_jitabata_005deaac[];
extern char s_touchdown_005dea90[];

// USA 005DE940 <- EU 005DE918 (Ghidra, non-matching)
// GLOBAL DAT_005dea7c int *
// GLOBAL DAT_005dea80 int *
// GLOBAL DAT_005dea84 undefined
// GLOBAL DAT_005dea8c int
// GLOBAL DAT_005deaa4 undefined
// GLOBAL DAT_005deab8 undefined4
// GLOBAL DAT_005deabc undefined4
// GLOBAL DAT_005deac0 undefined4 *
// GLOBAL DAT_005deac4 undefined4
// GLOBAL DAT_005deac8 undefined4
// GLOBAL DAT_005deacc undefined4
// GLOBAL DAT_005deae0 undefined4 *
// GLOBAL DAT_005deae4 undefined4
// GLOBAL DAT_005deae8 undefined4 *
// GLOBAL DAT_005deaec undefined
// GLOBAL DAT_005deb14 int
// GLOBAL DAT_005deb18 uint *
// GLOBAL DAT_005deb1c undefined4
// GLOBAL DAT_005deb20 undefined4 *
// GLOBAL DAT_005deb24 undefined4
// GLOBAL s_Big_Ice_Gimos_005dead0 string
// GLOBAL s_EnemyBigIceGimos_005deb00 string
// GLOBAL s_damage_005dea9c string
// GLOBAL s_jitabata_005deaac string
// GLOBAL s_touchdown_005dea90 string

undefined8 func_005DE940(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined1 *)(albw_frame + 0x0))
  #define local_2f (*(undefined1 *)(albw_frame + 0x1))
  #define local_2e (*(undefined1 *)(albw_frame + 0x2))
  #define local_2d (*(undefined1 *)(albw_frame + 0x3))
  #define local_2c (*(undefined1 *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005dea7c;
  DAT_005dea7c[2] = -1;
  piVar1[3] = -1;
  iVar6 = DAT_005dea8c;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005dea80;
  DAT_005dea80[1] = (int)&DAT_005dea84;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_touchdown_005dea90;
  piVar2[2] = iVar6;
  piVar2[5] = (int)s_damage_005dea9c;
  piVar2[4] = iVar6;
  piVar2[7] = (int)&DAT_005deaa4;
  piVar2[6] = iVar6;
  piVar2[8] = iVar6;
  piVar2[9] = (int)s_jitabata_005deaac;
  uVar4 = DAT_005deacc;
  uVar5 = DAT_005deac8;
  puVar3 = DAT_005deac0;
  *DAT_005deac0 = DAT_005deac4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar4;
  local_30 = 0;
  local_2f = 0;
  local_2e = 0;
  local_2c = 0xff;
  local_24 = s_Big_Ice_Gimos_005dead0;
  local_2d = 0xff;
  local_28 = iVar6;
  func_004FC5F8(DAT_005deae0,&local_28,0,1,0,(undefined4 *)&local_30,0xb);
  puVar3 = DAT_005deae8;
  puVar7 = DAT_005deae8 + 3;
  DAT_005deae8[1] = 5;
  puVar3[2] = puVar7;
  *puVar3 = 0;
  local_14 = &DAT_005deaec;
  local_18 = iVar6;
  local_1c = s_EnemyBigIceGimos_005deb00;
  local_20 = iVar6;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005deb14;
  }
  uVar5 = func_0019B51C(DAT_005deb20,DAT_005deb1c,*DAT_005deb18,(int)&local_20,DAT_005deae8,
                        &local_18,iVar6);
  return CONCAT44(DAT_005deb24,uVar5);
}

