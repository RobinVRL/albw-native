#include "ghidra_types.h"

extern float DAT_00583760;
extern int *DAT_00583764;
extern undefined4 DAT_00583768;

// USA 00583678 <- EU 00583650 (Ghidra, non-matching)
// GLOBAL DAT_00583760 float
// GLOBAL DAT_00583764 int *
// GLOBAL DAT_00583768 undefined4

float func_00583678(int *param_1,int *param_2,undefined *param_3,float fparam_0)

{
  short sVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  fVar7 = DAT_00583760;
  if ((code *)*param_1 != (code *)0x0) {
    lVar8 = CONCAT44(DAT_00583768,DAT_00583768);
    piVar5 = *(int **)(*DAT_00583764 + 0x10);
    pcVar4 = (code *)*param_1;
    uVar9 = DAT_00583768;
    while( true ) {
      sVar1 = *(short *)pcVar4;
      if (sVar1 != 0) {
        param_3 = (undefined *)param_1[2];
      }
      fVar7 = ALBW_AS_F32(((ulonglong)lVar8 >> 0x20));
      if (sVar1 == 0 || param_3 <= pcVar4 + -*param_1) break;
      if (sVar1 == 10) {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(lVar8) <= fVar7) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          lVar8 = lVar8 << 0x20;
        }
        lVar8 = CONCAT44((int)((ulonglong)lVar8 >> 0x20),uVar9);
      }
      if (sVar1 != 0xe) {
        if (sVar1 == 0xf) {
          pcVar3 = pcVar4 + 6;
          goto LAB_00583704;
        }
        goto LAB_0058370c;
      }
      param_3 = pcVar4 + 8;
      pcVar3 = (code *)param_3 + *(ushort *)(pcVar4 + 6);
LAB_00583704:
      bVar6 = pcVar4 == (code *)0x0;
      pcVar4 = pcVar3;
      if (bVar6) {
LAB_0058370c:
        if (param_2 == (int *)0x0) {
          param_3 = *(undefined **)(*piVar5 + 0x3c);
          uVar2 = (*(code *)param_3)(piVar5,*(short *)pcVar4);
          fVar7 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
          lVar8 = CONCAT44((int)((ulonglong)lVar8 >> 0x20),fVar7 + ALBW_AS_F32(lVar8));
        }
        else {
          param_3 = *(undefined **)(*param_2 + 0x3c);
          uVar2 = (*(code *)param_3)(param_2,*(short *)pcVar4);
          fVar7 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
          lVar8 = CONCAT44((int)((ulonglong)lVar8 >> 0x20),fVar7 + ALBW_AS_F32(lVar8));
        }
        pcVar4 = pcVar4 + 2;
      }
    }
    if (fVar7 < ALBW_AS_F32(lVar8)) {
      lVar8 = lVar8 << 0x20;
    }
    fVar7 = ALBW_AS_F32(((ulonglong)lVar8 >> 0x20)) / fparam_0;
  }
  return fVar7;
}

