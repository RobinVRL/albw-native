#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bfd14;
extern undefined4 *DAT_005bfd18;
extern undefined4 *DAT_005bfd1c;
extern undefined4 DAT_005bfd2c;
extern undefined4 DAT_005bfd54;
extern undefined4 DAT_005bfd58;
extern undefined4 *DAT_005bfd5c;
extern undefined DAT_005bfd60;
extern undefined DAT_005bfd68;
extern undefined DAT_005bfd70;
extern undefined DAT_005bfd78;
extern undefined4 DAT_005bfd80;
extern undefined4 *DAT_005bfd84;
extern undefined4 DAT_005bfd88;
extern undefined4 DAT_005bfd8c;
extern undefined4 DAT_005bfd90;
extern undefined4 DAT_005bfd94;
extern undefined4 DAT_005bfd98;
extern undefined4 DAT_005bfd9c;
extern undefined DAT_005bfda0;
extern undefined4 DAT_005bfdbc;
extern uint *DAT_005bfdc0;
extern undefined4 DAT_005bfdc4;
extern undefined4 *DAT_005bfdc8;
extern undefined4 DAT_005bfdcc;
extern char s_N_ArrowB_00_005bfd30[];
extern char s_N_ArrowL_00_005bfd3c[];
extern char s_N_ArrowR_00_005bfd48[];
extern char s_N_ArrowT_00_005bfd20[];
extern char s_NpcPriestGirl_005bfdac[];

// USA 005BFBBC <- EU 005BFB94 (Ghidra, non-matching)
// GLOBAL DAT_005bfd14 undefined4 *
// GLOBAL DAT_005bfd18 undefined4 *
// GLOBAL DAT_005bfd1c undefined4 *
// GLOBAL DAT_005bfd2c undefined4
// GLOBAL DAT_005bfd54 undefined4
// GLOBAL DAT_005bfd58 undefined4
// GLOBAL DAT_005bfd5c undefined4 *
// GLOBAL DAT_005bfd60 undefined
// GLOBAL DAT_005bfd68 undefined
// GLOBAL DAT_005bfd70 undefined
// GLOBAL DAT_005bfd78 undefined
// GLOBAL DAT_005bfd80 undefined4
// GLOBAL DAT_005bfd84 undefined4 *
// GLOBAL DAT_005bfd88 undefined4
// GLOBAL DAT_005bfd8c undefined4
// GLOBAL DAT_005bfd90 undefined4
// GLOBAL DAT_005bfd94 undefined4
// GLOBAL DAT_005bfd98 undefined4
// GLOBAL DAT_005bfd9c undefined4
// GLOBAL DAT_005bfda0 undefined
// GLOBAL DAT_005bfdbc undefined4
// GLOBAL DAT_005bfdc0 uint *
// GLOBAL DAT_005bfdc4 undefined4
// GLOBAL DAT_005bfdc8 undefined4 *
// GLOBAL DAT_005bfdcc undefined4
// GLOBAL s_N_ArrowB_00_005bfd30 string
// GLOBAL s_N_ArrowL_00_005bfd3c string
// GLOBAL s_N_ArrowR_00_005bfd48 string
// GLOBAL s_N_ArrowT_00_005bfd20 string
// GLOBAL s_NpcPriestGirl_005bfdac string

undefined8 func_005BFBBC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005bfd14;
  *DAT_005bfd14 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005bfd2c;
  puVar1 = DAT_005bfd18;
  *DAT_005bfd18 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005bfd1c;
  DAT_005bfd1c[1] = s_N_ArrowT_00_005bfd20;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005bfd30;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005bfd3c;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005bfd48;
  puVar1 = DAT_005bfd5c;
  DAT_005bfd5c[1] = &DAT_005bfd60;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005bfd68;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005bfd70;
  puVar1[6] = local_20;
  puVar1[9] = local_20;
  puVar1[10] = &DAT_005bfd78;
  uVar5 = DAT_005bfd9c;
  uVar4 = DAT_005bfd98;
  uVar3 = DAT_005bfd94;
  uVar2 = DAT_005bfd90;
  uVar6 = DAT_005bfd8c;
  puVar1 = DAT_005bfd84;
  *DAT_005bfd84 = DAT_005bfd88;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0xf;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 0x19;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005bfda0;
  local_24 = s_NpcPriestGirl_005bfdac;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005bfdc8,DAT_005bfdc4,*DAT_005bfdc0,(int)&uStack_28,DAT_005bfdbc,
                        &local_20,0);
  return CONCAT44(DAT_005bfdcc,uVar6);
}

