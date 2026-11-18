#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004F4A68();
extern int func_0068C690(float *param_1);
extern int DAT_00213a04;
extern float DAT_00213a08;

// USA 002138A4 <- EU 002138A4 (Ghidra, non-matching)
// GLOBAL DAT_00213a04 int
// GLOBAL DAT_00213a08 float

int func_002138A4(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  uVar1 = *(ushort *)(param_2 + 0x20);
  bVar4 = (uVar1 & 0x1f) == 6;
  if (bVar4) {
    uVar1 = uVar1 & 0x7e0;
  }
  if (bVar4 && uVar1 == 0x1e0) {
    iVar2 = 0;
  }
  else {
    iVar2 = func_004F4A68(param_1,param_2);
    if (iVar2 != 0) {
      local_28 = *(float *)(param_2 + 4);
      local_24 = *(float *)(param_2 + 8);
      fStack_20 = *(float *)(param_2 + 0xc);
      if (((*(char *)(param_1 + 0x8c0) == '\a') && ((int)ALBW_AS_U32(local_24) < DAT_00213a04)) &&
         (fVar5 = *(float *)(param_1 + 0x3dc) * local_28 + *(float *)(param_1 + 0x3e0) * local_24 +
                  *(float *)(param_1 + 0x3e4) * fStack_20, fVar5 < DAT_00213a08)) {
        fVar9 = DAT_00213a08;
        func_00115DAC((float *)(param_1 + 0x3dc),&local_28,(float *)(param_1 + 0x3dc),-fVar5);
        *(float *)(param_1 + 0x3e0) = fVar9;
        fVar8 = *(float *)(param_1 + 0x3dc);
        fVar6 = *(float *)(param_1 + 0x3e4);
        fVar5 = *(float *)(param_1 + 0x974);
        fVar7 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar6 * fVar6);
        if (fVar7 <= fVar9) {
          if (fVar5 != fVar9) {
            func_00115D70((float *)(param_1 + 0x3dc),&local_28,fVar5);
            func_004D7F70((float *)(param_1 + 0x3dc),0x40000000);
          }
        }
        else {
          fVar5 = fVar5 / fVar7;
          *(float *)(param_1 + 0x3dc) = fVar8 * fVar5;
          *(float *)(param_1 + 0x3e0) = fVar9 * fVar5;
          *(float *)(param_1 + 0x3e4) = fVar6 * fVar5;
        }
        iVar3 = func_0068C690((float *)(param_1 + 0x3dc));
        *(int *)(param_1 + 1000) = iVar3;
        *(undefined1 *)(param_1 + 0x9c0) = 1;
        *(int *)(param_1 + 0x978) = iVar3;
      }
    }
  }
  return iVar2;
}

