#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_00491338(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_0050BE88(int *param_1);
extern float *DAT_0050c474;
extern float *DAT_0050c478;
extern int *DAT_0050c47c;
extern float *DAT_0050c480;
extern int *DAT_0050c484;

// USA 0050C29C <- EU 0050C274 (Ghidra, non-matching)
// GLOBAL DAT_0050c474 float *
// GLOBAL DAT_0050c478 float *
// GLOBAL DAT_0050c47c int *
// GLOBAL DAT_0050c480 float *
// GLOBAL DAT_0050c484 int *

/* WARNING: Variable defined which should be unmapped: objStack_18 */

undefined4 func_0050C29C(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  float fStackY_20;
  float fStackY_1c;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  objStack_18[0] = (uint)(param_1 + 0x124);
  objStack_18[1] = 0;
  func_0014E2A0((int)param_1,param_1[0x108],param_1 + 0x120,0x1000,objStack_18[0],0);
  piVar6 = (int *)param_1[0x118];
  uVar1 = *(uint *)(param_1[0x11a] + (char)param_1[0x114] * 8 + 4);
  piVar3 = (int *)(param_1[0x11a] + (char)param_1[0x114] * 8);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)((int)piVar6 + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar5 = param_1[0x117];
  iVar2 = param_1[0x113] + 1;
  param_1[0x113] = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  func_00169A80((int *)param_1[0x104],uVar4,iVar5,piVar6);
  func_00168E9C((int *)param_1[0x104],param_1[0x103],(int *)0x0);
  func_0050BE88(param_1);
  func_00115C54((float *)objStack_18,(float *)(param_1 + 0xf4),(float *)(param_1 + 0x10b));
  iVar2 = param_1[0x103];
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(uint *)(iVar2 + 0x8c) = objStack_18[0];
  *(uint *)(iVar2 + 0x9c) = objStack_18[1];
  *(undefined4 *)(iVar2 + 0xac) = local_10;
  func_004CEAF0(param_1[0x103]);
  fStackY_20 = *DAT_0050c474;
  fStackY_1c = DAT_0050c474[1];
  objStack_18[0] = (uint)ALBW_AS_U32(DAT_0050c474[2]);
  piVar6 = (int *)param_1[0x107];
  func_00491338((float *)(piVar6 + 0x19),0,param_1[0xfa],param_1[0x11f]);
  func_00115C54(&fStackY_20,(float *)(param_1 + 0xf4),DAT_0050c478);
  piVar3 = DAT_0050c47c;
  piVar6[1] = (int)ALBW_AS_U32(fStackY_20);
  piVar6[2] = (int)ALBW_AS_U32(fStackY_1c);
  piVar6[3] = objStack_18[0];
  iVar2 = *piVar3;
  iVar5 = piVar3[1];
  piVar6[0x18] = piVar3[2];
  piVar6[0x16] = iVar2;
  piVar6[0x17] = iVar5;
  func_004356B4(piVar6);
  piVar6 = (int *)param_1[0x108];
  func_00491338((float *)(piVar6 + 0x19),0,param_1[0xfa],param_1[0x11f]);
  func_00115C54(&fStackY_20,(float *)(param_1 + 0xf4),DAT_0050c480);
  piVar3 = DAT_0050c484;
  piVar6[1] = (int)ALBW_AS_U32(fStackY_20);
  piVar6[2] = (int)ALBW_AS_U32(fStackY_1c);
  piVar6[3] = objStack_18[0];
  iVar2 = *piVar3;
  iVar5 = piVar3[1];
  piVar6[0x18] = piVar3[2];
  piVar6[0x16] = iVar2;
  piVar6[0x17] = iVar5;
  return func_004356B4(piVar6);
}

