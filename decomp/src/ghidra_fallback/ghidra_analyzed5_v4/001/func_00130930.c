#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 00130930 <- EU 00130930 (Ghidra, non-matching)

undefined4 func_00130930(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  float in_s0;
  
  piVar1 = (int *)(param_2 + 0x44);
  bVar3 = *(int *)(param_2 + 0x48) == 0;
  piVar2 = piVar1;
  if (bVar3) {
    piVar2 = (int *)*piVar1;
  }
  if (bVar3 && piVar2 == (int *)0x0) {
    return 0;
  }
  func_0010C0B8(param_1 + 0x2bac);
  if (*(int *)(param_2 + 0x50) != 0) {
    *(undefined4 *)(param_2 + 0x50) = 0;
    func_0010F1F8(piVar1,in_s0);
    *(int *)(param_1 + 0x28b8) = *(int *)(param_1 + 0x28b8) + -1;
  }
  return func_0010EEE0(param_1 + 0x2bac);
}

