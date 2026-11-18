// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00521100(int param_1,float fparam_0);
extern float func_00521298(int param_1);
extern int func_0058A7D4(void);
extern int func_0065D3A8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_002052e8;
extern float DAT_002052ec;
extern float DAT_002052f0;
extern float DAT_002052f4;
extern float DAT_002052f8;
extern int DAT_002052fc;
extern int DAT_00205300;
extern float DAT_00205304;
extern float DAT_00205308;
extern int DAT_0020530c;

// USA 002050BC <- EU 002050BC (Ghidra, non-matching)
// GLOBAL DAT_002052e8 uint *
// GLOBAL DAT_002052ec float
// GLOBAL DAT_002052f0 float
// GLOBAL DAT_002052f4 float
// GLOBAL DAT_002052f8 float
// GLOBAL DAT_002052fc int
// GLOBAL DAT_00205300 int
// GLOBAL DAT_00205304 float
// GLOBAL DAT_00205308 float
// GLOBAL DAT_0020530c int

undefined4 func_002050BC(int param_1)

{
  short sVar1;
  uint *puVar2;
  undefined2 uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  
  puVar4 = (uint *)func_0058A7D4();
  puVar2 = DAT_002052e8;
  uVar7 = *DAT_002052e8;
  uVar5 = func_00111A64(puVar4);
  fVar10 = DAT_002052ec;
  *(int *)(param_1 + 0x8ec) =
       (int)((ulonglong)uVar7 * (ulonglong)uVar5 >> 0x20) * (int)*(short *)(param_1 + 0x8ca) +
       *(int *)(param_1 + 1000);
  if (*(uint *)(param_1 + 0x8e0) < *(uint *)(param_1 + 0x8e4)) {
    *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e0) + 1;
  }
  else {
    uVar5 = func_00111A64(puVar4);
    iVar6 = (int)((ulonglong)uVar5 * 0x8c >> 0x20) + 100;
    *(int *)(param_1 + 0x8e4) = iVar6;
    if (iVar6 == 0) {
      *(float *)(param_1 + 0x8e8) = fVar10;
    }
    else {
      fVar9 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x8e8) = DAT_002052f0 / fVar9;
    }
    *(undefined4 *)(param_1 + 0x8e0) = 0;
    uVar5 = func_00111A64(puVar4);
    sVar1 = (short)((ulonglong)uVar5 * 3 >> 0x20);
    *(short *)(param_1 + 0x8cc) = sVar1;
    if (sVar1 == 0) {
      uVar3 = 0xffff;
    }
    else {
      if (sVar1 != 2) goto LAB_0020518c;
      uVar3 = 1;
    }
    *(undefined2 *)(param_1 + 0x8ca) = uVar3;
  }
LAB_0020518c:
  func_0051D27C((int *)(param_1 + 1000),*(int *)(param_1 + 0x8ec),*puVar2);
  fVar9 = *(float *)(param_1 + 0x8bc);
  fVar9 = fVar9 + (DAT_002052f4 - fVar9) * DAT_002052f8;
  *(float *)(param_1 + 0x8bc) = fVar9;
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),fVar9);
  uVar5 = *(uint *)(param_1 + 0x8d4);
  bVar8 = uVar5 < *(uint *)(param_1 + 0x8d8);
  if (bVar8) {
    *(uint *)(param_1 + 0x8d4) = uVar5 + 1;
  }
  iVar6 = func_00521100(param_1,fVar10);
  if ((iVar6 == 0) || (fVar9 = func_00521298(param_1), DAT_002052fc <= (int)ALBW_AS_U32(fVar9))) {
    if (!bVar8) {
      iVar6 = func_00521100(param_1,fVar10);
      if ((iVar6 != 0) &&
         (fVar10 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0),
         fVar9 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8),
         (int)ALBW_AS_U32((fVar10 * fVar10 + fVar9 * fVar9)) <= DAT_00205300)) {
        fVar10 = DAT_00205304;
        uVar5 = func_00111A64(puVar4);
        fVar9 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        if ((int)ALBW_AS_U32((fVar9 * DAT_00205308 * fVar10)) < DAT_0020530c) {
          return func_0065D3A8((undefined4 *)(param_1 + 0x8f0),4);
        }
        return func_0065D3A8((undefined4 *)(param_1 + 0x8f0),3);
      }
      return func_0065D3A8((undefined4 *)(param_1 + 0x8f0),7);
    }
  }
  else {
    func_0065D3A8((undefined4 *)(param_1 + 0x8f0),6);
  }
  return 0;
}

