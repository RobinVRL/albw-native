#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_00599c70;
extern undefined4 *DAT_00599c74;
extern undefined4 *DAT_00599c78;
extern undefined4 DAT_00599c88;
extern undefined4 DAT_00599cb0;
extern undefined4 DAT_00599cb4;
extern undefined4 *DAT_00599cb8;
extern undefined DAT_00599cbc;
extern undefined DAT_00599cc4;
extern undefined DAT_00599ccc;
extern undefined DAT_00599cd4;
extern undefined4 DAT_00599cdc;
extern undefined4 DAT_00599ce0;
extern undefined4 *DAT_00599ce4;
extern undefined4 DAT_00599ce8;
extern undefined4 DAT_00599cec;
extern undefined4 DAT_00599cf0;
extern undefined4 DAT_00599cf4;
extern undefined DAT_00599cf8;
extern undefined4 DAT_00599d08;
extern uint *DAT_00599d0c;
extern undefined4 DAT_00599d10;
extern undefined4 *DAT_00599d14;
extern undefined4 DAT_00599d18;
extern char s_N_ArrowB_00_00599c8c[];
extern char s_N_ArrowL_00_00599c98[];
extern char s_N_ArrowR_00_00599ca4[];
extern char s_N_ArrowT_00_00599c7c[];
extern char s_NpcInpa_00599d00[];

// USA 00599B04 <- EU 00599ADC (Ghidra, non-matching)
// GLOBAL DAT_00599c70 undefined4 *
// GLOBAL DAT_00599c74 undefined4 *
// GLOBAL DAT_00599c78 undefined4 *
// GLOBAL DAT_00599c88 undefined4
// GLOBAL DAT_00599cb0 undefined4
// GLOBAL DAT_00599cb4 undefined4
// GLOBAL DAT_00599cb8 undefined4 *
// GLOBAL DAT_00599cbc undefined
// GLOBAL DAT_00599cc4 undefined
// GLOBAL DAT_00599ccc undefined
// GLOBAL DAT_00599cd4 undefined
// GLOBAL DAT_00599cdc undefined4
// GLOBAL DAT_00599ce0 undefined4
// GLOBAL DAT_00599ce4 undefined4 *
// GLOBAL DAT_00599ce8 undefined4
// GLOBAL DAT_00599cec undefined4
// GLOBAL DAT_00599cf0 undefined4
// GLOBAL DAT_00599cf4 undefined4
// GLOBAL DAT_00599cf8 undefined
// GLOBAL DAT_00599d08 undefined4
// GLOBAL DAT_00599d0c uint *
// GLOBAL DAT_00599d10 undefined4
// GLOBAL DAT_00599d14 undefined4 *
// GLOBAL DAT_00599d18 undefined4
// GLOBAL s_N_ArrowB_00_00599c8c string
// GLOBAL s_N_ArrowL_00_00599c98 string
// GLOBAL s_N_ArrowR_00_00599ca4 string
// GLOBAL s_N_ArrowT_00_00599c7c string
// GLOBAL s_NpcInpa_00599d00 string

undefined8 func_00599B04(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_00599c70;
  *DAT_00599c70 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_00599c88;
  puVar1 = DAT_00599c74;
  *DAT_00599c74 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_00599c78;
  DAT_00599c78[1] = s_N_ArrowT_00_00599c7c;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_00599c8c;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_00599c98;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_00599ca4;
  puVar1 = DAT_00599cb8;
  DAT_00599cb8[1] = &DAT_00599cbc;
  *puVar1 = local_20;
  puVar1[4] = &DAT_00599cc4;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_00599ccc;
  puVar1[6] = local_20;
  puVar1[9] = local_20;
  puVar1[10] = &DAT_00599cd4;
  uVar3 = DAT_00599cf0;
  uVar2 = DAT_00599cec;
  puVar1 = DAT_00599ce4;
  *DAT_00599ce4 = DAT_00599ce8;
  uVar4 = DAT_00599ce0;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  uVar2 = DAT_00599cf4;
  puVar1[3] = uVar4;
  puVar1[4] = uVar4;
  puVar1[5] = uVar2;
  puVar1[6] = 0x19;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x14;
  *(undefined1 *)(puVar1 + 9) = 0x14;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_00599cf8;
  local_24 = s_NpcInpa_00599d00;
  uStack_28 = local_20;
  uVar4 = func_0019B51C(DAT_00599d14,DAT_00599d10,*DAT_00599d0c,(int)&uStack_28,DAT_00599d08,
                        &local_20,0);
  return CONCAT44(DAT_00599d18,uVar4);
}

