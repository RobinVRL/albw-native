#include "ghidra_types.h"

extern float DAT_00445170;
extern float DAT_00445174;
extern float DAT_00445178;

// USA 00445118 <- EU 004450F8 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00445170 float
// GLOBAL DAT_00445174 float
// GLOBAL DAT_00445178 float

void func_00445118(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  cVar3 = *(char *)(param_1 + 0x4bb) + '\x01';
  if (cVar3 == '\"') {
    cVar3 = '%';
  }
  *(char *)(param_1 + 0x4bb) = cVar3;
  if (*(byte *)(param_1 + 0x4bb) < 0x2f) {
    uVar1 = 0x48;
  }
  else {
    iVar2 = param_1 + 0xc4;
    if (*(byte *)(param_1 + 0x4ba) < 0xc) {
      iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x4ba) * 0x54;
    }
    uVar4 = VectorFloatToUnsigned
                      ((DAT_00445174 + *(float *)(iVar2 + 0x48) * DAT_00445170) * DAT_00445178,3);
    uVar1 = (undefined2)uVar4;
  }
  *(undefined2 *)(param_1 + 0x4b8) = uVar1;
  return;
}

