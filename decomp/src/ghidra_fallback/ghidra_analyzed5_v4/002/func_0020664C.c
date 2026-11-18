#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);

// USA 0020664C <- EU 0020664C (Ghidra, non-matching)

void func_0020664C(int *param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = func_0058AA40(param_1);
  if (fVar2 == 28.0) {
    func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
    func_004F9554(param_1[0x10c],0,0,1);
    func_004F9554(param_1[0x10d],0,0,1);
    *(undefined1 *)(param_1 + 0x264) = 0;
  }
  iVar1 = func_0058A8F0((int)param_1);
  if (iVar1 != 0) {
    func_0065D4EC(param_1 + 0x22f,1);
  }
  return;
}

