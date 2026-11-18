#include "ghidra_types.h"

extern int func_001E6A6C(int param_1,int *param_2);
extern int func_001E6AB4(int param_1);
extern int func_004AC854(int param_1);
extern int func_004AD7A0(float fparam_0,float fparam_1);
extern int *DAT_00285bc0;
extern int *DAT_00285bc4;
extern int *DAT_00285bc8;

// USA 00285B34 <- EU 00285B5C (Ghidra, non-matching)
// GLOBAL DAT_00285bc0 int *
// GLOBAL DAT_00285bc4 int *
// GLOBAL DAT_00285bc8 int *

undefined4 func_00285B34(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x99c) == '\0') {
    return func_001E6AB4(param_1);
  }
  *(undefined1 *)(param_1 + 0x99c) = 0;
  if (*DAT_00285bc0 != 0) {
    uVar2 = func_004AD7A0(*(float *)(param_1 + 0x3d0),*(float *)(param_1 + 0x3d8));
    cVar1 = func_004AC854(uVar2);
    piVar3 = DAT_00285bc4;
    if (cVar1 != '\x17') {
      piVar3 = DAT_00285bc8;
    }
    return func_001E6A6C(param_1,piVar3);
  }
  return 0;
}

