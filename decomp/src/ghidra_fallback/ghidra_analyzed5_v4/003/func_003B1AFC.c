#include "ghidra_types.h"

extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_003B2808(int param_1);
extern float DAT_003b1bf4;
extern float DAT_003b1bf8;

// USA 003B1AFC <- EU 003B1AD8 (Ghidra, non-matching)
// GLOBAL DAT_003b1bf4 float
// GLOBAL DAT_003b1bf8 float

undefined4 func_003B1AFC(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
  fVar3 = *(float *)(iVar1 + 8);
  fVar5 = *(float *)(iVar1 + 0xc);
  fVar4 = *(float *)(iVar1 + 0x14);
  if (fVar3 < fVar5) {
    if (((fVar5 < fVar4) && (fVar5 < DAT_003b1bf4)) && (DAT_003b1bf4 <= fVar4)) goto LAB_003b1b74;
  }
  else if (DAT_003b1bf4 <= fVar5) goto LAB_003b1b7c;
  if (DAT_003b1bf4 <= fVar3) {
LAB_003b1b74:
    return func_003B2808(param_1);
  }
LAB_003b1b7c:
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_003b1bf8) {
      if (DAT_003b1bf8 < fVar3) {
        return 0;
      }
    }
    else if (fVar3 != fVar4) {
      return 0;
    }
    piVar2 = *(int **)(*(int *)(param_1 + 0x48) + 0x93c);
    iVar1 = func_003ABB24(piVar2,1,1);
    if (iVar1 != 0) {
      return func_003B147C((int *)piVar2[1],1,1);
    }
  }
  return 0;
}

