#include "ghidra_types.h"

extern int func_00414BD8(int param_1,int param_2);

// USA 0041AB08 <- EU 0041AAE8 (Ghidra, non-matching)

void func_0041AB08(int param_1,int param_2)

{
  int iVar1;
  undefined1 in_r2;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    in_r2 = 1;
  }
  *(char *)(param_1 + 0xe) = (char)param_2;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x54) = in_r2;
  }
  uVar3 = (uint)(param_2 != 0);
  if (*(char *)(param_1 + 0x54) != '\0') {
    uVar3 = 1;
  }
  if ((int)*(char *)(param_1 + 0x53) != uVar3) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0xfc) != 0) {
      do {
        iVar1 = *(int *)(param_1 + uVar2 * 0x340 + 0x134);
        if (iVar1 != 0) {
          func_00414BD8(iVar1,uVar3);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xfc));
    }
    *(char *)(param_1 + 0x53) = (char)uVar3;
  }
  return;
}

