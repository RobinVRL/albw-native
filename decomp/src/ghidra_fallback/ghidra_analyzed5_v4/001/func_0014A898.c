#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_0014a970;
extern int *DAT_0014a974;
extern undefined4 DAT_0014a978;
extern undefined4 DAT_0014a97c;

// USA 0014A898 <- EU 0014A898 (Ghidra, non-matching)
// GLOBAL DAT_0014a970 undefined4
// GLOBAL DAT_0014a974 int *
// GLOBAL DAT_0014a978 undefined4
// GLOBAL DAT_0014a97c undefined4

undefined4 * func_0014A898(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  
  piVar1 = DAT_0014a974;
  *param_1 = DAT_0014a970;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    iVar3 = *piVar1;
    *(undefined4 *)(iVar3 + 0x10ec) = DAT_0014a978;
    if (*(char *)(iVar3 + 0x1124) != '\0') {
      iVar4 = *(int *)(iVar3 + 0x1108);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar3 + 0x1108) = 0;
        func_0010F1F8((int *)(iVar3 + 0x10fc),in_s0);
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
      }
      *(undefined1 *)(iVar3 + 0x1124) = 0;
    }
    func_004A1520((undefined4 *)(iVar3 + 0x10ec));
    *(undefined4 *)(iVar3 + 0x10b0) = DAT_0014a97c;
    if (*(char *)(iVar3 + 0x10e8) != '\0') {
      iVar4 = *(int *)(iVar3 + 0x10cc);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar3 + 0x10cc) = 0;
        func_0010F1F8((int *)(iVar3 + 0x10c0),in_s0);
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
      }
      *(undefined1 *)(iVar3 + 0x10e8) = 0;
    }
    func_004A1520((undefined4 *)(iVar3 + 0x10b0));
    *piVar1 = 0;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

