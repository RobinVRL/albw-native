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
extern int func_0065DF0C(int param_1,undefined4 param_2);
extern int func_0065DF78(int param_1);
extern int *DAT_00654b18;
extern float DAT_00654b1c;
extern float DAT_00654b20;
extern float DAT_00654b24;
extern int *DAT_00654b28;
extern float DAT_00654b2c;

// USA 006549D4 <- EU 006549AC (Ghidra, non-matching)
// GLOBAL DAT_00654b18 int *
// GLOBAL DAT_00654b1c float
// GLOBAL DAT_00654b20 float
// GLOBAL DAT_00654b24 float
// GLOBAL DAT_00654b28 int *
// GLOBAL DAT_00654b2c float

undefined4 func_006549D4(int param_1)

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
  piVar5 = (int *)(*(int *)(*DAT_00654b18 + 0x3dbe8) + 0x10);
  if (*piVar5 == 0) {
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(local_28,pfVar3,(float *)(param_1 + 0x3d0));
    iVar4 = func_004904CC(local_28[0],local_20);
    *(int *)(param_1 + 0x8d8) = iVar4;
    func_00219548(param_1,DAT_00654b1c);
    iVar4 = func_005211F4(param_1,DAT_00654b24,DAT_00654b20);
    piVar1 = DAT_00654b28;
    if (((((iVar4 != 0) && (*DAT_00654b28 != 0)) && (bVar2 = func_00556E64(*DAT_00654b28), !bVar2))
        && ((*piVar1 != 0 && (iVar4 = func_005401E0(*piVar1), iVar4 != 0)))) && (*piVar5 == 0)) {
      *piVar5 = *(int *)(param_1 + 0x2cc);
      func_0065DF0C(param_1 + 0x8f0,4);
      func_003931EC((undefined4 *)(param_1 + 0x8f0),4);
      return func_0065DF78(param_1 + 0x8f0);
    }
    fparam_0 = *(float *)(param_1 + 0x8c8) + DAT_00654b2c;
    bVar2 = func_00219630(param_1,(float *)(param_1 + 0x3d0),fparam_0);
    if ((bVar2) && (bVar2 = func_00219630(param_1,pfVar3,fparam_0), bVar2)) {
      return 0;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x8e4) = 0x96;
  }
  func_0065DF0C(param_1 + 0x8f0,1);
  func_003931EC((undefined4 *)(param_1 + 0x8f0),1);
  return func_0065DF78(param_1 + 0x8f0);
}

