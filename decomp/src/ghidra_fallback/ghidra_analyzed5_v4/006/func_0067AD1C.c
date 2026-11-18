#include "ghidra_types.h"

extern int func_0067D648(int param_1,float fparam_0);
extern float DAT_0067add4;
extern undefined4 DAT_0067add8;

// USA 0067AD1C <- EU 0067ACF4 (Ghidra, non-matching)
// GLOBAL DAT_0067add4 float
// GLOBAL DAT_0067add8 undefined4

uint func_0067AD1C(int param_1,float fparam_0)

{
  uint uVar1;
  ushort *puVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  
  puVar2 = func_0067D648(param_1,fparam_0);
  fVar4 = (float)VectorUnsignedToFloat((uint)*puVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff |
          (uint)(fVar4 * DAT_0067add4 * *(float *)(param_1 + 0x18) == fparam_0) << 0x1e;
  bVar3 = SUB41(uVar1 >> 0x1e,0);
  if (!bVar3) {
    bVar3 = puVar2 == (ushort *)
                      ((uint)*(ushort *)(param_1 + 0xe) * 6 + -6 + *(int *)(param_1 + 0x20));
  }
  if (bVar3) {
    VectorUnsignedToFloat((uint)puVar2[1],(byte)(uVar1 >> 0x15) & 3);
    return (uint)puVar2[1];
  }
  VectorUnsignedToFloat((uint)puVar2[3],(byte)(uVar1 >> 0x15) & 3);
  VectorUnsignedToFloat((uint)puVar2[1],(byte)(uVar1 >> 0x15) & 3);
  VectorUnsignedToFloat((uint)puVar2[4],(byte)(uVar1 >> 0x15) & 3);
  return (uint)puVar2[4];
}

