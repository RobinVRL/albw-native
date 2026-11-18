#include "ghidra_types.h"

extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_00669EB8(undefined4 *param_1,undefined1 param_2);
extern float DAT_003c0740;

// USA 003C0698 <- EU 003C0674 (Ghidra, non-matching)
// GLOBAL DAT_003c0740 float

undefined4 func_003C0698(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1 + 99) = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_003c0740) {
      if (DAT_003c0740 < *(float *)(iVar1 + 8)) {
        return 0;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return 0;
    }
    piVar2 = *(int **)(*(int *)(param_1 + 0x48) + 0xbcc);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(piVar2);
    }
    func_00669EB8((undefined4 *)(param_1 + 0x6c),0);
    piVar2 = *(int **)(*(int *)(param_1 + 0x48) + 0x93c);
    iVar1 = func_003ABB24(piVar2,1,1);
    if (iVar1 != 0) {
      piVar2 = (int *)piVar2[1];
                    /* WARNING: Could not recover jumptable at 0x003c073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*piVar2 + 0x138))(piVar2,2,1);
    }
  }
  return 0;
}

