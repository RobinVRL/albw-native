/* compilefix: USA 00306564 (EU 00306540), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00275438(int param_1);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_0034CA20(undefined4 *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_003615D8(int param_1);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_00520F54(int param_1,float *param_2,undefined4 param_3);
extern int func_00520FA8(int param_1,int *param_2);
extern float func_00521238(int param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_0053B348(int param_1,float *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern undefined4 DAT_00306964;
extern float DAT_00306968;
extern undefined4 DAT_0030696c;
extern int *DAT_00306970;
extern undefined * *DAT_00306974;
extern uint *DAT_00306978;
extern uint *DAT_0030697c;
extern int *DAT_00306a74;
extern int DAT_00306a78;

// USA 00306564 <- EU 00306540 (Ghidra, non-matching)
// GLOBAL DAT_00306964 undefined4
// GLOBAL DAT_00306968 float
// GLOBAL DAT_0030696c undefined4
// GLOBAL DAT_00306970 int *
// GLOBAL DAT_00306974 undefined * *
// GLOBAL DAT_00306978 uint *
// GLOBAL DAT_0030697c uint *
// GLOBAL DAT_00306a74 int *
// GLOBAL DAT_00306a78 int

undefined4 func_00306564(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  float extraout_r1;
  float extraout_r1_00;
  float extraout_r1_01;
  float extraout_r1_02;
  float extraout_r1_03;
  float extraout_r1_04;
  float extraout_r1_05;
  float extraout_r1_06;
  float extraout_r1_07;
  float extraout_r1_08;
  undefined4 extraout_r1_09;
  int *piVar7;
  code *pcVar8;
  undefined4 uVar9;
  code **ppcVar10;
  int *piVar11;
  int *piVar12;
  uint in_fpscr;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define fStack_80 (*(float *)(albw_frame + 0x0))
  #define pcStack_7c (*(code * *)(albw_frame + 0x4))
  #define local_78 (*(code ** *)(albw_frame + 0x8))
  #define local_74 ((int *)(albw_frame + 0xc))
  #define local_6c (*(int * *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x2c))
  #define local_50 (*(code * *)(albw_frame + 0x30))
  #define local_4c (*(code * *)(albw_frame + 0x34))
  #define local_48 (*(code * *)(albw_frame + 0x38))
  #define local_44 (*(code * *)(albw_frame + 0x3c))
  #define local_40 (*(code * *)(albw_frame + 0x40))
  #define pcStack_3c (*(code * *)(albw_frame + 0x44))
  #define pcStack_38 (*(code * *)(albw_frame + 0x48))
  ppcVar10 = (code **)(int)*(char *)(param_1 + 0x414);
  uVar6 = *(uint *)(*(int *)(param_1 + 0x42c) + (int)ppcVar10 * 8 + 4);
  piVar2 = (int *)(*(int *)(param_1 + 0x42c) + (int)ppcVar10 * 8);
  piVar7 = (int *)(*(int *)(param_1 + 0x424) + ((int)uVar6 >> 1));
  if ((uVar6 & 1) != 0) {
    piVar2 = (int *)(*piVar2 + *piVar7);
  }
  (*(code *)*piVar2)(piVar7);
  pcVar8 = *(code **)(param_1 + 0x420);
  iVar3 = *(int *)(param_1 + 0x410) + 1;
  *(int *)(param_1 + 0x410) = iVar3;
  if (pcVar8 != (code *)0x0) {
    fVar13 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210((int)pcVar8,1,fVar13);
  }
  piVar2 = DAT_00306970;
  uVar16 = (ulonglong)(uint)ALBW_AS_U32(DAT_00306968);
  uVar14 = CONCAT44(DAT_00306964,DAT_0030696c);
  local_6c = (int *)(param_1 + 0x448);
  piVar11 = (int *)(param_1 + 0x450);
  piVar12 = (int *)(param_1 + 0x44c);
  piVar7 = (int *)(param_1 + 0x434);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    piVar2 = *(int **)(param_1 + 0x440);
    iVar3 = 0;
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
    }
    fVar13 = 0.0;
    if ((piVar2 != (int *)0x0 && iVar3 != 0) &&
       ((fVar15 = DAT_00306968, *(char *)(param_1 + 0x4a9) == '\0' ||
        (bVar1 = func_00588BF0(param_1,0), fVar13 = extraout_r1_03, bVar1)))) {
      func_00275438(*(int *)(param_1 + 0x440));
      func_0053B348(*(int *)(param_1 + 0x440),(float *)(param_1 + 0x3d0));
      iVar3 = *(int *)(param_1 + 0x434);
      fVar13 = extraout_r1_04;
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
        pcVar8 = *(code **)(param_1 + 1000);
        ppcVar10 = (code **)0x0;
        func_00491938((float *)(iVar3 + 0x80),0,(uint)pcVar8,0);
        iVar3 = *piVar7;
        *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
        *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
        *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
        func_004CEAF0(*piVar7);
        fVar13 = extraout_r1_05;
      }
      if (*(int *)(param_1 + 0x44c) != 0) {
        fVar13 = *(float *)(param_1 + 0x4ac);
        *(float *)(*(int *)(param_1 + 0x44c) + 0x5c) = fVar13;
        local_48 = (code *)CF_FBITS((fVar13 * ALBW_AS_F32(((ulonglong)uVar14 >> 0x20))));
        local_4c = (code *)uVar14;
        iVar3 = *piVar12;
        local_44 = local_4c;
        func_00115C54((float *)&local_40,(float *)(param_1 + 0x3d0),(float *)&local_4c);
        ppcVar10 = &local_40;
        *(code **)(iVar3 + 4) = local_40;
        *(code **)(iVar3 + 8) = pcStack_3c;
        *(code **)(iVar3 + 0xc) = pcStack_38;
        func_004356B4((int *)*piVar12);
        fVar13 = extraout_r1_06;
        pcVar8 = pcStack_38;
      }
      if (*(int *)(param_1 + 0x450) != 0) {
        fVar13 = *(float *)(param_1 + 0x4ac);
        *(float *)(*(int *)(param_1 + 0x450) + 0x5c) = fVar13;
        local_4c = (code *)CF_FBITS((fVar13 * fVar15));
        local_50 = (code *)uVar14;
        iVar3 = *piVar11;
        local_48 = local_50;
        func_00115C54((float *)&local_44,(float *)(param_1 + 0x3d0),(float *)&local_50);
        ppcVar10 = &local_44;
        *(code **)(iVar3 + 4) = local_44;
        *(code **)(iVar3 + 8) = local_40;
        *(code **)(iVar3 + 0xc) = pcStack_3c;
        func_004356B4((int *)*piVar11);
        fVar13 = extraout_r1_07;
        pcVar8 = pcStack_3c;
      }
      piVar2 = local_6c;
      if (*(int *)(param_1 + 0x448) != 0) {
        func_0043625C(*(int **)(*(int *)(param_1 + 0x448) + 0x14),(undefined4 *)(param_1 + 0x3d0));
        iVar3 = *piVar2;
LAB_00306958:
        func_004ED9C8(iVar3);
        fVar13 = extraout_r1_08;
      }
    }
  }
  else {
    iVar3 = 0;
    local_78 = (code **)(DAT_00306974);
    do {
      pcVar8 = (code *)0x0;
      puVar4 = (undefined4 *)func_0052FBDC(*piVar2 + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0);
      fVar13 = extraout_r1;
      if (puVar4 != (undefined4 *)0x0) {
        if (((*DAT_00306978 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00306978), iVar5 != 0))
        {
          *DAT_0030697c = (uint)local_78;
        }
        pcVar8 = *(code **)*puVar4;
        uVar17 = (*pcVar8)(puVar4,DAT_0030697c);
        fVar13 = ALBW_AS_F32(((ulonglong)uVar17 >> 0x20));
        fVar15 = ALBW_AS_F32(uVar16);
        if ((int)uVar17 == 0) {
          puVar4 = (undefined4 *)0x0;
        }
        if (puVar4 != (undefined4 *)0x0) {
          func_00115C54(&fStack_80,(float *)(puVar4 + 0xf4),(float *)(param_1 + 0x49c));
          *(float *)(param_1 + 0x3d0) = fStack_80;
          *(code **)(param_1 + 0x3d4) = pcStack_7c;
          *(code ***)(param_1 + 0x3d8) = local_78;
          iVar3 = *(int *)(param_1 + 0x434);
          fVar13 = fStack_80;
          ppcVar10 = local_78;
          if (iVar3 != 0) {
            *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
            func_00491938((float *)(iVar3 + 0x80),0,*(uint *)(param_1 + 1000),0);
            iVar3 = *piVar7;
            ppcVar10 = (code **)(*(uint *)(iVar3 + 0x164) | 0x40000000);
            *(code ***)(iVar3 + 0x164) = ppcVar10;
            *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
            pcStack_7c = *(code **)(param_1 + 0x3d4);
            *(code **)(iVar3 + 0x9c) = pcStack_7c;
            *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
            func_004CEAF0(*piVar7);
            fVar13 = extraout_r1_00;
          }
          pcVar8 = pcStack_7c;
          if (*(int *)(param_1 + 0x44c) != 0) {
            local_64 = *(float *)(param_1 + 0x4ac);
            *(float *)(*(int *)(param_1 + 0x44c) + 0x5c) = local_64;
            local_64 = local_64 * ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
            local_68 = ALBW_AS_F32(uVar14);
            iVar3 = *piVar12;
            local_60 = local_68;
            func_00115C54((float *)&local_48,(float *)(param_1 + 0x3d0),&local_68);
            ppcVar10 = &local_48;
            *(code **)(iVar3 + 4) = local_48;
            *(code **)(iVar3 + 8) = local_44;
            *(code **)(iVar3 + 0xc) = local_40;
            func_004356B4((int *)*piVar12);
            fVar13 = extraout_r1_01;
            pcVar8 = local_40;
          }
          if (*(int *)(param_1 + 0x450) != 0) {
            local_58 = *(float *)(param_1 + 0x4ac);
            *(float *)(*(int *)(param_1 + 0x450) + 0x5c) = local_58;
            local_58 = local_58 * fVar15;
            local_5c = ALBW_AS_F32(uVar14);
            iVar3 = *piVar11;
            local_54 = local_5c;
            func_00115C54((float *)&local_4c,(float *)(param_1 + 0x3d0),&local_5c);
            ppcVar10 = &local_4c;
            *(code **)(iVar3 + 4) = local_4c;
            *(code **)(iVar3 + 8) = local_48;
            *(code **)(iVar3 + 0xc) = local_44;
            pcVar8 = local_44;
            func_004356B4((int *)*piVar11);
            fVar13 = extraout_r1_02;
          }
          if (*(int *)(param_1 + 0x448) != 0) {
            func_0043625C(*(int **)(*(int *)(param_1 + 0x448) + 0x14),
                          (undefined4 *)(param_1 + 0x3d0));
            iVar3 = *local_6c;
            goto LAB_00306958;
          }
          break;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x5c));
  }
  func_00169A80(*(int **)(param_1 + 0x438),ALBW_AS_U32(fVar13),(undefined4)(uintptr_t)(pcVar8),(int *)ppcVar10);
  uVar9 = 0;
  func_00168E9C(*(int **)(param_1 + 0x438),*(int *)(param_1 + 0x434),(int *)0x0);
  func_00169A80(*(int **)(param_1 + 0x43c),extraout_r1_09,uVar9,(int *)ppcVar10);
  func_00168E9C(*(int **)(param_1 + 0x43c),*(int *)(param_1 + 0x434),(int *)0x0);
  func_004CEAF0(*(int *)(param_1 + 0x434));
  piVar2 = DAT_00306a74;
  if (((**(int **)(param_1 + 0x454) != 0) || (**(int **)(param_1 + 0x458) != 0)) &&
     (*DAT_00306a74 != 0)) {
    func_00520F54(param_1,&fStack_80,*(undefined4 *)(*DAT_00306a74 + 0x1c));
    local_74[0] = 0;
    func_00520FA8(param_1,local_74);
    func_003413DC(*piVar2,&fStack_80,local_74);
  }
  if (((*(char *)(param_1 + 0x414) != '\0') &&
      (fVar13 = func_00521238(param_1), (int)ALBW_AS_U32(fVar13) < DAT_00306a78)) &&
     (iVar3 = *piVar2, iVar3 != 0)) {
    func_003615D8(iVar3);
  }
  func_0034CA20(*(undefined4 **)(param_1 + 0x454));
  return func_0034CA20(*(undefined4 **)(param_1 + 0x458));
}

