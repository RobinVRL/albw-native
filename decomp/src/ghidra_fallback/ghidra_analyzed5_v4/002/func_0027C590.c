#include "ghidra_types.h"

extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0027BF7C(undefined4 param_1,float *param_2);
extern int func_002DFFF4(uint *param_1,uint param_2);
extern int func_0034CA20(undefined4 *param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0027c8e0;
extern float DAT_0027c8e4;
extern float DAT_0027c8e8;
extern float DAT_0027c8ec;
extern float DAT_0027c8f0;
extern uint DAT_0027c8f4;
extern float DAT_0027c8f8;
extern float DAT_0027c8fc;
extern undefined4 DAT_0027c900;
extern int *DAT_0027c918;
extern undefined4 *DAT_0027c91c;

// USA 0027C590 <- EU 0027C5B8 (Ghidra, non-matching)
// GLOBAL DAT_0027c8e0 int *
// GLOBAL DAT_0027c8e4 float
// GLOBAL DAT_0027c8e8 float
// GLOBAL DAT_0027c8ec float
// GLOBAL DAT_0027c8f0 float
// GLOBAL DAT_0027c8f4 uint
// GLOBAL DAT_0027c8f8 float
// GLOBAL DAT_0027c8fc float
// GLOBAL DAT_0027c900 undefined4
// GLOBAL DAT_0027c918 int *
// GLOBAL DAT_0027c91c undefined4 *

/* WARNING: Removing unreachable block (ram,0x0027c798) */
/* WARNING: Removing unreachable block (ram,0x0027c7a0) */
/* WARNING: Removing unreachable block (ram,0x0027c7b0) */

void func_0027C590(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x60]; /* entry_sp - 0x60 .. entry_sp + 0x0 */
#define stack0xffffffa8 (*(undefined4 *)(albw_frame + 0x8))
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  
  uVar10 = 0xffffffff;
  iVar8 = 0;
  iVar11 = param_1[0x189];
  iVar9 = param_1[0x18a];
  puVar2 = *(uint **)(*DAT_0027c8e0 + 0x3dbe4);
  if (iVar11 != 0) {
    uVar23 = (ulonglong)DAT_0027c8f4;
    fVar17 = DAT_0027c8fc;
    fVar18 = DAT_0027c8ec;
    fVar21 = DAT_0027c8e4;
    fVar22 = DAT_0027c8e8;
    fVar19 = DAT_0027c8f0;
    fVar20 = DAT_0027c8f8;
    do {
      uVar10 = uVar10 + 1;
      pcVar3 = (char *)(iVar9 + iVar8 * 0x28);
      cVar1 = *pcVar3;
      if (cVar1 == '\0') {
        func_0034CA20(*(undefined4 **)(pcVar3 + 0xc));
        func_0014E2A0((int)param_1,*(undefined4 *)(iVar9 + iVar8 * 0x28 + 8),
                      iVar9 + iVar8 * 0x28 + 0x14,0x400,0,0);
        if (*(char *)(*(int *)(iVar9 + iVar8 * 0x28 + 0xc) + 0x21) == '\b') {
          if (uVar10 < (uint)param_1[0x11e]) {
            iVar4 = *(int *)(param_1[0x120] + uVar10 * 4);
          }
          else {
            iVar4 = 0;
          }
          iVar12 = func_0027BF7C(param_1,(float *)(iVar4 + 4));
          if (iVar12 != 0) {
            *(undefined1 *)(iVar9 + iVar8 * 0x28) = 1;
            func_0014DBF4(param_1,(int *)&stack0xffffffa8,iVar4 + 4,0);
          }
        }
      }
      else if (cVar1 == '\x01') {
        iVar12 = *(int *)(iVar9 + iVar8 * 0x28 + 4);
        iVar4 = func_00588BE4((int)param_1);
        if (iVar4 == *DAT_0027c918) {
          pfVar5 = (float *)(iVar9 + iVar8 * 0x28 + 0x24);
          fVar15 = *pfVar5;
          fVar13 = (fVar21 - fVar15) * fVar22;
          if (fVar13 <= fVar17) {
            fVar13 = -fVar13;
          }
          fVar14 = fVar18;
          if ((fVar18 <= fVar13) && (fVar14 = fVar13, fVar19 < fVar13)) {
            fVar14 = fVar19;
          }
          fVar14 = fVar15 + fVar14;
          if ((fVar21 <= fVar14) || (fVar14 < fVar15)) {
            iVar4 = 1;
            *pfVar5 = fVar21;
          }
          else {
            iVar4 = 0;
            *pfVar5 = fVar14;
          }
          if (uVar10 < (uint)param_1[0x11e]) {
            iVar6 = *(int *)(param_1[0x120] + uVar10 * 4);
          }
          else {
            iVar6 = 0;
          }
          uVar7 = *(undefined4 *)(iVar6 + 0xc);
          uVar16 = *(undefined4 *)(iVar6 + 4);
          fVar13 = *(float *)(iVar6 + 8);
          fVar15 = *(float *)(iVar9 + iVar8 * 0x28 + 0x24);
          *(uint *)(iVar12 + 0x164) = *(uint *)(iVar12 + 0x164) | 0x40000000;
          *(undefined4 *)(iVar12 + 0x8c) = uVar16;
          *(float *)(iVar12 + 0x9c) = fVar13 - fVar15;
          *(undefined4 *)(iVar12 + 0xac) = uVar7;
          func_004CEAF0(iVar12);
          fVar15 = fVar20 - *(float *)(iVar9 + iVar8 * 0x28 + 0x24) * ALBW_AS_F32(uVar23);
          fVar13 = fVar17;
          if ((fVar17 <= fVar15) && (fVar13 = fVar15, 0x3f800000 < (int)ALBW_AS_U32(fVar15))) {
            fVar13 = fVar20;
          }
          *(float *)(iVar12 + 0x134) = ALBW_AS_F32(param_1[0x188]) * fVar13;
          if (iVar4 == 0) goto LAB_0027c8c8;
        }
        else {
          func_004CEA18(iVar12,0,0);
          func_004CEA18(iVar12,1,1);
        }
        *(float *)(iVar12 + 0x134) = fVar17;
        func_004A8304(*DAT_0027c91c,*(int *)(iVar9 + iVar8 * 0x28 + 0x10));
        *(undefined1 *)(iVar9 + iVar8 * 0x28) = 2;
        func_002DFFF4(puVar2,uVar10);
      }
LAB_0027c8c8:
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar11);
  }
  return;
}

