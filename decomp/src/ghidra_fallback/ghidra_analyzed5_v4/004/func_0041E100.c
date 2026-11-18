#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_00412BB4(void);
extern int func_00412C8C(int *param_1,int param_2);
extern int func_00412EF4(int param_1,int param_2);
extern int func_0041D858(int *param_1,undefined4 param_2,int param_3);
extern int func_0041DB94(uint *param_1,undefined4 param_2,int param_3);

// USA 0041E100 <- EU 0041E0E0 (Ghidra, non-matching)

undefined4 func_0041E100(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int in_r2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 4);
  func_0010C0C0(piVar3);
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0010C0C0((int *)(param_1 + 4));
    func_0041D858((int *)(param_1 + 0x10),extraout_r1,in_r2);
    func_0010C160((int *)(param_1 + 4));
    piVar1 = (int *)func_00412BB4();
    iVar2 = func_00412C8C(piVar1,1);
    func_00412EF4((int)piVar1,iVar2);
    func_0041DB94((uint *)(param_1 + 0x10),extraout_r1_00,in_r2);
    return func_0010C160(piVar3);
  }
  return func_0010C160(piVar3);
}

