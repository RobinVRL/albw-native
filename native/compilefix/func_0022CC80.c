/* compilefix: USA 0022CC80 (EU 0022CC80), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'NAN'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra NAN(x)/INFINITY -> __builtin_isnan(x) (vcmp unordered) / +inf [1]
 *  - Ghidra -NAN/NAN constant -> the exact words 0xFFFFFFFF/0x7FFFFFFF (mvn in the ARM) [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [21]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [12]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites, this function's sites checked);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#define CF_MATHCONST
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_0022A698(int param_1,int param_2);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_0036C884(undefined4 *param_1,undefined4 *param_2,undefined1 param_3);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FAB30(int param_1,int param_2,int param_3,int param_4);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FAFA0(int param_1,undefined4 *param_2);
extern int func_004FAFAC(int param_1,int param_2,int param_3,int param_4);
extern int func_004FB024(int param_1);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern float func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FC8D8(int param_1,int param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054DD3C(int param_1,uint param_2);
extern int func_0054DD54(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern float func_0058AC14(int param_1);
extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);
extern float fRam0022d538;
extern int iRam0022dacc;
extern int iRam0022dad4;
extern undefined4 uRam0022d53c;
extern undefined4 uRam0022d54c;
extern float *pfRam0022d560;
extern int *piRam0022d194;
extern int *piRam0022dac8;
extern int *piRam0022e0f4;
extern undefined4 *puRam0022dad0;
extern undefined4 *puRam0022e0f8;
extern undefined4 *puRam0022e0fc;
extern uint *DAT_0022d128;
extern int DAT_0022d12c;
extern undefined *DAT_0022d130;
extern int DAT_0022d134;
extern undefined4 DAT_0022d138;
extern undefined4 DAT_0022d13c;
extern undefined4 DAT_0022d140;
extern uint DAT_0022d144;
extern undefined4 DAT_0022d148;
extern uint DAT_0022d14c;
extern uint DAT_0022d150;
extern float *DAT_0022d154;
extern undefined DAT_0022d158;
extern undefined4 *DAT_0022d168;
extern undefined DAT_0022d16c;
extern uint *DAT_0022d188;
extern undefined4 *DAT_0022d18c;
extern uint DAT_0022d190;
extern undefined *PTR_0022dfe8;
extern undefined *PTR_0022dfec;
extern undefined *PTR_0022dff0;
extern undefined *PTR_0022dff4;
extern char s_Askl_root_0022d15b[];
extern char s_cState_AppearMain_0022daf8[];
extern char s_cState_AppearPost_0022db0c[];
extern char s_cState_AppearPre_0022dae4[];
extern char s_cState_AttackReady_0022db60[];
extern char s_cState_AttackRecovery_0022db88[];
extern char s_cState_AttackShot_0022db74[];
extern char s_cState_AttackWait_0022dba0[];
extern char s_cState_Die_0022dfdc[];
extern char s_cState_EventStop_0022db20[];
extern char s_cState_Ground_0022df84[];
extern char s_cState_Hide_0022dad8[];
extern char s_cState_Jump_0022df78[];
extern char s_cState_LaserReady_0022dfa4[];
extern char s_cState_LaserShot_0022dfb8[];
extern char s_cState_Reaction_0022dfcc[];
extern char s_cState_Round_0022db40[];
extern char s_cState_Tame_0022df6c[];
extern char s_cState_ToJump_0022df5c[];
extern char s_cState_ToLaser_0022df94[];
extern char s_cState_ToSecond_0022db50[];
extern char s_cState_Wait_0022db34[];
extern char s_end_st_0022d550[];
extern char s_eyelid_down_0022d17c[];
extern char s_eyelid_up_0022d170[];
extern char s_transform_0022d540[];
extern char s_water_0022d558[];
extern undefined4 _DAT_0022d158;

// USA 0022CC80 <- EU 0022CC80 (Ghidra, non-matching)
// GLOBAL DAT_0022d128 uint *
// GLOBAL DAT_0022d12c int
// GLOBAL DAT_0022d130 undefined *
// GLOBAL DAT_0022d134 int
// GLOBAL DAT_0022d138 undefined4
// GLOBAL DAT_0022d13c undefined4
// GLOBAL DAT_0022d140 undefined4
// GLOBAL DAT_0022d144 uint
// GLOBAL DAT_0022d148 undefined4
// GLOBAL DAT_0022d14c uint
// GLOBAL DAT_0022d150 uint
// GLOBAL DAT_0022d154 float *
// GLOBAL DAT_0022d158 undefined
// GLOBAL DAT_0022d168 undefined4 *
// GLOBAL DAT_0022d16c undefined
// GLOBAL DAT_0022d188 uint *
// GLOBAL DAT_0022d18c undefined4 *
// GLOBAL DAT_0022d190 uint
// GLOBAL PTR_0022dfe8 undefined *
// GLOBAL PTR_0022dfec undefined *
// GLOBAL PTR_0022dff0 undefined *
// GLOBAL PTR_0022dff4 undefined *
// GLOBAL UNK_0022d194 int *
// GLOBAL UNK_0022d538 float
// GLOBAL UNK_0022d53c undefined4
// GLOBAL UNK_0022d54c undefined4
// GLOBAL UNK_0022d560 float *
// GLOBAL UNK_0022dac8 int *
// GLOBAL UNK_0022dacc int
// GLOBAL UNK_0022dad0 undefined *
// GLOBAL UNK_0022dad4 int
// GLOBAL UNK_0022e0f4 int *
// GLOBAL UNK_0022e0f8 uint *
// GLOBAL UNK_0022e0fc uint *
// GLOBAL s_Askl_root_0022d15b string
// GLOBAL s_cState_AppearMain_0022daf8 string
// GLOBAL s_cState_AppearPost_0022db0c string
// GLOBAL s_cState_AppearPre_0022dae4 string
// GLOBAL s_cState_AttackReady_0022db60 string
// GLOBAL s_cState_AttackRecovery_0022db88 string
// GLOBAL s_cState_AttackShot_0022db74 string
// GLOBAL s_cState_AttackWait_0022dba0 string
// GLOBAL s_cState_Die_0022dfdc string
// GLOBAL s_cState_EventStop_0022db20 string
// GLOBAL s_cState_Ground_0022df84 string
// GLOBAL s_cState_Hide_0022dad8 string
// GLOBAL s_cState_Jump_0022df78 string
// GLOBAL s_cState_LaserReady_0022dfa4 string
// GLOBAL s_cState_LaserShot_0022dfb8 string
// GLOBAL s_cState_Reaction_0022dfcc string
// GLOBAL s_cState_Round_0022db40 string
// GLOBAL s_cState_Tame_0022df6c string
// GLOBAL s_cState_ToJump_0022df5c string
// GLOBAL s_cState_ToLaser_0022df94 string
// GLOBAL s_cState_ToSecond_0022db50 string
// GLOBAL s_cState_Wait_0022db34 string
// GLOBAL s_end_st_0022d550 string
// GLOBAL s_eyelid_down_0022d17c string
// GLOBAL s_eyelid_up_0022d170 string
// GLOBAL s_transform_0022d540 string
// GLOBAL s_water_0022d558 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * func_0022CC80(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  float fparam_0;
  ulonglong uVar25;
  _Alignas(8) unsigned char albw_frame[0x320];
  #define iStack_320 (*(int *)(albw_frame + 0x0))
  #define uStack_31c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_318 (*(undefined4 *)(albw_frame + 0x8))
  #define iStack_314 (*(int *)(albw_frame + 0xc))
  #define local_310 (*(float *)(albw_frame + 0x10))
  #define uStack_30c (*(undefined4 *)(albw_frame + 0x14))
  #define local_308 (*(undefined4 * *)(albw_frame + 0x18))
  #define local_304 (*(char * *)(albw_frame + 0x1c))
  #define puStack_300 (*(undefined4 * *)(albw_frame + 0x20))
  #define uStack_2fc (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_2f8 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_2f4 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_2f0 (*(uint *)(albw_frame + 0x30))
  #define uStack_2ec (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_2e8 (*(uint *)(albw_frame + 0x38))
  #define uStack_2d8 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_2d4 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_2d0 (*(undefined2 *)(albw_frame + 0x50))
  #define uStack_2cc (*(undefined2 *)(albw_frame + 0x54))
  #define uStack_2b4 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_2b0 (*(undefined1 *)(albw_frame + 0x70))
  #define puStack_2a8 (*(undefined4 * *)(albw_frame + 0x78))
  #define pcStack_2a4 (*(char * *)(albw_frame + 0x7c))
  #define puStack_2a0 (*(undefined4 * *)(albw_frame + 0x80))
  #define pcStack_29c (*(char * *)(albw_frame + 0x84))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x2c0))
  #define puStack_58 (*(undefined4 * *)(albw_frame + 0x2c8))
  #define pcStack_54 (*(char * *)(albw_frame + 0x2cc))
  #define local_48 (*(int *)(albw_frame + 0x2d8))
  piVar4 = (int *)(uintptr_t)(func_004FD464(param_1,param_2,DAT_0022d128));
  iVar13 = DAT_0022d12c + 0x84;
  *piVar4 = DAT_0022d12c;
  puVar2 = DAT_0022d130;
  piVar4[200] = iVar13;
  piVar4[0x22f] = 0;
  iVar13 = func_00100118((int)(piVar4 + 0x230),puVar2,4,0xf);
  puVar5 = (undefined4 *)(uintptr_t)(func_0010A794((undefined4 *)(iVar13 + 0x3c)));
  iVar13 = DAT_0022d134;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  uVar15 = *(undefined4 *)(iVar13 + 0xc);
  puVar5[0xb] = *(undefined4 *)(iVar13 + 8);
  puVar5[0xc] = uVar15;
  puVar5[9] = DAT_0022d138;
  puVar5[10] = (undefined4)(uintptr_t)(puVar5 + -0x23f);
  puVar5[0xd] = DAT_0022d13c;
  puVar5[0xe] = (undefined4)(uintptr_t)(puVar5 + -0x23f);
  puVar5[0xf] = 0xffffffff;
  puVar5[0x10] = 0xffffffff;
  puVar5[0x11] = 0xffffffff;
  puVar5[0x12] = 0xffffffff;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  uVar16 = *(undefined4 *)(iVar13 + 0x10);
  uVar18 = *(undefined4 *)(iVar13 + 0x14);
  puVar5 = (undefined4 *)(uintptr_t)(func_0036C884(puVar5 + 0x1b,puVar5 + -0x23f,1));
  uVar15 = DAT_0022d148;
  *puVar5 = DAT_0022d140;
  puVar5[0x40] = uVar16;
  puVar5[0x41] = uVar18;
  uVar7 = DAT_0022d150;
  uVar19 = DAT_0022d144;
  uVar25 = (ulonglong)DAT_0022d150;
  puVar5[0x43] = DAT_0022d144;
  puVar5[0x44] = uVar15;
  puVar5[0x42] = 0;
  puVar5[0x46] = uVar19;
  pfVar14 = DAT_0022d154;
  puVar5[0x47] = uVar15;
  puVar5[0x45] = 0;
  puVar5[0x49] = uVar19;
  puVar5[0x4a] = uVar15;
  puVar5[0x48] = 0;
  uVar23 = (ulonglong)DAT_0022d14c;
  puVar5[0x4c] = DAT_0022d144;
  puVar5[0x4d] = uVar15;
  puVar5[0x4b] = 0;
  puVar5[0x4e] = 0;
  puVar5[0x4f] = 0;
  puVar5[0x50] = 0;
  puVar5[0x51] = 0;
  puVar5[0x52] = 0;
  puVar5[0x53] = 0;
  puVar17 = puVar5 + -0x25a;
  puVar5[0x54] = 0;
  puVar5[0x55] = 0;
  puVar5[0x56] = 0;
  puVar5[0x57] = 0;
  puVar5[0x58] = 0;
  puVar5[0x59] = 0;
  puVar5[0x5a] = 0;
  puVar5[0x5b] = 0;
  puVar5[0x5c] = 0;
  puVar5[0x5d] = 0;
  puVar5[0x5e] = 0;
  puVar5[0x5f] = 0;
  puVar5[0x60] = uVar7;
  puVar5[0xd3] = 0;
  puVar5[0xd4] = uVar7;
  puVar5[0xd5] = uVar7;
  puVar5[0xd6] = uVar7;
  puVar5[0xe4] = 0;
  puVar5[0xe6] = 0;
  *(undefined1 *)(puVar5 + 0xe7) = 0;
  *(undefined1 *)((int)puVar5 + 0x39d) = 0;
  *(undefined1 *)((int)puVar5 + 0x39e) = 0;
  *(undefined1 *)((int)puVar5 + 0x39f) = 0;
  *(undefined1 *)(puVar5 + 0xe8) = 0;
  *(undefined1 *)((int)puVar5 + 0x3a1) = 0;
  *(undefined1 *)((int)puVar5 + 0x3a2) = 0;
  *(undefined1 *)((int)puVar5 + 0x3a3) = 0;
  func_00115C54(&local_310,(float *)(puVar5 + -0x166),pfVar14);
  puVar5[0xda] = ALBW_AS_U32(local_310);
  puVar5[0xdb] = uStack_30c;
  puVar5[0xdc] = (undefined4)(uintptr_t)(local_308);
  *(undefined1 *)(puVar5 + 0x3d) = 2;
  puVar5[10] = (undefined4)(uintptr_t)(puVar5 + 0xda);
  if (puVar5[-0x157] != 0) {
    *(undefined4 *)(puVar5[-0x157] + 0x14c) = _DAT_0022d158;
  }
  if (((puVar5[-0x1a6] != 0) && (iVar6 = func_0054DD54(puVar5[-0x1a6] + 0x18,0), iVar6 != 0)) &&
     (iVar6 = func_0054DD3C(puVar5[-0x1a6] + 0x18,0), iVar6 != 0)) {
    iVar6 = func_0054D89C((int)puVar17,0);
    puVar5[0x52] = iVar6;
    if (iVar6 != 0) {
      func_004FC8D8((int)(puVar5 + -0xf0),iVar6);
    }
  }
  puVar5[-0x14a] = (undefined4)(uintptr_t)(puVar5 + -0x12);
  func_0036D0C8(puVar5 + -0x2b,0);
  puVar3 = DAT_0022d168;
  local_304 = s_Askl_root_0022d15b + 1;
  local_308 = DAT_0022d168;
  uVar7 = func_00564A78(puVar5[-0x157],(int *)&local_308);
  uVar19 = DAT_0022d144;
  if (uVar7 != DAT_0022d144) {
    puVar5[-0xc] = uVar7;
    puVar8 = (uint *)(*(int *)(*(int *)(puVar5[-0x157] + 0x24) + 0xc) + uVar7 * 0x40);
    *puVar8 = *puVar8 | 0x10;
  }
  local_304 = &DAT_0022d16c;
  local_308 = puVar3;
  uVar7 = func_00564A78(puVar5[-0x157],(int *)&local_308);
  if (uVar7 != uVar19) {
    puVar5[-0xb] = uVar7;
    puVar8 = (uint *)(*(int *)(*(int *)(puVar5[-0x157] + 0x24) + 0xc) + uVar7 * 0x40);
    *puVar8 = *puVar8 | 0x10;
  }
  local_304 = s_eyelid_up_0022d170;
  local_308 = puVar3;
  uVar7 = func_00564A78(puVar5[-0x157],(int *)&local_308);
  if (uVar7 != uVar19) {
    puVar5[-10] = uVar7;
    puVar8 = (uint *)(*(int *)(*(int *)(puVar5[-0x157] + 0x24) + 0xc) + uVar7 * 0x40);
    *puVar8 = *puVar8 | 0x10;
  }
  local_304 = s_eyelid_down_0022d17c;
  local_308 = puVar3;
  uVar7 = func_00564A78(puVar5[-0x157],(int *)&local_308);
  if (uVar7 != uVar19) {
    puVar5[-9] = uVar7;
    puVar8 = (uint *)(*(int *)(*(int *)(puVar5[-0x157] + 0x24) + 0xc) + uVar7 * 0x40);
    *puVar8 = *puVar8 | 0x10;
  }
  puVar5[0x5d] = 0;
  puVar5[0x5e] = 0;
  puVar5[0x5f] = 0;
  puVar5[-8] = 0;
  puVar5[-7] = 0;
  *(undefined4 **)(puVar5[-0x157] + 0x16c) = puVar5 + -0xe;
  puVar8 = DAT_0022d188;
  puVar5[0xd4] = *DAT_0022d188;
  puVar5[0xd5] = puVar8[1];
  puVar5[0xd6] = puVar8[2];
  puVar5[-0xfe] = puVar5[0xd4];
  puVar5[-0xfd] = puVar5[0xd5];
  puVar5[-0xfc] = puVar5[0xd6];
  if (puVar5[-0x2b] == 0) {
    local_48 = 1;
  }
  else {
    local_48 = func_0010983C(*DAT_0022d18c,puVar5[-0x2b]);
  }
  func_004FB344((int)puVar17,0xd);
  uVar19 = DAT_0022d190;
  uVar7 = 0;
  do {
    func_004FACA4((int)puVar17,uVar7,(int *)(uVar19 + uVar7 * 8));
    fparam_0 = ALBW_AS_F32(uVar25);
    uVar15 = (undefined4)uVar23;
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0xd);
  func_004FB468((int)puVar17);
  func_004FABDC((int)puVar17,0,0xffffffff,0);
  func_004FB30C((int)puVar17,1);
  func_004FAC70((int)puVar17,0,piRam0022d194);
  func_004FB408((int)puVar17);
  func_004FB4C4((int)puVar17,fparam_0);
  fVar20 = func_0058AC14((int)(uintptr_t)(puVar17));
  func_004FB070((int)puVar17,fVar20 * fRam0022d538);
  puVar9 = (undefined4 *)func_0010BAB4(0xa8);
  puVar10 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar10 = (undefined4 *)(uintptr_t)(func_0016A2FC(puVar9,1,uRam0022d53c,1));
  }
  puVar5[0x4f] = (undefined4)(uintptr_t)(puVar10);
  piVar4 = puVar5 + 0x4f;
  pcStack_29c = s_transform_0022d540;
  puStack_2a0 = puVar3;
  func_00169608((uint *)puVar5[0x4f],0,(int *)&puStack_2a0,*(int *)(puVar5[-0x1a6] + 0x1c8));
  func_00133870(*piVar4,0,puVar5[-0x157]);
  func_0016A02C(*piVar4,-1,(int *)0xffffffff,0);
  local_304 = (char *)0x3;
  puStack_300 = &uStack_2fc;
  uVar24 = CONCAT44(uRam0022d54c,uVar15);
  uStack_2e8 = uVar19 | 0xff;
  uStack_2b4 = 10;
  uStack_2b0 = 0;
  uStack_2fc = 0;
  local_308 = (undefined4 *)0x1;
  uStack_2f0 = uRam0022d54c;
  uStack_2f8 = ALBW_AS_U32(fparam_0);
  uStack_2f4 = uVar15;
  uStack_2ec = uVar15;
  func_0016898C(puVar5[0x4f],(uint *)&local_308);
  *(float *)(*(int *)(*piVar4 + 0x14) + 0x10) = fparam_0;
  puVar9 = (undefined4 *)func_0010BAB4(0xa8);
  puVar10 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar10 = (undefined4 *)(uintptr_t)(func_0016A2FC(puVar9,1,uRam0022d53c,1));
  }
  puVar5[0x50] = (undefined4)(uintptr_t)(puVar10);
  piVar4 = puVar5 + 0x50;
  pcStack_29c = s_end_st_0022d550;
  puStack_2a0 = puVar3;
  func_00169608((uint *)puVar5[0x50],0,(int *)&puStack_2a0,*(int *)(puVar5[-0x1a6] + 0x1c8));
  func_00133870(*piVar4,0,puVar5[-0x157]);
  func_0016A02C(*piVar4,-1,(int *)0xffffffff,0);
  uVar19 = 3;
  local_304 = (char *)0x3;
  uStack_2f4 = (undefined4)uVar24;
  puStack_300 = &uStack_2fc;
  uStack_2f0 = (uint)((ulonglong)uVar24 >> 0x20);
  uStack_2b4 = 10;
  uStack_2b0 = 0;
  uStack_2fc = 0;
  local_308 = (undefined4 *)0x1;
  uStack_2e8 = 0xff;
  uStack_2f8 = ALBW_AS_U32(fparam_0);
  uStack_2ec = uStack_2f4;
  func_0016898C(puVar5[0x50],(uint *)&local_308);
  *(float *)(*(int *)(*piVar4 + 0x14) + 0x10) = fparam_0;
  puVar9 = (undefined4 *)func_0010BAB4(0xa8);
  puVar10 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar10 = (undefined4 *)(uintptr_t)(func_0016A2FC(puVar9,1,uRam0022d53c,1));
  }
  puVar5[0x51] = (undefined4)(uintptr_t)(puVar10);
  pcStack_2a4 = s_water_0022d558;
  puStack_2a8 = puVar3;
  func_00169608((uint *)puVar5[0x51],0,(int *)&puStack_2a8,*(int *)(puVar5[-0x1a6] + 0x1c8));
  func_00133870(puVar5[0x51],0,puVar5[-0x157]);
  func_0016A02C(puVar5[0x51],-1,(int *)0xffffffff,0);
  puStack_300 = &uStack_2fc;
  uStack_2b4 = 10;
  uStack_2b0 = 0;
  uStack_2f4 = (undefined4)uVar24;
  uStack_2fc = 0;
  local_304 = (char *)0x3;
  local_308 = (undefined4 *)0x1;
  uStack_2f0 = (uint)((ulonglong)uVar24 >> 0x20);
  uStack_2e8 = uVar19 | 0xff;
  uStack_2f8 = ALBW_AS_U32(fparam_0);
  uStack_2ec = uStack_2f4;
  func_0016898C(puVar5[0x51],(uint *)&local_308);
  uVar19 = 0;
  iVar6 = 0xf;
  do {
    pfVar14 = (float *)(puVar5 + 0xc4);
    if (uVar19 < 0xf) {
      pfVar14 = (float *)(puVar5 + 0xc4 + uVar19);
    }
    iVar6 = iVar6 + -1;
    uVar19 = uVar19 + 1;
    *pfVar14 = CF_NAN_NEG;
  } while (iVar6 != 0);
  func_004F5BD8((int)puVar17,(uint *)0x0,(int **)0x0,pfVar14);
  puVar5[0x54] = 0x80000000;
  puVar5[0x53] = 0x80000000;
  pfVar14 = (float *)(puVar5 + 100);
  *pfVar14 = fparam_0;
  puVar5[0x65] = ALBW_AS_U32(fparam_0);
  puVar5[0x66] = ALBW_AS_U32(fparam_0);
  func_00115C54(pfVar14,pfVar14,(float *)(puVar5 + -600));
  puVar5[-0x166] = ALBW_AS_U32(*pfVar14);
  puVar5[-0x165] = puVar5[0x65];
  pfVar14 = pfRam0022d560;
  puVar5[-0x164] = puVar5[0x66];
  puVar5[-0x163] = ALBW_AS_U32(fparam_0);
  puVar5[-0x162] = ALBW_AS_U32(fparam_0);
  puVar5[-0x161] = ALBW_AS_U32(fparam_0);
  puVar5[0x61] = ALBW_AS_U32(fparam_0);
  puVar5[0x62] = ALBW_AS_U32(fparam_0);
  puVar5[99] = ALBW_AS_U32(fparam_0);
  puVar5[0xd7] = puVar5[-0x147];
  puVar5[0xd8] = puVar5[-0x146];
  puVar5[0xd9] = puVar5[-0x145];
  func_00115C54((float *)&local_308,(float *)(puVar5 + 0xd7),pfVar14);
  puVar5[-0x147] = (undefined4)(uintptr_t)(local_308);
  puVar5[-0x146] = (undefined4)(uintptr_t)(local_304);
  puVar5[-0x145] = (undefined4)(uintptr_t)(puStack_300);
  uVar19 = *(uint *)(puVar5[-0x151] + 0x2c);
  *(uint *)(puVar5[-0x151] + 0x2c) = uVar19 | 0x8000;
  *(uint *)(puVar5[-0x151] + 0x2c) = uVar19 | 0x108000;
  iVar6 = func_00588BE4((int)puVar17);
  if (iVar6 == *piRam0022dac8) {
    iStack_320 = -0x37aaaf01;
    func_004FAFA0((int)puVar17,&iStack_320);
  }
  func_004FAB30((int)puVar17,10,0x14,0x28);
  func_004FAFAC((int)puVar17,10,0xf,5);
  local_308 = puVar5 + -0x1b;
  iStack_314 = 0x15;
  puVar5[-0x16] = (undefined4)(uintptr_t)(puVar17);
  *(undefined1 *)((int)puVar5 + -0x66) = 0x15;
  iVar11 = func_0010BA78(0x150);
  iVar6 = iRam0022dacc;
  puVar5[-0x15] = iVar11;
  puVar5[-0x14] = iVar11 + (uint)*(byte *)((int)puVar5 + -0x66) * 8;
  iVar12 = 0x15;
  puVar10 = (undefined4 *)(iVar11 + -8);
  do {
    uVar15 = *(undefined4 *)(DAT_0022d134 + 0x1b4);
    iVar12 = iVar12 + -1;
    puVar10[2] = *(undefined4 *)(DAT_0022d134 + 0x1b0);
    puVar10[3] = uVar15;
    uVar15 = *(undefined4 *)(iVar6 + 0xb4);
    puVar10[4] = *(undefined4 *)(iVar6 + 0xb0);
    puVar10[5] = uVar15;
    puVar10 = puVar10 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar5 + -0x66);
  uVar19 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar19 << 3);
  iVar11 = iStack_314;
  puVar5[-0x13] = (undefined4)(uintptr_t)(puVar10);
  if (uVar19 != 0) {
    puVar9 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = *(undefined4 *)(iVar13 + 0xa4);
      *puVar10 = *(undefined4 *)(iVar13 + 0xa0);
      puVar10[1] = uVar15;
      puVar9 = puVar10;
    }
    for (iVar12 = (int)uVar19 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
      uVar15 = *(undefined4 *)(iVar13 + 0xa4);
      puVar9[2] = *(undefined4 *)(iVar13 + 0xa0);
      puVar9[3] = uVar15;
      uVar15 = *(undefined4 *)(iVar13 + 0xa4);
      puVar9[4] = *(undefined4 *)(iVar13 + 0xa0);
      puVar9[5] = uVar15;
      puVar9 = puVar9 + 4;
    }
  }
  if (0 < iStack_314) {
    puVar10 = (undefined4 *)func_0010CEE0(iStack_314 * 0x24 + 8,(int *)0x0,4);
    iVar12 = 0;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = 0x24;
      puVar10[1] = iVar11;
      iVar12 = func_00100118((int)(puVar10 + 2),(undefined *)(puRam0022dad0),0x24,iVar11);
    }
    if (iVar12 != 0) {
      puVar5[-0x19] = iVar11;
      puVar5[-0x18] = iVar12;
    }
  }
  iVar11 = iRam0022dad4;
  puVar5[-0x185] = (undefined4)(uintptr_t)(local_308);
  *(undefined2 *)(iVar11 + (int)puVar17) = 0x15;
  pcStack_54 = s_cState_Hide_0022dad8;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,0,(int *)&puStack_58);
  puVar10 = (undefined4 *)puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar13 + 0x1c);
  uVar16 = *(undefined4 *)(iVar13 + 0x20);
  uVar18 = *(undefined4 *)(iVar13 + 0x24);
  uVar21 = *(undefined4 *)(iVar13 + 0x28);
  uVar22 = *(undefined4 *)(iVar13 + 0x2c);
  *puVar10 = *(undefined4 *)(iVar13 + 0x18);
  puVar10[1] = uVar15;
  puVar10 = (undefined4 *)puVar5[-0x14];
  *puVar10 = uVar16;
  puVar10[1] = uVar18;
  puVar10 = (undefined4 *)puVar5[-0x13];
  *puVar10 = uVar21;
  puVar10[1] = uVar22;
  pcStack_54 = s_cState_AppearPre_0022dae4;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,1,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar13 + 0x34);
  uVar16 = *(undefined4 *)(iVar13 + 0x38);
  uVar18 = *(undefined4 *)(iVar13 + 0x3c);
  uVar21 = *(undefined4 *)(iVar13 + 0x40);
  uVar22 = *(undefined4 *)(iVar13 + 0x44);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar13 + 0x30);
  *(undefined4 *)(iVar11 + 0xc) = uVar15;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 8) = uVar16;
  *(undefined4 *)(iVar11 + 0xc) = uVar18;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 8) = uVar21;
  *(undefined4 *)(iVar11 + 0xc) = uVar22;
  pcStack_54 = s_cState_AppearMain_0022daf8;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,2,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar13 + 0x4c);
  uVar16 = *(undefined4 *)(iVar13 + 0x50);
  uVar18 = *(undefined4 *)(iVar13 + 0x54);
  uVar21 = *(undefined4 *)(iVar13 + 0x58);
  uVar22 = *(undefined4 *)(iVar13 + 0x5c);
  *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar13 + 0x48);
  *(undefined4 *)(iVar11 + 0x14) = uVar15;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x10) = uVar16;
  *(undefined4 *)(iVar11 + 0x14) = uVar18;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x10) = uVar21;
  *(undefined4 *)(iVar11 + 0x14) = uVar22;
  pcStack_54 = s_cState_AppearPost_0022db0c;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,3,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar13 + 100);
  uVar16 = *(undefined4 *)(iVar13 + 0x68);
  uVar18 = *(undefined4 *)(iVar13 + 0x6c);
  uVar21 = *(undefined4 *)(iVar13 + 0x70);
  uVar22 = *(undefined4 *)(iVar13 + 0x74);
  *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(iVar13 + 0x60);
  *(undefined4 *)(iVar11 + 0x1c) = uVar15;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x18) = uVar16;
  *(undefined4 *)(iVar11 + 0x1c) = uVar18;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x18) = uVar21;
  *(undefined4 *)(iVar11 + 0x1c) = uVar22;
  pcStack_54 = s_cState_EventStop_0022db20;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,4,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar13 + 0x7c);
  uVar16 = *(undefined4 *)(iVar13 + 0x80);
  uVar18 = *(undefined4 *)(iVar13 + 0x84);
  uVar21 = *(undefined4 *)(iVar13 + 0x88);
  uVar22 = *(undefined4 *)(iVar13 + 0x8c);
  *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(iVar13 + 0x78);
  *(undefined4 *)(iVar11 + 0x24) = uVar15;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x20) = uVar16;
  *(undefined4 *)(iVar11 + 0x24) = uVar18;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x20) = uVar21;
  *(undefined4 *)(iVar11 + 0x24) = uVar22;
  pcStack_54 = s_cState_Wait_0022db34;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,5,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar13 + 0x98);
  uVar18 = *(undefined4 *)(iVar13 + 0x9c);
  uVar16 = *(undefined4 *)(iVar13 + 0x94);
  uVar24 = *(undefined8 *)(iVar13 + 0xa0);
  *(undefined4 *)(iVar11 + 0x28) = *(undefined4 *)(iVar13 + 0x90);
  *(undefined4 *)(iVar11 + 0x2c) = uVar16;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x28) = uVar15;
  *(undefined4 *)(iVar11 + 0x2c) = uVar18;
  iVar11 = puVar5[-0x13];
  *(int *)(iVar11 + 0x28) = (int)uVar24;
  *(int *)(iVar11 + 0x2c) = (int)((ulonglong)uVar24 >> 0x20);
  pcStack_54 = s_cState_Round_0022db40;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,6,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar13 + 0xac);
  uVar16 = *(undefined4 *)(iVar13 + 0xb0);
  uVar18 = *(undefined4 *)(iVar13 + 0xb4);
  *(undefined4 *)(iVar11 + 0x30) = *(undefined4 *)(iVar13 + 0xa8);
  *(undefined4 *)(iVar11 + 0x34) = uVar15;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x30) = uVar16;
  *(undefined4 *)(iVar11 + 0x34) = uVar18;
  iVar11 = puVar5[-0x13];
  *(int *)(iVar11 + 0x30) = (int)uVar24;
  *(int *)(iVar11 + 0x34) = (int)((ulonglong)uVar24 >> 0x20);
  pcStack_54 = s_cState_ToSecond_0022db50;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,7,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar13 + 0xbc);
  uVar16 = *(undefined4 *)(iVar13 + 0xc0);
  uVar18 = *(undefined4 *)(iVar13 + 0xc4);
  uVar21 = *(undefined4 *)(iVar13 + 200);
  uVar22 = *(undefined4 *)(iVar13 + 0xcc);
  *(undefined4 *)(iVar11 + 0x38) = *(undefined4 *)(iVar13 + 0xb8);
  *(undefined4 *)(iVar11 + 0x3c) = uVar15;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x38) = uVar16;
  *(undefined4 *)(iVar11 + 0x3c) = uVar18;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x38) = uVar21;
  *(undefined4 *)(iVar11 + 0x3c) = uVar22;
  pcStack_54 = s_cState_AttackReady_0022db60;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,8,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar18 = *(undefined4 *)(iVar13 + 0xd4);
  uVar15 = *(undefined4 *)(iVar13 + 0xd8);
  uVar16 = *(undefined4 *)(iVar13 + 0xdc);
  uVar22 = *(undefined4 *)(iVar13 + 0xa0);
  uVar21 = *(undefined4 *)(iVar13 + 0xa4);
  *(undefined4 *)(iVar11 + 0x40) = *(undefined4 *)(iVar13 + 0xd0);
  *(undefined4 *)(iVar11 + 0x44) = uVar18;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x40) = uVar15;
  *(undefined4 *)(iVar11 + 0x44) = uVar16;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x40) = uVar22;
  *(undefined4 *)(iVar11 + 0x44) = uVar21;
  pcStack_54 = s_cState_AttackShot_0022db74;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,9,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar13 + 0xe4);
  uVar16 = *(undefined4 *)(iVar13 + 0xe8);
  uVar18 = *(undefined4 *)(iVar13 + 0xec);
  *(undefined4 *)(iVar11 + 0x48) = *(undefined4 *)(iVar13 + 0xe0);
  *(undefined4 *)(iVar11 + 0x4c) = uVar15;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x48) = uVar16;
  *(undefined4 *)(iVar11 + 0x4c) = uVar18;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x48) = uVar22;
  *(undefined4 *)(iVar11 + 0x4c) = uVar21;
  pcStack_54 = s_cState_AttackRecovery_0022db88;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,10,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar16 = *(undefined4 *)(iVar13 + 0xf4);
  uVar15 = *(undefined4 *)(DAT_0022d134 + 0xf8);
  uVar18 = *(undefined4 *)(DAT_0022d134 + 0xfc);
  *(undefined4 *)(iVar11 + 0x50) = *(undefined4 *)(iVar13 + 0xf0);
  *(undefined4 *)(iVar11 + 0x54) = uVar16;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x50) = uVar15;
  *(undefined4 *)(iVar11 + 0x54) = uVar18;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x50) = uVar22;
  *(undefined4 *)(iVar11 + 0x54) = uVar21;
  pcStack_54 = s_cState_AttackWait_0022dba0;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,0xb,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar6 + 8);
  uVar16 = *(undefined4 *)(iVar6 + 0xc);
  uVar18 = *(undefined4 *)(DAT_0022d134 + 0x104);
  *(undefined4 *)(iVar11 + 0x58) = *(undefined4 *)(DAT_0022d134 + 0x100);
  *(undefined4 *)(iVar11 + 0x5c) = uVar18;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x58) = uVar15;
  *(undefined4 *)(iVar11 + 0x5c) = uVar16;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x58) = uVar22;
  *(undefined4 *)(iVar11 + 0x5c) = uVar21;
  pcStack_54 = s_cState_ToJump_0022df5c;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,0xc,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar6 + 0x14);
  uVar16 = *(undefined4 *)(iVar6 + 0x18);
  uVar18 = *(undefined4 *)(iVar6 + 0x1c);
  *(undefined4 *)(iVar11 + 0x60) = *(undefined4 *)(iVar6 + 0x10);
  *(undefined4 *)(iVar11 + 100) = uVar15;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x60) = uVar16;
  *(undefined4 *)(iVar11 + 100) = uVar18;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x60) = uVar22;
  *(undefined4 *)(iVar11 + 100) = uVar21;
  pcStack_54 = s_cState_Tame_0022df6c;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,0xd,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar6 + 0x24);
  uVar16 = *(undefined4 *)(iVar6 + 0x28);
  uVar18 = *(undefined4 *)(iVar6 + 0x2c);
  *(undefined4 *)(iVar11 + 0x68) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(iVar11 + 0x6c) = uVar15;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x68) = uVar16;
  *(undefined4 *)(iVar11 + 0x6c) = uVar18;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x68) = uVar22;
  *(undefined4 *)(iVar11 + 0x6c) = uVar21;
  pcStack_54 = s_cState_Jump_0022df78;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,0xe,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar6 + 0x34);
  uVar16 = *(undefined4 *)(iVar6 + 0x38);
  uVar18 = *(undefined4 *)(iVar6 + 0x3c);
  uVar21 = *(undefined4 *)(iVar6 + 0x40);
  uVar22 = *(undefined4 *)(iVar6 + 0x44);
  *(undefined4 *)(iVar11 + 0x70) = *(undefined4 *)(iVar6 + 0x30);
  *(undefined4 *)(iVar11 + 0x74) = uVar15;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x70) = uVar16;
  *(undefined4 *)(iVar11 + 0x74) = uVar18;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x70) = uVar21;
  *(undefined4 *)(iVar11 + 0x74) = uVar22;
  pcStack_54 = s_cState_Ground_0022df84;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,0xf,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar16 = *(undefined4 *)(iVar6 + 0x50);
  uVar18 = *(undefined4 *)(iVar6 + 0x54);
  uVar22 = *(undefined4 *)(DAT_0022d134 + 0x14c);
  uVar15 = *(undefined4 *)(iVar6 + 0x58);
  uVar21 = *(undefined4 *)(iVar6 + 0x5c);
  *(undefined4 *)(iVar11 + 0x78) = *(undefined4 *)(DAT_0022d134 + 0x148);
  *(undefined4 *)(iVar11 + 0x7c) = uVar22;
  iVar11 = puVar5[-0x14];
  *(undefined4 *)(iVar11 + 0x78) = uVar16;
  *(undefined4 *)(iVar11 + 0x7c) = uVar18;
  iVar11 = puVar5[-0x13];
  *(undefined4 *)(iVar11 + 0x78) = uVar15;
  *(undefined4 *)(iVar11 + 0x7c) = uVar21;
  pcStack_54 = s_cState_ToLaser_0022df94;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,0x10,(int *)&puStack_58);
  iVar11 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar6 + 100);
  uVar24 = *(undefined8 *)(iVar13 + 0xa0);
  uVar16 = *(undefined4 *)(iVar6 + 0x68);
  uVar18 = *(undefined4 *)(iVar6 + 0x6c);
  *(undefined4 *)(iVar11 + 0x80) = *(undefined4 *)(iVar6 + 0x60);
  *(undefined4 *)(iVar11 + 0x84) = uVar15;
  iVar13 = puVar5[-0x14];
  *(undefined4 *)(iVar13 + 0x80) = uVar16;
  *(undefined4 *)(iVar13 + 0x84) = uVar18;
  iVar13 = puVar5[-0x13];
  *(int *)(iVar13 + 0x80) = (int)uVar24;
  *(int *)(iVar13 + 0x84) = (int)((ulonglong)uVar24 >> 0x20);
  pcStack_54 = s_cState_LaserReady_0022dfa4;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,0x11,(int *)&puStack_58);
  iVar13 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar6 + 0x74);
  uVar16 = *(undefined4 *)(iVar6 + 0x78);
  uVar18 = *(undefined4 *)(iVar6 + 0x7c);
  *(undefined4 *)(iVar13 + 0x88) = *(undefined4 *)(iVar6 + 0x70);
  *(undefined4 *)(iVar13 + 0x8c) = uVar15;
  iVar13 = puVar5[-0x14];
  *(undefined4 *)(iVar13 + 0x88) = uVar16;
  *(undefined4 *)(iVar13 + 0x8c) = uVar18;
  iVar13 = puVar5[-0x13];
  *(int *)(iVar13 + 0x88) = (int)uVar24;
  *(int *)(iVar13 + 0x8c) = (int)((ulonglong)uVar24 >> 0x20);
  pcStack_54 = s_cState_LaserShot_0022dfb8;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,0x12,(int *)&puStack_58);
  iVar13 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar6 + 0x84);
  uVar16 = *(undefined4 *)(iVar6 + 0x88);
  uVar18 = *(undefined4 *)(iVar6 + 0x8c);
  *(undefined4 *)(iVar13 + 0x90) = *(undefined4 *)(iVar6 + 0x80);
  *(undefined4 *)(iVar13 + 0x94) = uVar15;
  iVar13 = puVar5[-0x14];
  *(undefined4 *)(iVar13 + 0x90) = uVar16;
  *(undefined4 *)(iVar13 + 0x94) = uVar18;
  iVar13 = puVar5[-0x13];
  *(int *)(iVar13 + 0x90) = (int)uVar24;
  *(int *)(iVar13 + 0x94) = (int)((ulonglong)uVar24 >> 0x20);
  pcStack_54 = s_cState_Reaction_0022dfcc;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,0x13,(int *)&puStack_58);
  iVar13 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar6 + 0x94);
  uVar16 = *(undefined4 *)(iVar6 + 0x98);
  uVar18 = *(undefined4 *)(iVar6 + 0x9c);
  *(undefined4 *)(iVar13 + 0x98) = *(undefined4 *)(iVar6 + 0x90);
  *(undefined4 *)(iVar13 + 0x9c) = uVar15;
  iVar13 = puVar5[-0x14];
  *(undefined4 *)(iVar13 + 0x98) = uVar16;
  *(undefined4 *)(iVar13 + 0x9c) = uVar18;
  iVar13 = puVar5[-0x13];
  *(int *)(iVar13 + 0x98) = (int)uVar24;
  *(int *)(iVar13 + 0x9c) = (int)((ulonglong)uVar24 >> 0x20);
  pcStack_54 = s_cState_Die_0022dfdc;
  puStack_58 = puVar3;
  func_0010BEC4((int)local_308,0x14,(int *)&puStack_58);
  iVar13 = puVar5[-0x15];
  uVar15 = *(undefined4 *)(iVar6 + 0xa4);
  uVar16 = *(undefined4 *)(iVar6 + 0xa8);
  uVar18 = *(undefined4 *)(iVar6 + 0xac);
  *(undefined4 *)(iVar13 + 0xa0) = *(undefined4 *)(iVar6 + 0xa0);
  *(undefined4 *)(iVar13 + 0xa4) = uVar15;
  iVar13 = puVar5[-0x14];
  *(undefined4 *)(iVar13 + 0xa0) = uVar16;
  *(undefined4 *)(iVar13 + 0xa4) = uVar18;
  iVar13 = puVar5[-0x13];
  *(int *)(iVar13 + 0xa0) = (int)uVar24;
  *(int *)(iVar13 + 0xa4) = (int)((ulonglong)uVar24 >> 0x20);
  func_0065E8B8(local_308,0);
  puVar5[-0xf3] = puVar5[-0xf3] | 0x68000;
  func_004FB024((int)puVar17);
  puVar5[-0xf3] = puVar5[-0xf3] & 0xfeffffff;
  *(undefined1 *)(puVar5 + -0x48) = 1;
  puVar5[-0xf3] = puVar5[-0xf3] & 0xfff7ffff;
  iVar13 = func_0054DDF4((int)puVar17,1);
  puVar5[0x4e] = iVar13;
  uVar19 = 0;
  do {
    pfVar14 = (float *)(puVar5 + 0x94);
    if (uVar19 < 0xf) {
      pfVar14 = (float *)(puVar5 + 0x94 + uVar19 * 3);
    }
    uVar19 = uVar19 + 1;
    *pfVar14 = fparam_0;
    pfVar14[1] = fparam_0;
    pfVar14[2] = fparam_0;
    puVar2 = PTR_0022dfe8;
  } while ((int)uVar19 < 0xf);
  iVar13 = puVar5[-0x160];
  puVar5[0x58] = iVar13;
  puVar5[0x59] = *(int *)puVar2 + iVar13;
  puVar5[0x5a] = *(int *)PTR_0022dfec + iVar13;
  puVar5[0x5b] = iVar13 + *(int *)PTR_0022dff0;
  func_0022A698((int)puVar17,1);
  puVar2 = PTR_0022dff4;
  iVar13 = 0;
  do {
    puStack_300 = (undefined4 *)0x0;
    local_304 = (char *)0x0;
    uStack_2fc = 0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    uStack_60 = 0;
    func_002DFF7C(&iStack_320);
    func_002DFF7C(&iStack_320);
    uStack_31c = puVar5[-0x166];
    uStack_318 = puVar5[-0x165];
    iStack_314 = puVar5[-0x164];
    puStack_300 = (undefined4 *)puVar5[-0x160];
    iVar6 = func_00588BE4((int)puVar17);
    if (iVar6 == *piRam0022e0f4) {
      iStack_320 = func_0019B04C(*puRam0022e0f8);
    }
    else {
      iStack_320 = func_0019B04C(*puRam0022e0fc);
    }
    uStack_2f0 = param_2[0xc];
    uStack_2ec = CONCAT22((*(undefined2 *)((char *)&uStack_2ec + 2)),(short)param_2[0xd]);
    uStack_2cc = 0xffff;
    uStack_2f8 = CONCAT22((short)iVar13,(short)param_2[10]); /* bit copy */
    uStack_2d4 = puVar5[-0x1a7];
    uStack_2d0 = *(undefined2 *)(puVar5 + -0x245);
    func_004C43E0(*(int *)puVar2,&iStack_320);
    iVar13 = iVar13 + 1;
  } while (iVar13 < 10);
  if (local_48 != 1) {
    func_0010983C(*DAT_0022d18c,local_48);
  }
  return puVar17;
}

