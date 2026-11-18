#include "ghidra_types.h"

extern float DAT_002df60c;
extern undefined4 DAT_002df610;

// USA 002DF5E0 <- EU 002DF5BC (Ghidra, non-matching)
// GLOBAL DAT_002df60c float
// GLOBAL DAT_002df610 undefined4

undefined4 func_002DF5E0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  
  uVar2 = DAT_002df610;
  fVar1 = DAT_002df60c;
  if (*(char *)(param_1 + 0x40c) == '\0') {
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x2c),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x410) = fVar3 * DAT_002df60c;
    *(undefined4 *)(param_1 + 0x414) = uVar2;
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x2e),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x418) = fVar3 * fVar1;
    *(undefined1 *)(param_1 + 0x40c) = 1;
  }
  return (undefined4)param_1;
}

