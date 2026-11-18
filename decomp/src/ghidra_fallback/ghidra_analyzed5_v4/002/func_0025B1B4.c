#include "ghidra_types.h"

extern int func_0048C980(int param_1);
extern int func_0048CD04(int param_1,int param_2,int param_3,undefined4 param_4);
extern int func_00493800(int param_1,undefined4 param_2,int *param_3,int *param_4);
extern undefined4 DAT_0025b334;
extern undefined4 DAT_0025b338;
extern undefined4 DAT_0025b33c;
extern undefined4 DAT_0025b340;
extern int *DAT_0025b344;
extern undefined4 DAT_0025b348;

// USA 0025B1B4 <- EU 0025B1DC (Ghidra, non-matching)
// GLOBAL DAT_0025b334 undefined4
// GLOBAL DAT_0025b338 undefined4
// GLOBAL DAT_0025b33c undefined4
// GLOBAL DAT_0025b340 undefined4
// GLOBAL DAT_0025b344 int *
// GLOBAL DAT_0025b348 undefined4

undefined4 func_0025B1B4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int **)(param_1 + 100) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 100) + 0x28))(*(int **)(param_1 + 100));
    uVar2 = DAT_0025b338;
    uVar1 = DAT_0025b334;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4) = 5;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 8) = 0x4b0;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0xc) = 0xf;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x10) = uVar1;
    uVar1 = DAT_0025b33c;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x14) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x18) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x1c) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x20) = DAT_0025b340;
    *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x24) = 0;
    iVar4 = func_00493800(*(int *)(param_1 + 0x68),5,*(int **)(param_1 + 0x6c),
                          *(int **)(param_1 + 100));
    piVar3 = DAT_0025b344;
    if ((iVar4 != 0) && (uVar5 = func_0048C980(*(int *)(param_1 + 0x68)), uVar5 < 0x34801)) {
      func_0048CD04(*piVar3,0,*(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 100));
    }
    uVar1 = DAT_0025b348;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 4) = 0x104;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 8) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0xc) = uVar1;
    *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x10) = 1;
    iVar4 = func_00493800(*(int *)(param_1 + 0x70),6,*(int **)(param_1 + 0x74),
                          *(int **)(param_1 + 100));
    if (iVar4 != 0) {
      uVar5 = func_0048C980(*(int *)(param_1 + 0x70));
      uVar6 = (**(code **)(**(int **)(param_1 + 100) + 0x38))(*(int **)(param_1 + 100));
      if (uVar5 <= uVar6) {
        return func_0048CD04(*piVar3,1,*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 100));
      }
    }
  }
  return 0;
}

