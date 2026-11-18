#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_00521018(int param_1);
extern int func_00657E5C(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_00155d98;
extern undefined4 DAT_00155d9c;
extern int *DAT_00155da0;
extern int DAT_00155da4;
extern float DAT_00155da8;
extern int DAT_00155dac;
extern float DAT_00155db0;
extern float DAT_00155db4;
extern int DAT_00155db8;
extern undefined4 DAT_00155dbc;
extern char s_SE_Crowly_HOVERING_00155d84[];

// USA 00155BCC <- EU 00155BD0 (Ghidra, non-matching)
// GLOBAL DAT_00155d98 int
// GLOBAL DAT_00155d9c undefined4
// GLOBAL DAT_00155da0 int *
// GLOBAL DAT_00155da4 int
// GLOBAL DAT_00155da8 float
// GLOBAL DAT_00155dac int
// GLOBAL DAT_00155db0 float
// GLOBAL DAT_00155db4 float
// GLOBAL DAT_00155db8 int
// GLOBAL DAT_00155dbc undefined4
// GLOBAL s_SE_Crowly_HOVERING_00155d84 string

void func_00155BCC(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  if (*(int *)(param_1 + 0x91c) == 0) {
    local_34 = s_SE_Crowly_HOVERING_00155d84;
    local_38 = DAT_00155d98;
    func_001507D8(param_1,&local_38,0);
    pfVar4 = (float *)(param_1 + 0x8f8);
    func_00115C70(pfVar4,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
    uVar7 = DAT_00155d9c;
    *(undefined4 *)(param_1 + 0x8fc) = DAT_00155d9c;
    fVar5 = func_00115DC8(pfVar4);
    iVar3 = func_0068C690(pfVar4);
    fVar8 = DAT_00155da8;
    func_0051D2F4((int *)(param_1 + 1000),iVar3,DAT_00155da4,*DAT_00155da0,DAT_00155da8);
    fVar6 = DAT_00155db0;
    iVar3 = DAT_00155dac;
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x8f8) * fVar8;
    *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x900) * fVar8;
    if ((*(int *)(param_1 + 0x914) < iVar3) && (bVar2 = func_00521018(param_1), bVar2)) {
      *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) + fVar6;
      *(undefined2 *)(param_1 + 0x920) = 5;
    }
    else {
      if (*(short *)(param_1 + 0x920) == 0) {
        fVar6 = (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x3d4)) * DAT_00155db4;
      }
      else {
        *(short *)(param_1 + 0x920) = *(short *)(param_1 + 0x920) + -1;
        fVar6 = *(float *)(param_1 + 0x3e0) + fVar6;
      }
      *(float *)(param_1 + 0x3e0) = fVar6;
    }
    uVar1 = DAT_00155dbc;
    if ((int)ALBW_AS_U32(fVar5) < DAT_00155db8) {
      *(int *)(param_1 + 0x91c) = *(int *)(param_1 + 0x91c) + 1;
      *(undefined4 *)(param_1 + 0x3dc) = uVar7;
      *(undefined4 *)(param_1 + 0x3e4) = uVar7;
      *(undefined4 *)(param_1 + 0x3e0) = uVar1;
      *(undefined4 *)(param_1 + 0x8bc) = 0;
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x91c) == 1) &&
          (func_0051D39C((int *)(param_1 + 1000),*(int *)(param_1 + 0x24),
                         0x5a - *(int *)(param_1 + 0x8bc)), 0x59 < *(uint *)(param_1 + 0x8bc))) {
    func_00657E5C((uint *)(param_1 + 0x8bc),0);
  }
  return;
}

