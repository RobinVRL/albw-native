// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_002046C8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521100(int param_1,float fparam_0);
extern float func_00521298(int param_1);
extern int func_0065D3A8(undefined4 *param_1,undefined1 param_2);
extern int DAT_00204004;
extern float DAT_00204008;
extern float DAT_0020400c;
extern float DAT_00204010;
extern int DAT_00204014;

// USA 00203F34 <- EU 00203F34 (Ghidra, non-matching)
// GLOBAL DAT_00204004 int
// GLOBAL DAT_00204008 float
// GLOBAL DAT_0020400c float
// GLOBAL DAT_00204010 float
// GLOBAL DAT_00204014 int

undefined4 func_00203F34(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)func_00520FC0();
  func_002046C8(param_1,pfVar1,*(int *)(DAT_00204004 + 4),*(float *)(param_1 + 0x8bc));
  fVar5 = DAT_00204010;
  fVar4 = *(float *)(param_1 + 0x8bc);
  *(float *)(param_1 + 0x8bc) = fVar4 + (DAT_00204008 - fVar4) * DAT_0020400c;
  iVar2 = func_00521100(param_1,fVar5);
  if ((((iVar2 != 0) &&
       (fVar4 = func_00521298(param_1), iVar2 = DAT_00204014, (int)ALBW_AS_U32(fVar4) <= DAT_00204014)) &&
      (iVar3 = func_00521100(param_1,fVar5), iVar3 != 0)) &&
     (fVar5 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0),
     fVar4 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8),
     (int)ALBW_AS_U32((fVar5 * fVar5 + fVar4 * fVar4)) <= iVar2)) {
    return 0;
  }
  return func_0065D3A8((undefined4 *)(param_1 + 0x8f0),7);
}

