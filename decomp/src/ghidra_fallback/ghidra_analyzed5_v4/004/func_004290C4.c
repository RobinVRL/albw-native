#include "ghidra_types.h"

extern float DAT_00429164;
extern float DAT_00429168;

// USA 004290C4 <- EU 004290A4 (Ghidra, non-matching)
// GLOBAL DAT_00429164 float
// GLOBAL DAT_00429168 float

undefined4 func_004290C4(int *param_1)

{
  int iVar1;
  float fVar2;
  
  *(float *)(param_1[0x12] + 0x3e0) = *(float *)(param_1[0x12] + 0x3e0) + DAT_00429164;
  iVar1 = *(int *)(*(int *)(param_1[0x12] + 0x8dc) + 0x14);
  fVar2 = *(float *)(iVar1 + 0xc);
  if (*(float *)(iVar1 + 8) < fVar2) {
    if (((fVar2 < *(float *)(iVar1 + 0x14)) && (fVar2 < DAT_00429168)) &&
       (DAT_00429168 <= *(float *)(iVar1 + 0x14))) goto LAB_0042914c;
joined_r0x0042913c:
    if (DAT_00429168 <= *(float *)(iVar1 + 8)) goto LAB_0042914c;
  }
  else if (fVar2 < DAT_00429168) goto joined_r0x0042913c;
  if (param_1[0x1b] < 0xf) {
    return (undefined4)param_1;
  }
LAB_0042914c:
                    /* WARNING: Could not recover jumptable at 0x0042915c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,10,1);
  return (undefined4)param_1;
}

