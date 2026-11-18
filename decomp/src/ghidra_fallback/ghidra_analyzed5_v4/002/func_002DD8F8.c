#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0028C920(int param_1,int param_2,undefined4 *param_3,float fparam_0,float fparam_1);
extern int func_004905E0(float fparam_0);
extern int func_00556068(int param_1);
extern float DAT_002ddb64;
extern float DAT_002ddb68;
extern float DAT_002ddb6c;

// USA 002DD8F8 <- EU 002DD8D4 (Ghidra, non-matching)
// GLOBAL DAT_002ddb64 float
// GLOBAL DAT_002ddb68 float
// GLOBAL DAT_002ddb6c float

undefined4 func_002DD8F8(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fparam_1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 ((float *)(albw_frame + 0xc))
  #define local_2c (*(float *)(albw_frame + 0x14))
  piVar5 = *(int **)(*(int *)(param_1 + 0x28) + 0x610);
  piVar2 = (int *)piVar5[6];
  fVar6 = DAT_002ddb6c;
  fparam_1 = DAT_002ddb64;
  fparam_0 = DAT_002ddb68;
  if ((piVar2 == (int *)0x0 || piVar2 == piVar5) ||
     (puVar3 = func_00556068((int)piVar2), puVar3 == (undefined4 *)0x0)) {
    if (*(char *)(*(int *)(param_1 + 0x28) + 0x6bf) == '\0') {
      local_40 = fVar6;
      local_3c = fVar6;
      local_38 = fVar6;
      return func_0028C920(*(int *)(param_1 + 0x4c),0,&local_40,fparam_0,fparam_1);
    }
  }
  else {
    piVar2 = (int *)piVar5[6];
    if ((piVar2 != (int *)0x0 && piVar2 != piVar5) &&
       (puVar3 = func_00556068((int)piVar2), puVar3 != (undefined4 *)0x0)) {
      (**(code **)(*piVar2 + 0x20))(piVar2,&local_40);
    }
    func_00115C70(local_34,&local_40,*(float **)(param_1 + 0x30));
    if ((char)piVar5[4] != '\0') {
      if (local_2c == fVar6 && local_34[0] == fVar6) {
        iVar4 = 0;
      }
      else if (local_2c < fVar6) {
        if (local_34[0] < fVar6) {
          if (local_34[0] < local_2c) {
            iVar4 = func_004905E0(local_2c / local_34[0]);
            iVar4 = -0x40000000 - iVar4;
          }
          else {
            iVar4 = func_004905E0(local_34[0] / local_2c);
            iVar4 = iVar4 + -0x80000000;
          }
        }
        else {
          local_2c = -local_2c;
          if (local_2c < local_34[0]) {
            iVar4 = func_004905E0(local_2c / local_34[0]);
            iVar4 = iVar4 + 0x40000000;
          }
          else {
            iVar4 = func_004905E0(local_34[0] / local_2c);
            iVar4 = -0x80000000 - iVar4;
          }
        }
      }
      else if (local_34[0] < fVar6) {
        local_34[0] = -local_34[0];
        if (local_2c < local_34[0]) {
          iVar4 = func_004905E0(local_2c / local_34[0]);
          iVar4 = iVar4 + -0x40000000;
        }
        else {
          iVar4 = func_004905E0(local_34[0] / local_2c);
          iVar4 = -iVar4;
        }
      }
      else if (local_2c < local_34[0]) {
        iVar4 = func_004905E0(local_2c / local_34[0]);
        iVar4 = 0x40000000 - iVar4;
      }
      else {
        iVar4 = func_004905E0(local_34[0] / local_2c);
      }
      *(int *)(param_1 + 0x58) = iVar4;
    }
    if (((*(float *)(param_1 + 0x7c) == local_40) && (*(float *)(param_1 + 0x80) == local_3c)) &&
       (*(float *)(param_1 + 0x84) == local_38)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    *(float *)(param_1 + 0x7c) = local_40;
    *(float *)(param_1 + 0x80) = local_3c;
    *(float *)(param_1 + 0x84) = local_38;
    func_0028C920(*(int *)(param_1 + 0x4c),1,&local_40,fparam_0,fparam_1);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  }
  return 0;
}

