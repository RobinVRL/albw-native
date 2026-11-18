// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_0053F480(int param_1);
extern int func_00556E64(int param_1);
extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001b2a44;
extern float DAT_001b2a48;
extern int DAT_001b2a4c;

// USA 001B296C <- EU 001B296C [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b2a44 int *
// GLOBAL DAT_001b2a48 float
// GLOBAL DAT_001b2a4c int

undefined4 func_001B296C(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (0x13 < *(ushort *)(param_1 + 0x918)) {
    iVar3 = *DAT_001b2a44;
    iVar2 = func_0053F480(iVar3);
    if ((iVar2 != 0) && (bVar1 = func_00556E64(iVar3), !bVar1)) {
      iVar2 = func_00520FC0();
      fVar4 = *(float *)(iVar2 + 4) - *(float *)(param_1 + 0x3d4);
      if (fVar4 <= DAT_001b2a48) {
        fVar4 = -fVar4;
      }
      if (((int)ALBW_AS_U32(fVar4) < 0x40000000) &&
         (fVar4 = **(float **)(iVar3 + 0x1c) - *(float *)(param_1 + 0x3d0),
         fVar5 = (*(float **)(iVar3 + 0x1c))[2] - *(float *)(param_1 + 0x3d8),
         (int)ALBW_AS_U32((fVar4 * fVar4 + fVar5 * fVar5)) < DAT_001b2a4c)) {
        return func_0065B158((undefined4 *)(param_1 + 0x8bc),4);
      }
    }
  }
  if (*(int *)(param_1 + 0x8bc) != 0x5a) {
    return 0;
  }
  return func_0065B158((undefined4 *)(param_1 + 0x8bc),2);
}

