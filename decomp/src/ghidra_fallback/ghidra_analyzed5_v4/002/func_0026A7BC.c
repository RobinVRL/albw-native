#include "ghidra_types.h"

extern int func_002677A0(int param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);

// USA 0026A7BC <- EU 0026A7E4 (Ghidra, non-matching)

void func_0026A7BC(int param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar2);
  fVar2 = func_0058AA40(param_1);
  if (fVar2 == 9.0) {
    func_002677A0(param_1);
  }
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_00660718((undefined4 *)(param_1 + 0x8c8),0);
  }
  return;
}

