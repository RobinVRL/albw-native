#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00521078(int param_1);
extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0022cb6c;
extern float DAT_0022cb70;

// USA 0022CA60 <- EU 0022CA60 (Ghidra, non-matching)
// GLOBAL DAT_0022cb6c float
// GLOBAL DAT_0022cb70 float

void func_0022CA60(int param_1)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint in_fpscr;
  float fVar10;
  longlong lVar11;
  
  fVar3 = DAT_0022cb6c;
  lVar11 = (ulonglong)(uint)ALBW_AS_U32(DAT_0022cb6c) << 0x20;
  *(undefined1 *)(param_1 + 0xd05) = 0;
  fVar4 = DAT_0022cb70;
  uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x3e0) == fVar3) << 0x1e |
          (uint)(fVar3 <= *(float *)(param_1 + 0x3e0)) << 0x1d;
  bVar2 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
    lVar11 = CONCAT44(fVar3,fVar3);
    uVar8 = *(uint *)(param_1 + 0xa70);
    uVar9 = *(uint *)(param_1 + 0xa74);
    iVar6 = uVar9 - uVar8;
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(uVar1 >> 0x15) & 3);
    *(float *)(param_1 + 0x3dc) =
         *(float *)(param_1 + 0x3dc) +
         (fVar3 - *(float *)(param_1 + 0x3dc)) * (DAT_0022cb70 / fVar10);
    iVar7 = iVar6;
    if (uVar8 < uVar9) {
      iVar7 = uVar8 + 1;
    }
    fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(uVar1 >> 0x15) & 3);
    *(float *)(param_1 + 0x3e4) =
         *(float *)(param_1 + 0x3e4) + (fVar3 - *(float *)(param_1 + 0x3e4)) * (fVar4 / fVar10);
    if (uVar8 < uVar9) {
      *(int *)(param_1 + 0xa70) = iVar7;
      func_004FC07C(param_1,6,8,0);
      *(int *)(param_1 + 0x3e0) = (int)lVar11;
      *(undefined1 *)(param_1 + 0xd05) = 1;
    }
    else {
      func_004FC07C(param_1,7,0xffffffff,0);
    }
  }
  if ((*(float *)(param_1 + 0x3e0) <= ALBW_AS_F32(((ulonglong)lVar11 >> 0x20))) &&
     (bVar5 = func_00521078(param_1), bVar5)) {
    func_0065E8B8((undefined4 *)(param_1 + 0x8fc),0xf);
  }
  return;
}

