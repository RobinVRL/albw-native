#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0049D83C(int param_1,int *param_2);
extern int func_0049FCE8(int *param_1);
extern int func_004A1520();
extern undefined4 DAT_0049fb34;

// USA 0049FAD8 <- EU 0049FAB0 (Ghidra, non-matching)
// GLOBAL DAT_0049fb34 undefined4

undefined4 func_0049FAD8(undefined4 *param_1)

{
  int iVar1;
  float in_s0;
  
  *param_1 = DAT_0049fb34;
  if (param_1[0x17] != 0) {
    while (param_1[5] != 0) {
      func_0049D83C(param_1[0x17],*(int **)(param_1[5] + 0x10));
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 7;
  func_0049FCE8(param_1 + 4);
  iVar1 = param_1[0x10];
  if (iVar1 != 0) {
    param_1[0x10] = 0;
    func_0010F1F8(param_1 + 0xd,in_s0);
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
  }
  return func_004A1520(param_1);
}

