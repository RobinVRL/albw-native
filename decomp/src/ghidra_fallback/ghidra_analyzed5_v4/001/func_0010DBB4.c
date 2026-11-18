#include "ghidra_types.h"

extern int func_0010F958(int param_1,uint *param_2,int param_3,int param_4);
extern int func_0010F9AC(int param_1,uint *param_2,int param_3,int param_4);

// USA 0010DBB4 <- EU 0010DBB4 (Ghidra, non-matching)

undefined4 func_0010DBB4(int param_1,int *param_2,float fparam_0)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)param_2[1] != '\0') {
    bVar2 = *(int *)(param_1 + 0x20) != 0;
    cVar1 = '\0';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x3b);
    }
    if (bVar2 && cVar1 != '\0') {
      (**(code **)(*param_2 + 8))(param_2);
      func_0010F958(*(int *)(param_1 + 0x20),param_2[1],(int)fparam_0,0);
    }
    bVar2 = *(int *)(param_1 + 0x24) != 0;
    cVar1 = '\0';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x3c);
    }
    if (bVar2 && cVar1 != '\0') {
      (**(code **)(*param_2 + 8))(param_2);
      return func_0010F9AC(*(int *)(param_1 + 0x24),(uint *)param_2[1],(int)fparam_0,0);
    }
  }
  return 0;
}

