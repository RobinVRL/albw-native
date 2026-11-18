// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0030DAE0(int *param_1,int param_2);
extern int func_00361640();
extern int *DAT_0030def8;

// USA 0030DE28 <- EU 0030DE04 (Ghidra, non-matching)
// GLOBAL DAT_0030def8 int *

void func_0030DE28(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  float in_s0;
  
  piVar2 = DAT_0030def8;
  if (param_2 == 0) {
    (**(code **)(*(int *)param_1[7] + 0x14))((int *)param_1[7]);
    iVar4 = param_1[8];
    *(undefined4 *)(iVar4 + 0x14) = 0;
    piVar2 = (int *)(iVar4 + param_1[0x55]);
    iVar4 = piVar2[1];
    bVar5 = iVar4 == 0;
    if (bVar5) {
      iVar4 = *piVar2;
    }
    if (bVar5 && iVar4 == 0) {
      return;
    }
  }
  else if (param_2 == 100) {
    piVar3 = (int *)func_00361640(*DAT_0030def8);
    (**(code **)(*piVar3 + 0x14))(piVar3);
    iVar4 = func_00361640(*piVar2);
    *(undefined4 *)(iVar4 + 0x14) = 0;
    piVar2 = (int *)(iVar4 + param_1[0x55]);
    iVar4 = piVar2[1];
    bVar5 = iVar4 == 0;
    if (bVar5) {
      iVar4 = *piVar2;
    }
    if (bVar5 && iVar4 == 0) {
      return;
    }
  }
  else {
    puVar1 = func_0030DAE0(param_1,param_2);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    (**(code **)(puVar1[0x1d7] + 0x14))(puVar1 + 0x1d7);
    puVar1[0x1dc] = 0;
    piVar2 = (int *)(param_1[0x55] + (int)(puVar1 + 0x1d7));
    iVar4 = piVar2[1];
    bVar5 = iVar4 == 0;
    if (bVar5) {
      iVar4 = *piVar2;
    }
    if (bVar5 && iVar4 == 0) {
      return;
    }
  }
  func_0010F1F8(piVar2,in_s0);
  param_1[0x54] = param_1[0x54] + -1;
  return;
}

