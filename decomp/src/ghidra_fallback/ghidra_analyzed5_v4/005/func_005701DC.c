#include "ghidra_types.h"

extern float DAT_00570274;

// USA 005701DC <- EU 005701B4 (Ghidra, non-matching)
// GLOBAL DAT_00570274 float

longlong func_005701DC(int param_1,float fparam_0)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if ((uint)*(byte *)(param_1 + 0x80) < *(uint *)(param_1 + 0x4c)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x54) + (uint)*(byte *)(param_1 + 0x80) * 4);
  }
  else {
    iVar1 = 0;
  }
  iVar2 = *(int *)(iVar1 + 0x14);
  fVar3 = *(float *)(iVar2 + 0xc);
  if (*(float *)(iVar2 + 8) < fVar3) {
    if (((fVar3 < *(float *)(iVar2 + 0x14)) && (fVar3 < fparam_0)) &&
       (fparam_0 <= *(float *)(iVar2 + 0x14))) goto LAB_00570204;
    if (fparam_0 < DAT_00570274) goto LAB_0057020c;
  }
  else if (fparam_0 <= fVar3) goto LAB_0057020c;
  if (fparam_0 <= *(float *)(iVar2 + 8)) {
LAB_00570204:
    return CONCAT44(*(uint *)(iVar1 + 0xc),1);
  }
LAB_0057020c:
  return (ulonglong)*(uint *)(iVar1 + 0xc) << 0x20;
}

