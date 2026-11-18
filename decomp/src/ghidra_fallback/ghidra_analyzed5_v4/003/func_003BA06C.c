#include "ghidra_types.h"

extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);

// USA 003BA06C <- EU 003BA048 (Ghidra, non-matching)

undefined4 func_003BA06C(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  puVar1 = (uint *)(**(code **)(*param_1 + 0xd4))(param_1);
  if (0x27 < *puVar1) {
    piVar3 = *(int **)(param_1[0x12] + 0x93c);
    iVar2 = func_003ABB24(piVar3,1,1);
    if (iVar2 != 0) {
      func_003B147C((int *)piVar3[1],1,1);
    }
    iVar2 = param_1[0x12];
    *(undefined1 *)(iVar2 + 0x936) = 1;
    piVar3 = *(int **)(*(int *)(iVar2 + 0x93c) + 4);
                    /* WARNING: Could not recover jumptable at 0x003ba0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar3 + 0x138))(piVar3,2,1);
  }
  return 0;
}

