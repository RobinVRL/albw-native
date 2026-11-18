#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_001E43DC(int param_1,float fparam_0);
extern int func_001E43F8(int param_1,float fparam_0);
extern int func_0052F7F4(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00664740(undefined4 *param_1,undefined1 param_2);
extern float DAT_00302d60;
extern int DAT_00302d64;

// USA 00302CC0 <- EU 00302C9C (Ghidra, non-matching)
// GLOBAL DAT_00302d60 float
// GLOBAL DAT_00302d64 int

undefined4 func_00302CC0(int param_1)

{
  int iVar1;
  float fparam_0;
  
  if (*(char *)(param_1 + 0x4e8) == '\0') {
    if (0x3c < *(int *)(param_1 + 0x498)) {
      func_00165E28(*(int *)(param_1 + 0x4cc),*(undefined2 *)(DAT_00302d64 + 0x2a));
      return func_00664740((undefined4 *)(param_1 + 0x498),0);
    }
  }
  else if (0x3c < *(int *)(param_1 + 0x498)) {
    fparam_0 = DAT_00302d60;
    func_001E43F8(param_1,DAT_00302d60);
    func_001E43DC(param_1,fparam_0);
    iVar1 = func_0052F7F4(param_1);
    if (iVar1 != 0) {
      func_00588C14(param_1,0,1);
      *(undefined1 *)(*(int *)(param_1 + 0x484) + 0x44) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x4d0) + 0x44) = 1;
      func_00664740((undefined4 *)(param_1 + 0x498),3);
    }
  }
  return 0;
}

