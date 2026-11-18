#include "ghidra_types.h"

extern int func_0012E794(int param_1);
extern int func_001B6D40(int param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00518F7C(int param_1);
extern int func_0051AD10(int param_1);
extern int *DAT_00463988;
extern float DAT_0046398c;
extern int *DAT_00463990;

// USA 00463920 <- EU 004638F8 (Ghidra, non-matching)
// GLOBAL DAT_00463988 int *
// GLOBAL DAT_0046398c float
// GLOBAL DAT_00463990 int *

undefined4 func_00463920(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  func_001B6D40(param_1);
  piVar1 = DAT_00463988;
  uVar3 = *(uint *)(param_1 + 0x130);
  if (-1 < (int)uVar3) {
    piVar2 = (int *)(param_1 + 200);
    if (uVar3 < 0x1a) {
      piVar2 = piVar2 + uVar3;
    }
    iVar4 = *piVar2;
    if (*(char *)(iVar4 + 0x55) == '\0') {
      func_00231448(iVar4 + 0x20);
      func_00231448(iVar4 + 0x2c);
      *(undefined2 *)(iVar4 + 0x38) = 2;
      func_002317C0((undefined2 *)(iVar4 + 0x38),DAT_0046398c);
    }
    func_00518F7C(*piVar1);
    *(undefined1 *)(iVar4 + 0x54) = 0;
    *(undefined1 *)(iVar4 + 0x55) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  }
  func_0051AD10(*piVar1);
  return func_0012E794(*DAT_00463990);
}

