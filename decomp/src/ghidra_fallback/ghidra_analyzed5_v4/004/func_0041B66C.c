#include "ghidra_types.h"

extern int func_00416FB4(int *param_1,undefined4 param_2);
extern int func_00417614(int param_1);
extern int func_004176AC(int param_1);
extern int func_0041B8B4(int param_1);
extern int func_00691F28(uint param_1,uint param_2);
extern undefined8 func_006920B0(int param_1,uint param_2);
extern float DAT_0041b810;
extern float DAT_0041b814;
extern uint DAT_0041b818;
extern float DAT_0041b81c;
extern float DAT_0041b820;

// USA 0041B66C <- EU 0041B64C (Ghidra, non-matching)
// GLOBAL DAT_0041b810 float
// GLOBAL DAT_0041b814 float
// GLOBAL DAT_0041b818 uint
// GLOBAL DAT_0041b81c float
// GLOBAL DAT_0041b820 float

void func_0041B66C(int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar8 = DAT_0041b818;
  uVar13 = CONCAT44(DAT_0041b814,DAT_0041b810);
  fVar12 = (float)VectorUnsignedToFloat
                            ((uint)*(byte *)(param_1 + 0x75) * (uint)*(ushort *)(param_1 + 0x76),
                             (byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar12 * *(float *)(param_1 + 100) * DAT_0041b810;
  uVar11 = in_fpscr & 0xfffffff | (uint)(fVar12 == DAT_0041b814) << 0x1e;
  if (!SUB41(uVar11 >> 0x1e,0)) {
    uVar15 = CONCAT44(fVar12,DAT_0041b81c);
    uVar9 = 0;
    uVar16 = func_006920B0((int)ALBW_AS_U32(((*(float *)(param_1 + 0x68) * DAT_0041b81c) / fVar12)),
                           (uint)*(ushort *)(param_1 + 0x76));
    uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
    if (uVar4 == 0 && (uVar8 <= (uint)uVar16) <= uVar4) {
      do {
        bVar10 = uVar8 < (uint)uVar16;
        uVar8 = uVar8 - (uint)uVar16;
        uVar9 = uVar9 - ((int)((ulonglong)uVar16 >> 0x20) + (uint)bVar10);
        sVar1 = *(short *)(param_1 + 0x7c);
        bVar10 = false;
        sVar3 = sVar1;
        if (sVar1 < *(short *)(param_1 + 0x7a)) {
          sVar3 = sVar1 + 1;
        }
        iVar5 = 0;
        if (sVar1 < *(short *)(param_1 + 0x7a)) {
          *(short *)(param_1 + 0x7c) = sVar3;
        }
        do {
          if (iVar5 < 0x10) {
            iVar7 = param_1 + iVar5 * 4;
            piVar6 = *(int **)(iVar7 + 0x90);
            if (piVar6 != (int *)0x0) {
              func_00417614((int)piVar6);
              iVar2 = func_00416FB4(piVar6,1);
              if ((iVar2 < 0) && (*(int *)(iVar7 + 0x90) != 0)) {
                func_004176AC(*(int *)(iVar7 + 0x90));
                (**(code **)(**(int **)(param_1 + 0x84) + 0xc))
                          (*(int **)(param_1 + 0x84),*(undefined4 *)(iVar7 + 0x90));
                *(undefined4 *)(iVar7 + 0x90) = 0;
              }
              if (*(char *)((int)piVar6 + 5) != '\0') {
                bVar10 = true;
              }
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x10);
        if (!bVar10) {
          func_0041B8B4(param_1);
          *(undefined1 *)(param_1 + 0xf) = 1;
          return;
        }
        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
        fVar12 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x75) *
                                   (uint)*(ushort *)(param_1 + 0x76),(byte)(uVar11 >> 0x15) & 3);
        fVar14 = ALBW_AS_F32(uVar15);
        fVar12 = fVar12 * ALBW_AS_F32(uVar13) * *(float *)(param_1 + 100);
        uVar15 = CONCAT44(fVar12,fVar14);
        uVar11 = uVar11 & 0xfffffff | (uint)(fVar12 == ALBW_AS_F32(((ulonglong)uVar13 >> 0x20))) << 0x1e;
        if (SUB41(uVar11 >> 0x1e,0)) {
          return;
        }
        uVar16 = func_006920B0((int)ALBW_AS_U32((fVar14 / fVar12)),(uint)*(ushort *)(param_1 + 0x76));
        uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
      } while (uVar4 <= uVar9 && (uint)(uVar8 <= (uint)uVar16) <= uVar4 - uVar9);
    }
    fVar14 = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
    fVar12 = ALBW_AS_F32(func_00691F28((uint)uVar16 - uVar8,
                                  (int)((ulonglong)uVar16 >> 0x20) -
                                  (uVar9 + ((uint)uVar16 < uVar8))));
    *(float *)(param_1 + 0x68) = fVar12 * fVar14 * DAT_0041b820;
  }
  return;
}

