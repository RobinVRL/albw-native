#include "ghidra_types.h"

extern int func_002B8AFC(int param_1);
extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern float DAT_00429450;

// USA 004293CC <- EU 004293AC (Ghidra, non-matching)
// GLOBAL DAT_00429450 float

undefined4 func_004293CC(int param_1)

{
  int iVar1;
  int *piVar2;
  
  func_002B8AFC(*(int *)(param_1 + 0x48));
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_00429450) {
      if (DAT_00429450 < *(float *)(iVar1 + 8)) {
        return 0;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
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

