// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00521100(int param_1,float fparam_0);
extern float func_00521298(int param_1);
extern int func_0065D3A8(undefined4 *param_1,undefined1 param_2);
extern float DAT_002050b4;
extern int DAT_002050b8;

// USA 00205038 <- EU 00205038 (Ghidra, non-matching)
// GLOBAL DAT_002050b4 float
// GLOBAL DAT_002050b8 int

undefined4 func_00205038(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  
  fVar4 = DAT_002050b4;
  uVar1 = *(uint *)(param_1 + 0x8d4);
  bVar3 = uVar1 < *(uint *)(param_1 + 0x8d8);
  if (bVar3) {
    *(uint *)(param_1 + 0x8d4) = uVar1 + 1;
  }
  iVar2 = func_00521100(param_1,fVar4);
  if ((iVar2 == 0) || (fVar4 = func_00521298(param_1), DAT_002050b8 <= (int)ALBW_AS_U32(fVar4))) {
    if (!bVar3) {
      return func_0065D3A8((undefined4 *)(param_1 + 0x8f0),4);
    }
  }
  else {
    func_0065D3A8((undefined4 *)(param_1 + 0x8f0),6);
  }
  return 0;
}

