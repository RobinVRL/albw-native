#include "ghidra_types.h"

extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern float func_004F944C(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_005401E0(int param_1);
extern int func_0065DF0C(int param_1,undefined4 param_2);
extern int func_0065DF78(int param_1);
extern int *DAT_00654840;
extern int DAT_00654844;
extern int DAT_00654848;
extern float DAT_0065484c;
extern float DAT_00654850;
extern float DAT_00654854;
extern float DAT_00654858;

// USA 00654770 <- EU 00654748 (Ghidra, non-matching)
// GLOBAL DAT_00654840 int *
// GLOBAL DAT_00654844 int
// GLOBAL DAT_00654848 int
// GLOBAL DAT_0065484c float
// GLOBAL DAT_00654850 float
// GLOBAL DAT_00654854 float
// GLOBAL DAT_00654858 float

undefined4 func_00654770(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  if ((*DAT_00654840 != 0) && (iVar1 = func_005401E0(*DAT_00654840), iVar1 != 0)) {
    fVar3 = DAT_0065484c;
    func_0051D2F4((int *)(param_1 + 1000),0,DAT_00654848,DAT_00654844,DAT_0065484c);
    pfVar2 = (float *)func_00520FC0();
    func_004D838C((float *)(param_1 + 0x3d0),pfVar2,fVar3,DAT_00654854,DAT_00654850);
    iVar1 = func_005211F4(param_1,fVar3,DAT_00654858);
    if (iVar1 == 0) {
      if (*(short *)(param_1 + 0x8e2) == 0) {
        fVar3 = func_004F944C();
        *(float *)(param_1 + 0x3e0) = fVar3;
        goto LAB_006547ec;
      }
      *(short *)(param_1 + 0x8e2) = *(short *)(param_1 + 0x8e2) + -1;
    }
    else {
      func_0065DF0C(param_1 + 0x8f0,5);
      func_003931EC((undefined4 *)(param_1 + 0x8f0),5);
      func_0065DF78(param_1 + 0x8f0);
    }
    return 0;
  }
LAB_006547ec:
  func_0065DF0C(param_1 + 0x8f0,0);
  func_003931EC((undefined4 *)(param_1 + 0x8f0),0);
  return func_0065DF78(param_1 + 0x8f0);
}

