#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern float DAT_002e049c;
extern undefined4 DAT_002e04a0;

// USA 002E0468 <- EU 002E0444 (Ghidra, non-matching)
// GLOBAL DAT_002e049c float
// GLOBAL DAT_002e04a0 undefined4

undefined4 func_002E0468(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  
  uVar2 = DAT_002e04a0;
  fVar1 = DAT_002e049c;
  if (*(char *)(param_1 + 0x40c) == '\0') {
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x2c),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x414) = fVar3 * DAT_002e049c;
    *(undefined4 *)(param_1 + 0x418) = uVar2;
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x2e),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(param_1 + 0x41c) = fVar3 * fVar1;
    *(undefined1 *)(param_1 + 0x40c) = 1;
    return func_004356B4(*(int **)(param_1 + 0x410));
  }
  return 0;
}

