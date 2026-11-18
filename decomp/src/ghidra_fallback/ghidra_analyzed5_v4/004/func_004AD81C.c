#include "ghidra_types.h"

extern int func_002771F4(int param_1);
extern int func_004EA15C(int param_1,undefined4 param_2,int param_3,int *param_4);
extern float DAT_004ad8e8;
extern int *DAT_004ad8ec;

// USA 004AD81C <- EU 004AD7F4 (Ghidra, non-matching)
// GLOBAL DAT_004ad8e8 float
// GLOBAL DAT_004ad8ec int *

undefined4 func_004AD81C(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    func_002771F4(*(int *)(param_1 + 0x38));
  }
  fVar1 = DAT_004ad8e8;
  uVar5 = 0;
  uVar2 = *(uint *)(param_1 + 0x7730);
  if (0 < (int)uVar2) {
    do {
      if (uVar5 < uVar2) {
        iVar3 = *(int *)(param_1 + 0x7738) + uVar5 * 0x1c;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x7738);
      }
      pfVar4 = (float *)(iVar3 + 4);
      fVar7 = *pfVar4;
      param_3 = (uint)*(byte *)(iVar3 + 0x18);
      fVar6 = fVar7 + *(float *)(iVar3 + 0xc);
      *pfVar4 = fVar6;
      *(float *)(iVar3 + 8) = fVar7;
      fVar7 = *(float *)(iVar3 + 0x10);
      if (param_3 == 0) {
        if (fVar7 < fVar6) {
          *pfVar4 = fVar7;
        }
        else {
          if (fVar6 <= fVar1) {
            fVar6 = fVar1;
          }
          *pfVar4 = fVar6;
        }
      }
      else if (fVar6 <= fVar7) {
        if (fVar6 < fVar1) {
          param_3 = *(int *)(iVar3 + 0x14) + 1;
          *pfVar4 = fVar6 + fVar7;
          *(uint *)(iVar3 + 0x14) = param_3;
        }
      }
      else {
        param_3 = *(int *)(iVar3 + 0x14) + 1;
        *pfVar4 = fVar6 - fVar7;
        *(uint *)(iVar3 + 0x14) = param_3;
      }
      uVar2 = *(uint *)(param_1 + 0x7730);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar2);
  }
  return func_004EA15C(*DAT_004ad8ec,uVar5,param_3,param_4);
}

