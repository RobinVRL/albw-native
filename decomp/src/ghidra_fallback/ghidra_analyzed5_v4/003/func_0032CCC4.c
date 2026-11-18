#include "ghidra_types.h"

extern int func_0011593C(undefined4 *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004CF5B0(int param_1,int param_2,int param_3,int param_4);
extern float DAT_0032cd58;
extern float DAT_0032cd5c;
extern float DAT_0032cd60;

// USA 0032CCC4 <- EU 0032CCA0 (Ghidra, non-matching)
// GLOBAL DAT_0032cd58 float
// GLOBAL DAT_0032cd5c float
// GLOBAL DAT_0032cd60 float

undefined4 func_0032CCC4(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  uint uVar6;
  float fVar7;
  
  iVar4 = *(int *)(param_1 + 0xac);
  if (iVar4 != 0) {
    if (*(char *)(iVar4 + 0x30) != '\0') {
      *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
      func_0011593C((undefined4 *)(iVar4 + 0x80));
      fVar3 = DAT_0032cd60;
      fVar2 = DAT_0032cd5c;
      fVar1 = DAT_0032cd58;
      fVar5 = fVar1;
      if (*(int *)(param_1 + 0xcc) != 0) {
        iVar4 = *(int *)(param_1 + 0xcc) + -1;
        *(int *)(param_1 + 0xcc) = iVar4;
        fVar7 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
        if ((fVar1 < fVar7) && (fVar5 = fVar2, fVar7 < fVar3)) {
          fVar5 = (fVar2 * (fVar7 - fVar1)) / fVar3 + fVar1;
        }
      }
      uVar6 = VectorFloatToUnsigned(fVar5,3);
      func_004CF5B0(*(int *)(param_1 + 0xac),0,1,uVar6 & 0xff);
    }
    return func_004CEAF0(*(int *)(param_1 + 0xac));
  }
  return 0;
}

