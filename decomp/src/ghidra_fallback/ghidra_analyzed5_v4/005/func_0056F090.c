#include "ghidra_types.h"

extern float DAT_0056f0f8;
extern int DAT_0056f0fc;
extern float DAT_0056f100;

// USA 0056F090 <- EU 0056F068 (Ghidra, non-matching)
// GLOBAL DAT_0056f0f8 float
// GLOBAL DAT_0056f0fc int
// GLOBAL DAT_0056f100 float

float func_0056F090(float *param_1)

{
  code *pcVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = in_fpscr & 0xfffffff | (uint)(*param_1 == DAT_0056f0f8) << 0x1e;
  if (SUB41(uVar2 >> 0x1e,0)) {
    return DAT_0056f0f8;
  }
  fVar4 = DAT_0056f0f8;
  if ((uint)ALBW_AS_U32(param_1[2]) <= (uint)ALBW_AS_U32(param_1[4])) {
    pcVar1 = *(code **)(DAT_0056f0fc + (uint)*(byte *)((int)param_1 + 0xd) * 4);
    fVar3 = DAT_0056f100;
    if (pcVar1 != (code *)0x0) {
      if (*(byte *)((int)param_1 + 0xd) == 4) {
        if (*(char *)((int)param_1 + 0x1d) == '\0') {
          fVar3 = param_1[6];
        }
        else {
          fVar3 = param_1[5];
          (*pcVar1)();
          param_1[6] = fVar3;
        }
      }
      else {
        fVar3 = param_1[5];
        (*pcVar1)();
      }
    }
    fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 3),(byte)(uVar2 >> 0x15) & 3);
    fVar4 = fVar4 * *param_1 * fVar3;
  }
  return fVar4;
}

