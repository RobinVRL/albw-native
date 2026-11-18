#include "ghidra_types.h"

extern int func_004A05A0(int param_1,int param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3);
extern undefined4 DAT_004a0668;
extern float DAT_004a066c;
extern undefined4 DAT_004a0670;
extern undefined1 *DAT_004a0674;

// USA 004A064C <- EU 004A0624 (Ghidra, non-matching)
// GLOBAL DAT_004a0668 undefined4
// GLOBAL DAT_004a066c float
// GLOBAL DAT_004a0670 undefined4
// GLOBAL DAT_004a0674 undefined1 *

undefined4 *
func_004A064C(undefined4 *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2,
             float fparam_3)

{
  undefined4 uVar1;
  float fparam_0_00;
  
  uVar1 = DAT_004a0668;
  param_1[1] = DAT_004a0668;
  param_1[2] = uVar1;
  fparam_0_00 = DAT_004a066c;
  param_1[3] = ALBW_AS_U32(DAT_004a066c);
  param_1[4] = ALBW_AS_U32(fparam_0_00);
  *param_1 = DAT_004a0670;
  *(undefined1 *)(param_1 + 5) = *DAT_004a0674;
  func_004A05A0((int)param_1,param_2,fparam_0_00,fparam_1,fparam_2,fparam_3);
  return param_1;
}

