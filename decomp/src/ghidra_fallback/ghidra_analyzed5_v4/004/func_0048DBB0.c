#include "ghidra_types.h"

extern float DAT_0048dca0;
extern float DAT_0048dca4;

// USA 0048DBB0 <- EU 0048DB88 (Ghidra, non-matching)
// GLOBAL DAT_0048dca0 float
// GLOBAL DAT_0048dca4 float

void func_0048DBB0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((undefined4 *)(albw_frame + 0x8))
  cVar1 = *(char *)((int)param_1 + 0x1e9);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      fVar5 = DAT_0048dca4;
      if (0 < param_1[0x76]) {
        fVar3 = (float)VectorSignedToFloat(param_1[0x75],(byte)(in_fpscr >> 0x15) & 3);
        fVar5 = (float)VectorSignedToFloat(param_1[0x76] + 1,(byte)(in_fpscr >> 0x15) & 3);
        fVar5 = fVar3 / fVar5;
      }
      param_1[0x79] = (int)ALBW_AS_U32(fVar5);
      if (param_1[0x75] == 0) {
        local_18[0] = 2;
        (**(code **)(*param_1 + 0x5c))(param_1,local_18);
      }
      (**(code **)(*param_1 + 0x58))(param_1);
    }
    else if (cVar1 == '\x02') {
      fVar5 = DAT_0048dca0;
      (**(code **)(*param_1 + 0x58))(param_1);
      param_1[0x79] = (int)ALBW_AS_U32(fVar5);
    }
    else {
      if (cVar1 != '\x03') {
        return;
      }
      fVar5 = DAT_0048dca0;
      (**(code **)(*param_1 + 0x58))(param_1);
      iVar2 = param_1[0x77];
      if (param_1[0x78] != iVar2) {
        fVar4 = (float)VectorSignedToFloat(param_1[0x78] - iVar2,(byte)(in_fpscr >> 0x15) & 3);
        fVar3 = (float)VectorSignedToFloat(param_1[0x75] - iVar2,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x79] = (int)ALBW_AS_U32((fVar5 - fVar3 / fVar4));
      }
    }
    param_1[0x75] = param_1[0x75] + 1;
  }
  return;
}

