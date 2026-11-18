#include "ghidra_types.h"

extern int func_003E696C(int *param_1,undefined4 *param_2);
extern int func_0041497C(int param_1);
extern int func_004149E4(int param_1);
extern int func_00414FBC(int param_1);

// USA 00419BB0 <- EU 00419B90 (Ghidra, non-matching)

void func_00419BB0(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*param_1 != '\0') {
    while (*(int *)(param_1 + 4) != 0) {
      iVar1 = *(int *)(param_1 + 8);
      iVar3 = iVar1 + -0x58;
      func_004149E4(iVar3);
      if (*(code **)(iVar1 + -0x4c) != (code *)0x0) {
        (**(code **)(iVar1 + -0x4c))(iVar3,1,*(undefined4 *)(iVar1 + -0x48));
      }
      func_0041497C(iVar3);
    }
    while (*(int *)(param_1 + 0x10) != 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x14);
      func_003E696C((int *)(param_1 + 0x10),puVar2);
      func_00414FBC((int)(puVar2 + -0x16));
    }
    *param_1 = '\0';
  }
  return;
}

