/* compilefix: func_00516F44, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/005/func_00516F44.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0034CA24(undefined4 *param_1);
extern float DAT_005171d4;
extern float DAT_005171d8;
extern float DAT_005171dc;
extern float DAT_005171e0;
extern int DAT_005171e4;
extern uint DAT_005171e8;

// USA 00516F44 <- EU 00516F1C (Ghidra, non-matching)
// GLOBAL DAT_005171d4 float
// GLOBAL DAT_005171d8 float
// GLOBAL DAT_005171dc float
// GLOBAL DAT_005171e0 float
// GLOBAL DAT_005171e4 int
// GLOBAL DAT_005171e8 uint

/* WARNING: Variable defined which should be unmapped: objStack_40 */

void func_00516F44(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  if (*(char *)(param_1 + 0xcbc) != '\x01') {
    uVar8 = (int)*(short *)(param_1 + 0xce0) - 1;
    if (10 < uVar8) {
      uVar8 = 10;
    }
    uVar6 = 0;
    sVar7 = 0;
    if (uVar8 != 0) {
      fVar13 = DAT_005171d8;
      fVar14 = DAT_005171d4;
      fVar11 = DAT_005171dc;
      fVar12 = DAT_005171e0;
      do {
        iVar5 = param_1 + 0x40c + uVar6 * 0x24;
        func_0034CA24(*(undefined4 **)(param_1 + 0xc7c));
        objStack_40[0] = 0;
        objStack_40[1] = 0;
        func_0014E2A0(param_1,*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x20),0x1000,0,0)
        ;
        iVar3 = DAT_005171e4;
        fVar10 = fVar11;
        if (**(int **)(param_1 + 0xc7c) == 0) {
LAB_00516fd0:
          fVar9 = *(float *)(iVar5 + 0x1c) + fVar13;
          *(float *)(iVar5 + 0x1c) = fVar9;
          if ((iVar3 <= (int)ALBW_AS_U32(fVar9)) && (fVar10 = fVar9, 0x3f800000 < (int)ALBW_AS_U32(fVar9))) {
            fVar10 = fVar12;
          }
          *(float *)(iVar5 + 0x1c) = fVar10;
          iVar3 = *(int *)(iVar5 + 0x14);
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(iVar5 + 0x18))) {
LAB_0051701c:
            *(float *)(iVar3 + 0x34) = fVar10;
            *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 0x20;
          }
        }
        else {
          cVar2 = *(char *)((int)*(int **)(param_1 + 0xc7c) + 0x21);
          if (cVar2 != '\v') {
            if (cVar2 == '\x02') {
              if (*(short *)(param_1 + 0xce4) < 0) {
                *(short *)(param_1 + 0xce4) = sVar7;
              }
              iVar3 = (int)*(char *)(param_1 + 0xcbc);
              if (iVar3 != -1) {
                iVar5 = *(int *)(param_1 + 0xcd8);
                UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + iVar3 * 8);
                if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
                   ((uVar8 = *(uint *)(iVar5 + iVar3 * 8 + 4), (uVar8 & 1) != 0 && (uVar8 != 0)))) {
                  uVar8 = *(uint *)(iVar5 + iVar3 * 8 + 4);
                  piVar4 = (int *)(*(int *)(param_1 + 0xccc) + ((int)uVar8 >> 1));
                  if ((uVar8 & 1) != 0) {
                    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *piVar4);
                  }
                  (*UNRECOVERED_JUMPTABLE)(piVar4,1);
                }
              }
              uVar1 = *(undefined1 *)(param_1 + 0xcbc);
              *(undefined1 *)(param_1 + 0xcbc) = 1;
              *(undefined4 *)(param_1 + 0xcb8) = 0;
              *(undefined1 *)(param_1 + 0xcbd) = uVar1;
              if (*(int *)(param_1 + 0xcc8) != 0) {
                if (*(uint *)(param_1 + 0xcc0) < 2) {
                  piVar4 = *(int **)(param_1 + 0xcc4);
                }
                else {
                  piVar4 = (int *)(*(int *)(param_1 + 0xcc4) + 0x24);
                }
                (**(code **)(*piVar4 + 8))(piVar4);
                objStack_40[1] = piVar4[1];
                objStack_40[0] = DAT_005171e8;
                func_0010BEB4(*(int *)(param_1 + 0xcc8),(int *)objStack_40);
              }
              iVar3 = (int)*(char *)(param_1 + 0xcbc);
              iVar5 = *(int *)(param_1 + 0xcd0);
              UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + iVar3 * 8);
              if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                uVar8 = *(uint *)(iVar5 + iVar3 * 8 + 4);
                if ((uVar8 & 1) == 0) {
                  return;
                }
                if (uVar8 == 0) {
                  return;
                }
              }
              uVar8 = *(uint *)(iVar5 + iVar3 * 8 + 4);
              if ((uVar8 & 1) != 0) {
                UNRECOVERED_JUMPTABLE =
                     *(code **)(UNRECOVERED_JUMPTABLE +
                               *(int *)(*(int *)(param_1 + 0xccc) + ((int)uVar8 >> 1)));
              }
                    /* WARNING: Could not recover jumptable at 0x005171d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(int (*)(int *))UNRECOVERED_JUMPTABLE)(((int *)((int)(*(int *)(param_1 + 0xccc)) + ((int)uVar8 >> 1))));   /* this restored (pmf_this_fix) */
              return;
            }
            goto LAB_00516fd0;
          }
          fVar9 = *(float *)(iVar5 + 0x1c) - fVar14;
          *(float *)(iVar5 + 0x1c) = fVar9;
          if ((iVar3 <= (int)ALBW_AS_U32(fVar9)) && (fVar10 = fVar9, 0x3f800000 < (int)ALBW_AS_U32(fVar9))) {
            fVar10 = fVar12;
          }
          *(float *)(iVar5 + 0x1c) = fVar10;
          iVar3 = *(int *)(iVar5 + 0x14);
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(iVar5 + 0x18))) goto LAB_0051701c;
        }
        uVar6 = uVar6 + 1;
        sVar7 = sVar7 + 1;
      } while (uVar6 != uVar8);
    }
  }
  return;
}

