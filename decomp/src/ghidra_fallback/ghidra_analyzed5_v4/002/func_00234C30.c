#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_0065EF0C(undefined4 *param_1,undefined1 param_2);
extern float DAT_00234cd4;

// USA 00234C30 <- EU 00234C30 (Ghidra, non-matching)
// GLOBAL DAT_00234cd4 float

void func_00234C30(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x54c) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x54c),param_2,param_3,param_4);
    func_00168E9C(*(int **)(param_1 + 0x54c),*(int *)(param_1 + 0x530),(int *)0x0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x54c) + 0x14);
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      if (*(float *)(iVar1 + 0x10) < DAT_00234cd4) {
        if (DAT_00234cd4 < *(float *)(iVar1 + 8)) {
          return;
        }
      }
      else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
        return;
      }
      func_004CEA18(*(int *)(param_1 + 0x530),0,*(uint *)(param_1 + 0x574));
      func_0065EF0C((undefined4 *)(param_1 + 0x550),2);
    }
  }
  return;
}

