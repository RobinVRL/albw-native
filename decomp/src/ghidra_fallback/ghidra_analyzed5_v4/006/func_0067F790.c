#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_00418AE4(int param_1);
extern int func_00418B00(int param_1);

// USA 0067F790 <- EU 0067F768 (Ghidra, non-matching)

void func_0067F790(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 != (int *)(param_1 + 0x24)) {
    do {
      piVar3 = (int *)*piVar2;
      bVar1 = func_00418AE4((int)(piVar2 + -0x11));
      if (!bVar1) {
        func_00418B00((int)(piVar2 + -0x11));
        func_00111EF0((int *)(param_1 + 0x20),piVar2);
        func_00112364((int *)(param_1 + 0x14),param_1 + 0x18,piVar2);
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)(param_1 + 0x24));
  }
  return;
}

