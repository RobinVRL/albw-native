#include "ghidra_types.h"

extern int func_003E67D8(int param_1,uint param_2);
extern int func_003E6CBC(int param_1,int param_2,uint param_3);
extern int func_003E6D50(uint param_1);
extern int func_0041D87C(int *param_1);
extern int func_0041D908(int param_1,undefined4 param_2,int param_3);

// USA 0041DB10 <- EU 0041DAF0 (Ghidra, non-matching)

undefined4 func_0041DB10(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*param_1 != 0) {
    func_0041D908((int)param_1,param_2,param_3);
    func_003E67D8(*param_1,3);
    func_003E6D50(*param_1);
    *param_1 = 0;
  }
  uVar2 = param_2 + 3U & 0xfffffffc;
  if ((uint)(param_2 + param_3) < uVar2) {
    uVar3 = 0;
  }
  else {
    puVar4 = func_003E6CBC(uVar2,(param_2 + param_3) - uVar2,0);
    *param_1 = (uint)puVar4;
    uVar3 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      bVar1 = func_0041D87C((int *)param_1);
      uVar3 = 0;
      if (bVar1) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

