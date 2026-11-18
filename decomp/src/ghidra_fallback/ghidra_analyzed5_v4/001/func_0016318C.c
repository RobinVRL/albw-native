#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_004FB208(int param_1,int param_2,float *param_3,undefined1 param_4,int param_5);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A8F0(int param_1);
extern int func_00658604(undefined4 *param_1,undefined1 param_2);
extern int DAT_00163208;
extern float DAT_0016320c;
extern float DAT_00163210;

// USA 0016318C <- EU 00163190 (Ghidra, non-matching)
// GLOBAL DAT_00163208 int
// GLOBAL DAT_0016320c float
// GLOBAL DAT_00163210 float

void func_0016318C(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x904),DAT_00163208,0x7fffffff,
                DAT_0016320c);
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),DAT_00163210);
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    iVar1 = func_004FB208(param_1,0,(float *)0x0,0,0);
    if (iVar1 == 0) {
      uVar2 = 9;
    }
    else {
      uVar2 = 0xb;
    }
    func_00658604((undefined4 *)(param_1 + 0x8bc),uVar2);
  }
  return;
}

