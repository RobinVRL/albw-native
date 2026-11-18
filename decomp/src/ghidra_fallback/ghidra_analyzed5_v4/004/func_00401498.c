#include "ghidra_types.h"

extern float DAT_004016d4;
extern float DAT_004016d8;

// USA 00401498 <- EU 00401478 (Ghidra, non-matching)
// GLOBAL DAT_004016d4 float
// GLOBAL DAT_004016d8 float

void * func_00401498(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((float *)(albw_frame + 0x8))
  bVar1 = true;
  fVar6 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * DAT_004016d4;
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      uVar3 = *(uint *)(param_2 + iVar2 * 4);
      if ((uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18
          ) == 0xffffffff) {
        if (!bVar1) {
          local_58[iVar2 * 4] = DAT_004016d8;
          local_58[iVar2 * 4 + 1] = DAT_004016d8;
          local_58[iVar2 * 4 + 2] = DAT_004016d8;
          local_58[iVar2 * 4 + 3] = fVar6;
        }
      }
      else {
        iVar4 = param_2 + iVar2 * 4;
        fVar8 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)(param_2 + iVar2 * 4),(byte)(in_fpscr >> 0x15) & 3)
        ;
        local_58[iVar2 * 4] = fVar8 * DAT_004016d4;
        fVar8 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)(iVar4 + 1),(byte)(in_fpscr >> 0x15) & 3);
        local_58[iVar2 * 4 + 1] = fVar8 * DAT_004016d4;
        fVar8 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)(iVar4 + 2),(byte)(in_fpscr >> 0x15) & 3);
        local_58[iVar2 * 4 + 2] = fVar8 * DAT_004016d4;
        iVar5 = 0;
        fVar8 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)(iVar4 + 3),(byte)(in_fpscr >> 0x15) & 3);
        local_58[iVar2 * 4 + 3] = fVar8 * DAT_004016d4;
        for (; bVar1 && iVar5 < iVar2; iVar5 = iVar5 + 1) {
          local_58[iVar5 * 4] = DAT_004016d8;
          local_58[iVar5 * 4 + 1] = DAT_004016d8;
          local_58[iVar5 * 4 + 2] = DAT_004016d8;
          local_58[iVar5 * 4 + 3] = fVar6;
        }
        bVar1 = false;
        local_58[iVar2 * 4 + 3] = local_58[iVar2 * 4 + 3] * fVar6;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    if (!bVar1) {
      uVar7 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x15) & 3));
      *(undefined4 *)(param_1 + 0x608) = uVar7;
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x1f8) = local_58[0];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x1fc) = local_58[1];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x200) = local_58[2];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x204) = local_58[3];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x208) = local_58[4];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x20c) = local_58[5];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x210) = local_58[6];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x214) = local_58[7];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x218) = local_58[8];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x21c) = local_58[9];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x220) = local_58[10];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x224) = local_58[0xb];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x228) = local_58[0xc];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x22c) = local_58[0xd];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x230) = local_58[0xe];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x234) = local_58[0xf];
      *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x04';
      return (void *)param_1;
    }
  }
  *(float *)(param_1 + 0x608) = fVar6;
  return (void *)param_1;
}

