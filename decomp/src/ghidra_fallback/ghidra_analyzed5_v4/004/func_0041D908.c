#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_003E69B8(int *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0041D9A0(int param_1,int param_2,int param_3);

// USA 0041D908 <- EU 0041D8E8 (Ghidra, non-matching)

void func_0041D908(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = func_0041D9A0(param_1,0,param_3);
  while (*(int *)(param_1 + 4) != 0) {
    piVar3 = *(int **)(param_1 + 0xc);
    if (iVar1 != 0) {
      *(undefined1 *)(piVar3 + 5) = 0;
    }
    if ((char)piVar3[5] != '\0') {
      piVar2 = piVar3 + 3;
      while (piVar2 != (int *)piVar3[3]) {
        piVar2 = (int *)piVar2[1];
        if ((code *)piVar2[4] != (code *)0x0) {
          (*(code *)piVar2[4])(piVar2[2],piVar2[3],piVar2[5]);
        }
      }
    }
    func_003E69B8(piVar3 + 2,(undefined4 *)piVar3[3],piVar3 + 3);
    func_00111EF0((int *)(param_1 + 4),piVar3);
  }
  return;
}

