#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00663954(undefined4 *param_1,undefined1 param_2);
extern float DAT_002cf2b4;
extern float DAT_002cf2b8;
extern float DAT_002cf2bc;
extern int DAT_002cf2c0;
extern int DAT_002cf2c4;

// USA 002CF134 <- EU 002CF110 (Ghidra, non-matching)
// GLOBAL DAT_002cf2b4 float
// GLOBAL DAT_002cf2b8 float
// GLOBAL DAT_002cf2bc float
// GLOBAL DAT_002cf2c0 int
// GLOBAL DAT_002cf2c4 int

undefined4 func_002CF134(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  bVar1 = false;
  fVar8 = -*(float *)(param_1 + 0x494);
  if (*(float *)(param_1 + 0x498) <= fVar8) {
    uVar3 = *(int *)(param_1 + 0x49c) + 1;
    *(uint *)(param_1 + 0x49c) = uVar3;
    if ((0x1d < uVar3) && (-*(int *)(param_1 + 0x480) < *(int *)(param_1 + 0x47c))) {
      if (*(int *)(param_1 + 0x484) < DAT_002cf2c0) {
        func_0051D27C((int *)(param_1 + 0x484),DAT_002cf2c0,DAT_002cf2c4);
      }
      iVar2 = *(int *)(param_1 + 0x47c) - *(int *)(param_1 + 0x484);
      *(int *)(param_1 + 0x47c) = iVar2;
      if (iVar2 <= -*(int *)(param_1 + 0x480)) {
        *(int *)(param_1 + 0x47c) = -*(int *)(param_1 + 0x480);
        func_00663954((undefined4 *)(param_1 + 0x40c),0);
        bVar1 = true;
      }
    }
  }
  else {
    fVar7 = *(float *)(param_1 + 0x3e0) - DAT_002cf2b4;
    *(float *)(param_1 + 0x3e0) = fVar7;
    fVar9 = *(float *)(param_1 + 0x498) + fVar7;
    *(float *)(param_1 + 0x498) = fVar9;
    if (fVar9 <= fVar8) {
      if ((uint)ALBW_AS_U32(DAT_002cf2b8) < (uint)ALBW_AS_U32(fVar7)) {
        fVar7 = fVar7 * DAT_002cf2bc;
        *(float *)(param_1 + 0x3e0) = fVar7;
        *(float *)(param_1 + 0x498) = fVar7 - *(float *)(param_1 + 0x494);
      }
      else {
        *(float *)(param_1 + 0x498) = fVar8;
        *(undefined4 *)(param_1 + 0x49c) = 0;
      }
    }
  }
  pfVar6 = (float *)(param_1 + 0x3d0);
  *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x498);
  iVar2 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  puVar5 = *(undefined4 **)(param_1 + 1000);
  func_004D7EB0((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0x47c),(uint)puVar5,pfVar6);
  uVar4 = extraout_r1;
  if (bVar1) {
    iVar2 = *(int *)(param_1 + 0x430);
    puVar5 = (undefined4 *)(param_1 + 0x448);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_001151EC(puVar5,(undefined4 *)(iVar2 + 0x80));
    uVar4 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x434),uVar4,puVar5,(int *)pfVar6);
  func_00168E9C(*(int **)(param_1 + 0x434),*(int *)(param_1 + 0x430),(int *)0x0);
  return func_004CEAF0(*(int *)(param_1 + 0x430));
}

