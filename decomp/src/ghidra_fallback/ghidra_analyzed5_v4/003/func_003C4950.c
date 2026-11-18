#include "ghidra_types.h"

extern int func_00231ED0(int param_1);
extern int func_0048E128(int param_1,int param_2,int param_3,int param_4);
extern int func_00549C10(int param_1);

// USA 003C4950 <- EU 003C492C (Ghidra, non-matching)

undefined4 func_003C4950(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_2 == 2) {
    piVar1 = (int *)(**(code **)**(undefined4 **)(param_1 + 0x1ec))
                              (*(undefined4 **)(param_1 + 0x1ec),1,1);
    (**(code **)(*piVar1 + 0x14))(piVar1);
    *(bool *)(*(int *)(param_1 + 0x1ec) + 0x93) = *param_2 == 0;
    *(undefined1 *)(*(int *)(param_1 + 0x1ec) + 0x92) = 5;
    iVar2 = func_00549C10(*(int *)(param_1 + 0x1ec));
    return func_0048E128(param_1,iVar2,2,0xf);
  }
  if (*param_2 != 3) {
    return 0;
  }
  return func_00231ED0(*(int *)(param_1 + 0x1ec));
}

