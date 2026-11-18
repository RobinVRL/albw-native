#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0049B044(int param_1,undefined4 *param_2,undefined4 *param_3);

// USA 0049B0E4 <- EU 0049B0BC (Ghidra, non-matching)

undefined4 func_0049B0E4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float in_s0;
  
  iVar3 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar3 = param_1 + 0x54;
  }
  func_0049B044(param_1,(undefined4 *)0x0,(undefined4 *)0x0);
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    iVar2 = 0;
    if ((*(uint *)(iVar1 + 0x70) & 1) != 0) {
      func_0010C0B8(iVar1 + 0x54);
      iVar2 = iVar1 + 0x54;
    }
    func_0010F1F8((int *)(*(int *)(iVar1 + 0x34) + param_1),in_s0);
    *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + -1;
    if (iVar2 != 0) {
      func_0010EEE0(iVar2);
    }
  }
  if (iVar3 != 0) {
    return func_0010EEE0(iVar3);
  }
  return 0;
}

