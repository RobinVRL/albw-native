#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005af89c;
extern int *DAT_005af8a0;
extern int DAT_005af8b0;
extern undefined4 DAT_005af8cc;
extern undefined4 DAT_005af8d0;
extern int *DAT_005af8d4;
extern undefined DAT_005af8e8;
extern undefined4 DAT_005af91c;
extern int *DAT_005af920;
extern undefined DAT_005af934;
extern undefined4 DAT_005af968;
extern int *DAT_005af96c;
extern undefined DAT_005af980;
extern undefined4 DAT_005af9b4;
extern int *DAT_005af9b8;
extern undefined4 DAT_005af9cc;
extern int *DAT_005af9d0;
extern undefined4 DAT_005af9e4;
extern int *DAT_005af9e8;
extern uint DAT_005af9fc;
extern uint DAT_005afa00;
extern undefined4 DAT_005afa04;
extern undefined4 *DAT_005afa08;
extern undefined4 DAT_005afa0c;
extern undefined4 *DAT_005afa10;
extern undefined DAT_005afa14;
extern int DAT_005afa30;
extern uint *DAT_005afa34;
extern undefined4 DAT_005afa38;
extern undefined4 *DAT_005afa3c;
extern undefined4 DAT_005afa40;
extern undefined4 *DAT_005afa44;
extern undefined DAT_005afa48;
extern int DAT_005afa68;
extern uint *DAT_005afa6c;
extern undefined4 *DAT_005afa70;
extern char s_DeguTail1_005af8a4[];
extern char s_DeguTail2_005af8b4[];
extern char s_DeguTail3_005af8c0[];
extern char s_EnemyDegTail2_005afa58[];
extern char s_EnemyDegTail_005afa20[];
extern char s_damage01_005af900[];
extern char s_damage02_005af94c[];
extern char s_damage03_005af998[];
extern char s_damage_color01_005af9bc[];
extern char s_damage_color02_005af9d4[];
extern char s_damage_color03_005af9ec[];
extern char s_damage_hit01_005af8f0[];
extern char s_damage_hit02_005af93c[];
extern char s_damage_hit03_005af988[];
extern char s_end01_005af914[];
extern char s_end02_005af960[];
extern char s_end03_005af9ac[];
extern char s_piyo01_005af90c[];
extern char s_piyo02_005af958[];
extern char s_piyo03_005af9a4[];
extern char s_wait01_005af8d8[];
extern char s_wait02_005af924[];
extern char s_wait03_005af970[];
extern char s_wait11_005af8e0[];
extern char s_wait12_005af92c[];
extern char s_wait13_005af978[];

// USA 005AF540 <- EU 005AF518 (Ghidra, non-matching)
// GLOBAL DAT_005af89c int *
// GLOBAL DAT_005af8a0 int *
// GLOBAL DAT_005af8b0 int
// GLOBAL DAT_005af8cc undefined4
// GLOBAL DAT_005af8d0 undefined4
// GLOBAL DAT_005af8d4 int *
// GLOBAL DAT_005af8e8 undefined
// GLOBAL DAT_005af91c undefined4
// GLOBAL DAT_005af920 int *
// GLOBAL DAT_005af934 undefined
// GLOBAL DAT_005af968 undefined4
// GLOBAL DAT_005af96c int *
// GLOBAL DAT_005af980 undefined
// GLOBAL DAT_005af9b4 undefined4
// GLOBAL DAT_005af9b8 int *
// GLOBAL DAT_005af9cc undefined4
// GLOBAL DAT_005af9d0 int *
// GLOBAL DAT_005af9e4 undefined4
// GLOBAL DAT_005af9e8 int *
// GLOBAL DAT_005af9fc uint
// GLOBAL DAT_005afa00 uint
// GLOBAL DAT_005afa04 undefined4
// GLOBAL DAT_005afa08 undefined4 *
// GLOBAL DAT_005afa0c undefined4
// GLOBAL DAT_005afa10 undefined4 *
// GLOBAL DAT_005afa14 undefined
// GLOBAL DAT_005afa30 int
// GLOBAL DAT_005afa34 uint *
// GLOBAL DAT_005afa38 undefined4
// GLOBAL DAT_005afa3c undefined4 *
// GLOBAL DAT_005afa40 undefined4
// GLOBAL DAT_005afa44 undefined4 *
// GLOBAL DAT_005afa48 undefined
// GLOBAL DAT_005afa68 int
// GLOBAL DAT_005afa6c uint *
// GLOBAL DAT_005afa70 undefined4 *
// GLOBAL s_DeguTail1_005af8a4 string
// GLOBAL s_DeguTail2_005af8b4 string
// GLOBAL s_DeguTail3_005af8c0 string
// GLOBAL s_EnemyDegTail2_005afa58 string
// GLOBAL s_EnemyDegTail_005afa20 string
// GLOBAL s_damage01_005af900 string
// GLOBAL s_damage02_005af94c string
// GLOBAL s_damage03_005af998 string
// GLOBAL s_damage_color01_005af9bc string
// GLOBAL s_damage_color02_005af9d4 string
// GLOBAL s_damage_color03_005af9ec string
// GLOBAL s_damage_hit01_005af8f0 string
// GLOBAL s_damage_hit02_005af93c string
// GLOBAL s_damage_hit03_005af988 string
// GLOBAL s_end01_005af914 string
// GLOBAL s_end02_005af960 string
// GLOBAL s_end03_005af9ac string
// GLOBAL s_piyo01_005af90c string
// GLOBAL s_piyo02_005af958 string
// GLOBAL s_piyo03_005af9a4 string
// GLOBAL s_wait01_005af8d8 string
// GLOBAL s_wait02_005af924 string
// GLOBAL s_wait03_005af970 string
// GLOBAL s_wait11_005af8e0 string
// GLOBAL s_wait12_005af92c string
// GLOBAL s_wait13_005af978 string

undefined8 func_005AF540(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined1 *)(albw_frame + 0x8))
  #define local_37 (*(undefined1 *)(albw_frame + 0x9))
  #define local_36 (*(undefined1 *)(albw_frame + 0xa))
  #define local_35 (*(undefined1 *)(albw_frame + 0xb))
  #define local_34 (*(undefined1 *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(int *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  piVar1 = DAT_005af89c;
  DAT_005af89c[4] = -1;
  piVar1[5] = -1;
  iVar6 = DAT_005af8b0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar2 = DAT_005af8a0;
  DAT_005af8a0[1] = (int)s_DeguTail1_005af8a4;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_DeguTail2_005af8b4;
  piVar2[2] = iVar6;
  piVar2[4] = iVar6;
  piVar2[5] = (int)s_DeguTail3_005af8c0;
  piVar2 = DAT_005af8d4;
  DAT_005af8d4[1] = (int)s_wait01_005af8d8;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_wait11_005af8e0;
  piVar2[2] = iVar6;
  piVar2[5] = (int)&DAT_005af8e8;
  piVar2[4] = iVar6;
  piVar2[7] = (int)s_damage_hit01_005af8f0;
  piVar2[6] = iVar6;
  piVar2[9] = (int)s_damage01_005af900;
  piVar2[8] = iVar6;
  piVar2[0xb] = (int)s_piyo01_005af90c;
  piVar2[10] = iVar6;
  piVar2[0xc] = iVar6;
  piVar2[0xd] = (int)s_end01_005af914;
  piVar2 = DAT_005af920;
  DAT_005af920[1] = (int)s_wait02_005af924;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_wait12_005af92c;
  piVar2[2] = iVar6;
  piVar2[5] = (int)&DAT_005af934;
  piVar2[4] = iVar6;
  piVar2[7] = (int)s_damage_hit02_005af93c;
  piVar2[6] = iVar6;
  piVar2[9] = (int)s_damage02_005af94c;
  piVar2[8] = iVar6;
  piVar2[0xb] = (int)s_piyo02_005af958;
  piVar2[10] = iVar6;
  piVar2[0xc] = iVar6;
  piVar2[0xd] = (int)s_end02_005af960;
  piVar2 = DAT_005af96c;
  DAT_005af96c[1] = (int)s_wait03_005af970;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_wait13_005af978;
  piVar2[2] = iVar6;
  piVar2[5] = (int)&DAT_005af980;
  piVar2[4] = iVar6;
  piVar2[7] = (int)s_damage_hit03_005af988;
  piVar2[6] = iVar6;
  piVar2[9] = (int)s_damage03_005af998;
  piVar2[8] = iVar6;
  piVar2[0xb] = (int)s_piyo03_005af9a4;
  piVar2[10] = iVar6;
  piVar2[0xc] = iVar6;
  piVar2[0xd] = (int)s_end03_005af9ac;
  piVar2 = DAT_005af9b8;
  DAT_005af9b8[1] = (int)s_damage_color01_005af9bc;
  *piVar2 = iVar6;
  piVar2[2] = iVar6;
  piVar2[3] = (int)s_end01_005af914;
  piVar2 = DAT_005af9d0;
  DAT_005af9d0[1] = (int)s_damage_color02_005af9d4;
  *piVar2 = iVar6;
  piVar2[2] = iVar6;
  piVar2[3] = (int)s_end02_005af960;
  piVar2 = DAT_005af9e8;
  DAT_005af9e8[1] = (int)s_damage_color03_005af9ec;
  *piVar2 = iVar6;
  piVar2[2] = iVar6;
  piVar2[3] = (int)s_end03_005af9ac;
  uVar7 = func_00114608(DAT_005afa00,DAT_005af9fc);
  piVar1[2] = (int)uVar7;
  puVar3 = DAT_005afa08;
  uVar4 = DAT_005afa04;
  *DAT_005afa08 = DAT_005afa04;
  puVar3[1] = uVar4;
  puVar3[2] = uVar4;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  func_004FC5F8(DAT_005af8a0 + 0x3f,DAT_005af8a0,4,1,0,(undefined4 *)&local_38,0xb);
  puVar3 = DAT_005afa10;
  DAT_005afa10[2] = DAT_005afa10 + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  local_24 = &DAT_005afa14;
  local_28 = iVar6;
  local_2c = s_EnemyDegTail_005afa20;
  local_30 = iVar6;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005afa30;
  }
  func_0019B51C(DAT_005afa3c,DAT_005afa38,*DAT_005afa34,(int)&local_30,DAT_005afa10,&local_28,iVar5)
  ;
  puVar3 = DAT_005afa44;
  DAT_005afa44[2] = DAT_005afa44 + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  local_14 = &DAT_005afa48;
  local_18 = iVar6;
  local_1c = s_EnemyDegTail2_005afa58;
  local_20 = iVar6;
  iVar6 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar6 = DAT_005afa68;
  }
  uVar4 = func_0019B51C(DAT_005afa70,DAT_005afa38,*DAT_005afa6c,(int)&local_20,DAT_005afa44,
                        &local_18,iVar6);
  return CONCAT44(DAT_005afa40,uVar4);
}

