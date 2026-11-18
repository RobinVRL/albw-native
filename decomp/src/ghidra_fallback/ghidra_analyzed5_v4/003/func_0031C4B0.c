#include "ghidra_types.h"

extern int func_0023194C(int param_1,undefined4 param_2);
extern int func_00532C78(int param_1);
extern int func_006653E8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0031c55c;
extern float DAT_0031c560;

// USA 0031C4B0 <- EU 0031C48C (Ghidra, non-matching)
// GLOBAL DAT_0031c55c float
// GLOBAL DAT_0031c560 float

undefined4 func_0031C4B0(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0xe4);
  fVar4 = DAT_0031c55c;
  if (fVar2 != *(float *)(param_1 + 0xe0)) {
    fVar3 = DAT_0031c55c;
    if ((DAT_0031c55c <= fVar2) && (fVar3 = fVar2, DAT_0031c560 < fVar2)) {
      fVar3 = DAT_0031c560;
    }
    func_0023194C(param_1 + 0x8c,(int)((DAT_0031c560 - fVar3) * *(float *)(param_1 + 0xf0)));
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  bVar1 = func_00532C78(param_1 + 0xb0);
  if ((!bVar1) && (bVar1 = func_00532C78(param_1 + 0xbc), !bVar1)) {
    if (*(float *)(param_1 + 0xe0) < fVar4) {
      return func_006653E8((undefined4 *)(param_1 + 0x50),3);
    }
    func_006653E8((undefined4 *)(param_1 + 0x50),0);
  }
  return 0;
}

