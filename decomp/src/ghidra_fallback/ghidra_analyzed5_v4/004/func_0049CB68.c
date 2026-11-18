#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010CBE8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0049B044(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0049F5FC(undefined4 *param_1);

// USA 0049CB68 <- EU 0049CB40 (Ghidra, non-matching)

undefined4 func_0049CB68(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar1 = param_1 + 0x54;
  }
  func_0049B044(param_1,(undefined4 *)0x0,(undefined4 *)0x0);
  func_0049F5FC((undefined4 *)(param_1 + 0x88));
  func_0049F5FC((undefined4 *)(param_1 + 0x78));
  func_0010CBE8(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return func_0010EEE0(iVar1);
}

