#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A8F0(int param_1);
extern int func_006678C0(undefined4 *param_1,undefined1 param_2);
extern int DAT_00381c68;
extern int DAT_00381c6c;
extern float DAT_00381c70;

// USA 00381C44 <- EU 00381C20 (Ghidra, non-matching)
// GLOBAL DAT_00381c68 int
// GLOBAL DAT_00381c6c int
// GLOBAL DAT_00381c70 float

void func_00381C44(int param_1)

{
  int iVar1;
  
  func_0051D2F4((int *)(param_1 + 0xa18),*(int *)(param_1 + 0xad8),DAT_00381c6c,DAT_00381c68,
                DAT_00381c70);
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_006678C0((undefined4 *)(param_1 + 0xa48),6);
  }
  return;
}

