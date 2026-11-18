#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00657580(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0013faf8;
extern undefined4 DAT_0013fafc;

// USA 0013F9C0 <- EU 0013F9C0 (Ghidra, non-matching)
// GLOBAL DAT_0013faf8 float
// GLOBAL DAT_0013fafc undefined4

undefined4 func_0013F9C0(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x4cc);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x4d4);
  uVar2 = *(int *)(param_1 + 0x4f8) + 1;
  *(uint *)(param_1 + 0x4f8) = uVar2;
  fVar1 = DAT_0013faf8;
  uVar5 = *(uint *)(*(int *)(param_1 + 0x40c) + 0x20);
  if (uVar2 == uVar5) {
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    func_00657580((undefined4 *)(param_1 + 0x460),1);
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x40c) + 0x28);
    if ((iVar3 != 0 && uVar2 < uVar5) && (iVar3 = *(int *)(iVar3 + uVar2 * 4), iVar3 != 0)) {
      *(float *)(param_1 + 0x4cc) = *(float *)(iVar3 + 0x18);
      *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(iVar3 + 0x1c);
      *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(iVar3 + 0x20);
      *(bool *)(param_1 + 0x51c) = *(float *)(param_1 + 0x4d0) < *(float *)(param_1 + 0x4c4) - fVar1
      ;
      if (*(int *)(iVar3 + 0x44) == 0) {
        pfVar4 = (float *)(param_1 + 0x4b4);
        func_00115C70(pfVar4,(float *)(param_1 + 0x4cc),(float *)(param_1 + 0x4c0));
        uVar6 = DAT_0013fafc;
        *(undefined4 *)(param_1 + 0x4b8) = DAT_0013fafc;
        func_00115DC8(pfVar4);
        iVar3 = func_0068C690(pfVar4);
        *(int *)(param_1 + 0x4e8) = iVar3;
        *(undefined4 *)(param_1 + 0x4fc) = uVar6;
      }
      else if (*(int *)(iVar3 + 0x44) == 1) {
        func_00657580((undefined4 *)(param_1 + 0x460),1);
      }
      return 1;
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return 0;
}

