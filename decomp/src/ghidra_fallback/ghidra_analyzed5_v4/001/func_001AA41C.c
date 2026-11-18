#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float DAT_001aa688;

// USA 001AA41C <- EU 001AA41C (Ghidra, non-matching)
// GLOBAL DAT_001aa688 float

void func_001AA41C(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  bVar1 = false;
  if ((*(char *)(param_1 + 0x909) != '\x02') &&
     (fVar5 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0),
     fVar6 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8),
     *(float *)(param_1 + 0x944) < fVar5 * fVar5 + fVar6 * fVar6)) {
    bVar1 = true;
  }
  func_004FC07C(param_1,0,0xffffffff,0);
  fVar5 = DAT_001aa688;
  *(float *)(param_1 + 0x3dc) = DAT_001aa688;
  *(float *)(param_1 + 0x3e0) = fVar5;
  *(float *)(param_1 + 0x3e4) = fVar5;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  if (*(char *)(param_1 + 0x964) == '\0') {
    if (*(char *)(param_1 + 0x966) != '\0' || bVar1) {
      local_30 = *(float *)(param_1 + 8);
      uStack_2c = *(undefined4 *)(param_1 + 0xc);
      local_28 = *(float *)(param_1 + 0x10);
      func_00115C70(&local_30,&local_30,(float *)(param_1 + 0x3d0));
      if (local_28 == fVar5 && local_30 == fVar5) {
        iVar2 = 0;
      }
      else if (local_28 < fVar5) {
        if (local_30 < fVar5) {
          if (local_30 < local_28) {
            iVar2 = func_004905E0(local_28 / local_30);
            iVar2 = -0x40000000 - iVar2;
          }
          else {
            iVar2 = func_004905E0(local_30 / local_28);
            iVar2 = iVar2 + -0x80000000;
          }
        }
        else {
          fVar5 = -local_28;
          if (fVar5 < local_30) {
            iVar2 = func_004905E0(fVar5 / local_30);
            iVar2 = iVar2 + 0x40000000;
          }
          else {
            iVar2 = func_004905E0(local_30 / fVar5);
            iVar2 = -0x80000000 - iVar2;
          }
        }
      }
      else if (local_30 < fVar5) {
        fVar5 = -local_30;
        if (local_28 < fVar5) {
          iVar2 = func_004905E0(local_28 / fVar5);
          iVar2 = iVar2 + -0x40000000;
        }
        else {
          iVar2 = func_004905E0(fVar5 / local_28);
          iVar2 = -iVar2;
        }
      }
      else if (local_28 < local_30) {
        iVar2 = func_004905E0(local_28 / local_30);
        iVar2 = 0x40000000 - iVar2;
      }
      else {
        iVar2 = func_004905E0(local_30 / local_28);
      }
      *(uint *)(param_1 + 0x928) = iVar2 + 0x20000000U & 0xc0000000;
      return;
    }
    puVar3 = (uint *)func_0058A7D4();
    uVar4 = func_00111A64(puVar3);
    iVar2 = (int)((ulonglong)uVar4 * 4 >> 0x20) << 0x1e;
  }
  else {
    if (2 < *(int *)(param_1 + 0x940)) {
      puVar3 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar3);
      iVar2 = *(int *)(param_1 + 0x928);
      if ((uVar4 & 1) == 0) {
        iVar2 = iVar2 + -0x40000000;
      }
      else {
        iVar2 = iVar2 + 0x40000000;
      }
      *(int *)(param_1 + 0x928) = iVar2;
      *(undefined4 *)(param_1 + 0x940) = 0;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x928) + -0x80000000;
  }
  *(int *)(param_1 + 0x928) = iVar2;
  return;
}

