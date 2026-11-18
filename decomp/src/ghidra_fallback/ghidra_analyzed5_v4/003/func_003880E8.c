#include "ghidra_types.h"

extern int func_0011558C(float *param_1,float *param_2);
extern int func_00492298(float *param_1,float *param_2);
extern int func_00495670(int param_1,int *param_2,int param_3,float fparam_0,float fparam_1);
extern int func_004956A8(int param_1,int *param_2,int param_3,float fparam_0,float fparam_1);
extern int func_00498470(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_00498624(undefined4 *param_1);
extern int func_0057D258(int *param_1);
extern int func_0057D5C4(int *param_1);
extern float DAT_00388224;
extern float DAT_00388228;
extern float DAT_0038822c;

// USA 003880E8 <- EU 003880C4 (Ghidra, non-matching)
// GLOBAL DAT_00388224 float
// GLOBAL DAT_00388228 float
// GLOBAL DAT_0038822c float

undefined1 * func_003880E8(int param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define iStack_e8 (*(int *)(albw_frame + 0x8))
  #define local_e4 (*(undefined1 *)(albw_frame + 0xc))
  #define local_54 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_50 (*(undefined4 *)(albw_frame + 0xa0))
  if ((*(uint *)(param_1 + 0x2c8) & 1) == 0) {
    iVar2 = param_1 + 0x10;
  }
  else {
    iVar2 = param_1 + 400;
  }
  fVar4 = *(float *)(param_1 + 0x7f8);
  if ((*(uint *)(param_1 + 0x2c8) & 2) == 0) {
    piVar3 = (int *)(param_1 + 0x68);
  }
  else {
    piVar3 = (int *)(param_1 + 500);
  }
  if (*(char *)(param_1 + 0x800) == '\0') {
    if (fVar4 < DAT_00388224) {
      fVar4 = DAT_00388224;
    }
    func_00495670(param_1 + 0x528,piVar3,iVar2,fVar4,*(float *)(param_1 + 0x7fc));
  }
  else {
    if (fVar4 < DAT_00388224) {
      fVar4 = DAT_00388224;
    }
    func_004956A8(param_1 + 0x528,piVar3,iVar2,fVar4,*(float *)(param_1 + 0x7fc));
  }
  func_0011558C((float *)(param_1 + 0x120),(float *)(iVar2 + 4));
  pfVar1 = (float *)func_0057D258(piVar3);
  fVar4 = pfVar1[0xb] / pfVar1[10];
  fVar5 = (fVar4 * (pfVar1[2] + DAT_00388228)) / *pfVar1;
  fVar7 = fVar5 - (fVar4 * DAT_0038822c) / *pfVar1;
  fVar6 = (fVar4 * (pfVar1[6] + DAT_00388228)) / pfVar1[5];
  fVar8 = fVar6 - (fVar4 * DAT_0038822c) / pfVar1[5];
  func_00498624(&iStack_e8);
  fVar4 = *(float *)(param_1 + 0x804) / fVar4;
  func_00498470((int)&iStack_e8,fVar4 * fVar6,fVar4 * fVar8,fVar4 * fVar7,fVar4 * fVar5);
  local_54 = *(undefined4 *)(param_1 + 0x804);
  local_e4 = 1;
  local_50 = *(undefined4 *)(param_1 + 0x808);
  pfVar1 = (float *)func_0057D5C4(&iStack_e8);
  func_00492298((float *)(param_1 + 0x150),pfVar1);
  return (undefined1 *)&iStack_e8;
}

