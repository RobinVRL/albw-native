#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D37C(int *param_1,int param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_003a4268;
extern int DAT_003a426c;
extern float DAT_003a4270;
extern int DAT_003a4274;
extern int *DAT_003a4278;
extern int *DAT_003a427c;
extern int *DAT_003a4280;
extern float DAT_003a4284;
extern float DAT_003a4288;

// USA 003A40E4 <- EU 003A40C0 (Ghidra, non-matching)
// GLOBAL DAT_003a4268 int *
// GLOBAL DAT_003a426c int
// GLOBAL DAT_003a4270 float
// GLOBAL DAT_003a4274 int
// GLOBAL DAT_003a4278 int *
// GLOBAL DAT_003a427c int *
// GLOBAL DAT_003a4280 int *
// GLOBAL DAT_003a4284 float
// GLOBAL DAT_003a4288 float

void func_003A40E4(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  iVar5 = DAT_003a4274;
  fVar2 = DAT_003a4270;
  piVar1 = DAT_003a4268;
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else if (iVar3 == 1) {
    uVar7 = *(uint *)(param_1 + 0x24);
    if (*(uint *)(param_1 + 0x20) < uVar7) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
    }
    uVar8 = *(uint *)(param_1 + 0x20);
    pfVar4 = (float *)(iVar5 + (uVar8 * DAT_003a426c >> 0x18) * 0x10);
    pfVar6 = pfVar4 + 1;
    fVar9 = (float)VectorUnsignedToFloat
                             (uVar8 * DAT_003a426c & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = *pfVar4;
    if (uVar7 <= uVar8) {
      pfVar4 = (float *)0x0;
    }
    fVar11 = (float)VectorSignedToFloat(*piVar1,(byte)(in_fpscr >> 0x15) & 3);
    *(int *)(param_1 + 0x1c) = (int)((fVar10 + *pfVar6 * fVar9 * fVar2) * fVar11);
    if (uVar7 <= uVar8) {
      *(float **)(param_1 + 0x30) = pfVar4;
    }
  }
  else if (iVar3 == 2) {
    if ((*(uint *)(param_1 + 0x2c) == 0) ||
       (iVar5 = func_0052FBA0(*DAT_003a4278 + 0x3dbbc,*(uint *)(param_1 + 0x2c)), iVar5 == 0)) {
      if (*DAT_003a427c == 0) {
        iVar5 = *(int *)(param_1 + 4);
        local_10 = *(float *)(iVar5 + 0x3d8);
        local_18 = *(float *)(iVar5 + 0x3d0);
        local_14 = *(float *)(iVar5 + 0x3d4);
      }
      else {
        pfVar6 = *(float **)(*DAT_003a427c + 0x1c);
        local_18 = *pfVar6;
        local_14 = pfVar6[1];
        local_10 = pfVar6[2];
      }
    }
    else {
      local_18 = *(float *)(iVar5 + 0x3d0);
      local_14 = *(float *)(iVar5 + 0x3d4);
      local_10 = *(float *)(iVar5 + 0x3d8);
    }
    func_00115C70(&local_18,&local_18,(float *)(*(int *)(param_1 + 4) + 0x3d0));
    iVar5 = func_0068C690(&local_18);
    *(int *)(param_1 + 0x1c) = iVar5 - *(int *)(*(int *)(param_1 + 4) + 1000);
    iVar5 = *piVar1;
    func_0051D37C((int *)(param_1 + 0x1c),-iVar5,iVar5);
  }
  func_0051D2F4((int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c),0,*DAT_003a4280,DAT_003a4284);
  *(float *)(param_1 + 0x40) =
       *(float *)(param_1 + 0x40) +
       (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x40)) * DAT_003a4288;
  return;
}

