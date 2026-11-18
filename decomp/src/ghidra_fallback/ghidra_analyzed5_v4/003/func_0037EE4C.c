#include "ghidra_types.h"

extern int func_0037EC94(int param_1);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_006678C0(undefined4 *param_1,undefined1 param_2);
extern int DAT_0037eebc;
extern float DAT_0037eec0;

// USA 0037EE4C <- EU 0037EE28 (Ghidra, non-matching)
// GLOBAL DAT_0037eebc int
// GLOBAL DAT_0037eec0 float

void func_0037EE4C(int param_1)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  
  fVar2 = func_0058AA40(param_1);
  if ((int)ALBW_AS_U32(fVar2) < DAT_0037eebc) {
    func_0051D39C((int *)(param_1 + 1000),*(int *)(param_1 + 0xad8),0xf);
  }
  lVar3 = func_0058ACC8(param_1,DAT_0037eec0);
  if ((int)lVar3 != 0) {
    func_0037EC94(param_1);
  }
  iVar1 = func_0058A8F0(param_1);
  if ((iVar1 != 0) &&
     ((*(undefined1 *)(param_1 + 0xb33) = 0, *(short *)(param_1 + 0xb2a) == 0 ||
      (*(char *)(param_1 + 0xb32) != '\0')))) {
    func_006678C0((undefined4 *)(param_1 + 0xa48),6);
  }
  return;
}

