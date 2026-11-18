#include "ghidra_types.h"

extern int func_00231ED0(int param_1);
extern int func_0048E128(int param_1,int param_2,int param_3,int param_4);
extern int func_00549C10(int param_1);

// USA 003AEEB4 <- EU 003AEE90 (Ghidra, non-matching)

undefined4 func_003AEEB4(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_003aeecc:
    piVar2 = (int *)(**(code **)**(undefined4 **)(param_1 + 0x1ec))
                              (*(undefined4 **)(param_1 + 0x1ec),1,1);
    (**(code **)(*piVar2 + 0x14))(piVar2);
    *(bool *)(*(int *)(param_1 + 0x1ec) + 0x93) = *param_2 == 0;
    *(undefined1 *)(*(int *)(param_1 + 0x1ec) + 0x92) = 5;
    iVar1 = func_00549C10(*(int *)(param_1 + 0x1ec));
    return func_0048E128(param_1,iVar1,2,iVar1 + 8);
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) goto LAB_003aeecc;
    if (iVar1 != 3) {
      return 0;
    }
  }
  return func_00231ED0(*(int *)(param_1 + 0x1ec));
}

