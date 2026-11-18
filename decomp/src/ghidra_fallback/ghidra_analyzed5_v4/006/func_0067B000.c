#include "ghidra_types.h"

extern int func_0067E848(int param_1,float fparam_0);
extern undefined4 DAT_0067b0b0;

// USA 0067B000 <- EU 0067AFD8 (Ghidra, non-matching)
// GLOBAL DAT_0067b0b0 undefined4

undefined8 func_0067B000(int param_1,float fparam_0)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  
  puVar3 = func_0067E848(param_1,fparam_0);
  uVar4 = *puVar3;
  fVar6 = (float)VectorUnsignedToFloat(uVar4 & 0xfff,(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar6 * *(float *)(param_1 + 0x18) == fparam_0) << 0x1e;
  bVar5 = SUB41(uVar2 >> 0x1e,0);
  if (!bVar5) {
    bVar5 = puVar3 == (uint *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0xe) * 8 + -8)
    ;
  }
  if (bVar5) {
    VectorUnsignedToFloat(uVar4 >> 0xc,(byte)(uVar2 >> 0x15) & 3);
    return CONCAT44(uVar4,uVar4 >> 0xc);
  }
  uVar1 = puVar3[2] >> 0xc;
  VectorUnsignedToFloat(puVar3[2] & 0xfff,(byte)(uVar2 >> 0x15) & 3);
  VectorUnsignedToFloat(uVar4 >> 0xc,(byte)(uVar2 >> 0x15) & 3);
  VectorUnsignedToFloat(uVar1,(byte)(uVar2 >> 0x15) & 3);
  return CONCAT44(uVar4 >> 0xc,uVar1);
}

