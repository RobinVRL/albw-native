#include "ghidra_types.h"

extern int func_0010BB00(undefined4 *param_1,undefined4 *param_2);
extern int func_003D22CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0058FB28(undefined4 *param_1);

// USA 003D2288 <- EU 003D2264 (Ghidra, non-matching)

undefined4 * func_003D2288(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define auStack_18 ((undefined4 *)(albw_frame + 0x8))
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = func_003D22CC(auStack_18,(undefined4 *)(param_2 + 0x20));
    func_0010BB00(param_3,puVar1);
  }
  if ((undefined4 *)(param_2 + 0x20) == (undefined4 *)0x0) {
    func_0058FB28(param_1);
  }
  else {
    func_0010BB00(param_1,(undefined4 *)(param_2 + 0x20));
  }
  return param_1;
}

