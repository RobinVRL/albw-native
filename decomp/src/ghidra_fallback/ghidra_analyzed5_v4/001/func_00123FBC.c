#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0058A7D4(void);
extern int func_0065650C(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_001240e0;
extern float DAT_001240e4;
extern float DAT_001240e8;

// USA 00123FBC <- EU 00123FBC (Ghidra, non-matching)
// GLOBAL DAT_001240e0 int *
// GLOBAL DAT_001240e4 float
// GLOBAL DAT_001240e8 float

undefined4 func_00123FBC(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  iVar1 = *(int *)(param_1 + 0x8f4);
  if (iVar1 == 0) {
    pfVar2 = *(float **)(*DAT_001240e0 + 0x1c);
    local_28 = *pfVar2;
    local_24 = pfVar2[1];
    local_20 = pfVar2[2];
  }
  else if (iVar1 == 1 || iVar1 == 2) {
    local_28 = *(float *)(param_1 + 8);
    local_24 = *(float *)(param_1 + 0xc);
    local_20 = *(float *)(param_1 + 0x10);
    puVar3 = (uint *)func_0058A7D4();
    fVar7 = local_28 - DAT_001240e4;
    fVar8 = (local_28 + DAT_001240e4) - fVar7;
    fVar6 = DAT_001240e4;
    uVar4 = func_00111A64(puVar3);
    fVar5 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    local_28 = fVar5 * DAT_001240e8 * fVar8 + fVar7;
    fVar5 = DAT_001240e8;
    puVar3 = (uint *)func_0058A7D4();
    fVar7 = local_20 - fVar6;
    fVar8 = (local_20 + fVar6) - fVar7;
    uVar4 = func_00111A64(puVar3);
    fVar6 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    local_20 = fVar6 * fVar5 * fVar8 + fVar7;
  }
  func_00115C70((float *)(param_1 + 0x8e0),&local_28,(float *)(param_1 + 0x3d0));
  iVar1 = func_0068C690((float *)(param_1 + 0x8e0));
  *(uint *)(param_1 + 0x8ec) = iVar1 + 0x20000000U & 0xc0000000;
  return func_0065650C((undefined4 *)(param_1 + 0x8bc),2);
}

