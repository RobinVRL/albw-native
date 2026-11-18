#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00490CD0(int *param_1,undefined1 *param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00688F10(undefined4 *param_1);

// USA 00490F84 <- EU 00490F5C (Ghidra, non-matching)

int * func_00490F84(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_r3;
  code *pcVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(char * *)(albw_frame + 0xc))
  #define local_38 (*(char *)(albw_frame + 0x38))
  #define local_37 (*(char *)(albw_frame + 0x39))
  if (*param_1 == 0) {
    *param_1 = (int)param_2;
    iVar2 = func_00103CBC(param_2);
    param_1[3] = iVar2;
  }
  else {
    iVar2 = func_00490CD0(param_1,&local_38);
    if (iVar2 != 0) {
      cVar1 = '\0';
      if (local_38 != '\0') {
        cVar1 = local_37;
      }
      if (local_38 == '\0' || cVar1 == 's') {
        piVar4 = (int *)param_1[1];
        iVar2 = func_00103CBC(param_2);
        pcVar3 = *(code **)(*piVar4 + 8);
        local_64 = param_2;
      }
      else {
        piVar4 = (int *)param_1[1];
        func_00688F10(&local_68);
        iVar2 = func_004994B0((int)&local_68,&local_38,(uint)param_2,in_r3);
        (**(code **)(local_68 + 8))(&local_68);
        pcVar3 = *(code **)(*piVar4 + 8);
      }
      (*pcVar3)(piVar4,local_64,iVar2);
    }
  }
  return param_1;
}

