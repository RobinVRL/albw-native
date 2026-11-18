#include "ghidra_types.h"

extern int func_005698CC(int *param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined8 param_5, undefined4 param_6);
extern int func_0056CB68(int param_1,uint param_2,undefined4 *param_3);

// USA 00408A10 <- EU 004089F0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:8 undefined8
// PARAM param_6 Stack[0x8]:4 char *
// PARAM param_7 Stack[0xc]:4 undefined4

undefined4
func_00408A10(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
             char *param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  local_3c = -1;
  local_38 = -1;
  local_34 = (char *)0x0;
  iVar1 = func_0056CB68(param_1[1],param_2,&local_3c);
  uVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)param_1[2];
    if ((piVar2 != (int *)0x0) && ((char)piVar2[1] != '\0')) {
      (**(code **)(*piVar2 + 0x24))(piVar2,param_2,&local_3c,0);
    }
    if (local_34 == (char *)0x0) {
      if ((local_3c != -1) && (local_38 != -1)) {
        uVar3 = (**(code **)(*param_1 + 0x10))
                          (param_1,param_3,param_4,local_38 + param_1[0x43],local_3c);
        return uVar3;
      }
      return 0;
    }
    if (param_6 == (char *)0x0) {
      uVar3 = func_005698CC(param_1,param_3,param_4,local_34,param_5,param_7);
      return uVar3;
    }
    uVar3 = func_005698CC(param_1,param_3,param_4,param_6,param_5,param_7);
  }
  return uVar3;
}

