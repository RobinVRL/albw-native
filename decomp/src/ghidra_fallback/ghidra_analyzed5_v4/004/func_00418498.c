#include "ghidra_types.h"

extern int func_003DB920(int *param_1);
extern int func_003DBC38(int param_1);
extern int func_003DBE70(int *param_1);
extern int func_003DD77C(int param_1);
extern int func_003E69B8(int *param_1,undefined4 *param_2,undefined4 *param_3);

// USA 00418498 <- EU 00418478 (Ghidra, non-matching)

void func_00418498(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float in_s0;
  
  func_003DBC38((int)(char)param_2);
  iVar2 = 0;
LAB_0041849c:
  do {
    iVar1 = param_1 + param_2 * 0x10 + iVar2 * 8;
    if (*(char *)(iVar1 + 0x294) == '\x01') {
      if (iVar2 == 0) {
        func_003DB920(*(int **)(iVar1 + 0x290));
        iVar2 = 1;
        *(undefined1 *)(iVar1 + 0x294) = 2;
        goto LAB_0041849c;
      }
      if (iVar2 == 1) {
        func_003DBE70(*(int **)(iVar1 + 0x290));
        *(undefined1 *)(iVar1 + 0x294) = 2;
      }
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) {
      iVar2 = param_1 + param_2 * 0xc;
      if (*(int *)(iVar2 + 0x54) != 0) {
        func_003DD77C((int)(char)param_2);
        iVar1 = param_1 + param_2 * 8;
        *(undefined4 *)(iVar1 + 0x280) = 0;
        *(undefined4 *)(iVar1 + 0x284) = 0;
        piVar3 = *(int **)(iVar2 + 0x58);
        if (piVar3 != (int *)(iVar2 + 0x58)) {
          do {
            (**(code **)(piVar3[-1] + 0xc))(piVar3 + -1);
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)(iVar2 + 0x58));
        }
        func_003E69B8((int *)(iVar2 + 0x54),*(undefined4 **)(iVar2 + 0x58),
                      (undefined4 *)(iVar2 + 0x58));
        return;
      }
      return;
    }
  } while( true );
}

