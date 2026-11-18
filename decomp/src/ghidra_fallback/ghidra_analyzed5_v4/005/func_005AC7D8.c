#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ac950;
extern undefined4 *DAT_005ac954;
extern undefined4 *DAT_005ac958;
extern undefined4 DAT_005ac968;
extern undefined4 DAT_005ac990;
extern undefined4 DAT_005ac994;
extern undefined4 *DAT_005ac998;
extern undefined DAT_005ac99c;
extern undefined DAT_005ac9a4;
extern undefined DAT_005ac9ac;
extern undefined DAT_005ac9b4;
extern undefined DAT_005ac9c8;
extern undefined4 DAT_005ac9cc;
extern undefined4 *DAT_005ac9d0;
extern undefined4 DAT_005ac9d4;
extern undefined4 DAT_005ac9d8;
extern undefined4 DAT_005ac9dc;
extern undefined4 DAT_005ac9e0;
extern undefined4 DAT_005ac9e4;
extern undefined4 DAT_005ac9e8;
extern undefined DAT_005ac9ec;
extern undefined4 DAT_005aca04;
extern uint *DAT_005aca08;
extern undefined4 DAT_005aca0c;
extern undefined4 *DAT_005aca10;
extern undefined4 DAT_005aca14;
extern char s_N_ArrowB_00_005ac96c[];
extern char s_N_ArrowL_00_005ac978[];
extern char s_N_ArrowR_00_005ac984[];
extern char s_N_ArrowT_00_005ac95c[];
extern char s_NpcGuardMan_005ac9f8[];
extern char s_surprise_005ac9bc[];

// USA 005AC7D8 <- EU 005AC7B0 (Ghidra, non-matching)
// GLOBAL DAT_005ac950 undefined4 *
// GLOBAL DAT_005ac954 undefined4 *
// GLOBAL DAT_005ac958 undefined4 *
// GLOBAL DAT_005ac968 undefined4
// GLOBAL DAT_005ac990 undefined4
// GLOBAL DAT_005ac994 undefined4
// GLOBAL DAT_005ac998 undefined4 *
// GLOBAL DAT_005ac99c undefined
// GLOBAL DAT_005ac9a4 undefined
// GLOBAL DAT_005ac9ac undefined
// GLOBAL DAT_005ac9b4 undefined
// GLOBAL DAT_005ac9c8 undefined
// GLOBAL DAT_005ac9cc undefined4
// GLOBAL DAT_005ac9d0 undefined4 *
// GLOBAL DAT_005ac9d4 undefined4
// GLOBAL DAT_005ac9d8 undefined4
// GLOBAL DAT_005ac9dc undefined4
// GLOBAL DAT_005ac9e0 undefined4
// GLOBAL DAT_005ac9e4 undefined4
// GLOBAL DAT_005ac9e8 undefined4
// GLOBAL DAT_005ac9ec undefined
// GLOBAL DAT_005aca04 undefined4
// GLOBAL DAT_005aca08 uint *
// GLOBAL DAT_005aca0c undefined4
// GLOBAL DAT_005aca10 undefined4 *
// GLOBAL DAT_005aca14 undefined4
// GLOBAL s_N_ArrowB_00_005ac96c string
// GLOBAL s_N_ArrowL_00_005ac978 string
// GLOBAL s_N_ArrowR_00_005ac984 string
// GLOBAL s_N_ArrowT_00_005ac95c string
// GLOBAL s_NpcGuardMan_005ac9f8 string
// GLOBAL s_surprise_005ac9bc string

undefined8 func_005AC7D8(void)

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
  puVar1 = DAT_005ac950;
  *DAT_005ac950 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005ac968;
  puVar1 = DAT_005ac954;
  *DAT_005ac954 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ac958;
  DAT_005ac958[1] = s_N_ArrowT_00_005ac95c;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005ac96c;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005ac978;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005ac984;
  puVar1 = DAT_005ac998;
  DAT_005ac998[1] = &DAT_005ac99c;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005ac9a4;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005ac9ac;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005ac9b4;
  puVar1[9] = local_20;
  puVar1[0xd] = s_surprise_005ac9bc;
  puVar1[0xc] = local_20;
  puVar1[0xf] = local_20;
  puVar1[0x10] = &DAT_005ac9c8;
  uVar5 = DAT_005ac9e8;
  uVar4 = DAT_005ac9e4;
  uVar3 = DAT_005ac9e0;
  uVar2 = DAT_005ac9dc;
  uVar6 = DAT_005ac9d8;
  puVar1 = DAT_005ac9d0;
  *DAT_005ac9d0 = DAT_005ac9d4;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 10;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x32;
  *(undefined1 *)(puVar1 + 9) = 0x1e;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005ac9ec;
  local_24 = s_NpcGuardMan_005ac9f8;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005aca10,DAT_005aca0c,*DAT_005aca08,(int)&uStack_28,DAT_005aca04,
                        &local_20,0);
  return CONCAT44(DAT_005aca14,uVar6);
}

