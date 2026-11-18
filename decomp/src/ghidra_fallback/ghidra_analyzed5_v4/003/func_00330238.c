#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int *DAT_0033035c;
extern uint DAT_00330360;

// USA 00330238 <- EU 00330214 (Ghidra, non-matching)
// GLOBAL DAT_0033035c int *
// GLOBAL DAT_00330360 uint

undefined4 func_00330238(float *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  
  iVar9 = *DAT_0033035c;
  iVar1 = func_00581B9C(iVar9);
  if (((iVar1 == 1) && (puVar2 = (uint *)func_00582250(iVar9), param_2 < *puVar2)) &&
     (iVar1 = *(int *)(puVar2[2] + param_2 * 4), iVar1 != 0)) {
    uVar3 = 0;
    do {
      if (((*(int *)(iVar1 + 0x28) != 0) && (uVar3 < *(uint *)(iVar1 + 0x20))) &&
         (iVar9 = *(int *)(*(int *)(iVar1 + 0x28) + uVar3 * 4), iVar9 != 0)) {
        pfVar4 = param_1;
        if (uVar3 < 4) {
          pfVar4 = param_1 + uVar3 * 3;
        }
        fVar8 = *(float *)(iVar9 + 0x1c);
        fVar10 = *(float *)(iVar9 + 0x18);
        pfVar4[2] = *(float *)(iVar9 + 0x20);
        pfVar4[1] = fVar8;
        *pfVar4 = fVar10;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 4);
  }
  uVar3 = 0;
  uVar11 = (ulonglong)DAT_00330360;
  do {
    pfVar4 = param_1 + 0xc;
    pfVar7 = param_1;
    if (uVar3 < 4) {
      pfVar4 = param_1 + uVar3 * 3 + 0xc;
      pfVar7 = param_1 + uVar3 * 3;
    }
    uVar5 = (int)(uVar3 + 1) % 4;
    pfVar6 = param_1;
    if (uVar5 < 4) {
      pfVar6 = param_1 + uVar5 * 3;
    }
    func_00115C54(pfVar4,pfVar7,pfVar6);
    pfVar4 = param_1 + 0xc;
    if (uVar3 < 4) {
      pfVar4 = param_1 + uVar3 * 3 + 0xc;
    }
    func_00115D70(pfVar4,pfVar4,ALBW_AS_F32(uVar11));
    fVar8 = ALBW_AS_F32(uVar11);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  func_00115C54(param_1 + 0x18,param_1,param_1 + 6);
  return func_00115D70(param_1 + 0x18,param_1 + 0x18,fVar8);
}

