#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00588BF0(int param_1,int param_2);
extern undefined4 DAT_00144d7c;

// USA 00144D04 <- EU 00144D04 (Ghidra, non-matching)
// GLOBAL DAT_00144d7c undefined4

undefined4 func_00144D04(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x7cb) != '\0') {
    func_00169A80(*(int **)(param_1 + 0x7b4),param_2,param_3,param_4);
    return func_00168E9C(*(int **)(param_1 + 0x7b4),*(int *)(param_1 + 0x78c),(int *)0x0);
  }
  bVar1 = func_00588BF0(param_1,0);
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x7cb) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b4) + 0x14) + 0x10) = DAT_00144d7c;
    *(undefined1 *)(*(int *)(param_1 + 0x7bc) + 0x44) = 1;
  }
  return 0;
}

