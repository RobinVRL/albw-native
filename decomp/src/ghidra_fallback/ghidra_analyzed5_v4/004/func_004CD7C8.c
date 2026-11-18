#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int *DAT_004cd84c;

// USA 004CD7C8 <- EU 004CD7A0 (Ghidra, non-matching)
// GLOBAL DAT_004cd84c int *

void func_004CD7C8(int param_1,int param_2)

{
  int iVar1;
  float in_s0;
  
  if (*(char *)(*DAT_004cd84c + 0x25) != '\x02') {
    if (*(char *)(param_2 + 0x38) != '\0') {
      iVar1 = *(int *)(param_2 + 0x1c);
      if (iVar1 != 0) {
        *(undefined4 *)(param_2 + 0x1c) = 0;
        func_0010F1F8((int *)(param_2 + 0x10),in_s0);
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
      }
      *(undefined1 *)(param_2 + 0x38) = 0;
    }
    iVar1 = *(int *)(param_2 + 0x1c);
    if (iVar1 != 0) {
      *(undefined4 *)(param_2 + 0x1c) = 0;
      func_0010F1F8((int *)(param_2 + 0x10),in_s0);
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
    }
    *(int **)(param_2 + 0x1c) = (int *)(param_1 + 0x38);
    func_0010F1DC((int *)(param_1 + 0x38),(int *)(param_2 + 0x10));
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    *(undefined1 *)(param_2 + 0x38) = 1;
    return;
  }
  return;
}

