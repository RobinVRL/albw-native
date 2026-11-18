#include "ghidra_types.h"

extern int DAT_003f2398;
extern uint DAT_003f239c;
extern uint DAT_003f23a0;

// USA 003F2234 <- EU 003F2214 (Ghidra, non-matching)
// GLOBAL DAT_003f2398 int
// GLOBAL DAT_003f239c uint
// GLOBAL DAT_003f23a0 uint

uint * func_003F2234(undefined4 param_1,uint *param_2,int *param_3,int param_4,float fparam_0,
                    float fparam_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar6 = DAT_003f239c;
  puVar1 = param_2;
  if (param_3 != (int *)0x0) {
    iVar3 = *(int *)(DAT_003f2398 + 4);
    param_2[3] = DAT_003f23a0;
    *param_2 = iVar3 * 4 + 1U | 0x80000000;
    param_2[1] = uVar6;
    fVar8 = *(float *)(*(int *)(*param_3 + 0x144) + 0x1a0) * fparam_0;
    param_2[2] = (uint)ALBW_AS_U32(fVar8);
    uVar17 = param_3[param_4 * 0x16 + 5];
    param_2[4] = uVar17;
    uVar16 = param_3[param_4 * 0x16 + 4];
    param_2[5] = uVar16;
    uVar9 = param_3[param_4 * 0x16 + 3];
    param_2[6] = uVar9;
    param_2[7] = 0;
    uVar10 = param_3[param_4 * 0x16 + 0x18];
    param_2[8] = uVar10;
    uVar11 = param_3[param_4 * 0x16 + 0x17];
    param_2[9] = uVar11;
    uVar12 = param_3[param_4 * 0x16 + 0x16];
    param_2[10] = uVar12;
    param_2[0xb] = param_3[param_4 * 0x16 + 6];
    uVar13 = param_3[param_4 * 0x16 + 0x15];
    param_2[0xc] = uVar13;
    uVar14 = param_3[param_4 * 0x16 + 0x14];
    param_2[0xd] = uVar14;
    uVar15 = param_3[param_4 * 0x16 + 0x13];
    param_2[0xe] = uVar15;
    piVar2 = param_3 + 0x1605;
    fVar4 = *(float *)(*param_3 + 0x94) + fparam_1 * *(float *)(*piVar2 + 0x3e4);
    param_2[0xf] = (uint)ALBW_AS_U32(fVar4);
    fVar5 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(*piVar2 + 0x3e0),(byte)(in_fpscr >> 0x15) & 3);
    uVar6 = VectorFloatToUnsigned(fVar5 + *(float *)(*param_3 + 0x90),3);
    param_2[0x10] = uVar6;
    fVar7 = *(float *)(*param_3 + 0x78) + fparam_1 * *(float *)(*piVar2 + 0x36c);
    param_2[0x11] = (uint)ALBW_AS_U32(fVar7);
    fVar5 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(*piVar2 + 0x368),(byte)(in_fpscr >> 0x15) & 3);
    uVar6 = VectorFloatToUnsigned(fVar5 + *(float *)(*param_3 + 0x74),3);
    param_2[0x12] = uVar6;
    param_2[0x13] = (uint)ALBW_AS_U32(fVar8);
    param_2[0x14] = uVar17;
    param_2[0x15] = uVar16;
    param_2[0x16] = uVar9;
    param_2[0x17] = 0;
    param_2[0x18] = uVar10;
    param_2[0x19] = uVar11;
    param_2[0x1a] = uVar12;
    param_2[0x1b] = (uint)ALBW_AS_U32(-ALBW_AS_F32(param_3[param_4 * 0x16 + 6]));
    param_2[0x1f] = (uint)ALBW_AS_U32(fVar4);
    param_2[0x1c] = uVar13;
    param_2[0x1d] = uVar14;
    param_2[0x1e] = uVar15;
    param_2[0x20] = *(uint *)(*param_3 + 0x90);
    param_2[0x21] = (uint)ALBW_AS_U32(fVar7);
    puVar1 = param_2 + 0x24;
    param_2[0x22] = *(uint *)(*param_3 + 0x74);
    param_2[0x23] = 0;
  }
  return puVar1;
}

