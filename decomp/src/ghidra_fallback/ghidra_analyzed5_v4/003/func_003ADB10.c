#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004356B4(int *param_1);
extern int func_004ED46C(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern float DAT_003adc4c;
extern float DAT_003adc50;
extern float DAT_003adc54;
extern float DAT_003adc58;
extern float DAT_003adc5c;
extern int *DAT_003adc60;
extern uint *DAT_003adc64;
extern int *DAT_003adc68;
extern undefined4 *DAT_003adc6c;
extern undefined4 DAT_003adc70;

// USA 003ADB10 <- EU 003ADAEC (Ghidra, non-matching)
// GLOBAL DAT_003adc4c float
// GLOBAL DAT_003adc50 float
// GLOBAL DAT_003adc54 float
// GLOBAL DAT_003adc58 float
// GLOBAL DAT_003adc5c float
// GLOBAL DAT_003adc60 int *
// GLOBAL DAT_003adc64 uint *
// GLOBAL DAT_003adc68 int *
// GLOBAL DAT_003adc6c undefined4 *
// GLOBAL DAT_003adc70 undefined4

undefined4 func_003ADB10(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  uVar2 = *(int *)(param_1 + 0x450) + 1;
  *(uint *)(param_1 + 0x450) = uVar2;
  fVar1 = DAT_003adc5c;
  if (uVar2 == 0x23) {
    *(undefined1 *)(*(int *)(param_1 + 0x434) + 0x61) = 1;
    func_004ED46C(*DAT_003adc68,3);
  }
  else if (0x23 < uVar2) {
    fVar6 = DAT_003adc4c;
    if (uVar2 < 0x41) {
      fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = (fVar6 - DAT_003adc50) / DAT_003adc54;
    }
    iVar3 = *(int *)(param_1 + 0x430);
    fVar5 = *(float *)(param_1 + 0x448) * DAT_003adc58;
    fVar5 = fVar5 + (*(float *)(param_1 + 0x448) - fVar5) * fVar6;
    *(float *)(iVar3 + 100) = fVar5;
    fVar5 = fVar5 * fVar1;
    *(float *)(iVar3 + 0x60) = fVar5;
    *(float *)(iVar3 + 0x58) = fVar5;
    if (0x40 < *(uint *)(param_1 + 0x450)) {
      if (*DAT_003adc60 != 0) {
        puVar4 = (undefined4 *)func_0052FBA0(*DAT_003adc60 + 0x3dbbc,*(uint *)(param_1 + 0x50));
        if (((*DAT_003adc64 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_003adc64), iVar3 != 0))
        {
          *DAT_003adc6c = DAT_003adc70;
        }
        if ((puVar4 == (undefined4 *)0x0) ||
           (iVar3 = (**(code **)*puVar4)(puVar4,DAT_003adc6c), iVar3 == 0)) {
          puVar4 = (undefined4 *)0x0;
        }
        if (puVar4 != (undefined4 *)0x0) {
          puVar4[0x116] = puVar4[0x116] + -1;
        }
      }
      *(undefined1 *)(param_1 + 0x2d7) = 1;
      return 0;
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x434) + 0x61) == '\0') {
    return 0;
  }
  return func_004356B4(*(int **)(param_1 + 0x430));
}

