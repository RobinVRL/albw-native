#include "ghidra_types.h"

extern void func_0065E398();
extern int DAT_0021fb50;

// USA 0021FAE8 <- EU 0021FAE8 (Ghidra, non-matching)
// GLOBAL DAT_0021fb50 int

void func_0021FAE8(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0xa14) - *(float *)(param_1 + 0x3d0);
  fVar2 = *(float *)(param_1 + 0xa1c) - *(float *)(param_1 + 0x3d8);
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
  if ((int)ALBW_AS_U32(fVar1) < DAT_0021fb50) {
    if (*(char *)(param_1 + 0xafd) == '\0') {
      func_0065E398((undefined4 *)(param_1 + 0x8c0),0x12,fVar1);
      return;
    }
    func_0065E398((undefined4 *)(param_1 + 0x8c0),0x13,fVar1);
  }
  return;
}

