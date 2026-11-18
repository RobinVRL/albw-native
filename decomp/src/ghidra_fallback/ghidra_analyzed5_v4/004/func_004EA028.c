#include "ghidra_types.h"

extern int func_00495BD0(int param_1,uint param_2,int *param_3,int *param_4,int *param_5);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);

// USA 004EA028 <- EU 004EA000 (Ghidra, non-matching)

undefined4 func_004EA028(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  
  (**(code **)(*param_2 + 8))(param_2);
  puVar4 = (uint *)param_2[1];
  puVar1 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
  uVar2 = func_0056D3E4((int)puVar1,puVar4);
  if (uVar2 == 0xffffffff) {
    uVar3 = 0;
  }
  else {
    uVar3 = func_00495BD0(*(int *)(*(int *)(param_1 + 0x24) + 0x140),uVar2,(int *)0xffffffff,
                          (int *)0x0,(int *)0x0);
  }
  return uVar3;
}

