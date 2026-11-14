/* compilefix: USA 00306CE0 (EU 00306CBC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [26]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [6]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_00307220[];
extern char s_cf_00307604[];
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002758CC(undefined4 *param_1,int *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern float func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_006649C8(undefined4 *param_1,undefined1 param_2);
extern int DAT_003071cc;
extern undefined4 *DAT_003071d0;
extern undefined4 DAT_003071d4;
extern undefined4 DAT_003071d8;
extern float DAT_003071dc;
extern undefined4 DAT_003071e0;
extern undefined4 DAT_003071e4;
extern uint DAT_003071e8;
extern int *DAT_003071ec;
extern int *DAT_003071f0;
extern int *DAT_003071f4;
extern float DAT_003071f8;
extern int *DAT_003071fc;
extern uint *DAT_00307200;
extern float *DAT_00307204;
extern undefined4 DAT_00307208;
extern int DAT_0030720c;
extern int DAT_00307210;
extern int *DAT_00307214;
extern int DAT_00307218;
extern float DAT_0030721c;
extern float DAT_0030761c;
extern float DAT_00307620;
extern float *DAT_00307624;
extern float DAT_00307a24;
extern float DAT_00307a28;
extern undefined *DAT_00307a2c;
extern int DAT_00307a30;
extern undefined4 *DAT_00307c94;
extern char s_Actor_JumpStandMoveCave_kcl_00307220[];
extern char s_Actor_JumpStandMove_kcl_00307604[];
extern char s_cState_Down_00307c98[];
extern char s_cState_GoDown_00307a40[];
extern char s_cState_Pushing_00307ca4[];
extern char s_cState_Wait_00307a34[];

// USA 00306CE0 <- EU 00306CBC [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_003071cc int
// GLOBAL DAT_003071d0 undefined4 *
// GLOBAL DAT_003071d4 undefined4
// GLOBAL DAT_003071d8 undefined4
// GLOBAL DAT_003071dc float
// GLOBAL DAT_003071e0 undefined4
// GLOBAL DAT_003071e4 undefined4
// GLOBAL DAT_003071e8 uint
// GLOBAL DAT_003071ec int *
// GLOBAL DAT_003071f0 int *
// GLOBAL DAT_003071f4 int *
// GLOBAL DAT_003071f8 float
// GLOBAL DAT_003071fc int *
// GLOBAL DAT_00307200 uint *
// GLOBAL DAT_00307204 float *
// GLOBAL DAT_00307208 undefined4
// GLOBAL DAT_0030720c int
// GLOBAL DAT_00307210 int
// GLOBAL DAT_00307214 int *
// GLOBAL DAT_00307218 int
// GLOBAL DAT_0030721c float
// GLOBAL DAT_0030761c float
// GLOBAL DAT_00307620 float
// GLOBAL DAT_00307624 float *
// GLOBAL DAT_00307a24 float
// GLOBAL DAT_00307a28 float
// GLOBAL DAT_00307a2c undefined *
// GLOBAL DAT_00307a30 int
// GLOBAL DAT_00307c94 undefined4 *
// GLOBAL s_cf_00307604 string
// GLOBAL s_cf_00307220 string
// GLOBAL s_cState_Down_00307c98 string
// GLOBAL s_cState_GoDown_00307a40 string
// GLOBAL s_cState_Pushing_00307ca4 string
// GLOBAL s_cState_Wait_00307a34 string

undefined4 * func_00306CE0(undefined4 *param_1,uint *param_2)

{
  _Alignas(8) unsigned char albw_frame[0xf0]; /* entry_sp - 0xf0 .. entry_sp + 0x0 */
#define stack0xffffff10 (*(undefined4 *)(albw_frame + 0x0))
#define stack0xffffff18 (*(undefined4 *)(albw_frame + 0x8))
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *extraout_r1;
  float *pfVar11;
  undefined4 extraout_r1_00;
  int iVar12;
  code *pcVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  bool bVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong lVar30;
  float fVar31;
  char *pcVar32;
  float fVar33;
  #define local_e4 (*(float *)(albw_frame + 0xc))
  #define local_e0 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_dc (*(float *)(albw_frame + 0x14))
  #define local_d8 (*(float *)(albw_frame + 0x18))
  #define local_d4 (*(float *)(albw_frame + 0x1c))
  #define local_d0 (*(float *)(albw_frame + 0x20))
  #define local_cc (*(float *)(albw_frame + 0x24))
  #define uStack_a5 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_a4 (*(undefined4 * *)(albw_frame + 0x4c))
  #define local_a0 (*(int *)(albw_frame + 0x50))
  #define local_9c (*(uint * *)(albw_frame + 0x54))
  #define local_98 (*(float *)(albw_frame + 0x58))
  #define local_94 (*(char * *)(albw_frame + 0x5c))
  #define uStack_90 (*(uint *)(albw_frame + 0x60))
  #define local_8c ((char *)(albw_frame + 0x64))
  #define uStack_4d (*(undefined1 *)(albw_frame + 0xa3))
  #define local_44 (*(int * *)(albw_frame + 0xac))
  pfVar11 = (float *)&stack0xffffff10;
  piVar2 = (int *)(uintptr_t)(func_00150E40(param_1,param_2));
  iVar7 = DAT_003071cc;
  *piVar2 = DAT_003071cc;
  piVar2[200] = iVar7 + 0x54;
  piVar2[0x103] = 0;
  puVar3 = (undefined4 *)(uintptr_t)(func_0010A794(piVar2 + 0x104));
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar16 = puVar3 + -0x104;
  fVar31 = 1.4013e-45;
  fVar33 = 0.0;
  uVar4 = func_0014E428((int)puVar16,1,0,0,1,0,0);
  puVar3[9] = uVar4;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar5));
  }
  piVar19 = puVar3 + 0xd;
  *piVar19 = (int)puVar6;
  puVar3[0xe] = 0;
  piVar2 = puVar3 + 0xe;
  iVar7 = func_0054D964((int)puVar16,0);
  puVar3[0xf] = iVar7;
  piVar20 = puVar3 + 0xf;
  iVar7 = func_0054D964((int)puVar16,0);
  local_44 = puVar3 + 0x10;
  puVar3[0x10] = iVar7;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(uintptr_t)(func_0034CAA0(puVar5));
  }
  puVar3[0x11] = (undefined4)(uintptr_t)(puVar6);
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(uintptr_t)(func_0034CAA0(puVar5));
  }
  puVar5 = DAT_003071d0;
  puVar3[0x12] = (undefined4)(uintptr_t)(puVar6);
  uVar4 = puVar5[1];
  puVar3[0x15] = *puVar5;
  puVar3[0x16] = uVar4;
  uVar4 = DAT_003071d4;
  puVar3[0x13] = DAT_003071d4;
  puVar3[0x14] = (undefined4)(uintptr_t)(puVar16);
  uVar14 = puVar5[2];
  uVar22 = puVar5[3];
  puVar3[0x17] = uVar4;
  puVar3[0x18] = (undefined4)(uintptr_t)(puVar16);
  puVar3[0x19] = uVar14;
  puVar3[0x1a] = uVar22;
  local_e0 = puVar3 + 0x1b;
  uVar4 = puVar5[5];
  puVar3[0x1d] = puVar5[4];
  puVar3[0x1e] = uVar4;
  uVar4 = DAT_003071d8;
  *local_e0 = DAT_003071d8;
  puVar3[0x1c] = (undefined4)(uintptr_t)(puVar16);
  uVar14 = puVar5[6];
  local_a4 = puVar3 + 0x1f;
  uVar22 = puVar5[7];
  puVar3[0x20] = (undefined4)(uintptr_t)(puVar16);
  puVar3[0x21] = uVar14;
  puVar3[0x22] = uVar22;
  fVar27 = DAT_003071dc;
  puVar3[0x1f] = uVar4;
  puVar3[0x23] = ALBW_AS_U32(fVar27);
  puVar3[0x24] = ALBW_AS_U32(fVar27);
  puVar3[0x25] = ALBW_AS_U32(fVar27);
  uVar14 = DAT_003071e4;
  uVar4 = DAT_003071e0;
  *(bool *)((int)puVar3 + 0x99) = *(short *)((int)param_2 + 0x32) != 0;
  puVar3[0x2c] = uVar4;
  puVar3[0x2d] = uVar14;
  puVar3[0x2b] = 0;
  lVar30 = (ulonglong)DAT_003071e8 << 0x20;
  *(undefined1 *)(puVar3 + 0x2e) = 0;
  iVar7 = func_00588BE4((int)puVar16);
  if (iVar7 == *DAT_003071ec) {
    *(undefined1 *)(puVar3 + 0x26) = 0;
  }
  else {
    *(undefined1 *)(puVar3 + 0x26) = 1;
  }
  iVar7 = func_00588BE4((int)puVar16);
  if ((iVar7 == *DAT_003071f0) || (iVar7 = func_00588BE4((int)puVar16), iVar7 == *DAT_003071f4)) {
    iVar7 = 0;
    if ((char)param_2[0x16] == '\0') {
      puVar6 = (undefined4 *)func_0010BAB4(0x88);
      piVar9 = (int *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        piVar9 = (int *)(uintptr_t)(func_002758CC(puVar6,(int *)param_2));
      }
      puVar3[0xc] = (undefined4)(uintptr_t)(piVar9);
    }
    else {
      local_e4 = DAT_003071f8;
      do {
        puVar6 = (undefined4 *)
                 func_0052FBDC(*DAT_003071fc + 0x3dbbc,(int)*(short *)((int)puVar3 + -0x3b2),0);
        if (puVar6 != (undefined4 *)0x0) {
          if (((*DAT_00307200 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_00307200), iVar8 != 0)
             ) {
            *DAT_00307204 = local_e4;
          }
          iVar8 = (**(code **)*puVar6)(puVar6,DAT_00307204);
          if (iVar8 == 0) {
            puVar6 = (undefined4 *)0x0;
          }
          if (puVar6 != (undefined4 *)0x0) {
            func_00115C70(&local_d4,(float *)(puVar3 + -0x10),(float *)(puVar6 + 0xf4));
            puVar3[0x23] = ALBW_AS_U32(local_d4);
            puVar3[0x24] = ALBW_AS_U32(local_d0);
            puVar3[0x25] = ALBW_AS_U32(local_cc);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(uint)(byte)param_2[0x16]);
    }
    puVar5 = (undefined4 *)func_0010BAB4(0x48);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar5));
    }
    puVar3[0xe] = (undefined4)(uintptr_t)(puVar6);
  }
  iVar7 = puVar3[9];
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar7 + 0x80),puVar3[-10],(float *)(puVar3 + -0x10));
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(uintptr_t)(func_0016A2FC(puVar5,3,DAT_00307208,1));
  }
  iVar7 = DAT_0030720c;
  uVar17 = 0;
  puVar3[10] = (undefined4)(uintptr_t)(puVar6);
  do {
    func_00169688((uint *)puVar3[10],uVar17,(int *)(iVar7 + uVar17 * 8),
                  *(int *)(puVar3[-0x50] + 0x1c8));
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 3);
  func_0016A02C(puVar3[10],-1,(int *)0xffffffff,0);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(uintptr_t)(func_0016A2FC(puVar5,2,DAT_00307208,1));
  }
  iVar7 = DAT_00307210;
  uVar17 = 0;
  puVar3[0xb] = (undefined4)(uintptr_t)(puVar6);
  do {
    func_00169608((uint *)puVar3[0xb],uVar17,(int *)(iVar7 + uVar17 * 8),
                  *(int *)(puVar3[-0x50] + 0x1c8));
    uVar4 = (undefined4)((ulonglong)lVar30 >> 0x20);
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 2);
  piVar15 = (int *)0x0;
  func_0016A02C(puVar3[0xb],-1,(int *)0xffffffff,0);
  pcVar13 = *(code **)(*(int *)puVar3[9] + 0x10);
  (*pcVar13)((int *)puVar3[9],0x24);
  piVar9 = DAT_00307214;
  puVar6 = extraout_r1;
  if (puVar3[0xd] != 0) {
    uVar14 = *(undefined4 *)(puVar3[0xf] + 0x5c);
    puVar3[0x27] = uVar14;
    puVar3[0x28] = uVar14;
    *(undefined2 *)(puVar3[0xf] + 0x28) = 0x2a4;
    *(undefined2 *)(puVar3[0x10] + 0x28) = 0x2a4;
    *(uint *)(*piVar20 + 0x2c) = *(uint *)(*piVar20 + 0x2c) | 2;
    *(uint *)(*local_44 + 0x2c) = *(uint *)(*local_44 + 0x2c) | 2;
    *(int *)(puVar3[0xd] + 0x18) = *piVar20;
    fVar33 = ALBW_AS_F32(puVar3[-0x51]);
    func_004EDAD0(*piVar19,(uint *)&stack0xffffff18);
    pcVar13 = (code *)0x2;
    *(undefined2 *)(*piVar19 + 0x2c) = *(undefined2 *)(puVar3 + -0xef);
    func_004A7F00(*piVar9,*piVar19,2);
    *(undefined4 **)(*piVar19 + 0x28) = local_e0;
    puVar6 = local_e0;
  }
  iVar7 = DAT_00307218;
  if (puVar3[0xe] == 0) goto LAB_003076bc;
  iVar8 = func_00588BE4((int)puVar16);
  if (iVar8 == *DAT_003071f4) {
    local_94 = s_Actor_JumpStandMoveCave_kcl_00307220;
    pcVar32 = (char *)&local_e4;
    fVar33 = 8.96831e-44;
    uStack_a5 = 0;
    local_e4 = ALBW_AS_F32(((uint)ALBW_AS_U32(local_e4) & 0xffffff00));
    fVar31 = DAT_0030721c;
    func_00111A20((int)&stack0xffffff10,(undefined4)(uintptr_t)(s_Actor_JumpStandMoveCave_kcl_00307220),&uStack_90);
    iVar8 = puVar3[0xe];
  }
  else {
    pcVar32 = s_Actor_JumpStandMove_kcl_00307604;
    local_94 = local_8c;
    uStack_90 = 0x40;
    uStack_4d = 0;
    local_8c[0] = '\0';
    local_98 = DAT_0030721c;
    func_00111A20((int)&local_98,(undefined4)(uintptr_t)(s_Actor_JumpStandMove_kcl_00307604),(uint *)&stack0xffffff18);
    iVar8 = puVar3[0xe];
    pfVar11 = &local_98;
  }
  func_004EDB28(iVar8,(int)pfVar11);
  piVar15 = (int *)param_2[9];
  func_00491624((float *)&stack0xffffff10,param_2[7],param_2[8],(uint)piVar15);
  fVar29 = DAT_00307620;
  fVar28 = DAT_0030761c;
  iVar8 = *(int *)(puVar3[0xe] + 0x14);
  fVar26 = fVar31 - *(float *)(iVar8 + 0x18);
  bVar24 = DAT_00307620 == fVar26;
  bVar25 = fVar26 <= DAT_00307620;
  if (!bVar25 || bVar24) {
    bVar24 = fVar26 == DAT_0030761c;
    bVar25 = DAT_0030761c <= fVar26;
  }
  if (bVar25 && !bVar24) {
LAB_00307438:
    bVar24 = false;
  }
  else {
    fVar26 = ALBW_AS_F32(pcVar32) - *(float *)(iVar8 + 0x1c);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = fVar33 - *(float *)(iVar8 + 0x20);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = local_e4 - *(float *)(iVar8 + 0x24);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = ALBW_AS_F32(local_e0) - *(float *)(iVar8 + 0x28);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = local_dc - *(float *)(iVar8 + 0x2c);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = local_d8 - *(float *)(iVar8 + 0x30);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = local_d4 - *(float *)(iVar8 + 0x34);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = local_d0 - *(float *)(iVar8 + 0x38);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    bVar24 = true;
  }
  if (!bVar24) {
    bVar1 = *(byte *)(iVar8 + 0xa8);
    *(byte *)(iVar8 + 0xa8) = bVar1 | 8;
    if ((((fVar31 == 1.0 && ALBW_AS_F32(pcVar32) == fVar27) && (fVar33 == fVar27 && local_e4 == fVar27))
        && (local_e0 == (undefined4 *)0x3f800000 && local_dc == fVar27)) &&
       ((local_d8 == fVar27 && local_d4 == fVar27) && local_d0 == 1.0)) {
      *(undefined4 *)(iVar8 + 0x18) = uVar4;
      *(float *)(iVar8 + 0x1c) = fVar27;
      *(float *)(iVar8 + 0x20) = fVar27;
      *(float *)(iVar8 + 0x24) = fVar27;
      *(undefined4 *)(iVar8 + 0x28) = uVar4;
      *(float *)(iVar8 + 0x2c) = fVar27;
      *(float *)(iVar8 + 0x30) = fVar27;
      *(float *)(iVar8 + 0x34) = fVar27;
      *(undefined4 *)(iVar8 + 0x38) = uVar4;
      bVar1 = bVar1 & 0xfb | 8;
    }
    else {
      func_001151CC((undefined4 *)(iVar8 + 0x18),(undefined4 *)&stack0xffffff10);
      bVar1 = *(byte *)(iVar8 + 0xa8) | 4;
    }
    *(byte *)(iVar8 + 0xa8) = bVar1;
  }
  func_0043625C(*(int **)(puVar3[0xe] + 0x14),puVar3 + -0x10);
  iVar8 = *(int *)(*piVar2 + 0x14);
  fVar31 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar8 + 4);
  bVar24 = fVar29 == fVar31;
  bVar25 = fVar31 <= fVar29;
  if (!bVar25 || bVar24) {
    bVar24 = fVar31 == fVar28;
    bVar25 = fVar28 <= fVar31;
  }
  if (bVar25 && !bVar24) {
LAB_0030755c:
    bVar24 = false;
  }
  else {
    fVar31 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar8 + 8);
    bVar24 = fVar29 == fVar31;
    bVar25 = fVar31 <= fVar29;
    if (!bVar25 || bVar24) {
      bVar24 = fVar31 == fVar28;
      bVar25 = fVar28 <= fVar31;
    }
    if (bVar25 && !bVar24) goto LAB_0030755c;
    fVar31 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar8 + 0xc);
    bVar24 = fVar29 == fVar31;
    bVar25 = fVar31 <= fVar29;
    if (!bVar25 || bVar24) {
      bVar24 = fVar31 == fVar28;
      bVar25 = fVar28 <= fVar31;
    }
    if (bVar25 && !bVar24) goto LAB_0030755c;
    bVar24 = true;
  }
  if (!bVar24) {
    *(byte *)(iVar8 + 0xa8) = *(byte *)(iVar8 + 0xa8) | 8;
    pfVar11 = DAT_00307624;
    fVar31 = ALBW_AS_F32(param_2[4]) - *DAT_00307624;
    bVar24 = fVar29 == fVar31;
    bVar25 = fVar31 <= fVar29;
    if (!bVar25 || bVar24) {
      bVar24 = fVar31 == fVar28;
      bVar25 = fVar28 <= fVar31;
    }
    if (bVar25 && !bVar24) {
LAB_00307654:
      *(uint *)(iVar8 + 4) = param_2[4];
      *(uint *)(iVar8 + 8) = param_2[5];
      *(uint *)(iVar8 + 0xc) = param_2[6];
      bVar1 = *(byte *)(iVar8 + 0xa8) | 2;
    }
    else {
      fVar31 = ALBW_AS_F32(param_2[5]) - DAT_00307624[1];
      bVar24 = fVar29 == fVar31;
      bVar25 = fVar31 <= fVar29;
      if (!bVar25 || bVar24) {
        bVar24 = fVar31 == fVar28;
        bVar25 = fVar28 <= fVar31;
      }
      if (bVar25 && !bVar24) goto LAB_00307654;
      fVar31 = ALBW_AS_F32(param_2[6]) - DAT_00307624[2];
      bVar24 = fVar29 == fVar31;
      bVar25 = fVar31 <= fVar29;
      if (!bVar25 || bVar24) {
        bVar24 = fVar31 == fVar28;
        bVar25 = fVar28 <= fVar31;
      }
      if (bVar25 && !bVar24) goto LAB_00307654;
      *(float *)(iVar8 + 4) = *DAT_00307624;
      piVar15 = (int *)CF_FBITS(pfVar11[1]);
      *(int **)(iVar8 + 8) = piVar15;
      *(float *)(iVar8 + 0xc) = pfVar11[2];
      bVar1 = *(byte *)(iVar8 + 0xa8) & 0xfd;
    }
    *(byte *)(iVar8 + 0xa8) = bVar1;
  }
  func_004EDAD0(puVar3[0xe],(uint *)&stack0xffffff10);
  pcVar13 = (code *)0x3;
  *(undefined2 *)(*piVar2 + 0x2c) = 0xffff;
  func_004A7F00(*piVar9,*piVar2,3);
  func_004ED9C8(*piVar2);
  *(undefined4 **)(*piVar2 + 0x28) = local_a4;
  puVar6 = local_a4;
LAB_003076bc:
  puVar3[-0x4c] = puVar3[-0x4c] | 1;
  func_00169A80((int *)puVar3[10],(undefined4)(uintptr_t)(puVar6),(undefined4)(uintptr_t)(pcVar13),piVar15);
  uVar4 = 0;
  func_00168E9C((int *)puVar3[10],puVar3[9],(int *)0x0);
  func_00169A80((int *)puVar3[0xb],extraout_r1_00,uVar4,piVar15);
  func_00168E9C((int *)puVar3[0xb],puVar3[9],(int *)0x0);
  func_004CEAF0(puVar3[9]);
  fVar31 = DAT_00307a24;
  if (puVar3[0xf] != 0) {
    local_d0 = ALBW_AS_F32(puVar3[0x27]);
    *(float *)(puVar3[0xf] + 0x5c) = local_d0;
    local_d0 = local_d0 * fVar31;
    iVar8 = *piVar20;
    local_d4 = fVar27;
    local_cc = fVar27;
    func_00115C54((float *)&local_e0,(float *)(puVar3 + -0x10),&local_d4);
    *(undefined4 **)(iVar8 + 4) = local_e0;
    *(float *)(iVar8 + 8) = local_dc;
    *(float *)(iVar8 + 0xc) = local_d8;
    func_004356B4((int *)*piVar20);
  }
  piVar19 = local_44;
  fVar31 = DAT_00307a28;
  if (puVar3[0x10] != 0) {
    fVar33 = ALBW_AS_F32(puVar3[0x27]);
    *(float *)(puVar3[0x10] + 0x5c) = fVar33;
    local_e0 = (undefined4 *)CF_FBITS((fVar33 * fVar31));
    iVar8 = *local_44;
    local_e4 = fVar27;
    local_dc = fVar27;
    func_00115C54(&local_d8,(float *)(puVar3 + -0x10),&local_e4);
    *(float *)(iVar8 + 4) = local_d8;
    *(float *)(iVar8 + 8) = local_d4;
    *(float *)(iVar8 + 0xc) = local_d0;
    func_004356B4((int *)*piVar19);
  }
  if (puVar3[0xe] != 0) {
    func_0043625C(*(int **)(puVar3[0xe] + 0x14),puVar3 + -0x10);
    func_004ED9C8(*piVar2);
  }
  puVar3[5] = (undefined4)(uintptr_t)(puVar16);
  *(undefined1 *)((int)puVar3 + 6) = 4;
  iVar8 = func_0010BA78(0x40);
  puVar6 = DAT_003071d0;
  puVar3[6] = iVar8;
  puVar3[7] = iVar8 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar12 = 4;
  puVar5 = (undefined4 *)(iVar8 + -8);
  do {
    uVar4 = puVar6[0x1b];
    iVar12 = iVar12 + -1;
    puVar5[2] = puVar6[0x1a];
    puVar5[3] = uVar4;
    uVar4 = puVar6[0x1b];
    puVar5[4] = puVar6[0x1a];
    puVar5[5] = uVar4;
    puVar5 = puVar5 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar17 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar17 << 3);
  puVar3[8] = (undefined4)(uintptr_t)(puVar5);
  if (uVar17 != 0) {
    puVar10 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar4 = puVar6[0xd];
      *puVar5 = puVar6[0xc];
      puVar5[1] = uVar4;
      puVar10 = puVar5;
    }
    for (iVar8 = (int)uVar17 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar4 = puVar6[0xd];
      puVar10[2] = puVar6[0xc];
      puVar10[3] = uVar4;
      uVar4 = puVar6[0xd];
      puVar10[4] = puVar6[0xc];
      puVar10[5] = uVar4;
      puVar10 = puVar10 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 4;
    iVar8 = func_00100118((int)(puVar6 + 2),DAT_00307a2c,0x24,4);
  }
  if (iVar8 != 0) {
    puVar3[2] = 4;
    puVar3[3] = iVar8;
  }
  iVar8 = DAT_00307a30;
  puVar3[-0x2f] = (undefined4)(uintptr_t)(puVar3);
  *(undefined2 *)(iVar8 + (int)puVar16) = 4;
  local_9c = (uint *)s_cState_Wait_00307a34;
  local_a0 = iVar7;
  iVar8 = puVar3[3];
  puVar21 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar7 + 8))(&local_a0);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_9c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_00307960;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_00307960:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar17) {
    uVar17 = iVar8 - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar21,local_9c,uVar17);
  *(undefined1 *)((int)puVar21 + uVar17) = 0;
  puVar6 = (undefined4 *)puVar3[6];
  uVar14 = DAT_003071d0[0xc];
  uVar22 = DAT_003071d0[9];
  uVar23 = DAT_003071d0[10];
  uVar18 = DAT_003071d0[0xb];
  uVar4 = DAT_003071d0[0xd];
  *puVar6 = DAT_003071d0[8];
  puVar6[1] = uVar22;
  puVar6 = (undefined4 *)puVar3[7];
  puVar6[1] = uVar18;
  *puVar6 = uVar23;
  puVar6 = (undefined4 *)puVar3[8];
  puVar6[1] = uVar4;
  *puVar6 = uVar14;
  local_9c = (uint *)s_cState_GoDown_00307a40;
  local_a0 = iVar7;
  if ((uint)puVar3[2] < 2) {
    iVar8 = puVar3[3];
  }
  else {
    iVar8 = puVar3[3] + 0x24;
  }
  puVar21 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar7 + 8))(&local_a0);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_9c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_00307a5c;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_00307a5c:
  if (*(int *)(iVar8 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar21,local_9c,uVar17);
  *(undefined1 *)((int)puVar21 + uVar17) = 0;
  iVar8 = puVar3[6];
  uVar4 = *DAT_00307c94;
  uVar14 = DAT_00307c94[1];
  uVar22 = DAT_00307c94[3];
  uVar18 = DAT_00307c94[4];
  uVar23 = DAT_00307c94[5];
  *(undefined4 *)(iVar8 + 8) = DAT_00307c94[2];
  *(undefined4 *)(iVar8 + 0xc) = uVar22;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 8) = uVar18;
  *(undefined4 *)(iVar8 + 0xc) = uVar23;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 8) = uVar4;
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  local_9c = (uint *)s_cState_Down_00307c98;
  local_a0 = iVar7;
  if ((uint)puVar3[2] < 3) {
    iVar8 = puVar3[3];
  }
  else {
    iVar8 = puVar3[3] + 0x48;
  }
  puVar21 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar7 + 8))(&local_a0);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_9c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_00307b20;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_00307b20:
  if (*(int *)(iVar8 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar21,local_9c,uVar17);
  *(undefined1 *)((int)puVar21 + uVar17) = 0;
  puVar6 = DAT_003071d0;
  iVar8 = puVar3[6];
  uVar4 = DAT_003071d0[0xc];
  uVar14 = DAT_003071d0[0x14];
  uVar22 = DAT_003071d0[0x13];
  uVar18 = DAT_003071d0[0x15];
  uVar23 = DAT_003071d0[0xd];
  *(undefined4 *)(iVar8 + 0x10) = DAT_003071d0[0x12];
  *(undefined4 *)(iVar8 + 0x14) = uVar22;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar14;
  *(undefined4 *)(iVar8 + 0x14) = uVar18;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar4;
  *(undefined4 *)(iVar8 + 0x14) = uVar23;
  local_9c = (uint *)s_cState_Pushing_00307ca4;
  local_a0 = iVar7;
  if ((uint)puVar3[2] < 4) {
    iVar8 = puVar3[3];
  }
  else {
    iVar8 = puVar3[3] + 0x6c;
  }
  puVar21 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar7 + 8))(&local_a0);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_9c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_00307bf8;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_00307bf8:
  if (*(int *)(iVar8 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar21,local_9c,uVar17);
  *(undefined1 *)((int)puVar21 + uVar17) = 0;
  iVar7 = puVar3[6];
  uVar4 = puVar6[0xc];
  uVar18 = puVar6[0x17];
  uVar23 = puVar6[0xd];
  uVar14 = puVar6[0x18];
  uVar22 = puVar6[0x19];
  *(undefined4 *)(iVar7 + 0x18) = puVar6[0x16];
  *(undefined4 *)(iVar7 + 0x1c) = uVar18;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar14;
  *(undefined4 *)(iVar7 + 0x1c) = uVar22;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar4;
  *(undefined4 *)(iVar7 + 0x1c) = uVar23;
  func_006649C8(puVar3,0);
  uVar17 = param_2[10];
  *(char *)(puVar3 + 0x2a) = (char)(ushort)uVar17;
  if (2 < ((ushort)uVar17 & 0xff)) {
    *(undefined1 *)(puVar3 + 0x2a) = 0;
  }
  return puVar16;
}

