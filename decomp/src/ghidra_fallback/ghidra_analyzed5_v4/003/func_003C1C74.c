#include "ghidra_types.h"

extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_005FF064(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5, int param_6,undefined4 param_7);
extern int func_005FF314(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int *DAT_003c1cec;
extern undefined4 DAT_003c1cf0;
extern undefined4 DAT_003c1cf4;

// USA 003C1C74 <- EU 003C1C50 (Ghidra, non-matching)
// GLOBAL DAT_003c1cec int *
// GLOBAL DAT_003c1cf0 undefined4
// GLOBAL DAT_003c1cf4 undefined4

undefined4 func_003C1C74(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x18d) != '\0') {
    piVar1 = *(int **)(*(int *)(*DAT_003c1cec + 0x1c) + 0x11c);
    (**(code **)(*piVar1 + 0x14))(piVar1,2,DAT_003c1cf4,0);
    iVar2 = *(int *)(param_1 + 0x84);
    if ((*(uint *)(param_1 + 0x188) & 0x10000000) == 0) {
      func_003E35DC(*(undefined4 *)(param_1 + 0x3c),iVar2);
      return func_005FF314(*(undefined4 *)(param_1 + 0x3c),piVar1[7],*(undefined4 *)(param_1 + 0x84));
    }
    func_005FF064(*(undefined4 *)(param_1 + 0x3c),iVar2,0,piVar1[7],iVar2,0,iVar2);
  }
  return 0;
}

