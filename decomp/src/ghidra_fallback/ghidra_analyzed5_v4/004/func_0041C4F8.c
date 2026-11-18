#include "ghidra_types.h"

extern int func_00416FB4(int *param_1,undefined4 param_2);
extern int func_004170E4(int param_1);
extern int func_004171AC(int param_1,uint param_2);
extern int func_00417614(int param_1);
extern int func_004176AC(int param_1);
extern int func_0041B8B4(int param_1);
extern float DAT_0041c6b8;
extern float DAT_0041c6bc;
extern int *DAT_0041c6c0;
extern undefined4 DAT_0041c6c4;

// USA 0041C4F8 <- EU 0041C4D8 (Ghidra, non-matching)
// GLOBAL DAT_0041c6b8 float
// GLOBAL DAT_0041c6bc float
// GLOBAL DAT_0041c6c0 int *
// GLOBAL DAT_0041c6c4 undefined4

void func_0041C4F8(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar5 = 0;
  do {
    if ((iVar5 < 0x10) && (iVar6 = *(int *)(param_1 + iVar5 * 4 + 0x90), iVar6 != 0)) {
      func_004171AC(iVar6,0x7f);
      func_004170E4(iVar6);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  iVar5 = 0;
  fVar10 = DAT_0041c6b8;
  fVar11 = DAT_0041c6bc;
  while( true ) {
    iVar6 = *(int *)(param_1 + 0x6c);
    if ((iVar6 == 0) &&
       (fVar9 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)(param_1 + 0x75) *
                                  (uint)*(ushort *)(param_1 + 0x76),(byte)(in_fpscr >> 0x15) & 3),
       (int)ALBW_AS_U32((fVar9 * *(float *)(param_1 + 100) * fVar10 * *(float *)(param_1 + 0x70))) < 0x3f800000))
    {
      *(undefined4 *)(param_1 + 0x70) = DAT_0041c6c4;
      return;
    }
    if (*DAT_0041c6c0 <= iVar5) {
      return;
    }
    if (iVar6 == 0) {
      fVar9 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x75) * (uint)*(ushort *)(param_1 + 0x76),
                                (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x70) =
           *(float *)(param_1 + 0x70) - fVar11 / (fVar9 * fVar10 * *(float *)(param_1 + 100));
    }
    else {
      *(int *)(param_1 + 0x6c) = iVar6 + -1;
    }
    sVar1 = *(short *)(param_1 + 0x7c);
    bVar2 = false;
    sVar4 = sVar1;
    if (sVar1 < *(short *)(param_1 + 0x7a)) {
      sVar4 = sVar1 + 1;
    }
    iVar6 = 0;
    if (sVar1 < *(short *)(param_1 + 0x7a)) {
      *(short *)(param_1 + 0x7c) = sVar4;
    }
    do {
      if (iVar6 < 0x10) {
        iVar8 = param_1 + iVar6 * 4;
        piVar7 = *(int **)(iVar8 + 0x90);
        if (piVar7 != (int *)0x0) {
          func_00417614((int)piVar7);
          iVar3 = func_00416FB4(piVar7,0);
          if ((iVar3 < 0) && (*(int *)(iVar8 + 0x90) != 0)) {
            func_004176AC(*(int *)(iVar8 + 0x90));
            (**(code **)(**(int **)(param_1 + 0x84) + 0xc))
                      (*(int **)(param_1 + 0x84),*(undefined4 *)(iVar8 + 0x90));
            *(undefined4 *)(iVar8 + 0x90) = 0;
          }
          if (*(char *)((int)piVar7 + 5) != '\0') {
            bVar2 = true;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
    if (!bVar2) break;
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
  }
  func_0041B8B4(param_1);
  *(undefined1 *)(param_1 + 0xf) = 1;
  return;
}

