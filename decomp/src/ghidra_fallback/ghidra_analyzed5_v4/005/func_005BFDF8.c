#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bffd0;
extern undefined4 *DAT_005bffd4;
extern undefined4 *DAT_005bffd8;
extern undefined4 DAT_005bffe8;
extern undefined4 DAT_005c0010;
extern undefined4 DAT_005c0014;
extern undefined4 *DAT_005c0018;
extern undefined DAT_005c001c;
extern undefined DAT_005c0024;
extern undefined DAT_005c002c;
extern undefined DAT_005c0034;
extern undefined DAT_005c0044;
extern undefined4 DAT_005c0048;
extern undefined4 *DAT_005c004c;
extern undefined4 DAT_005c0050;
extern undefined4 DAT_005c0054;
extern undefined4 DAT_005c0058;
extern undefined4 DAT_005c005c;
extern undefined4 DAT_005c0060;
extern undefined4 DAT_005c0064;
extern uint DAT_005c0068;
extern undefined4 DAT_005c006c;
extern undefined4 *DAT_005c0070;
extern undefined4 *DAT_005c0074;
extern undefined4 DAT_005c0078;
extern undefined DAT_005c007c;
extern undefined4 DAT_005c009c;
extern uint *DAT_005c00a0;
extern undefined4 DAT_005c00a4;
extern undefined4 *DAT_005c00a8;
extern undefined4 DAT_005c00ac;
extern char s_N_ArrowB_00_005bffec[];
extern char s_N_ArrowL_00_005bfff8[];
extern char s_N_ArrowR_00_005c0004[];
extern char s_N_ArrowT_00_005bffdc[];
extern char s_NpcSahasrahla_005c008c[];
extern char s_sleep_005c003c[];

// USA 005BFDF8 <- EU 005BFDD0 (Ghidra, non-matching)
// GLOBAL DAT_005bffd0 undefined4 *
// GLOBAL DAT_005bffd4 undefined4 *
// GLOBAL DAT_005bffd8 undefined4 *
// GLOBAL DAT_005bffe8 undefined4
// GLOBAL DAT_005c0010 undefined4
// GLOBAL DAT_005c0014 undefined4
// GLOBAL DAT_005c0018 undefined4 *
// GLOBAL DAT_005c001c undefined
// GLOBAL DAT_005c0024 undefined
// GLOBAL DAT_005c002c undefined
// GLOBAL DAT_005c0034 undefined
// GLOBAL DAT_005c0044 undefined
// GLOBAL DAT_005c0048 undefined4
// GLOBAL DAT_005c004c undefined4 *
// GLOBAL DAT_005c0050 undefined4
// GLOBAL DAT_005c0054 undefined4
// GLOBAL DAT_005c0058 undefined4
// GLOBAL DAT_005c005c undefined4
// GLOBAL DAT_005c0060 undefined4
// GLOBAL DAT_005c0064 undefined4
// GLOBAL DAT_005c0068 uint
// GLOBAL DAT_005c006c undefined4
// GLOBAL DAT_005c0070 undefined4 *
// GLOBAL DAT_005c0074 undefined4 *
// GLOBAL DAT_005c0078 undefined4
// GLOBAL DAT_005c007c undefined
// GLOBAL DAT_005c009c undefined4
// GLOBAL DAT_005c00a0 uint *
// GLOBAL DAT_005c00a4 undefined4
// GLOBAL DAT_005c00a8 undefined4 *
// GLOBAL DAT_005c00ac undefined4
// GLOBAL s_N_ArrowB_00_005bffec string
// GLOBAL s_N_ArrowL_00_005bfff8 string
// GLOBAL s_N_ArrowR_00_005c0004 string
// GLOBAL s_N_ArrowT_00_005bffdc string
// GLOBAL s_NpcSahasrahla_005c008c string
// GLOBAL s_sleep_005c003c string

undefined8 func_005BFDF8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  uVar7 = DAT_005bffe8;
  puVar1 = DAT_005bffd0;
  DAT_005bffd0[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1 = DAT_005bffd4;
  *DAT_005bffd4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005bffd8;
  DAT_005bffd8[1] = s_N_ArrowT_00_005bffdc;
  *puVar1 = uVar7;
  puVar1[3] = s_N_ArrowB_00_005bffec;
  puVar1[2] = uVar7;
  puVar1[5] = s_N_ArrowL_00_005bfff8;
  puVar1[4] = uVar7;
  puVar1[6] = uVar7;
  puVar1[7] = s_N_ArrowR_00_005c0004;
  puVar1 = DAT_005c0018;
  DAT_005c0018[1] = &DAT_005c001c;
  *puVar1 = uVar7;
  puVar1[4] = &DAT_005c0024;
  puVar1[3] = uVar7;
  puVar1[7] = &DAT_005c002c;
  puVar1[6] = uVar7;
  puVar1[10] = &DAT_005c0034;
  puVar1[9] = uVar7;
  puVar1[0xd] = s_sleep_005c003c;
  puVar1[0xc] = uVar7;
  puVar1[0xf] = uVar7;
  puVar1[0x10] = &DAT_005c0044;
  uVar5 = DAT_005c0064;
  uVar4 = DAT_005c0060;
  uVar3 = DAT_005c005c;
  uVar8 = DAT_005c0058;
  uVar2 = DAT_005c0054;
  puVar1 = DAT_005c004c;
  *DAT_005c004c = DAT_005c0050;
  puVar1[1] = uVar2;
  puVar1[2] = uVar8;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0x12;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x32;
  *(undefined1 *)(puVar1 + 9) = 10;
  puVar1 = DAT_005bffd0;
  uVar9 = func_00114608(DAT_005c0068,0x12);
  *puVar1 = (int)uVar9;
  uVar8 = DAT_005c006c;
  uVar10 = func_00114608(0,(uint)((ulonglong)uVar9 >> 0x20));
  puVar6 = DAT_005c0070;
  puVar1[1] = (int)uVar10;
  uVar2 = DAT_005c0078;
  *puVar6 = uVar8;
  puVar6[1] = uVar8;
  puVar6[2] = uVar8;
  puVar1[2] = (int)uVar9;
  puVar1[3] = (int)uVar10;
  puVar1 = DAT_005c0074;
  *DAT_005c0074 = uVar8;
  puVar1[1] = uVar8;
  puVar1[2] = uVar2;
  puVar1[-0xaf] = 0;
  puVar1[-0xae] = 5;
  puVar1[-0xad] = puVar1 + -0xac;
  local_24 = &DAT_005c007c;
  local_2c = s_NpcSahasrahla_005c008c;
  local_28 = uVar7;
  uStack_30 = uVar7;
  uVar7 = func_0019B51C(DAT_005c00a8,DAT_005c00a4,*DAT_005c00a0,(int)&uStack_30,DAT_005c009c,
                        &local_28,0);
  return CONCAT44(DAT_005c00ac,uVar7);
}

