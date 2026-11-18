#include "ghidra_types.h"

extern int func_003E0AF0(uint *param_1);
extern int func_003E16D4(int param_1,int param_2);
extern int func_00419924(void);
extern int func_00419C50(int param_1,int param_2);

// USA 00414648 <- EU 00414628 (Ghidra, non-matching)

undefined4 func_00414648(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint *puVar3;
  
  if (*(char *)(param_2 + 0x1a) == '\0') {
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 8)) {
      do {
        puVar3 = *(uint **)(param_2 + iVar1 * 4);
        if (puVar3 != (uint *)0x0) {
          if (puVar3 != param_1) {
            func_003E16D4((int)puVar3,1);
            func_003E0AF0(puVar3);
          }
          *(undefined4 *)(param_2 + iVar1 * 4) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 8));
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x1b) = 1;
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 8)) {
      do {
        if (*(uint **)(param_2 + iVar1 * 4) == param_1) {
          *(undefined4 *)(param_2 + iVar1 * 4) = 0;
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 8));
    }
  }
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar2 = func_00419924();
  func_00419C50((int)puVar2,param_2);
  *(undefined1 *)(param_2 + 0x14) = 0;
  if (*(code **)(param_2 + 0xc) == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0041470c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(param_2 + 0xc))(param_2,3,*(undefined4 *)(param_2 + 0x10));
}

