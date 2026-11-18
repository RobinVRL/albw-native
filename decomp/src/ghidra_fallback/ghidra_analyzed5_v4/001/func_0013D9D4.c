#include "ghidra_types.h"

extern int func_0013DC0C(int param_1);
extern int func_00173F4C(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0065743C(undefined4 *param_1,undefined1 param_2);
extern float DAT_0013db68;
extern float DAT_0013db6c;
extern float DAT_0013db70;
extern float DAT_0013db74;
extern int *DAT_0013db78;

// USA 0013D9D4 <- EU 0013D9D4 (Ghidra, non-matching)
// GLOBAL DAT_0013db68 float
// GLOBAL DAT_0013db6c float
// GLOBAL DAT_0013db70 float
// GLOBAL DAT_0013db74 float
// GLOBAL DAT_0013db78 int *

void func_0013D9D4(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3,
                  float fparam_4,float fparam_5)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = DAT_0013db68;
  uVar6 = *(uint *)(param_1 + 0x51c);
  uVar3 = *(uint *)(param_1 + 0x520);
  if (uVar6 < uVar3) {
    *(uint *)(param_1 + 0x51c) = uVar6 + 1;
  }
  uVar8 = *(uint *)(param_1 + 0x51c);
  uVar6 = (uint)(uVar6 >= uVar3);
  fVar10 = DAT_0013db6c;
  if ((uVar3 != 0 && uVar8 != 0) && (fVar10 = fVar13, uVar8 < uVar3)) {
    fVar10 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = fVar10 * *(float *)(param_1 + 0x524);
  }
  fVar11 = fVar10 * DAT_0013db70 - fVar13;
  fVar12 = (fVar13 - fVar11 * fVar11) * DAT_0013db74;
  *(float *)(param_1 + 0x3d0) =
       *(float *)(param_1 + 0x584) +
       (*(float *)(param_1 + 0x554) - *(float *)(param_1 + 0x584)) * fVar10;
  fVar11 = *(float *)(param_1 + 0x588) +
           (*(float *)(param_1 + 0x558) - *(float *)(param_1 + 0x588)) * fVar10;
  *(float *)(param_1 + 0x3d4) = fVar11;
  *(float *)(param_1 + 0x3d8) =
       *(float *)(param_1 + 0x58c) +
       (*(float *)(param_1 + 0x55c) - *(float *)(param_1 + 0x58c)) * fVar10;
  *(float *)(param_1 + 0x3d4) = fVar11 + fVar12;
  func_0013DC0C(param_1);
  *(float *)(*(int *)(param_1 + 0x4f4) + 0x134) =
       (fVar13 - fVar10) * *(float *)(*(int *)(param_1 + 0x2d0) + 0x2c);
  piVar1 = DAT_0013db78;
  if (uVar6 != 0) {
    piVar4 = (int *)func_0052FBA0(*DAT_0013db78 + 0x3dbbc,*(uint *)(param_1 + 0x550));
    bVar2 = func_00173F4C(piVar4);
    if (bVar2) {
      func_0065743C((undefined4 *)(param_1 + 0x4f8),5);
      iVar9 = 0;
      do {
        iVar7 = (int)*(short *)(param_1 + 0x5e + iVar9 * 6);
        if ((0 < iVar7) &&
           (piVar5 = (int *)func_0052FBDC(*piVar1 + 0x3dbbc,iVar7,0), piVar4 == piVar5)) {
          func_00588C14(param_1,iVar9,1);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 2);
    }
  }
  return;
}

