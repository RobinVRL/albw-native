#include "ghidra_types.h"

extern int func_0014FB58(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00520FC0(void);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern float DAT_0032daf0;
extern int DAT_0032daf4;
extern undefined4 DAT_0032daf8;

// USA 0032DABC <- EU 0032DA98 (Ghidra, non-matching)
// GLOBAL DAT_0032daf0 float
// GLOBAL DAT_0032daf4 int
// GLOBAL DAT_0032daf8 undefined4

void func_0032DABC(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  
  pfVar2 = (float *)func_00520FC0();
  func_0014FB58(param_1,pfVar2,*(int *)(DAT_0032daf4 + 4),DAT_0032daf0);
  uVar1 = DAT_0032daf8;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0032daf8;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  iVar3 = *(int *)(param_1 + 0xc60) + -1;
  *(int *)(param_1 + 0xc60) = iVar3;
  if (iVar3 == 0) {
    func_00665670((undefined4 *)(param_1 + 0xba8),6);
  }
  return;
}

