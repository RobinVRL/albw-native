#include "ghidra_types.h"

extern int func_00259304(int param_1);
extern int func_0029753C(int *param_1);
extern int func_00297780(int param_1);
extern int func_00320E80(int param_1,uint param_2,int param_3,float fparam_0);
extern int func_00320EC4(int param_1);
extern int func_004B083C(void);
extern int *DAT_004e9978;
extern int *DAT_004e997c;
extern float DAT_004e9980;
extern uint DAT_004e9984;
extern uint DAT_004e9988;
extern uint DAT_004e998c;
extern uint DAT_004e9990;
extern uint DAT_004e9994;
extern uint DAT_004e9998;
extern uint DAT_004e999c;

// USA 004E985C <- EU 004E9834 (Ghidra, non-matching)
// GLOBAL DAT_004e9978 int *
// GLOBAL DAT_004e997c int *
// GLOBAL DAT_004e9980 float
// GLOBAL DAT_004e9984 uint
// GLOBAL DAT_004e9988 uint
// GLOBAL DAT_004e998c uint
// GLOBAL DAT_004e9990 uint
// GLOBAL DAT_004e9994 uint
// GLOBAL DAT_004e9998 uint
// GLOBAL DAT_004e999c uint

void func_004E985C(int param_1)

{
  int iVar1;
  float fparam_0;
  
  if (*(char *)(param_1 + 0x82) == '\0') {
    *(undefined1 *)(param_1 + 0x83) = 1;
  }
  if (*(char *)(*DAT_004e9978 + 0x25) == '\x02' || *(char *)(*DAT_004e9978 + 0x25) == '\x03') {
    fparam_0 = DAT_004e9980;
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9984,0,DAT_004e9980);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9988,0,fparam_0);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e998c,0,fparam_0);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9990,0,fparam_0);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9994,0,fparam_0);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e9998,0,fparam_0);
    func_00320E80(*(int *)(param_1 + 0x24),DAT_004e999c,0,fparam_0);
  }
  else {
    func_00320EC4(*(int *)(param_1 + 0x24));
  }
  func_00297780(*(int *)(param_1 + 0x38));
  func_00259304(*(int *)(param_1 + 0x50));
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined1 *)(iVar1 + 0x84) = 1;
  *(undefined1 *)(iVar1 + 0x85) = 1;
  *(undefined1 *)(iVar1 + 0x86) = 1;
  func_0029753C(*(int **)(param_1 + 0x38));
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x1a4) = 1;
  iVar1 = func_004B083C();
  if ((iVar1 != 0) && (*(int *)(*DAT_004e997c + 0x1c) == 8)) {
    *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x86) = 0;
  }
  return;
}

