#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010DB90(void);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern undefined4 DAT_00238984;

// USA 00238858 <- EU 00238858 (Ghidra, non-matching)
// GLOBAL DAT_00238984 undefined4

void func_00238858(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (0 < *(int *)(param_1 + 0x478)) {
    func_0010B380((undefined4 *)(param_1 + 0x61c),*(int *)(param_1 + 0x478),(int *)0x0,4);
    piVar1 = (int *)func_0010DB90();
    piVar5 = *(int **)(param_1 + 0x480);
    piVar6 = piVar5 + *(int *)(param_1 + 0x478);
    while ((piVar5 != piVar6 && (uVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,4), 0x3ff < uVar2))) {
      piVar3 = func_0014DF18(*(int *)(param_1 + 0x2d0),0,0,1,0,0);
      if (piVar3 != (int *)0x0) {
        iVar4 = *piVar5;
        piVar3[0x59] = piVar3[0x59] | 0x40000000;
        func_004D7EB0((float *)(piVar3 + 0x20),*(uint *)(iVar4 + 0x1c),*(uint *)(iVar4 + 0x20),
                      (float *)(iVar4 + 4));
        iVar4 = *piVar5;
        piVar3[0x59] = piVar3[0x59] | 0x40000000;
        piVar3[0x1d] = *(int *)(iVar4 + 0x10);
        piVar3[0x1e] = *(int *)(iVar4 + 0x14);
        piVar3[0x1f] = *(int *)(iVar4 + 0x18);
        func_004CEAF0((int)piVar3);
        if (*(int *)(param_1 + 0x61c) < *(int *)(param_1 + 0x620)) {
          *(int **)(*(int *)(param_1 + 0x624) + *(int *)(param_1 + 0x61c) * 4) = piVar3;
          *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        }
      }
      piVar5 = piVar5 + 1;
    }
  }
  return;
}

