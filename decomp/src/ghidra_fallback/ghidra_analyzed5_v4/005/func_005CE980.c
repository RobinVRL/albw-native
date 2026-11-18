#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ceb94;
extern undefined4 *DAT_005ceb98;
extern undefined4 *DAT_005ceb9c;
extern undefined4 DAT_005cebac;
extern undefined4 DAT_005cebd4;
extern undefined4 DAT_005cebd8;
extern undefined4 *DAT_005cebdc;
extern undefined DAT_005cebe0;
extern undefined DAT_005cebe8;
extern undefined DAT_005cebf0;
extern undefined4 DAT_005cec00;
extern undefined4 DAT_005cec04;
extern undefined4 DAT_005cec08;
extern undefined4 DAT_005cec0c;
extern undefined4 DAT_005cec10;
extern undefined4 DAT_005cec14;
extern undefined4 DAT_005cec18;
extern undefined4 *DAT_005cec1c;
extern undefined4 *DAT_005cec20;
extern undefined DAT_005cec24;
extern uint *DAT_005cec48;
extern undefined4 DAT_005cec4c;
extern undefined4 *DAT_005cec50;
extern undefined4 DAT_005cec54;
extern undefined4 *DAT_005cec58;
extern undefined DAT_005cec5c;
extern uint *DAT_005cec84;
extern undefined4 DAT_005cec88;
extern undefined4 *DAT_005cec8c;
extern char s_N_ArrowB_00_005cebb0[];
extern char s_N_ArrowL_00_005cebbc[];
extern char s_N_ArrowR_00_005cebc8[];
extern char s_N_ArrowT_00_005ceba0[];
extern char s_NpcGameGiriGiriUra_005cec70[];
extern char s_NpcGameGiriGiri_005cec38[];
extern char s_random_005cebf8[];

// USA 005CE980 <- EU 005CE958 (Ghidra, non-matching)
// GLOBAL DAT_005ceb94 undefined4 *
// GLOBAL DAT_005ceb98 undefined4 *
// GLOBAL DAT_005ceb9c undefined4 *
// GLOBAL DAT_005cebac undefined4
// GLOBAL DAT_005cebd4 undefined4
// GLOBAL DAT_005cebd8 undefined4
// GLOBAL DAT_005cebdc undefined4 *
// GLOBAL DAT_005cebe0 undefined
// GLOBAL DAT_005cebe8 undefined
// GLOBAL DAT_005cebf0 undefined
// GLOBAL DAT_005cec00 undefined4
// GLOBAL DAT_005cec04 undefined4
// GLOBAL DAT_005cec08 undefined4
// GLOBAL DAT_005cec0c undefined4
// GLOBAL DAT_005cec10 undefined4
// GLOBAL DAT_005cec14 undefined4
// GLOBAL DAT_005cec18 undefined4
// GLOBAL DAT_005cec1c undefined4 *
// GLOBAL DAT_005cec20 undefined4 *
// GLOBAL DAT_005cec24 undefined
// GLOBAL DAT_005cec48 uint *
// GLOBAL DAT_005cec4c undefined4
// GLOBAL DAT_005cec50 undefined4 *
// GLOBAL DAT_005cec54 undefined4
// GLOBAL DAT_005cec58 undefined4 *
// GLOBAL DAT_005cec5c undefined
// GLOBAL DAT_005cec84 uint *
// GLOBAL DAT_005cec88 undefined4
// GLOBAL DAT_005cec8c undefined4 *
// GLOBAL s_N_ArrowB_00_005cebb0 string
// GLOBAL s_N_ArrowL_00_005cebbc string
// GLOBAL s_N_ArrowR_00_005cebc8 string
// GLOBAL s_N_ArrowT_00_005ceba0 string
// GLOBAL s_NpcGameGiriGiriUra_005cec70 string
// GLOBAL s_NpcGameGiriGiri_005cec38 string
// GLOBAL s_random_005cebf8 string

undefined8 func_005CE980(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined * *)(albw_frame + 0x24))
  puVar1 = DAT_005ceb94;
  *DAT_005ceb94 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar8 = DAT_005cebac;
  puVar1 = DAT_005ceb98;
  *DAT_005ceb98 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ceb9c;
  DAT_005ceb9c[1] = s_N_ArrowT_00_005ceba0;
  *puVar1 = uVar8;
  puVar1[3] = s_N_ArrowB_00_005cebb0;
  puVar1[2] = uVar8;
  puVar1[5] = s_N_ArrowL_00_005cebbc;
  puVar1[4] = uVar8;
  puVar1[6] = uVar8;
  puVar1[7] = s_N_ArrowR_00_005cebc8;
  puVar1 = DAT_005cebdc;
  DAT_005cebdc[1] = &DAT_005cebe0;
  *puVar1 = uVar8;
  puVar1[4] = &DAT_005cebe8;
  puVar1[3] = uVar8;
  puVar1[7] = &DAT_005cebf0;
  puVar1[6] = uVar8;
  puVar1[9] = uVar8;
  puVar1[10] = s_random_005cebf8;
  puVar1 = DAT_005cec1c;
  uVar4 = DAT_005cec0c;
  uVar3 = DAT_005cec08;
  uVar2 = DAT_005cec04;
  *DAT_005cec1c = DAT_005cec04;
  uVar5 = DAT_005cec10;
  puVar1[1] = uVar3;
  uVar6 = DAT_005cec14;
  puVar1[2] = uVar4;
  uVar7 = DAT_005cec18;
  puVar1[3] = uVar5;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[6] = 10;
  *(undefined2 *)(puVar1 + 7) = 0x5a;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xe7;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xf1;
  *(undefined1 *)((int)puVar1 + 0x22) = 0x14;
  *(undefined1 *)((int)puVar1 + 0x23) = 0xf;
  *(undefined1 *)(puVar1 + 9) = 10;
  puVar1[10] = uVar2;
  puVar1[0xb] = uVar3;
  puVar1[0xc] = uVar4;
  puVar1[0xd] = uVar5;
  puVar1[0xe] = uVar6;
  puVar1[0xf] = uVar7;
  puVar1[0x10] = 0xd;
  *(undefined2 *)(puVar1 + 0x11) = 0x5a;
  *(undefined2 *)((int)puVar1 + 0x46) = 0xb4;
  *(undefined1 *)(puVar1 + 0x12) = 0xe7;
  *(undefined1 *)((int)puVar1 + 0x49) = 0xf1;
  *(undefined1 *)((int)puVar1 + 0x4a) = 0x1e;
  *(undefined1 *)((int)puVar1 + 0x4b) = 0xf;
  *(undefined1 *)(puVar1 + 0x13) = 10;
  puVar1 = DAT_005cec20;
  DAT_005cec20[2] = DAT_005cec20 + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_2c = &DAT_005cec24;
  local_34 = s_NpcGameGiriGiri_005cec38;
  local_30 = uVar8;
  local_38 = uVar8;
  func_0019B51C(DAT_005cec50,DAT_005cec4c,*DAT_005cec48,(int)&local_38,DAT_005cec20,&local_30,0);
  puVar1 = DAT_005cec58;
  DAT_005cec58[2] = DAT_005cec58 + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_1c = &DAT_005cec5c;
  local_24 = s_NpcGameGiriGiriUra_005cec70;
  local_20 = uVar8;
  local_28 = uVar8;
  uVar8 = func_0019B51C(DAT_005cec8c,DAT_005cec88,*DAT_005cec84,(int)&local_28,DAT_005cec58,
                        &local_20,0);
  return CONCAT44(DAT_005cec54,uVar8);
}

