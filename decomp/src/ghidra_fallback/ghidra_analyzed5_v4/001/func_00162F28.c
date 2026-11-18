#include "ghidra_types.h"

extern float func_00521298(int param_1);
extern int func_00525BE0(int param_1,float *param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00658604(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00162fd0;
extern float DAT_00162fd4;
extern int DAT_00162fd8;
extern undefined4 DAT_00162fdc;

// USA 00162F28 <- EU 00162F2C (Ghidra, non-matching)
// GLOBAL DAT_00162fd0 int *
// GLOBAL DAT_00162fd4 float
// GLOBAL DAT_00162fd8 int
// GLOBAL DAT_00162fdc undefined4

void func_00162F28(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  
  bVar1 = false;
  iVar3 = func_0052FBA0(*DAT_00162fd0 + 0x3dbbc,*(uint *)(param_1 + 0x8fc));
  if ((iVar3 != 0) &&
     (iVar3 = func_00525BE0(iVar3,(float *)(param_1 + 0x3d0),DAT_00162fd4), iVar3 != 0)) {
    bVar1 = true;
  }
  fVar4 = func_00521298(param_1);
  if (((int)ALBW_AS_U32(fVar4) < DAT_00162fd8) || (!bVar1)) {
    func_00658604((undefined4 *)(param_1 + 0x8bc),7);
    uVar2 = DAT_00162fdc;
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x904);
    *(undefined4 *)(param_1 + 0x8fc) = 0;
    *(undefined4 *)(param_1 + 0x918) = 3;
    *(undefined4 *)(param_1 + 0x91c) = uVar2;
    *(undefined4 *)(param_1 + 0x914) = 0;
  }
  return;
}

