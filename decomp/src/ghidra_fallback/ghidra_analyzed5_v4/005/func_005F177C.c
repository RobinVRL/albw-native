#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005f18fc;
extern undefined4 *DAT_005f1900;
extern undefined4 *DAT_005f1904;
extern undefined4 DAT_005f1914;
extern undefined4 DAT_005f193c;
extern undefined4 DAT_005f1940;
extern undefined4 *DAT_005f1944;
extern undefined DAT_005f1948;
extern undefined DAT_005f1950;
extern undefined DAT_005f1958;
extern undefined4 DAT_005f1960;
extern undefined4 DAT_005f1964;
extern undefined4 *DAT_005f1968;
extern undefined4 DAT_005f196c;
extern undefined4 DAT_005f1970;
extern undefined4 DAT_005f1974;
extern undefined4 DAT_005f1978;
extern undefined4 *DAT_005f197c;
extern undefined4 DAT_005f19ac;
extern undefined4 *DAT_005f19b0;
extern undefined DAT_005f19b4;
extern uint *DAT_005f19e0;
extern undefined4 DAT_005f19e4;
extern undefined4 *DAT_005f19e8;
extern undefined4 DAT_005f19ec;
extern char s_FieldDark_22_BlackSmithWife_Afte_005f1980[];
extern char s_N_ArrowB_00_005f1918[];
extern char s_N_ArrowL_00_005f1924[];
extern char s_N_ArrowR_00_005f1930[];
extern char s_N_ArrowT_00_005f1908[];
extern char s_NpcBlacksmithWifeUra_005f19c8[];

// USA 005F177C <- EU 005F1754 (Ghidra, non-matching)
// GLOBAL DAT_005f18fc int
// GLOBAL DAT_005f1900 undefined4 *
// GLOBAL DAT_005f1904 undefined4 *
// GLOBAL DAT_005f1914 undefined4
// GLOBAL DAT_005f193c undefined4
// GLOBAL DAT_005f1940 undefined4
// GLOBAL DAT_005f1944 undefined4 *
// GLOBAL DAT_005f1948 undefined
// GLOBAL DAT_005f1950 undefined
// GLOBAL DAT_005f1958 undefined
// GLOBAL DAT_005f1960 undefined4
// GLOBAL DAT_005f1964 undefined4
// GLOBAL DAT_005f1968 undefined4 *
// GLOBAL DAT_005f196c undefined4
// GLOBAL DAT_005f1970 undefined4
// GLOBAL DAT_005f1974 undefined4
// GLOBAL DAT_005f1978 undefined4
// GLOBAL DAT_005f197c undefined4 *
// GLOBAL DAT_005f19ac undefined4
// GLOBAL DAT_005f19b0 undefined4 *
// GLOBAL DAT_005f19b4 undefined
// GLOBAL DAT_005f19e0 uint *
// GLOBAL DAT_005f19e4 undefined4
// GLOBAL DAT_005f19e8 undefined4 *
// GLOBAL DAT_005f19ec undefined4
// GLOBAL s_FieldDark_22_BlackSmithWife_Afte_005f1980 string
// GLOBAL s_N_ArrowB_00_005f1918 string
// GLOBAL s_N_ArrowL_00_005f1924 string
// GLOBAL s_N_ArrowR_00_005f1930 string
// GLOBAL s_N_ArrowT_00_005f1908 string
// GLOBAL s_NpcBlacksmithWifeUra_005f19c8 string

undefined8 func_005F177C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_005f18fc;
  *(undefined4 *)(DAT_005f18fc + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  local_20 = DAT_005f1914;
  puVar2 = DAT_005f1900;
  *DAT_005f1900 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005f1904;
  DAT_005f1904[1] = s_N_ArrowT_00_005f1908;
  *puVar2 = local_20;
  puVar2[3] = s_N_ArrowB_00_005f1918;
  puVar2[2] = local_20;
  puVar2[5] = s_N_ArrowL_00_005f1924;
  puVar2[4] = local_20;
  puVar2[6] = local_20;
  puVar2[7] = s_N_ArrowR_00_005f1930;
  puVar2 = DAT_005f1944;
  DAT_005f1944[1] = &DAT_005f1948;
  *puVar2 = local_20;
  puVar2[4] = &DAT_005f1950;
  puVar2[3] = local_20;
  puVar2[6] = local_20;
  puVar2[7] = &DAT_005f1958;
  uVar3 = DAT_005f1970;
  puVar2 = DAT_005f1968;
  uVar6 = DAT_005f1964;
  *DAT_005f1968 = DAT_005f196c;
  uVar4 = DAT_005f1974;
  puVar2[1] = uVar6;
  uVar5 = DAT_005f1978;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  puVar2[4] = uVar5;
  puVar2[5] = uVar6;
  puVar2[6] = 0xf;
  *(undefined2 *)(puVar2 + 7) = 0x5f;
  *(undefined2 *)((int)puVar2 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar2 + 8) = 0xee;
  *(undefined1 *)((int)puVar2 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar2 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar2 + 0x23) = 0x1e;
  *(undefined1 *)(puVar2 + 9) = 10;
  puVar2 = DAT_005f197c;
  DAT_005f197c[1] = s_FieldDark_22_BlackSmithWife_Afte_005f1980;
  *puVar2 = local_20;
  puVar2 = DAT_005f19b0;
  puVar7 = DAT_005f19b0 + 3;
  *DAT_005f19b0 = 0;
  puVar2[1] = 5;
  puVar2[2] = puVar7;
  local_1c = &DAT_005f19b4;
  local_24 = s_NpcBlacksmithWifeUra_005f19c8;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005f19e8,DAT_005f19e4,*DAT_005f19e0,(int)&uStack_28,DAT_005f19b0,
                        &local_20,0);
  return CONCAT44(DAT_005f19ec,uVar6);
}

