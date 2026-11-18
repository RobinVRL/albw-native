#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_004F9FC4(int param_1,int param_2);
extern int func_004FA124(int *param_1,int param_2,int param_3);
extern int func_004FBA3C(int param_1,undefined4 param_2,int param_3);
extern int *DAT_002bba6c;
extern float DAT_002bba70;

// USA 002BB954 <- EU 002BB930 (Ghidra, non-matching)
// GLOBAL DAT_002bba6c int *
// GLOBAL DAT_002bba70 float

int func_002BB954(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0x1d) {
    iVar1 = (int)*(char *)(param_3 + 0x24);
    if (iVar1 == 0xb) {
      return 0x10;
    }
    if (iVar1 == 3) {
      if (*(char *)(param_3 + 0x25) == '\x02') {
        return 0x11;
      }
    }
    else {
      iVar2 = *DAT_002bba6c;
      if (iVar1 == 5) {
        func_002917A4(iVar2,param_1 + 0xf4,0,DAT_002bba70);
        return 0x21;
      }
      if (iVar1 == 8) {
        func_00291A38(iVar2,param_1 + 0xf4,DAT_002bba70);
        func_004F9FC4((int)param_1,param_1[0x10f]);
        func_004FA124(param_1,(int)*(char *)(param_3 + 0x24),0);
        func_004FBA3C((int)param_1,(int)*(char *)(param_3 + 0x24),(int)*(char *)(param_3 + 0x25));
        return 0x21;
      }
      if (iVar1 == 0xe) {
        func_00291FE0(iVar2,param_1 + 0xf4,DAT_002bba70);
        func_004F9FC4((int)param_1,param_1[0x10f]);
        func_004FA124(param_1,(int)*(char *)(param_3 + 0x24),0);
        func_004FBA3C((int)param_1,(int)*(char *)(param_3 + 0x24),(int)*(char *)(param_3 + 0x25));
        return 0x21;
      }
      if ((iVar1 != 1 && iVar1 != 3) && iVar1 != 0xd) {
        func_004FA124(param_1,iVar1,0);
        return 0x21;
      }
    }
    *(undefined1 *)(param_1 + 0x216) = 0;
  }
  param_1[0x168] = param_1[0x168] | 0x80;
  return param_2;
}

