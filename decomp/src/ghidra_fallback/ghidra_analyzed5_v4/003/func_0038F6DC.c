#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_001D6738(undefined4 param_1);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int *DAT_0038f92c;
extern int *DAT_0038f930;
extern float DAT_0038f934;
extern float DAT_0038f938;
extern float DAT_0038f93c;
extern float DAT_0038f940;
extern float DAT_0038f944;
extern float DAT_0038f948;
extern float DAT_0038f94c;
extern float DAT_0038f950;

// USA 0038F6DC <- EU 0038F6B8 (Ghidra, non-matching)
// GLOBAL DAT_0038f92c int *
// GLOBAL DAT_0038f930 int *
// GLOBAL DAT_0038f934 float
// GLOBAL DAT_0038f938 float
// GLOBAL DAT_0038f93c float
// GLOBAL DAT_0038f940 float
// GLOBAL DAT_0038f944 float
// GLOBAL DAT_0038f948 float
// GLOBAL DAT_0038f94c float
// GLOBAL DAT_0038f950 float

void func_0038F6DC(int param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define afStack_3c ((float *)(albw_frame + 0x24))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  piVar2 = DAT_0038f930;
  if ((((*(int *)(*DAT_0038f92c + 0x44) == 0) && (0xe < (int)*(uint *)(param_1 + 0x430))) &&
      ((*(uint *)(param_1 + 0x430) & 3) == 0)) && (0 < *(int *)(param_1 + 0x434))) {
    uVar3 = func_00111A64((uint *)(*DAT_0038f930 + 0x660));
    fVar8 = DAT_0038f934;
    uVar4 = func_00111A64((uint *)(*piVar2 + 0x660));
    fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = DAT_0038f938;
    func_004D80A4(afStack_3c,uVar3,fVar7 * DAT_0038f938 * fVar8 + DAT_0038f93c);
    func_00115C54(afStack_3c,afStack_3c,(float *)(param_1 + 8));
    local_48 = *(float *)(param_1 + 8);
    uStack_44 = *(undefined4 *)(param_1 + 0xc);
    local_40 = *(float *)(param_1 + 0x10);
    fVar8 = DAT_0038f940;
    uVar3 = func_00111A64((uint *)(*piVar2 + 0x660));
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = fVar7 * fVar9 * fVar8;
    uVar3 = func_00111A64((uint *)(*piVar2 + 0x660));
    fVar7 = (float)VectorSignedToFloat((uVar3 & 2) - 1,(byte)(in_fpscr >> 0x15) & 3);
    local_48 = local_48 + fVar10 * fVar7;
    uVar3 = func_00111A64((uint *)(*piVar2 + 0x660));
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar7 * fVar9 * fVar8;
    uVar3 = func_00111A64((uint *)(*piVar2 + 0x660));
    fVar7 = (float)VectorSignedToFloat((uVar3 & 2) - 1,(byte)(in_fpscr >> 0x15) & 3);
    local_40 = local_40 + fVar8 * fVar7;
    func_00115C70(&local_30,&local_48,afStack_3c);
    local_54 = local_30;
    local_50 = ALBW_AS_F32(uStack_2c);
    uStack_4c = uStack_28;
    func_00115DC8(&local_54);
    fVar8 = DAT_0038f944;
    uVar3 = func_00111A64((uint *)(*piVar2 + 0x660));
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00115D70(&local_54,&local_54,fVar7 * fVar9 * fVar8 + DAT_0038f948);
    fVar8 = DAT_0038f94c;
    uVar3 = func_00111A64((uint *)(*piVar2 + 0x660));
    iVar5 = 5;
    iVar6 = 0;
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    local_50 = fVar7 * fVar9 * fVar8 + DAT_0038f950;
    sVar1 = *(short *)(param_1 + 0x2c);
    if (sVar1 == 0) {
      iVar5 = 2;
    }
    else if (sVar1 == 1) {
      iVar5 = 4;
    }
    else if (sVar1 == 2) {
      iVar6 = 3;
    }
    uVar3 = func_00111A64((uint *)(*piVar2 + 0x660));
    uVar3 = (int)((ulonglong)((iVar5 - iVar6) + 1) * (ulonglong)uVar3 >> 0x20) + iVar6 & 0xff;
    iVar5 = func_001D6738(uVar3);
    if ((iVar5 <= *(int *)(param_1 + 0x434)) &&
       (iVar6 = func_001D6FD0(afStack_3c,uVar3,6,(int *)&local_54,-1), iVar6 != 0)) {
      *(int *)(param_1 + 0x434) = *(int *)(param_1 + 0x434) - iVar5;
    }
  }
  return;
}

