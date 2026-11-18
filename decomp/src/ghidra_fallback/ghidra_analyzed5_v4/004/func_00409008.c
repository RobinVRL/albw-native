#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_0041D7FC(uint *param_1,uint param_2,int param_3);
extern undefined4 DAT_00409074;
extern undefined4 DAT_00409078;
extern undefined4 DAT_0040907c;

// USA 00409008 <- EU 00408FE8 (Ghidra, non-matching)
// GLOBAL DAT_00409074 undefined4
// GLOBAL DAT_00409078 undefined4
// GLOBAL DAT_0040907c undefined4

undefined1 func_00409008(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(undefined4 *)(param_1 + 0x1c) = 0x20;
    uVar2 = DAT_0040907c;
    uVar1 = DAT_00409078;
    *(undefined4 *)(param_1 + 0x20) = DAT_00409074;
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    while (*(int *)(param_1 + 0xc) != 0) {
      func_00111EF0((int *)(param_1 + 0xc),*(int **)(param_1 + 0x14));
    }
    func_0041D7FC((uint *)(param_1 + 8),*(uint *)(param_1 + 0x2c),*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar3 = 1;
  }
  return uVar3;
}

