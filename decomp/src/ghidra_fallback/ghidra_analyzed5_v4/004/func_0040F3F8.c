#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003E696C(int *param_1,undefined4 *param_2);

// USA 0040F3F8 <- EU 0040F3D8 (Ghidra, non-matching)

undefined4 func_0040F3F8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  func_0010C0C0((int *)(param_1 + 0x2c));
  uVar4 = 0;
  do {
    piVar3 = (int *)(param_1 + (uVar4 & 0xff) * 0xc);
    piVar2 = (int *)piVar3[1];
    while (piVar1 = piVar2, piVar1 != piVar3 + 1) {
      piVar2 = (int *)*piVar1;
      if (piVar1[5] == param_2) {
        func_003E696C(piVar3,piVar1);
        *(undefined1 *)(piVar1 + 4) = 4;
        func_001080D4(piVar1 + 2);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  return func_0010C160((int *)(param_1 + 0x2c));
}

