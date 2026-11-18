#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float DAT_00111754;
extern uint *DAT_00111758;
extern float DAT_0011175c;
extern float DAT_00111760;

// USA 00111610 <- EU 00111610 (Ghidra, non-matching)
// GLOBAL DAT_00111754 float
// GLOBAL DAT_00111758 uint *
// GLOBAL DAT_0011175c float
// GLOBAL DAT_00111760 float

float func_00111610(int param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (param_2 == (uint *)0x0) {
    param_2 = DAT_00111758;
  }
  if (cVar1 == '\x01') {
    iVar3 = *(int *)(param_1 + 4);
    uVar4 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar3 + 0x2c) == DAT_0011175c) << 0x1e;
    if (!SUB41(uVar4 >> 0x1e,0)) {
      fVar5 = *(float *)(iVar3 + 0x28);
      fVar9 = *(float *)(iVar3 + 0x2c) - fVar5;
      fVar7 = DAT_00111760;
      uVar2 = func_00111A64(param_2);
      fVar8 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar4 >> 0x15) & 3);
      return fVar8 * fVar7 * fVar9 + fVar5;
    }
    fVar7 = *(float *)(iVar3 + 0x28);
  }
  else if (cVar1 == '\x02') {
    iVar3 = *(int *)(param_1 + 8);
    uVar4 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar3 + 0x28) == DAT_0011175c) << 0x1e;
    if (!SUB41(uVar4 >> 0x1e,0)) {
      fVar5 = *(float *)(iVar3 + 0x24);
      fVar9 = *(float *)(iVar3 + 0x28) - fVar5;
      fVar7 = DAT_00111760;
      uVar2 = func_00111A64(param_2);
      fVar8 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar4 >> 0x15) & 3);
      return fVar8 * fVar7 * fVar9 + fVar5;
    }
    fVar7 = *(float *)(iVar3 + 0x24);
  }
  else {
    fVar7 = DAT_00111754;
    if (cVar1 == '\x03') {
      fVar5 = *(float *)(*(int *)(param_1 + 4) + 0x2c);
      uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == DAT_0011175c) << 0x1e;
      fVar9 = *(float *)(*(int *)(param_1 + 4) + 0x28);
      fVar7 = DAT_0011175c;
      fVar8 = DAT_00111760;
      if (!SUB41(uVar4 >> 0x1e,0)) {
        fVar5 = fVar5 - fVar9;
        uVar2 = func_00111A64(param_2);
        fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar4 >> 0x15) & 3);
        fVar9 = fVar6 * fVar8 * fVar5 + fVar9;
      }
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = uVar4 & 0xfffffff | (uint)(*(float *)(iVar3 + 0x28) == fVar7) << 0x1e;
      if (SUB41(uVar4 >> 0x1e,0)) {
        fVar7 = *(float *)(iVar3 + 0x24);
      }
      else {
        fVar7 = *(float *)(iVar3 + 0x24);
        fVar6 = *(float *)(iVar3 + 0x28) - fVar7;
        uVar2 = func_00111A64(param_2);
        fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar4 >> 0x15) & 3);
        fVar7 = fVar5 * fVar8 * fVar6 + fVar7;
      }
      fVar7 = fVar7 * fVar9;
    }
  }
  return fVar7;
}

