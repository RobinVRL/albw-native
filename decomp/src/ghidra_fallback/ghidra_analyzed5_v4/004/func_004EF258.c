#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_004ef2b0;
extern int *DAT_004ef2b4;
extern undefined4 DAT_004ef2b8;

// USA 004EF258 <- EU 004EF230 (Ghidra, non-matching)
// GLOBAL DAT_004ef2b0 undefined4
// GLOBAL DAT_004ef2b4 int *
// GLOBAL DAT_004ef2b8 undefined4

undefined4 * func_004EF258(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  
  piVar1 = DAT_004ef2b4;
  *param_1 = DAT_004ef2b0;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    iVar3 = *piVar1;
    *(undefined4 *)(iVar3 + 0x98) = DAT_004ef2b8;
    if (*(char *)(iVar3 + 0xd0) != '\0') {
      iVar4 = *(int *)(iVar3 + 0xb4);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar3 + 0xb4) = 0;
        func_0010F1F8((int *)(iVar3 + 0xa8),in_s0);
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
      }
      *(undefined1 *)(iVar3 + 0xd0) = 0;
    }
    func_004A1520((undefined4 *)(iVar3 + 0x98));
    *piVar1 = 0;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

