#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_00215804;
extern int *DAT_00215808;
extern float DAT_0021580c;

// USA 002156B4 <- EU 002156B4 (Ghidra, non-matching)
// GLOBAL DAT_00215804 float
// GLOBAL DAT_00215808 int *
// GLOBAL DAT_0021580c float

void func_002156B4(int param_1)

{
  uint *puVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  if ((*(int *)(param_1 + 0x8bc) == 10) && (*(int *)(param_1 + 0xa50) != 0)) {
    iVar5 = 0;
    iVar6 = iVar5;
    do {
      puVar1 = (uint *)func_0058A7D4();
      uVar4 = *(uint *)(param_1 + 0xa54);
      uVar2 = func_00111A64(puVar1);
      uVar2 = (uint)((ulonglong)uVar4 * (ulonglong)uVar2 >> 0x20);
      if (*(uint *)(param_1 + 0xa58) != uVar2) break;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar5 < 0x1e);
    if (iVar6 == 0x1e) {
      iVar6 = *(int *)(param_1 + 0xa58);
      if (iVar6 == *(int *)(param_1 + 0xa54) + -1) {
        uVar2 = iVar6 - 1;
      }
      else {
        uVar2 = iVar6 + 1;
      }
    }
    *(uint *)(param_1 + 0xa5c) = uVar2;
    uVar4 = *(uint *)(param_1 + 0xa50);
    iVar6 = *(int *)(uVar4 + 0x28);
    if (iVar6 != 0) {
      uVar4 = *(uint *)(uVar4 + 0x20);
    }
    if (iVar6 != 0 && uVar2 < uVar4) {
      iVar6 = *(int *)(iVar6 + uVar2 * 4);
    }
    else {
      iVar6 = 0;
    }
    uVar7 = *(undefined4 *)(iVar6 + 0x18);
    uVar8 = *(undefined4 *)(iVar6 + 0x20);
    fVar9 = *(float *)(iVar6 + 0x1c) - DAT_00215804;
    *(undefined4 *)(param_1 + 0x368) = uVar7;
    *(float *)(param_1 + 0x36c) = fVar9;
    *(undefined4 *)(param_1 + 0x370) = uVar8;
    *(undefined4 *)(param_1 + 0x3d0) = uVar7;
    *(float *)(param_1 + 0x3d4) = fVar9;
    *(undefined4 *)(param_1 + 0x3d8) = uVar8;
    *(undefined4 *)(param_1 + 0xa38) = uVar7;
    *(float *)(param_1 + 0xa3c) = fVar9;
    *(undefined4 *)(param_1 + 0xa40) = uVar8;
  }
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(afStack_28,pfVar3,(float *)(param_1 + 0x3d0));
  iVar6 = func_0068C690(afStack_28);
  func_0051D2F4((int *)(param_1 + 1000),iVar6,0,*DAT_00215808,DAT_0021580c);
  if (0x78 < *(int *)(param_1 + 0x8bc)) {
    func_0065D9FC((undefined4 *)(param_1 + 0x8bc),1);
  }
  return;
}

