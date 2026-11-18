#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_0052107C(int param_1);
extern int func_0052108C(int param_1);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);
extern float DAT_001d6c54;
extern float DAT_001d6c58;
extern float DAT_001d6c5c;
extern float DAT_001d6c60;
extern float DAT_001d6c64;

// USA 001D6B40 <- EU 001D6B40 (Ghidra, non-matching)
// GLOBAL DAT_001d6c54 float
// GLOBAL DAT_001d6c58 float
// GLOBAL DAT_001d6c5c float
// GLOBAL DAT_001d6c60 float
// GLOBAL DAT_001d6c64 float

undefined4 func_001D6B40(int param_1)

{
  float fVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = DAT_001d6c60;
  fVar1 = DAT_001d6c58;
  fVar7 = *(float *)(param_1 + 0x3e0) - DAT_001d6c54;
  *(float *)(param_1 + 0x3e0) = fVar7;
  if ((uint)ALBW_AS_U32(fVar1) <= (uint)ALBW_AS_U32(fVar7)) {
    fVar7 = DAT_001d6c5c;
  }
  *(float *)(param_1 + 0x3e0) = fVar7;
  if (*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0xc)) {
    if (fVar7 < fVar8) {
      *(undefined2 *)(param_1 + 0x42c) = 0;
    }
    iVar4 = func_00392E48((undefined4 *)(param_1 + 0x3d0),1,(undefined4 *)0x0,0);
    if (iVar4 == 0) {
      return func_0065C988((undefined4 *)(param_1 + 0x4d4),6);
    }
  }
  bVar2 = func_0052107C(param_1);
  bVar6 = false;
  bVar2 = !bVar2;
  bVar5 = false;
  if (!bVar2) {
    fVar7 = *(float *)(param_1 + 0x3e0);
    bVar6 = fVar8 < fVar7;
    bVar2 = fVar8 == fVar7;
    bVar5 = NAN(fVar8) || NAN(fVar7);
  }
  if (bVar2 || bVar6 != bVar5) {
    iVar4 = func_0052108C(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x42c) = 2;
  }
  else {
    *(float *)(param_1 + 0x3e0) = -fVar7;
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_001d6c64);
    bVar3 = *(char *)(param_1 + 0x516) + 1;
    *(byte *)(param_1 + 0x516) = bVar3;
    if (bVar3 < 3) {
      return 0;
    }
  }
  return func_0065C988((undefined4 *)(param_1 + 0x4d4),3);
}

