#include "ghidra_types.h"

extern float func_00115DC8(float *param_1);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_004905E0(float fparam_0);
extern int func_00491404(float *param_1,float *param_2);
extern int func_00580160(int param_1,undefined4 *param_2);
extern int func_00580170(int param_1,undefined4 *param_2);
extern int func_00580180(int param_1,undefined4 *param_2);
extern float DAT_0013002c;
extern int *DAT_00130030;
extern int *DAT_00130034;
extern int *DAT_00130038;
extern float DAT_0013003c;

// USA 0012FDD0 <- EU 0012FDD0 (Ghidra, non-matching)
// GLOBAL DAT_0013002c float
// GLOBAL DAT_00130030 int *
// GLOBAL DAT_00130034 int *
// GLOBAL DAT_00130038 int *
// GLOBAL DAT_0013003c float

void func_0012FDD0(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define afStack_48 ((float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  func_00580170(param_2,&local_34);
  fVar10 = SQRT(local_34 * local_34 + fStack_2c * fStack_2c);
  uVar8 = in_fpscr & 0xfffffff | (uint)(fVar10 == DAT_0013002c) << 0x1e;
  bVar7 = false;
  if (SUB41(uVar8 >> 0x1e,0)) {
    uVar8 = in_fpscr & 0xfffffff | (uint)(local_30 == DAT_0013002c) << 0x1e;
    bVar7 = SUB41(uVar8 >> 0x1e,0);
  }
  fVar12 = DAT_0013002c;
  if (bVar7) {
    iVar3 = 0;
  }
  else {
    uVar8 = uVar8 & 0xfffffff;
    if (NAN(fVar10) || NAN(DAT_0013002c)) {
      if (NAN(local_30) || NAN(DAT_0013002c)) {
        uVar8 = uVar8 | (uint)(fVar10 == local_30) << 0x1e | (uint)(local_30 <= fVar10) << 0x1d;
        bVar2 = (byte)(uVar8 >> 0x18);
        if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
          iVar3 = func_004905E0(fVar10 / local_30);
          iVar3 = -0x40000000 - iVar3;
        }
        else {
          iVar3 = func_004905E0(local_30 / fVar10);
          iVar3 = iVar3 + -0x80000000;
        }
      }
      else {
        fVar10 = -fVar10;
        uVar1 = uVar8 | (uint)(fVar10 < local_30) << 0x1f;
        uVar8 = uVar1 | (uint)(NAN(fVar10) || NAN(local_30)) << 0x1c;
        if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar8 >> 0x1c) & 1)) {
          iVar3 = func_004905E0(local_30 / fVar10);
          iVar3 = -0x80000000 - iVar3;
        }
        else {
          iVar3 = func_004905E0(fVar10 / local_30);
          iVar3 = iVar3 + 0x40000000;
        }
      }
    }
    else if (NAN(local_30) || NAN(DAT_0013002c)) {
      local_30 = -local_30;
      uVar1 = uVar8 | (uint)(fVar10 < local_30) << 0x1f;
      uVar8 = uVar1 | (uint)(NAN(fVar10) || NAN(local_30)) << 0x1c;
      if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar8 >> 0x1c) & 1)) {
        iVar3 = func_004905E0(local_30 / fVar10);
        iVar3 = -iVar3;
      }
      else {
        iVar3 = func_004905E0(fVar10 / local_30);
        iVar3 = iVar3 + -0x40000000;
      }
    }
    else {
      uVar1 = uVar8 | (uint)(fVar10 < local_30) << 0x1f;
      uVar8 = uVar1 | (uint)(NAN(fVar10) || NAN(local_30)) << 0x1c;
      if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar8 >> 0x1c) & 1)) {
        iVar3 = func_004905E0(local_30 / fVar10);
      }
      else {
        iVar3 = func_004905E0(fVar10 / local_30);
        iVar3 = 0x40000000 - iVar3;
      }
    }
  }
  iVar5 = *DAT_00130030;
  iVar4 = 0;
  if (((iVar5 < iVar3) && (iVar4 = *DAT_00130034, iVar3 < *DAT_00130038)) &&
     (iVar6 = *DAT_00130038 - iVar5, iVar4 = 0, iVar6 != 0)) {
    fVar10 = (float)VectorSignedToFloat(*DAT_00130034,(byte)(uVar8 >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(iVar3 - iVar5,(byte)(uVar8 >> 0x15) & 3);
    fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(uVar8 >> 0x15) & 3);
    iVar4 = (int)((fVar10 * fVar11) / fVar9);
  }
  uVar8 = -iVar4;
  *(uint *)(param_1 + 0x2b80) = uVar8;
  fVar10 = DAT_0013003c;
  if (uVar8 == 0) {
    *(float *)(param_1 + 0x2b84) = DAT_0013003c;
    *(float *)(param_1 + 0x2b88) = fVar12;
    *(float *)(param_1 + 0x2b8c) = fVar12;
    *(float *)(param_1 + 0x2b90) = fVar12;
    *(float *)(param_1 + 0x2b94) = fVar10;
    *(float *)(param_1 + 0x2b98) = fVar12;
    *(float *)(param_1 + 0x2b9c) = fVar12;
    *(float *)(param_1 + 0x2ba0) = fVar12;
    *(float *)(param_1 + 0x2ba4) = fVar10;
  }
  else {
    func_00580160(param_2,(float *)(param_1 + 0x2b74));
    *(float *)(param_1 + 0x2b78) = fVar12;
    func_00115DC8((float *)(param_1 + 0x2b74));
    func_00580180(param_2,(float *)(param_1 + 0x2b68));
    func_0048B5D4(afStack_48,(float *)(param_1 + 0x2b68),*(uint *)(param_1 + 0x2b80));
    func_00491404((float *)(param_1 + 0x2b84),afStack_48);
  }
  *(bool *)(param_1 + 0x2c18) = uVar8 != 0;
  return;
}

