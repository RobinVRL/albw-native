#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_004cd92c;
extern int *DAT_004cd930;
extern undefined4 DAT_004cd934;

// USA 004CD8BC <- EU 004CD894 (Ghidra, non-matching)
// GLOBAL DAT_004cd92c undefined4
// GLOBAL DAT_004cd930 int *
// GLOBAL DAT_004cd934 undefined4

undefined4 func_004CD8BC(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float in_s0;
  
  piVar1 = DAT_004cd930;
  *param_1 = DAT_004cd92c;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    iVar2 = *piVar1;
    *(undefined4 *)(iVar2 + 0x34) = DAT_004cd934;
    iVar4 = *(int *)(iVar2 + 0x3c);
    while (iVar4 != iVar2 + 0x38) {
      iVar3 = *(int *)(iVar4 + 8);
      iVar4 = *(int *)(iVar4 + 4);
      if (*(char *)(iVar3 + 0x38) != '\0') {
        iVar5 = *(int *)(iVar3 + 0x1c);
        if (iVar5 != 0) {
          *(undefined4 *)(iVar3 + 0x1c) = 0;
          func_0010F1F8((int *)(iVar3 + 0x10),in_s0);
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -1;
        }
        *(undefined1 *)(iVar3 + 0x38) = 0;
      }
    }
    *piVar1 = 0;
  }
  return func_004A1520(param_1);
}

