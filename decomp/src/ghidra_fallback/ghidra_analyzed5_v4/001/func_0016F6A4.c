#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016F954(int *param_1,int param_2,int param_3);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 *puRam0016f7d0;
extern float DAT_0016f7c4;
extern int DAT_0016f7c8;
extern int *DAT_0016f7cc;

// USA 0016F6A4 <- EU 0016F6A4 (Ghidra, non-matching)
// GLOBAL DAT_0016f7c4 float
// GLOBAL DAT_0016f7c8 int
// GLOBAL DAT_0016f7cc int *
// GLOBAL UNK_0016f7d0 undefined4 *

void func_0016F6A4(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 0x28);
  iVar1 = piVar2[5];
  if (*(byte *)(iVar1 + 0x1c) == 0) {
    if (*(float *)(iVar1 + 0x10) < DAT_0016f7c4) {
      if (*(float *)(iVar1 + 8) <= DAT_0016f7c4) goto LAB_0016f71c;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) goto LAB_0016f71c;
  }
  func_00169A80(piVar2,piVar2,(uint)*(byte *)(iVar1 + 0x1c),param_4);
  func_00168E9C(*(int **)(param_2 + 0x28),*(int *)(param_2 + 0x20),(int *)0x0);
LAB_0016f71c:
  if (*(char *)(param_2 + 0x37) == '\0') {
    *(undefined1 *)(param_2 + 0x35) = 0x3c;
    if ((*(char *)(param_2 + 0x3b) != '\0') &&
       (DAT_0016f7c8 <
        (int)ALBW_AS_U32((*(float *)(*(int *)(*DAT_0016f7cc + 0x1c) + 4) - *(float *)(param_2 + 0x30))))) {
      *(undefined1 *)(param_2 + 0x34) = 3;
      func_004CF478(*(int *)(param_2 + 0x20),0);
      func_004A8304(*puRam0016f7d0,*(int *)(param_2 + 0x24));
    }
  }
  else if (*(char *)(param_2 + 0x35) == '\0') {
    func_0016F954(param_1,param_2,1);
  }
  else {
    *(char *)(param_2 + 0x35) = *(char *)(param_2 + 0x35) + -1;
  }
  *(undefined1 *)(param_2 + 0x37) = 0;
  return;
}

