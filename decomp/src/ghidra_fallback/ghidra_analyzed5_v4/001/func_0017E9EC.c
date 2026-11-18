#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004BDB64(int param_1,float *param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int func_0068C690(float *param_1);
extern int DAT_0017ebac;
extern float DAT_0017ebb0;
extern float DAT_0017ebb4;
extern int DAT_0017ebb8;
extern float DAT_0017ebbc;
extern int DAT_0017ebc0;
extern float DAT_0017ebc4;
extern int *DAT_0017ebc8;

// USA 0017E9EC <- EU 0017E9EC (Ghidra, non-matching)
// GLOBAL DAT_0017ebac int
// GLOBAL DAT_0017ebb0 float
// GLOBAL DAT_0017ebb4 float
// GLOBAL DAT_0017ebb8 int
// GLOBAL DAT_0017ebbc float
// GLOBAL DAT_0017ebc0 int
// GLOBAL DAT_0017ebc4 float
// GLOBAL DAT_0017ebc8 int *

void func_0017E9EC(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 ((int *)(albw_frame + 0xc))
  iVar4 = DAT_0017ebac;
  if (param_1[0x2a8] == 0) {
    func_0051D2F4(param_1 + 0xfa,0,0,DAT_0017ebac,DAT_0017ebb0);
    if ((*DAT_0017ebc8 != 0) && (iVar4 = *(int *)(*DAT_0017ebc8 + 0x18), iVar4 != 0)) {
      local_28 = *(int *)(iVar4 + 0x1b8);
      local_30 = *(float *)(iVar4 + 0x1b0);
      local_2c = *(undefined4 *)(iVar4 + 0x1b4);
      func_004BDB64((int)param_1,&local_30);
    }
    if ((uint)param_1[0x26a] <= (uint)param_1[0x269]) {
      (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
      *(undefined1 *)((int)param_1 + 0x91a) = 0;
      param_1[0x22b] = param_1[0x22b] | 4;
      param_1[0x2a8] = param_1[0x2a8] + 1;
      return;
    }
    param_1[0x269] = param_1[0x269] + 1;
  }
  else if (param_1[0x2a8] == 1) {
    fparam_0 = DAT_0017ebb0;
    pfVar1 = (float *)func_00520FC0();
    func_00115C70(&local_30,pfVar1,(float *)(param_1 + 0xf4));
    iVar2 = func_0068C690(&local_30);
    local_24[0] = param_1[0xfa] - iVar2;
    iVar3 = func_0058E2B8(local_24);
    fVar5 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    local_2c = DAT_0017ebb8;
    iVar3 = DAT_0017ebc0 + ((uint)(int)(fVar5 * DAT_0017ebb4) >> 0x18) * 0x10;
    fVar5 = (float)VectorUnsignedToFloat
                             ((int)(fVar5 * DAT_0017ebb4) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    func_0068A3EC(&local_30,
                  (*(float *)(iVar3 + 8) + *(float *)(iVar3 + 0xc) * fVar5 * DAT_0017ebbc) *
                  DAT_0017ebc4);
    param_1[0xf7] = (int)ALBW_AS_U32(local_30);
    param_1[0xf8] = local_2c;
    param_1[0xf9] = local_28;
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
    func_0051D2F4(param_1 + 0xfa,iVar2,0,iVar4,fparam_0);
  }
  return;
}

