#include "ghidra_types.h"

extern int func_003D6F78(undefined4 *param_1,int param_2);
extern int func_003D9B60(int *param_1);
extern int func_003DA38C(int *param_1,int param_2);
extern int func_006769F0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_00676AA0(undefined4 *param_1,int *param_2);

// USA 003D8690 <- EU 003D8670 (Ghidra, non-matching)

undefined4 func_003D8690(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(int *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  func_003D6F78(&local_18,(int)param_1);
  if (local_18 != 0) {
    func_00676AA0(&local_14,(int *)(*param_3 + 8));
    if (local_14 != 0) {
      local_1c = local_18;
      func_006769F0((undefined4 *)(local_14 + 8),&local_1c,param_1[5]);
      iVar1 = func_003DA38C((int *)(local_14 + 0x10),(uint)*(byte *)(*param_1 + 10));
      if ((iVar1 != 0) && (iVar1 = func_003D9B60((int *)(local_14 + 0x10)), iVar1 != 0)) {
        *param_2 = local_18;
        *param_1 = *(int *)(*param_1 + 4);
        return 0;
      }
    }
  }
  return 2;
}

