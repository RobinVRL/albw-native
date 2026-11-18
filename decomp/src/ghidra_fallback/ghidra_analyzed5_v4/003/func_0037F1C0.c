#include "ghidra_types.h"

extern int func_004A3788(int *param_1);
extern int func_004F8638(int *param_1,undefined1 param_2);
extern int func_005811E8(int *param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0037f240;

// USA 0037F1C0 <- EU 0037F19C (Ghidra, non-matching)
// GLOBAL DAT_0037f240 int *

undefined4 func_0037F1C0(int *param_1)

{
  int iVar1;
  
  iVar1 = func_00588BE4((int)param_1);
  if (iVar1 == *DAT_0037f240) {
    iVar1 = func_005811E8(param_1 + 0x2d1);
    if (iVar1 != 0) {
      func_004A3788(param_1 + 0x2d1);
    }
    iVar1 = func_005811E8(param_1 + 0x2cf);
    if (iVar1 != 0) {
      func_004A3788(param_1 + 0x2cf);
    }
    iVar1 = func_005811E8(param_1 + 0x2d5);
    if (iVar1 != 0) {
      func_004A3788(param_1 + 0x2d5);
    }
    iVar1 = func_005811E8(param_1 + 0x2d3);
    if (iVar1 != 0) {
      func_004A3788(param_1 + 0x2d3);
    }
  }
  *(undefined1 *)(param_1 + 0x2cb) = 0;
  return func_004F8638(param_1,0xff);
}

