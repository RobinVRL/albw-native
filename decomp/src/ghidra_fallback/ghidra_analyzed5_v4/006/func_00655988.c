// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00219548(int param_1,float fparam_0);
extern int func_00219630(int param_1,float *param_2,float fparam_0);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_005401E0(int param_1);
extern int func_00556E64(int param_1);
extern int func_00660AE4(int param_1,undefined4 param_2);
extern int func_00660B50(int param_1);
extern int *DAT_00655acc;
extern float DAT_00655ad0;
extern float DAT_00655ad4;
extern float DAT_00655ad8;
extern int *DAT_00655adc;
extern float DAT_00655ae0;

// USA 00655988 <- EU 00655960 (Ghidra, non-matching)
// GLOBAL DAT_00655acc int *
// GLOBAL DAT_00655ad0 float
// GLOBAL DAT_00655ad4 float
// GLOBAL DAT_00655ad8 float
// GLOBAL DAT_00655adc int *
// GLOBAL DAT_00655ae0 float

undefined4 func_00655988(int param_1)

{
  int *piVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((float *)(albw_frame + 0x8))
  #define local_20 (*(float *)(albw_frame + 0x10))
  piVar5 = (int *)(*(int *)(*DAT_00655acc + 0x3dbe8) + 0x10);
  if (*piVar5 == 0) {
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(local_28,pfVar3,(float *)(param_1 + 0x3d0));
    iVar4 = func_004904CC(local_28[0],local_20);
    *(int *)(param_1 + 0x8d8) = iVar4;
    func_00219548(param_1,DAT_00655ad0);
    iVar4 = func_005211F4(param_1,DAT_00655ad8,DAT_00655ad4);
    piVar1 = DAT_00655adc;
    if (((((iVar4 != 0) && (*DAT_00655adc != 0)) && (bVar2 = func_00556E64(*DAT_00655adc), !bVar2))
        && ((*piVar1 != 0 && (iVar4 = func_005401E0(*piVar1), iVar4 != 0)))) && (*piVar5 == 0)) {
      *piVar5 = *(int *)(param_1 + 0x2cc);
      func_00660AE4(param_1 + 0x8f0,4);
      func_003931EC((undefined4 *)(param_1 + 0x8f0),4);
      return func_00660B50(param_1 + 0x8f0);
    }
    fparam_0 = *(float *)(param_1 + 0x8c8) + DAT_00655ae0;
    bVar2 = func_00219630(param_1,(float *)(param_1 + 0x3d0),fparam_0);
    if ((bVar2) && (bVar2 = func_00219630(param_1,pfVar3,fparam_0), bVar2)) {
      return 0;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x8e4) = 0x96;
  }
  func_00660AE4(param_1 + 0x8f0,1);
  func_003931EC((undefined4 *)(param_1 + 0x8f0),1);
  return func_00660B50(param_1 + 0x8f0);
}

