#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00676328(int *param_1,undefined4 param_2);
extern int func_0067660C(int *param_1,undefined4 param_2);

// USA 00412C8C <- EU 00412C6C (Ghidra, non-matching)

int func_00412C8C(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0x5b] == 0) {
    if (param_2 == 0) {
      return 0;
    }
    puVar1 = (undefined4 *)func_00412A3C(param_1,4);
    puVar1[3] = param_1[0x61];
    *(undefined1 *)(puVar1 + 1) = 0;
    if ((undefined4 *)param_1[0x5c] == (undefined4 *)0x0) {
      param_1[0x5b] = (int)puVar1;
    }
    else {
      *(undefined4 *)param_1[0x5c] = puVar1;
    }
    param_1[0x5c] = (int)puVar1;
    *puVar1 = 0;
  }
  iVar3 = param_1[0x5d];
  coproc_moveto_Data_Memory_Barrier(0);
  if (param_2 == 0) {
    iVar2 = func_00676328(param_1,param_1[0x5b]);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    func_0067660C(param_1,param_1[0x5b]);
  }
  *(int *)(param_1[0x5b] + 8) = iVar3;
  param_1[0x5d] = param_1[0x5d] + 1;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  return iVar3;
}

