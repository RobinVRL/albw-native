#include "ghidra_types.h"

extern int func_003D6F78(undefined4 *param_1,int param_2);
extern int func_006769D8(undefined4 *param_1,undefined4 *param_2,undefined1 param_3);
extern int func_00676AA0(undefined4 *param_1,int *param_2);

// USA 003D8600 <- EU 003D85E0 (Ghidra, non-matching)

undefined4 func_003D8600(int *param_1,int *param_2,int *param_3)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  #define local_18 ((int *)(albw_frame + 0x8))
  func_003D6F78(&local_1c,(int)param_1);
  if (local_1c != 0) {
    func_00676AA0(local_18,(int *)(*param_3 + 8));
    if (local_18[0] != 0) {
      local_20 = local_1c;
      func_006769D8((undefined4 *)(local_18[0] + 8),&local_20,*(undefined1 *)(*param_1 + 10));
      *param_2 = local_1c;
      *param_1 = *(int *)(*param_1 + 4);
      return 0;
    }
  }
  return 2;
}

