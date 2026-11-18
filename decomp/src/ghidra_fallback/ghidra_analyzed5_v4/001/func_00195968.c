#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00196330(int param_1,undefined4 param_2);
extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_00195b38;
extern float DAT_00195b3c;
extern undefined4 DAT_00195b40;

// USA 00195968 <- EU 00195968 (Ghidra, non-matching)
// GLOBAL DAT_00195b38 int *
// GLOBAL DAT_00195b3c float
// GLOBAL DAT_00195b40 undefined4

undefined4 func_00195968(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  piVar1 = DAT_00195b38;
  iVar3 = *(int *)(param_1 + 0x444);
  if (iVar3 == 0) {
    bVar2 = func_00588BF0(param_1,0);
    if (!bVar2) {
      return 0;
    }
    func_0014FAFC(param_1,*(uint *)(param_1 + 1000),DAT_00195b3c);
    func_00196330(param_1,3);
    func_004CF478(*(int *)(param_1 + 0x40c),1);
    func_00151148(*(int *)(param_1 + 0x418),1);
    uVar5 = 1;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        return 0;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
      iVar3 = func_00260C78(*(float *)(iVar3 + 0x14),*(float *)(iVar3 + 8),*(float *)(iVar3 + 0xc),
                            *(float *)(iVar3 + 0x14));
      if (iVar3 == 0) {
        return 0;
      }
      uVar4 = func_00111A64((uint *)(*piVar1 + 0x660));
      uVar4 = (uint)((ulonglong)uVar4 * 100 >> 0x20);
      if (uVar4 < 10) {
        return func_00196330(param_1,2);
      }
      if (0x22 < uVar4) {
        return func_00196330(param_1,0);
      }
      return func_00196330(param_1,1);
    }
    fVar6 = *(float *)(param_1 + 0x474) - *(float *)(param_1 + 0x3d0);
    fVar7 = *(float *)(param_1 + 0x47c) - *(float *)(param_1 + 0x3d8);
    if (SQRT(fVar6 * fVar6 + fVar7 * fVar7) < *(float *)(param_1 + 0x480)) {
      return 0;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
    iVar3 = func_00260C78(*(float *)(iVar3 + 0x14),*(float *)(iVar3 + 8),*(float *)(iVar3 + 0xc),
                          *(float *)(iVar3 + 0x14));
    uVar5 = DAT_00195b40;
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x3dc) = DAT_00195b40;
    *(undefined4 *)(param_1 + 0x3e0) = uVar5;
    *(undefined4 *)(param_1 + 0x3e4) = uVar5;
    uVar4 = func_00111A64((uint *)(*piVar1 + 0x660));
    if ((uint)((ulonglong)uVar4 * 100 >> 0x20) < 0x32) {
      func_00196330(param_1,0);
    }
    else {
      func_00196330(param_1,1);
    }
    uVar5 = 2;
  }
  *(undefined4 *)(param_1 + 0x444) = uVar5;
  return 0;
}

