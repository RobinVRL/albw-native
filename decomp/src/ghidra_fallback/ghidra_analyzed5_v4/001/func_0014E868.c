#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002978FC(int param_1,int param_2,int param_3);
extern int func_00581850(int param_1,uint *param_2);
extern int *DAT_0014e8f8;

// USA 0014E868 <- EU 0014E868 (Ghidra, non-matching)
// GLOBAL DAT_0014e8f8 int *

void * func_0014E868(int *param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  pvVar1 = (void *)param_1[0x102];
  if (pvVar1 == (void *)0x0) {
    if (param_2 == 0) {
      iVar4 = *(int *)(*(int *)(*DAT_0014e8f8 + 0x30) + 0x20);
      piVar2 = (int *)(**(code **)(*param_1 + 0x48))(param_1);
      (**(code **)(*piVar2 + 8))(piVar2);
      pcVar3 = func_00581850(iVar4,(uint *)piVar2[1]);
      if (pcVar3 == (char *)0x0) {
        return (void *)0;
      }
    }
    iVar4 = func_0010BAB4(0x1c);
    pvVar1 = (void *)0x0;
    if (iVar4 != 0) {
      pvVar1 = func_002978FC(iVar4,(int)(param_1 + 200),(int)param_1);
    }
    param_1[0x102] = (int)pvVar1;
  }
  return pvVar1;
}

