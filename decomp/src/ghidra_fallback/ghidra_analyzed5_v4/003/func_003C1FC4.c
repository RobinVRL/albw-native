#include "ghidra_types.h"

extern int func_00231CE4(int param_1,uint param_2,int param_3,float fparam_0);
extern int func_0048E128(int param_1,int param_2,int param_3,int param_4);
extern int func_00549C10(int param_1);
extern int *DAT_003c2074;

// USA 003C1FC4 <- EU 003C1FA0 (Ghidra, non-matching)
// GLOBAL DAT_003c2074 int *

undefined4 func_003C1FC4(int param_1,int *param_2,float fparam_0)

{
  int iVar1;
  int *piVar2;
  
  if (*param_2 == 0) {
    func_00231CE4(*(int *)(param_1 + 0x1ec),1,1,fparam_0);
    *(undefined1 *)(*(int *)(param_1 + 0x1ec) + 0x93) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x1ec) + 0x92) = 5;
  }
  else if (*param_2 == 2) {
    piVar2 = *(int **)(*DAT_003c2074 + 0x74);
    (**(code **)(*piVar2 + 0x28))(piVar2);
    *(int **)(*(int *)(param_1 + 0x1ec) + 0x8c) = piVar2;
    piVar2 = (int *)(**(code **)**(undefined4 **)(param_1 + 0x1ec))
                              (*(undefined4 **)(param_1 + 0x1ec),1,1);
    (**(code **)(*piVar2 + 0x14))(piVar2);
    *(undefined1 *)(*(int *)(param_1 + 0x1ec) + 0x93) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x1ec) + 0x92) = 5;
    iVar1 = func_00549C10(*(int *)(param_1 + 0x1ec));
    return func_0048E128(param_1,0xf,2,iVar1 + 8);
  }
  return 0;
}

