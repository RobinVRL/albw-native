#include "ghidra_types.h"

extern int func_00383DF8(int param_1,int param_2);
extern int func_004C6654(int param_1,uint param_2);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_003ba584;
extern int *DAT_003ba588;

// USA 003BA500 <- EU 003BA4DC (Ghidra, non-matching)
// GLOBAL DAT_003ba584 int *
// GLOBAL DAT_003ba588 int *

void func_003BA500(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = func_0055696C(*DAT_003ba584,3);
  piVar1 = DAT_003ba588;
  if (uVar2 < 3) {
    func_004C6654(*DAT_003ba588,8);
  }
  else {
    func_004C6654(*DAT_003ba588,8);
    func_004C6654(*piVar1,9);
  }
  if (*(int **)(param_1[0x12] + 0xbcc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1[0x12] + 0xbcc) + 0x14))(*(int **)(param_1[0x12] + 0xbcc));
  }
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  func_00383DF8(param_1[0x12] + 0x8c0,0);
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  (**(code **)(*param_1 + 0xfc))(param_1);
  *(undefined1 *)(param_1 + 0x27) = 1;
  return;
}

