#include "ghidra_types.h"

extern int func_004018A8(int param_1,uint *param_2,int param_3);
extern int func_0041F3C0(undefined4 param_1,uint *param_2,uint *param_3,uint param_4,int param_5);
extern float DAT_00403420;

// USA 00403360 <- EU 00403340 (Ghidra, non-matching)
// GLOBAL DAT_00403420 float

uint * func_00403360(int param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_54 (*(uint *)(albw_frame + 0xc))
  #define local_50 ((float *)(albw_frame + 0x10))
  #define local_20 (*(uint *)(albw_frame + 0x40))
  puVar1 = func_004018A8(param_1,param_2,param_3);
  local_54 = *(uint *)(param_3 + 0x78) & 3;
  puVar4 = &local_54;
  if (3 < local_54) {
    puVar4 = &local_20;
  }
  local_20 = 3;
  uVar6 = *puVar4;
  uVar2 = 0;
  if (uVar6 != 0) {
    do {
      iVar5 = *(int *)(param_3 + 0x7c) + uVar2 * 0x20;
      uVar3 = uVar2 + 1;
      fVar12 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(iVar5 + 4),(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (float)VectorUnsignedToFloat
                               ((uint)*(ushort *)(iVar5 + 4),(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(iVar5 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(iVar5 + 0x12),(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat
                               ((uint)*(ushort *)(iVar5 + 6),(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorUnsignedToFloat
                               ((uint)*(ushort *)(iVar5 + 6),(byte)(in_fpscr >> 0x15) & 3);
      local_50[uVar2 * 4] = DAT_00403420 / fVar12;
      local_50[uVar2 * 4 + 1] = DAT_00403420 / fVar9;
      local_50[uVar2 * 4 + 2] = fVar7 / fVar10;
      local_50[uVar2 * 4 + 3] = fVar8 / fVar11;
      uVar2 = uVar3;
    } while (uVar3 < uVar6);
  }
  puVar4 = func_0041F3C0(param_1,puVar1,(uint *)local_50,6,uVar6);
  return puVar4;
}

