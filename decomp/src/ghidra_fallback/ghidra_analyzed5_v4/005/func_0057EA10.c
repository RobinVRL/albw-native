#include "ghidra_types.h"

extern int func_0011E9EC(int param_1,int param_2,undefined1 *param_3);

// USA 0057EA10 <- EU 0057E9E8 (Ghidra, non-matching)

undefined4 func_0057EA10(int param_1,int *param_2,uint param_3)

{
  if ((0xff < param_2[2]) && (param_3 < *(uint *)(param_1 + 8))) {
    (**(code **)(*param_2 + 8))(param_2);
    func_0011E9EC(*(int *)(param_1 + 4),param_3,(undefined1 *)param_2[1]);
    return 1;
  }
  *(undefined1 *)param_2[1] = 0;
  return 0;
}

