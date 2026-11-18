// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_00520FC0(void);
extern int func_0053F480(int param_1);
extern int func_00556E64(int param_1);
extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern int DAT_001b2c50;
extern float DAT_001b2c54;
extern int *DAT_001b2c58;
extern int DAT_001b2c5c;

// USA 001B2AF8 <- EU 001B2AF8 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b2c50 int
// GLOBAL DAT_001b2c54 float
// GLOBAL DAT_001b2c58 int *
// GLOBAL DAT_001b2c5c int

undefined4 func_001B2AF8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar5);
  puVar4 = (undefined4 *)(param_1 + 0x8bc);
  fVar5 = DAT_001b2c54;
  if (0x13 < *(ushort *)(DAT_001b2c50 + param_1)) {
    iVar3 = *DAT_001b2c58;
    iVar2 = func_0053F480(iVar3);
    if ((iVar2 != 0) && (bVar1 = func_00556E64(iVar3), !bVar1)) {
      iVar2 = func_00520FC0();
      fVar6 = *(float *)(iVar2 + 4) - *(float *)(param_1 + 0x3d4);
      if (fVar6 <= fVar5) {
        fVar6 = -fVar6;
      }
      if (((int)ALBW_AS_U32(fVar6) < 0x40000000) &&
         (fVar6 = **(float **)(iVar3 + 0x1c) - *(float *)(param_1 + 0x3d0),
         fVar7 = (*(float **)(iVar3 + 0x1c))[2] - *(float *)(param_1 + 0x3d8),
         (int)ALBW_AS_U32((fVar6 * fVar6 + fVar7 * fVar7)) < DAT_001b2c5c)) {
        return func_0065B158(puVar4,4);
      }
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  if (*(char *)(iVar2 + 0x1c) != '\0') {
    return 0;
  }
  if (*(float *)(iVar2 + 0x10) < fVar5) {
    if (fVar5 < *(float *)(iVar2 + 8)) {
      return 0;
    }
  }
  else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
    return 0;
  }
  if (*(short *)(param_1 + 0x2e) == 1) {
    return func_0065B158(puVar4,6);
  }
  return func_0065B158(puVar4,3);
}

