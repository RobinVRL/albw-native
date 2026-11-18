// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_00556914(int param_1);
extern int func_005569A4();
extern float DAT_001650bc;
extern float DAT_001650c0;
extern float DAT_001650c4;
extern float DAT_001650c8;
extern int *DAT_001650cc;
extern float DAT_001650d0;
extern float DAT_001650d4;

// USA 00164FFC <- EU 00165000 (Ghidra, non-matching)
// GLOBAL DAT_001650bc float
// GLOBAL DAT_001650c0 float
// GLOBAL DAT_001650c4 float
// GLOBAL DAT_001650c8 float
// GLOBAL DAT_001650cc int *
// GLOBAL DAT_001650d0 float
// GLOBAL DAT_001650d4 float

undefined4 func_00164FFC(int param_1,float fparam_0)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  fVar3 = fparam_0 * DAT_001650bc;
  if (fparam_0 * DAT_001650bc < DAT_001650c0) {
    fVar3 = DAT_001650c0;
  }
  func_004D838C((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x8e0),fVar3,DAT_001650c8,
                DAT_001650c4);
  piVar1 = DAT_001650cc;
  func_005569A4(*DAT_001650cc,&fStack_20);
  local_1c = DAT_001650d0;
  fVar3 = DAT_001650d0;
  iVar2 = func_00556914(*piVar1);
  if (iVar2 == 0) {
    func_00115D70(&fStack_20,&fStack_20,DAT_001650d4);
  }
  else {
    func_00115D70(&fStack_20,&fStack_20,fVar3);
  }
  func_00115D70(&fStack_20,&fStack_20,fparam_0);
  return func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&fStack_20);
}

