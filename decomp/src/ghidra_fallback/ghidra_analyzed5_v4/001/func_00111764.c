#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float DAT_001118a8;
extern uint *DAT_001118ac;
extern float DAT_001118b0;
extern float DAT_001118b4;

// USA 00111764 <- EU 00111764 (Ghidra, non-matching)
// GLOBAL DAT_001118a8 float
// GLOBAL DAT_001118ac uint *
// GLOBAL DAT_001118b0 float
// GLOBAL DAT_001118b4 float

float func_00111764(int param_1,uint *param_2)

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
    param_2 = DAT_001118ac;
  }
  if (cVar1 == '\x01') {
    iVar3 = *(int *)(param_1 + 4);
    uVar4 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar3 + 0x24) == DAT_001118b0) << 0x1e;
    if (!SUB41(uVar4 >> 0x1e,0)) {
      fVar5 = *(float *)(iVar3 + 0x20);
      fVar9 = *(float *)(iVar3 + 0x24) - fVar5;
      fVar7 = DAT_001118b4;
      uVar2 = func_00111A64(param_2);
      fVar8 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar4 >> 0x15) & 3);
      return fVar8 * fVar7 * fVar9 + fVar5;
    }
    fVar7 = *(float *)(iVar3 + 0x20);
  }
  else if (cVar1 == '\x02') {
    iVar3 = *(int *)(param_1 + 8);
    uVar4 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar3 + 0x20) == DAT_001118b0) << 0x1e;
    if (!SUB41(uVar4 >> 0x1e,0)) {
      fVar5 = *(float *)(iVar3 + 0x1c);
      fVar9 = *(float *)(iVar3 + 0x20) - fVar5;
      fVar7 = DAT_001118b4;
      uVar2 = func_00111A64(param_2);
      fVar8 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar4 >> 0x15) & 3);
      return fVar8 * fVar7 * fVar9 + fVar5;
    }
    fVar7 = *(float *)(iVar3 + 0x1c);
  }
  else {
    fVar7 = DAT_001118a8;
    if (cVar1 == '\x03') {
      fVar5 = *(float *)(*(int *)(param_1 + 4) + 0x24);
      uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == DAT_001118b0) << 0x1e;
      fVar9 = *(float *)(*(int *)(param_1 + 4) + 0x20);
      fVar7 = DAT_001118b0;
      fVar8 = DAT_001118b4;
      if (!SUB41(uVar4 >> 0x1e,0)) {
        fVar5 = fVar5 - fVar9;
        uVar2 = func_00111A64(param_2);
        fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar4 >> 0x15) & 3);
        fVar9 = fVar6 * fVar8 * fVar5 + fVar9;
      }
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = uVar4 & 0xfffffff | (uint)(*(float *)(iVar3 + 0x20) == fVar7) << 0x1e;
      if (SUB41(uVar4 >> 0x1e,0)) {
        fVar7 = *(float *)(iVar3 + 0x1c);
      }
      else {
        fVar7 = *(float *)(iVar3 + 0x1c);
        fVar6 = *(float *)(iVar3 + 0x20) - fVar7;
        uVar2 = func_00111A64(param_2);
        fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar4 >> 0x15) & 3);
        fVar7 = fVar5 * fVar8 * fVar6 + fVar7;
      }
      fVar7 = fVar7 * fVar9;
    }
  }
  return fVar7;
}

