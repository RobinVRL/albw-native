#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_00130160(int param_1,int *param_2,undefined1 param_3);
extern int func_001304F0(int param_1,int *param_2,undefined1 param_3,int param_4);
extern uint *DAT_00130a90;
extern int *DAT_00130a94;
extern int DAT_00130a98;
extern int DAT_00130a9c;

// USA 001309A4 <- EU 001309A4 (Ghidra, non-matching)
// GLOBAL DAT_00130a90 uint *
// GLOBAL DAT_00130a94 int *
// GLOBAL DAT_00130a98 int
// GLOBAL DAT_00130a9c int

undefined4 func_001309A4(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  if ((*DAT_00130a90 & 1) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  *(undefined2 *)(param_1 + 0x1a) = 0xffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  piVar1 = DAT_00130a94;
  *(undefined1 *)(param_1 + 0x2d) = 0xff;
  *(undefined2 *)(param_1 + 0x2e) = 0xffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x24) = *piVar1 + 0x10;
  func_0010C0B8(param_1 + 0x2bac);
  if (param_4 != 0) {
    if (param_4 != 2) {
      iVar2 = 1;
      if ((param_4 == 1) && (*(char *)(DAT_00130a9c + param_1) == '\0')) {
        iVar2 = 0;
      }
      func_001304F0(param_1,param_2,(char)param_4,iVar2);
      goto LAB_00130a80;
    }
    *(int *)(DAT_00130a98 + param_1) = param_1 + 0x207c;
  }
  func_00130160(param_1,param_2,(char)param_4);
LAB_00130a80:
  return func_0010EEE0(param_1 + 0x2bac);
}

