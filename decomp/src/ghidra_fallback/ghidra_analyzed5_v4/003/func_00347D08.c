#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_002D56A8(int param_1,float fparam_0);
extern int func_002D5A38(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052E5E4(int param_1,int param_2);
extern float func_0053EDC8(int param_1);
extern int func_0053EDD8(int param_1);
extern float func_0053EE30(int param_1);
extern int func_0054CBB4(int param_1);
extern float DAT_00347eb8;
extern float DAT_00347ebc;
extern undefined DAT_00347ec0;
extern int DAT_00347ed8;
extern int *DAT_00347edc;
extern int DAT_00347ee0;
extern char s__SE_PL_IceRod_SWING_00347ec3[];
extern undefined4 _DAT_00347ec0;

// USA 00347D08 <- EU 00347CE4 (Ghidra, non-matching)
// GLOBAL DAT_00347eb8 float
// GLOBAL DAT_00347ebc float
// GLOBAL DAT_00347ec0 undefined
// GLOBAL DAT_00347ed8 int
// GLOBAL DAT_00347edc int *
// GLOBAL DAT_00347ee0 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00347D08(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar2 = func_0052E5E4(*(int *)(param_1 + 0x28),9);
  if (iVar2 == 0) {
    return func_002D55D0(param_1,(uint)(DAT_00347eb8 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
  }
  if (param_2 == 0x56) {
    fVar5 = DAT_00347ebc;
    iVar2 = func_002D55E8(param_1);
    if ((iVar2 == 0) && (iVar2 = func_002D5A38(param_1), iVar2 == 0)) {
      func_002D56A8(param_1,ALBW_AS_F32(_DAT_00347ec0));
      func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar5);
      iVar2 = func_0054CBB4(*(int *)(param_1 + 0x48));
      if ((iVar2 != 0) && (9 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44))) {
        func_002D55D0(param_1,0x57);
        local_1c = s__SE_PL_IceRod_SWING_00347ec3 + 1;
        local_20 = DAT_00347ed8;
        func_004EA104(*DAT_00347edc,&local_20,0);
      }
    }
    return 0;
  }
  if (param_2 != 0x57) {
    return 0;
  }
  fVar5 = DAT_00347eb8;
  fVar3 = DAT_00347ebc;
  iVar2 = func_002D55E8(param_1);
  if (iVar2 != 0) goto LAB_00347ea4;
  func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar3);
  if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar5) {
LAB_00347e68:
    bVar1 = false;
  }
  else {
    fVar3 = func_0053EDC8(*(int *)(param_1 + 0x4c) + 0x5c);
    fVar4 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x5c);
    if (DAT_00347ee0 < (int)ALBW_AS_U32((fVar3 - fVar4))) goto LAB_00347e68;
    bVar1 = true;
  }
  iVar2 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
  if (iVar2 != 0 || bVar1) {
    func_002D55D0(param_1,(uint)(fVar5 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
  }
LAB_00347ea4:
  *(undefined1 *)(*(int *)(param_1 + 0x2c) + 199) = 0;
  return 0;
}

