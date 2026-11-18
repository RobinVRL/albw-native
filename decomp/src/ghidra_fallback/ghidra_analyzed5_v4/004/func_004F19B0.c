#include "ghidra_types.h"

extern int *DAT_004f1c20;

// USA 004F19B0 <- EU 004F1988 (Ghidra, non-matching)
// GLOBAL DAT_004f1c20 int *

void func_004F19B0(int *param_1,int *param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  iVar6 = *DAT_004f1c20;
  if (iVar6 != 0) {
    if ((int)param_3 < 3) {
      piVar7 = (int *)(*(int *)(iVar6 + 0xf74) + 8);
      if (param_3 < 6) {
        piVar7 = piVar7 + param_3;
      }
      if (*piVar7 == 0) {
        return;
      }
      puVar1 = (undefined4 *)(*(int *)(iVar6 + 0xf74) + 8);
      if (param_3 < 6) {
        puVar1 = puVar1 + param_3;
      }
    }
    else {
      piVar7 = (int *)(*(int *)(iVar6 + 0xf74) + 8);
      if (param_3 < 6) {
        piVar7 = piVar7 + param_3;
      }
      if (*piVar7 == 0) {
        return;
      }
      puVar1 = (undefined4 *)(*(int *)(iVar6 + 0xf74) + 8);
      if (param_3 < 6) {
        puVar1 = puVar1 + param_3;
      }
    }
    piVar7 = *(int **)*puVar1;
    if (piVar7 != (int *)0x0) {
      if (*piVar7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)piVar7[2];
      }
      iVar2 = CONCAT13(*(undefined1 *)(iVar6 + 0x34),
                       CONCAT12(*(undefined1 *)(iVar6 + 0x35),
                                CONCAT11(*(undefined1 *)(iVar6 + 0x36),*(undefined1 *)(iVar6 + 0x37)
                                        )));
      iVar3 = CONCAT13(*(undefined1 *)(iVar6 + 0x30),
                       CONCAT12(*(undefined1 *)(iVar6 + 0x31),
                                CONCAT11(*(undefined1 *)(iVar6 + 0x32),*(undefined1 *)(iVar6 + 0x33)
                                        )));
      iVar4 = CONCAT13(*(undefined1 *)(iVar6 + 0x38),
                       CONCAT12(*(undefined1 *)(iVar6 + 0x39),
                                CONCAT11(*(undefined1 *)(iVar6 + 0x3a),*(undefined1 *)(iVar6 + 0x3b)
                                        )));
      iVar8 = CONCAT13(*(undefined1 *)(iVar6 + 0x3c),
                       CONCAT12(*(undefined1 *)(iVar6 + 0x3d),
                                CONCAT11(*(undefined1 *)(iVar6 + 0x3e),*(undefined1 *)(iVar6 + 0x3f)
                                        )));
      iVar6 = *piVar7;
      if (iVar6 != 0) {
        iVar5 = *(int *)piVar7[2];
        piVar7 = (int *)piVar7[2];
      }
      else {
        iVar5 = 0;
      }
      fVar10 = *(float *)(iVar5 + 0x54);
      if (iVar6 != 0) {
        iVar6 = *piVar7;
      }
      else {
        iVar6 = 0;
      }
      if (param_3 < 6) {
        param_1 = param_1 + param_3 * 0x10;
      }
      fVar11 = *(float *)(iVar6 + 0x58);
      *(undefined1 *)(param_1 + 0xe) = 1;
      param_1[0xc] = param_4;
      param_1[0xd] = 0;
      *param_1 = iVar2;
      param_1[1] = iVar3;
      param_1[2] = iVar4;
      param_1[3] = iVar8;
      param_1[4] = (int)ALBW_AS_U32(fVar10);
      param_1[5] = (int)ALBW_AS_U32(fVar11);
      param_1[6] = *param_2;
      param_1[7] = param_2[1];
      param_1[8] = param_2[2];
      param_1[9] = param_2[3];
      param_1[10] = param_2[4];
      param_1[0xb] = param_2[5];
      *(bool *)((int)param_1 + 0x39) = iVar2 != *param_2;
      *(bool *)((int)param_1 + 0x3a) = iVar3 != param_2[1];
      *(bool *)((int)param_1 + 0x3b) = iVar4 != param_2[2];
      *(bool *)(param_1 + 0xf) = iVar8 != param_2[3];
      bVar9 = false;
      if (fVar10 == ALBW_AS_F32(param_2[4])) {
        bVar9 = fVar11 == ALBW_AS_F32(param_2[5]);
      }
      *(bool *)((int)param_1 + 0x3d) = !bVar9;
    }
  }
  return;
}

