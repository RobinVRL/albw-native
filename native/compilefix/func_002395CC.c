/* compilefix: USA 002395CC (EU 002395CC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [4]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001E510C(int param_1,float *param_2);
extern int func_002389D0(int param_1);
extern int func_00238DD4(undefined1 *param_1,char *param_2,float *param_3);
extern int func_00291910(int param_1);
extern int func_0034CA20(undefined4 *param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A1CDC(int param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00688C34(float *param_1,float fparam_0,float fparam_1);
extern int func_0068C690(float *param_1);
extern float DAT_00239988;
extern undefined4 DAT_0023998c;
extern undefined4 DAT_00239990;
extern float DAT_00239994;
extern float DAT_00239998;
extern float DAT_0023999c;
extern int *DAT_002399a0;
extern int *DAT_002399c4;
extern undefined4 *DAT_002399c8;
extern undefined4 *DAT_002399cc;
extern int *DAT_002399d0;
extern undefined DAT_00239d60;
extern char s_SE_Shrub_BREAK_002399b4[];
extern char s_SE_Shrub_BREAK_ICE_00239d3c[];
extern char s_SE_Shrub_BURN_00239d50[];
extern char s_SE_Shrub_CUT_002399a4[];

// USA 002395CC <- EU 002395CC (Ghidra, non-matching)
// GLOBAL DAT_00239988 float
// GLOBAL DAT_0023998c undefined4
// GLOBAL DAT_00239990 undefined4
// GLOBAL DAT_00239994 float
// GLOBAL DAT_00239998 float
// GLOBAL DAT_0023999c float
// GLOBAL DAT_002399a0 int *
// GLOBAL DAT_002399c4 int *
// GLOBAL DAT_002399c8 undefined4 *
// GLOBAL DAT_002399cc undefined4 *
// GLOBAL DAT_002399d0 int *
// GLOBAL DAT_00239d60 undefined
// GLOBAL s_SE_Shrub_BREAK_002399b4 string
// GLOBAL s_SE_Shrub_BREAK_ICE_00239d3c string
// GLOBAL s_SE_Shrub_BURN_00239d50 string
// GLOBAL s_SE_Shrub_CUT_002399a4 string

void func_002395CC(int *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fparam_1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  fVar2 = DAT_0023999c;
  fVar1 = DAT_00239988;
  iVar12 = 0;
  uVar13 = 0;
  iVar14 = param_1[0x18b];
  iVar15 = param_1[0x18c];
  if (iVar14 != 0) {
    iVar16 = (int)ALBW_AS_U32(DAT_00239988) + 0x80000000;
    uVar19 = DAT_0023998c;
    uVar20 = DAT_00239990;
    fparam_1 = DAT_00239994;
    fparam_0 = DAT_00239998;
    do {
      uVar11 = param_1[0x11e];
      iVar4 = *(int *)(*DAT_002399a0 + 0x18);
      iVar5 = iVar4;
      if (uVar13 < uVar11) {
        iVar5 = param_1[0x120];
      }
      if (uVar13 < uVar11) {
        iVar5 = *(int *)(iVar5 + uVar13 * 4);
      }
      else {
        iVar5 = 0;
      }
      fVar18 = *(float *)(iVar5 + 4) - *(float *)(iVar4 + 0x1b0);
      fVar17 = *(float *)(iVar5 + 0xc) - *(float *)(iVar4 + 0x1b8);
      if (((((uint)ALBW_AS_U32(fVar18) <= (uint)ALBW_AS_U32(fVar1)) && ((int)ALBW_AS_U32(fVar18) <= iVar16)) &&
          ((uint)ALBW_AS_U32(fVar17) <= (uint)ALBW_AS_U32(fVar1))) && ((int)ALBW_AS_U32(fVar17) <= iVar16)) {
        pcVar6 = (char *)(iVar15 + iVar12 * 0xd8);
        cVar3 = *pcVar6;
        if (cVar3 == '\0') {
          uVar9 = *(undefined4 *)(*(int *)(pcVar6 + 0x7c) + 0x18);
          if (uVar13 < uVar11) {
            iVar5 = *(int *)(param_1[0x120] + uVar13 * 4);
          }
          else {
            iVar5 = 0;
          }
          func_001E510C((int)(pcVar6 + 0x98),(float *)(iVar5 + 4));
          func_0014E2A0((int)param_1,uVar9,iVar15 + iVar12 * 0xd8 + 0xac,0x1f00,0,0);
          iVar5 = iVar15 + iVar12 * 0xd8;
          func_0014E2A0((int)param_1,*(undefined4 *)(*(int *)(iVar5 + 0x80) + 0x18),iVar5 + 0xbc,
                        0x100,0,0);
          puVar10 = (undefined1 *)(iVar15 + iVar12 * 0xd8);
          local_50 = ALBW_AS_F32(CONCAT31((*(undefined4 *)((char *)&local_50 + 1) & 0xFFFFFF),*(undefined1 *)(*(int *)(puVar10 + 0xcc) + 0x21)
                                    ));
          if (uVar13 < (uint)param_1[0x11e]) {
            iVar5 = *(int *)(param_1[0x120] + uVar13 * 4);
          }
          else {
            iVar5 = 0;
          }
          func_00238DD4(puVar10,(char *)&local_50,(float *)(iVar5 + 4));
          pcVar6 = (char *)(iVar15 + iVar12 * 0xd8);
          if (*pcVar6 == '\x02') {
            if ((*(undefined1 *)((char *)&local_50 + 0)) == '\x01') {
LAB_00239808:
              local_40 = fVar2;
              local_3c = s_SE_Shrub_BREAK_002399b4;
              func_0014DBF4(param_1,(int *)&local_40,(undefined4)(uintptr_t)(pcVar6 + 0x1c),0);
            }
            else if ((*(undefined1 *)((char *)&local_50 + 0)) == '\x05' || (*(undefined1 *)((char *)&local_50 + 0)) == '\x06') {
              local_40 = fVar2;
              local_3c = s_SE_Shrub_CUT_002399a4;
              func_0014DBF4(param_1,(int *)&local_40,(undefined4)(uintptr_t)(pcVar6 + 0x1c),0);
            }
            else if ((*(undefined1 *)((char *)&local_50 + 0)) == '\x0f') goto LAB_00239808;
          }
        }
        else if (cVar3 == '\x01') {
          if ((*(int *)(iVar15 + iVar12 * 0xd8 + 0x88) == 0) ||
             (*(int *)(pcVar6 + 0x88) = *(int *)(pcVar6 + 0x88) + -1,
             *(int *)(iVar15 + iVar12 * 0xd8 + 0x88) == 0)) {
            func_00291910(*DAT_002399c4);
            local_50 = fVar2;
            local_4c = s_SE_Shrub_CUT_002399a4;
            func_0014DBF4(param_1,(int *)&local_50,iVar15 + iVar12 * 0xd8 + 0x1c,0);
            uVar8 = 2;
            puVar10 = (undefined1 *)(iVar15 + iVar12 * 0xd8);
LAB_002398b8:
            *puVar10 = uVar8;
          }
        }
        else if (cVar3 == '\x02') {
          func_004A8304(*DAT_002399c8,*(int *)(pcVar6 + 0x7c));
          func_004A8304(*DAT_002399c8,*(int *)(pcVar6 + 0x80));
          func_00115C70((float *)(pcVar6 + 0x34),(float *)(pcVar6 + 0x10),
                        *(float **)(*DAT_002399c4 + 0x1c));
          func_00115DC8((float *)(pcVar6 + 0x34));
          *(undefined4 *)(pcVar6 + 0x2c) = uVar19;
          *(undefined4 *)(pcVar6 + 0x40) = uVar19;
          *(undefined4 *)(pcVar6 + 0x44) = uVar20;
          local_50 = -*(float *)(pcVar6 + 0x34);
          local_4c = (char *)CF_FBITS(-*(float *)(pcVar6 + 0x38));
          local_48 = -*(float *)(pcVar6 + 0x3c);
          iVar5 = func_0068C690(&local_50);
          *(int *)(pcVar6 + 0x50) = iVar5;
          *(undefined4 *)(pcVar6 + 0x60) = *DAT_002399cc;
          uVar11 = func_00111A64((uint *)(*DAT_002399d0 + 0x660));
          if ((uVar11 & 1) != 0) {
            pcVar6[0xd4] = '\x01';
          }
          (**(code **)(**(int **)(pcVar6 + 8) + 0x10))(*(int **)(pcVar6 + 8),0x25);
          cVar3 = '\x03';
LAB_00239c04:
          *pcVar6 = cVar3;
        }
        else if (cVar3 == '\x03') {
          func_002389D0((int)pcVar6);
        }
        else if (cVar3 == '\x04') {
          func_0014E2A0((int)param_1,*(undefined4 *)(*(int *)(pcVar6 + 0x7c) + 0x18),(undefined4)(uintptr_t)(pcVar6 + 0xac),
                        0x1f00,0,0);
          puVar10 = (undefined1 *)(iVar15 + iVar12 * 0xd8);
          cVar3 = *(char *)(*(int *)(puVar10 + 0xcc) + 0x21);
          if (cVar3 == '\x06') {
LAB_00239a50:
            *puVar10 = 5;
          }
          else if (cVar3 < '\a') {
            if ((cVar3 == '\x01' || cVar3 == '\x03') || cVar3 == '\x05') goto LAB_00239a50;
          }
          else if ((cVar3 == '\b' || cVar3 == '\r') || cVar3 == '\x0f') goto LAB_00239a50;
          if (*(uint *)(puVar10 + 0x90) <= *(uint *)(puVar10 + 0x8c)) {
            uVar8 = 5;
            goto LAB_002398b8;
          }
          *(uint *)(puVar10 + 0x8c) = *(uint *)(puVar10 + 0x8c) + 1;
        }
        else if (cVar3 == '\x05') {
          if (uVar13 < (uint)param_1[0x184]) {
            iVar5 = *(int *)(param_1[0x186] + uVar13 * 4);
          }
          else {
            iVar5 = 0;
          }
          func_003521F0(iVar5 + 4,0);
          if (uVar13 < (uint)param_1[0x184]) {
            piVar7 = *(int **)(param_1[0x186] + uVar13 * 4);
          }
          else {
            piVar7 = (int *)0x0;
          }
          (**(code **)(*piVar7 + 0x40))(piVar7);
          local_50 = fVar2;
          local_4c = s_SE_Shrub_BREAK_ICE_00239d3c;
          func_0014DBF4(param_1,(int *)&local_50,iVar15 + iVar12 * 0xd8 + 0x1c,0);
          puVar10 = (undefined1 *)(iVar15 + iVar12 * 0xd8);
          iVar5 = *(int *)(puVar10 + 0xa0);
          *(undefined1 *)(iVar5 + 0x3d) = 1;
          *(undefined4 *)(iVar5 + 0x39) = *(undefined4 *)(puVar10 + 0xa4);
          iVar5 = *(int *)(puVar10 + 0xa0);
          *(undefined1 *)(iVar5 + 0x42) = 1;
          *(undefined4 *)(iVar5 + 0x3e) = *(undefined4 *)(puVar10 + 0xa8);
          func_004A8304(*DAT_002399c8,*(int *)(puVar10 + 0x7c));
          func_004A8304(*DAT_002399c8,*(int *)(puVar10 + 0x80));
          func_004CF478(*(int *)(puVar10 + 0xc),0);
          func_004CF478(*(int *)(puVar10 + 8),0);
          *puVar10 = 8;
        }
        else {
          if (cVar3 == '\x06') {
            local_50 = fVar2;
            local_4c = s_SE_Shrub_BURN_00239d50;
            func_0014DBF4(param_1,(int *)&local_50,(undefined4)(uintptr_t)(pcVar6 + 0x1c),0);
            if (uVar13 < (uint)param_1[0x184]) {
              iVar5 = *(int *)(param_1[0x186] + uVar13 * 4);
            }
            else {
              iVar5 = 0;
            }
            if (*(int *)(iVar5 + 0x24) != 0) {
              func_004A1B9C((int *)&local_40,*(int *)(iVar5 + 0x24),(uint *)&DAT_00239d60);
            }
            pcVar6 = (char *)(iVar15 + iVar12 * 0xd8);
            func_004A8304(*DAT_002399c8,*(int *)(pcVar6 + 0x7c));
            func_004A8304(*DAT_002399c8,*(int *)(pcVar6 + 0x80));
            cVar3 = '\a';
            goto LAB_00239c04;
          }
          if (cVar3 == '\a') {
            func_004CEAF0(*(int *)(pcVar6 + 0xc));
            *(undefined4 *)(*(int *)(pcVar6 + 0xc) + 0x158) = *(undefined4 *)(pcVar6 + 0x4c);
            func_004CEAF0(*(int *)(pcVar6 + 8));
            *(undefined4 *)(*(int *)(pcVar6 + 8) + 0x158) = *(undefined4 *)(pcVar6 + 0x4c);
            iVar5 = func_00688C34((float *)(pcVar6 + 0x4c),fparam_0,fparam_1);
            if (iVar5 != 0) {
              func_004CF478(*(int *)(pcVar6 + 0xc),0);
              func_004CF478(*(int *)(pcVar6 + 8),0);
              *pcVar6 = '\b';
            }
          }
          else if (cVar3 == '\b') {
            if (uVar13 < (uint)param_1[0x184]) {
              iVar5 = *(int *)(param_1[0x186] + uVar13 * 4);
            }
            else {
              iVar5 = 0;
            }
            if (*(int *)(iVar5 + 0x24) != 0) {
              func_004A1CDC(*(int *)(iVar5 + 0x24));
            }
            iVar4 = iVar15 + iVar12 * 0xd8;
            iVar5 = *(int *)(iVar4 + 0x9c);
            *(undefined1 *)(iVar5 + 0x3d) = 1;
            *(undefined4 *)(iVar5 + 0x39) = *(undefined4 *)(iVar4 + 0xa4);
            iVar5 = iVar15 + iVar12 * 0xd8;
            iVar4 = *(int *)(iVar5 + 0x9c);
            *(undefined1 *)(iVar4 + 0x42) = 1;
            *(undefined4 *)(iVar4 + 0x3e) = *(undefined4 *)(iVar5 + 0xa8);
          }
        }
        func_0034CA20(*(undefined4 **)(iVar15 + iVar12 * 0xd8 + 0xcc));
        func_0034CA20(*(undefined4 **)(iVar15 + iVar12 * 0xd8 + 0xd0));
      }
      iVar12 = iVar12 + 1;
      uVar13 = uVar13 + 1;
    } while (iVar12 != iVar14);
  }
  return;
}

