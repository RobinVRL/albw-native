#include "ghidra_types.h"

extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern float func_004F944C(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_005401E0(int param_1);
extern int func_00660AE4(int param_1,undefined4 param_2);
extern int func_00660B50(int param_1);
extern int *DAT_006557f4;
extern int DAT_006557f8;
extern int DAT_006557fc;
extern float DAT_00655800;
extern float DAT_00655804;
extern float DAT_00655808;
extern float DAT_0065580c;

// USA 00655724 <- EU 006556FC (Ghidra, non-matching)
// GLOBAL DAT_006557f4 int *
// GLOBAL DAT_006557f8 int
// GLOBAL DAT_006557fc int
// GLOBAL DAT_00655800 float
// GLOBAL DAT_00655804 float
// GLOBAL DAT_00655808 float
// GLOBAL DAT_0065580c float

undefined4 func_00655724(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  if ((*DAT_006557f4 != 0) && (iVar1 = func_005401E0(*DAT_006557f4), iVar1 != 0)) {
    fVar3 = DAT_00655800;
    func_0051D2F4((int *)(param_1 + 1000),0,DAT_006557fc,DAT_006557f8,DAT_00655800);
    pfVar2 = (float *)func_00520FC0();
    func_004D838C((float *)(param_1 + 0x3d0),pfVar2,fVar3,DAT_00655808,DAT_00655804);
    iVar1 = func_005211F4(param_1,fVar3,DAT_0065580c);
    if (iVar1 == 0) {
      if (*(short *)(param_1 + 0x8e2) == 0) {
        fVar3 = func_004F944C();
        *(float *)(param_1 + 0x3e0) = fVar3;
        goto LAB_006557a0;
      }
      *(short *)(param_1 + 0x8e2) = *(short *)(param_1 + 0x8e2) + -1;
    }
    else {
      func_00660AE4(param_1 + 0x8f0,5);
      func_003931EC((undefined4 *)(param_1 + 0x8f0),5);
      func_00660B50(param_1 + 0x8f0);
    }
    return 0;
  }
LAB_006557a0:
  func_00660AE4(param_1 + 0x8f0,0);
  func_003931EC((undefined4 *)(param_1 + 0x8f0),0);
  return func_00660B50(param_1 + 0x8f0);
}

