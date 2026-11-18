#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0021B518(int *param_1);
extern int func_00520FC0(void);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_0058A7D4(void);
extern int func_0068C690(float *param_1);
extern int *DAT_0021bef4;

// USA 0021BDC0 <- EU 0021BDC0 (Ghidra, non-matching)
// GLOBAL DAT_0021bef4 int *

void func_0021BDC0(int *param_1)

{
  float *pfVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint in_r2;
  float fVar5;
  uint uVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  func_0021B518(param_1);
  uVar6 = param_1[0x4d0];
  if ((int)uVar6 < 0) {
    pfVar1 = (float *)func_00520FC0();
  }
  else {
    iVar4 = *DAT_0021bef4;
    iVar2 = func_00581B9C(iVar4);
    if (((iVar2 != 1) || (puVar3 = (uint *)func_00582250(iVar4), *puVar3 <= uVar6)) ||
       (iVar4 = *(int *)(puVar3[2] + uVar6 * 4), iVar4 == 0)) goto LAB_0021bed8;
    iVar2 = 0;
    do {
      puVar3 = (uint *)func_0058A7D4();
      uVar7 = param_1[0x4d1];
      uVar6 = func_00111A64(puVar3);
      uVar6 = (uint)((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x20);
      if (param_1[0x4d2] != uVar6) {
        if (iVar2 < 100) goto LAB_0021be90;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 100);
    uVar6 = uVar6 + 1;
    if (param_1[0x4d1] <= (int)uVar6) {
      uVar6 = 0;
    }
LAB_0021be90:
    param_1[0x4d2] = uVar6;
    iVar2 = *(int *)(iVar4 + 0x28);
    if (iVar2 != 0) {
      in_r2 = *(uint *)(iVar4 + 0x20);
    }
    if ((iVar2 == 0 || in_r2 <= uVar6) || (iVar4 = *(int *)(iVar2 + uVar6 * 4), iVar4 == 0))
    goto LAB_0021bed8;
    fVar5 = *(float *)(iVar4 + 0x18);
    iVar2 = *(int *)(iVar4 + 0x1c);
    pfVar1 = (float *)(param_1 + 0x4c7);
    param_1[0x4c9] = *(int *)(iVar4 + 0x20);
    *pfVar1 = fVar5;
    param_1[0x4c8] = iVar2;
  }
  func_00115C70(afStack_28,pfVar1,(float *)(param_1 + 0xf4));
LAB_0021bed8:
  iVar4 = func_0068C690(afStack_28);
  param_1[0xfa] = iVar4;
  *(undefined1 *)((int)param_1 + 0x1375) = 0;
  return;
}

