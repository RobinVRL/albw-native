#include "ghidra_types.h"

extern int func_001E4A5C(int param_1,undefined4 param_2,undefined4 *param_3);
extern undefined4 func_004AF3C4(int param_1,int param_2);
extern int DAT_004b01e0;
extern undefined4 DAT_004b01e4;
extern float DAT_004b01e8;

// USA 004B01A4 <- EU 004B017C (Ghidra, non-matching)
// GLOBAL DAT_004b01e0 int
// GLOBAL DAT_004b01e4 undefined4
// GLOBAL DAT_004b01e8 float

undefined1 func_004B01A4(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  
  cVar2 = func_001E4A5C(param_1,param_2,param_3);
  fVar1 = DAT_004b01e8;
  uVar3 = 0;
  if (cVar2 != '\0') {
    if (DAT_004b01e0 < (int)ALBW_AS_U32((*param_3 * *param_3 + param_3[2] * param_3[2]))) {
      *(undefined4 *)(param_1 + 0x3e0) = DAT_004b01e4;
    }
    *(float *)(param_1 + 0x584) = *(float *)(param_1 + 0x3d4) + fVar1;
    func_004AF3C4(param_1,2);
    uVar3 = 1;
  }
  return uVar3;
}

