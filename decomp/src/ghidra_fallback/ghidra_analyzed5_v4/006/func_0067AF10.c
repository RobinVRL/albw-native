#include "ghidra_types.h"

extern int func_0067E150(int param_1,float fparam_0);
extern undefined4 DAT_0067afd4;

// USA 0067AF10 <- EU 0067AEE8 (Ghidra, non-matching)
// GLOBAL DAT_0067afd4 undefined4

int func_0067AF10(int param_1,float fparam_0)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  
  pbVar2 = func_0067E150(param_1,fparam_0);
  fVar5 = (float)VectorUnsignedToFloat((uint)*pbVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 * *(float *)(param_1 + 0x18) == fparam_0) << 0x1e;
  bVar4 = SUB41(uVar1 >> 0x1e,0);
  if (!bVar4) {
    bVar4 = pbVar2 == (byte *)((uint)*(ushort *)(param_1 + 0xe) * 6 + -6 + *(int *)(param_1 + 0x20))
    ;
  }
  if (bVar4) {
    iVar3 = (uint)pbVar2[1] + (uint)pbVar2[2] * 0x100;
    VectorUnsignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
    return iVar3;
  }
  VectorUnsignedToFloat((uint)pbVar2[6],(byte)(uVar1 >> 0x15) & 3);
  VectorUnsignedToFloat((uint)pbVar2[1] + (uint)pbVar2[2] * 0x100,(byte)(uVar1 >> 0x15) & 3);
  iVar3 = (uint)pbVar2[7] + (uint)pbVar2[8] * 0x100;
  VectorUnsignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
  return iVar3;
}

