#include "ghidra_types.h"

extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_004CEAF0(int param_1);

// USA 004CFF28 <- EU 004CFF00 (Ghidra, non-matching)

void func_004CFF28(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  if (-1 < *(int *)(param_1 + 0x164) * 0x10) {
    func_004CEAF0(param_1);
  }
  func_00115CA8(param_2,(float *)(param_1 + 0x104),(float *)(param_1 + 0x140));
  fVar1 = *(float *)(param_1 + 0x78);
  if (fVar1 < *(float *)(param_1 + 0x74)) {
    fVar1 = *(float *)(param_1 + 0x74);
  }
  if (fVar1 <= *(float *)(param_1 + 0x7c)) {
    fVar1 = *(float *)(param_1 + 0x7c);
  }
  *param_3 = *(float *)(param_1 + 0x14c) * fVar1;
  return;
}

