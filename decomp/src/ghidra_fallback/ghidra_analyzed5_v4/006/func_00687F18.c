#include "ghidra_types.h"

extern int func_0069190C(int *param_1,int *param_2,int param_3);

// USA 00687F18 <- EU 00687EF0 (Ghidra, non-matching)

int * func_00687F18(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (int *)0x0) {
    *(undefined1 *)(param_3 + 3) = 1;
    param_3[1] = 0;
    param_3[2] = 0;
    return param_3;
  }
  iVar1 = func_0069190C(param_3 + 4,param_2 + 4,0x40000);
  if (iVar1 < 0) {
    piVar2 = func_00687F18(param_1,(int *)param_2[1],param_3);
    param_2[1] = (int)piVar2;
    param_3 = param_2;
  }
  else if (iVar1 < 1) {
    if (param_2 != param_3) {
      param_3[2] = param_2[2];
      param_3[1] = param_2[1];
      *(char *)(param_3 + 3) = (char)param_2[3];
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  else {
    piVar2 = func_00687F18(param_1,(int *)param_2[2],param_3);
    param_2[2] = (int)piVar2;
    param_3 = param_2;
  }
  piVar2 = (int *)param_3[2];
  if (((piVar2 != (int *)0x0) && ((char)piVar2[3] == '\x01')) &&
     ((param_3[1] == 0 || (*(char *)(param_3[1] + 0xc) != '\x01')))) {
    param_3[2] = piVar2[1];
    piVar2[1] = (int)param_3;
    *(char *)(piVar2 + 3) = (char)param_3[3];
    *(undefined1 *)(param_3 + 3) = 1;
    param_3 = piVar2;
  }
  piVar2 = (int *)param_3[1];
  if ((((piVar2 != (int *)0x0) && ((char)piVar2[3] == '\x01')) && (piVar2[1] != 0)) &&
     (*(char *)(piVar2[1] + 0xc) == '\x01')) {
    param_3[1] = piVar2[2];
    piVar2[2] = (int)param_3;
    *(char *)(piVar2 + 3) = (char)param_3[3];
    *(undefined1 *)(param_3 + 3) = 1;
    param_3 = piVar2;
  }
  if (((param_3[1] != 0) && (*(char *)(param_3[1] + 0xc) == '\x01')) &&
     ((param_3[2] != 0 && (*(char *)(param_3[2] + 0xc) == '\x01')))) {
    *(bool *)(param_3 + 3) = (char)param_3[3] == '\0';
    *(bool *)(param_3[1] + 0xc) = *(char *)(param_3[1] + 0xc) == '\0';
    *(bool *)(param_3[2] + 0xc) = *(char *)(param_3[2] + 0xc) == '\0';
  }
  return param_3;
}

