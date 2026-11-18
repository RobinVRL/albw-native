#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int *DAT_005b0ebc;
extern undefined4 *DAT_005b0ec0;
extern undefined4 DAT_005b0ed4;
extern undefined4 DAT_005b0fe4;
extern undefined4 DAT_005b0fe8;
extern undefined4 *DAT_005b0fec;
extern undefined4 DAT_005b1008;
extern undefined4 *DAT_005b100c;
extern undefined DAT_005b1010;
extern int DAT_005b1038;
extern uint *DAT_005b103c;
extern undefined4 DAT_005b1040;
extern undefined4 *DAT_005b1044;
extern undefined4 DAT_005b1048;
extern undefined4 *DAT_005b104c;
extern undefined DAT_005b1050;
extern int DAT_005b1078;
extern uint *DAT_005b107c;
extern undefined4 *DAT_005b1080;
extern undefined4 *DAT_005b1084;
extern undefined DAT_005b1088;
extern int DAT_005b10b8;
extern uint *DAT_005b10bc;
extern undefined4 *DAT_005b10c0;
extern undefined4 *DAT_005b10c4;
extern undefined DAT_005b10c8;
extern int DAT_005b10f0;
extern uint *DAT_005b10f4;
extern undefined4 *DAT_005b10f8;
extern char s_EnemyMoriblinShooterSpear_005b109c[];
extern char s_EnemyShooterArrow_005b1024[];
extern char s_EnemyShooterGreat_005b10dc[];
extern char s_EnemyShooterSpear_005b1064[];
extern char s_archer_damage00_005b0f18[];
extern char s_archer_dead_back_ed00_005b0f70[];
extern char s_archer_dead_back_st00_005b0f58[];
extern char s_archer_dead_front_ed00_005b0f40[];
extern char s_archer_dead_front_st00_005b0f28[];
extern char s_archer_fall00_005b0f88[];
extern char s_archer_find00_005b0ef8[];
extern char s_archer_kamae00_005b0f08[];
extern char s_archer_kusa_appear00_005b0fbc[];
extern char s_archer_piyopiyo00_005b0f98[];
extern char s_archer_shot00_005b0fac[];
extern char s_archer_wait00_005b0ec4[];
extern char s_archer_wait01_005b0fd4[];
extern char s_archer_walk00_005b0ed8[];
extern char s_archer_walk01_005b0ee8[];
extern char s_bow_kamae00_005b0ff0[];
extern char s_bow_shot00_005b0ffc[];

// USA 005B0BF4 <- EU 005B0BCC (Ghidra, non-matching)
// GLOBAL DAT_005b0ebc int *
// GLOBAL DAT_005b0ec0 undefined4 *
// GLOBAL DAT_005b0ed4 undefined4
// GLOBAL DAT_005b0fe4 undefined4
// GLOBAL DAT_005b0fe8 undefined4
// GLOBAL DAT_005b0fec undefined4 *
// GLOBAL DAT_005b1008 undefined4
// GLOBAL DAT_005b100c undefined4 *
// GLOBAL DAT_005b1010 undefined
// GLOBAL DAT_005b1038 int
// GLOBAL DAT_005b103c uint *
// GLOBAL DAT_005b1040 undefined4
// GLOBAL DAT_005b1044 undefined4 *
// GLOBAL DAT_005b1048 undefined4
// GLOBAL DAT_005b104c undefined4 *
// GLOBAL DAT_005b1050 undefined
// GLOBAL DAT_005b1078 int
// GLOBAL DAT_005b107c uint *
// GLOBAL DAT_005b1080 undefined4 *
// GLOBAL DAT_005b1084 undefined4 *
// GLOBAL DAT_005b1088 undefined
// GLOBAL DAT_005b10b8 int
// GLOBAL DAT_005b10bc uint *
// GLOBAL DAT_005b10c0 undefined4 *
// GLOBAL DAT_005b10c4 undefined4 *
// GLOBAL DAT_005b10c8 undefined
// GLOBAL DAT_005b10f0 int
// GLOBAL DAT_005b10f4 uint *
// GLOBAL DAT_005b10f8 undefined4 *
// GLOBAL s_EnemyMoriblinShooterSpear_005b109c string
// GLOBAL s_EnemyShooterArrow_005b1024 string
// GLOBAL s_EnemyShooterGreat_005b10dc string
// GLOBAL s_EnemyShooterSpear_005b1064 string
// GLOBAL s_archer_damage00_005b0f18 string
// GLOBAL s_archer_dead_back_ed00_005b0f70 string
// GLOBAL s_archer_dead_back_st00_005b0f58 string
// GLOBAL s_archer_dead_front_ed00_005b0f40 string
// GLOBAL s_archer_dead_front_st00_005b0f28 string
// GLOBAL s_archer_fall00_005b0f88 string
// GLOBAL s_archer_find00_005b0ef8 string
// GLOBAL s_archer_kamae00_005b0f08 string
// GLOBAL s_archer_kusa_appear00_005b0fbc string
// GLOBAL s_archer_piyopiyo00_005b0f98 string
// GLOBAL s_archer_shot00_005b0fac string
// GLOBAL s_archer_wait00_005b0ec4 string
// GLOBAL s_archer_wait01_005b0fd4 string
// GLOBAL s_archer_walk00_005b0ed8 string
// GLOBAL s_archer_walk01_005b0ee8 string
// GLOBAL s_bow_kamae00_005b0ff0 string
// GLOBAL s_bow_shot00_005b0ffc string

undefined8 func_005B0BF4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined * *)(albw_frame + 0xc))
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
  piVar1 = DAT_005b0ebc;
  DAT_005b0ebc[4] = -1;
  piVar1[5] = -1;
  uVar3 = DAT_005b0ed4;
  piVar1[6] = 0;
  piVar1[7] = 0;
  puVar2 = DAT_005b0ec0;
  DAT_005b0ec0[1] = s_archer_wait00_005b0ec4;
  *puVar2 = uVar3;
  puVar2[3] = s_archer_walk00_005b0ed8;
  puVar2[2] = uVar3;
  puVar2[5] = s_archer_walk01_005b0ee8;
  puVar2[4] = uVar3;
  puVar2[7] = s_archer_find00_005b0ef8;
  puVar2[6] = uVar3;
  puVar2[9] = s_archer_kamae00_005b0f08;
  puVar2[8] = uVar3;
  puVar2[0xb] = s_archer_damage00_005b0f18;
  puVar2[10] = uVar3;
  puVar2[0xd] = s_archer_dead_front_st00_005b0f28;
  puVar2[0xc] = uVar3;
  puVar2[0xf] = s_archer_dead_front_ed00_005b0f40;
  puVar2[0xe] = uVar3;
  puVar2[0x11] = s_archer_dead_back_st00_005b0f58;
  puVar2[0x10] = uVar3;
  puVar2[0x13] = s_archer_dead_back_ed00_005b0f70;
  puVar2[0x12] = uVar3;
  puVar2[0x15] = s_archer_fall00_005b0f88;
  puVar2[0x14] = uVar3;
  puVar2[0x17] = s_archer_piyopiyo00_005b0f98;
  puVar2[0x16] = uVar3;
  puVar2[0x19] = s_archer_shot00_005b0fac;
  puVar2[0x18] = uVar3;
  puVar2[0x1b] = s_archer_kusa_appear00_005b0fbc;
  puVar2[0x1a] = uVar3;
  puVar2[0x1c] = uVar3;
  puVar2[0x1d] = s_archer_wait01_005b0fd4;
  puVar2 = DAT_005b0fec;
  DAT_005b0fec[1] = s_bow_kamae00_005b0ff0;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_bow_shot00_005b0ffc;
  puVar2 = DAT_005b100c;
  DAT_005b100c[2] = DAT_005b100c + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_44 = &DAT_005b1010;
  local_48 = uVar3;
  local_4c = s_EnemyShooterArrow_005b1024;
  local_50 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005b1038;
  }
  func_0019B51C(DAT_005b1044,DAT_005b1040,*DAT_005b103c,(int)&local_50,DAT_005b100c,&local_48,iVar4)
  ;
  puVar2 = DAT_005b104c;
  puVar5 = DAT_005b104c + 3;
  DAT_005b104c[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_34 = &DAT_005b1050;
  local_38 = uVar3;
  local_3c = s_EnemyShooterSpear_005b1064;
  local_40 = uVar3;
  iVar4 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar4 = DAT_005b1078;
  }
  func_0019B51C(DAT_005b1080,DAT_005b1040,*DAT_005b107c,(int)&local_40,DAT_005b104c,&local_38,iVar4)
  ;
  puVar2 = DAT_005b1084;
  puVar5 = DAT_005b1084 + 3;
  DAT_005b1084[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_24 = &DAT_005b1088;
  local_28 = uVar3;
  local_2c = s_EnemyMoriblinShooterSpear_005b109c;
  local_30 = uVar3;
  iVar4 = piVar1[2];
  if (piVar1[2] == 0) {
    iVar4 = DAT_005b10b8;
  }
  func_0019B51C(DAT_005b10c0,DAT_005b1040,*DAT_005b10bc,(int)&local_30,DAT_005b1084,&local_28,iVar4)
  ;
  puVar2 = DAT_005b10c4;
  puVar5 = DAT_005b10c4 + 3;
  DAT_005b10c4[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005b10c8;
  local_18 = uVar3;
  local_1c = s_EnemyShooterGreat_005b10dc;
  local_20 = uVar3;
  iVar4 = piVar1[3];
  if (piVar1[3] == 0) {
    iVar4 = DAT_005b10f0;
  }
  uVar3 = func_0019B51C(DAT_005b10f8,DAT_005b1040,*DAT_005b10f4,(int)&local_20,DAT_005b10c4,
                        &local_18,iVar4);
  return CONCAT44(DAT_005b1048,uVar3);
}

