#include "ghidra_types.h"

extern int func_00385EE0(uint param_1);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_00667C8C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00385430;

// USA 003853A0 <- EU 0038537C (Ghidra, non-matching)
// GLOBAL DAT_00385430 int *

undefined4 func_003853A0(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(*(int *)(param_1 + 4) + 0x936) == '\x02') {
    *(undefined4 *)(param_1 + 300) = 2;
    iVar1 = func_00385EE0(param_1);
    piVar2 = DAT_00385430;
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 4);
      *(undefined1 *)(iVar1 + 0x936) = 1;
      piVar2 = *(int **)(*(int *)(iVar1 + 0x93c) + 4);
                    /* WARNING: Could not recover jumptable at 0x0038542c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*piVar2 + 0x138))(piVar2,0,1);
    }
    if (*(char *)(param_1 + 0x34) == '\0') {
      *(undefined1 *)(param_1 + 0x34) = 1;
      func_004A8BFC(*piVar2,param_1 + 0xb4,3);
      iVar1 = *(int *)(param_1 + 4);
      uVar3 = *(undefined4 *)(iVar1 + 0x958);
      uVar4 = *(undefined4 *)(iVar1 + 0x95c);
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar1 + 0x960);
      *(undefined4 *)(param_1 + 0xd8) = uVar3;
      *(undefined4 *)(param_1 + 0xdc) = uVar4;
      return 0;
    }
  }
  else {
    func_00667C8C((undefined4 *)(param_1 + 0x10),0);
  }
  return 0;
}

