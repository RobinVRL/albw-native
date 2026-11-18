#include "ghidra_types.h"

extern int func_001D1B20(int param_1,int param_2);
extern int func_00521018(int param_1);
extern int func_0065C598(undefined4 *param_1,undefined1 param_2);
extern float DAT_001d0c44;
extern float DAT_001d0c48;
extern float DAT_001d0c4c;
extern int *DAT_001d0c50;

// USA 001D0B14 <- EU 001D0B14 (Ghidra, non-matching)
// GLOBAL DAT_001d0c44 float
// GLOBAL DAT_001d0c48 float
// GLOBAL DAT_001d0c4c float
// GLOBAL DAT_001d0c50 int *

void func_001D0B14(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = DAT_001d0c48;
  fVar5 = DAT_001d0c44;
  *(float *)(param_1 + 0x3dc) =
       *(float *)(param_1 + 0x3dc) + (DAT_001d0c44 - *(float *)(param_1 + 0x3dc)) * DAT_001d0c48;
  *(float *)(param_1 + 0x3e4) =
       *(float *)(param_1 + 0x3e4) + (fVar5 - *(float *)(param_1 + 0x3e4)) * fVar4;
  bVar1 = func_00521018(param_1);
  if (bVar1) {
    fVar4 = *(float *)(param_1 + 0x3e4) * DAT_001d0c4c;
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) * DAT_001d0c4c;
    *(float *)(param_1 + 0x3e4) = fVar4;
  }
  if (*(int *)(param_1 + 0x4fc) < 0x14) {
    uVar3 = 1;
    if ((*(uint *)(*DAT_001d0c50 + 0x10) & 3) == 0) {
      uVar3 = (uint)(*(char *)(param_1 + 0x5d9) == '\0');
    }
    if ((int)*(char *)(param_1 + 0x5d9) != uVar3) {
      func_001D1B20(param_1,uVar3);
    }
  }
  else {
    func_001D1B20(param_1,1);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x4f8) + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < fVar5) {
      if (fVar5 < *(float *)(iVar2 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
      return;
    }
    func_0065C598((undefined4 *)(param_1 + 0x4fc),2);
  }
  return;
}

