#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00188CCC(int param_1,float fparam_0);
extern int func_004356B4(int *param_1);
extern uint *DAT_001875ec;
extern undefined4 *DAT_001875f0;
extern undefined4 DAT_001875f4;
extern float DAT_001875f8;
extern float DAT_001875fc;
extern float DAT_00187600;
extern float DAT_00187604;
extern float DAT_00187608;
extern float DAT_0018760c;

// USA 00187490 <- EU 00187490 (Ghidra, non-matching)
// GLOBAL DAT_001875ec uint *
// GLOBAL DAT_001875f0 undefined4 *
// GLOBAL DAT_001875f4 undefined4
// GLOBAL DAT_001875f8 float
// GLOBAL DAT_001875fc float
// GLOBAL DAT_00187600 float
// GLOBAL DAT_00187604 float
// GLOBAL DAT_00187608 float
// GLOBAL DAT_0018760c float

undefined4 func_00187490(int param_1)

{
  int iVar1;
  int *piVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  piVar2 = *(int **)(param_1 + 0x40c);
  if (((*DAT_001875ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001875ec), iVar1 != 0)) {
    *DAT_001875f0 = DAT_001875f4;
  }
  if ((piVar2 == (int *)0x0) || (iVar1 = (**(code **)*piVar2)(piVar2,DAT_001875f0), iVar1 == 0)) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 != (int *)0x0) {
    fVar4 = *(float *)(param_1 + 0x3d4);
    iVar1 = *(int *)(param_1 + 0x3d8);
    piVar2[1] = *(int *)(param_1 + 0x3d0);
    piVar2[2] = (int)ALBW_AS_U32((fVar4 + ALBW_AS_F32(piVar2[0x16])));
    piVar2[3] = iVar1;
    func_004356B4(piVar2);
  }
  if (*(int *)(param_1 + 0x570) != 0) {
    if (*(char *)(param_1 + 0x500) == '\x06') {
      if (*(int *)(param_1 + 0x4fc) < 4) {
        fVar3 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x4fc),(byte)(in_fpscr >> 0x15) & 3);
        fVar3 = fVar3 * DAT_00187604;
        fVar4 = DAT_00187608;
        if ((DAT_00187608 <= fVar3) && (fVar4 = fVar3, DAT_0018760c < fVar3)) {
          fVar4 = DAT_0018760c;
        }
        func_00188CCC(param_1,fVar4 * DAT_001875fc * *(float *)(param_1 + 0x6e4) * DAT_001875f8);
      }
      else {
        func_00188CCC(param_1,*(float *)(param_1 + 0x6e4) * DAT_00187600);
      }
    }
    else {
      func_00188CCC(param_1,*(float *)(param_1 + 0x6e4) * DAT_001875f8);
    }
    return func_004356B4(*(int **)(param_1 + 0x570));
  }
  return 0;
}

