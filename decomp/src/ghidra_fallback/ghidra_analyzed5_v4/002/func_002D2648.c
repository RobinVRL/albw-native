#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168D60(int param_1,float fparam_0,float fparam_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002D2AEC(int param_1,int param_2,int param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float DAT_002d289c;
extern float DAT_002d28a0;
extern float DAT_002d28a4;
extern float DAT_002d28a8;

// USA 002D2648 <- EU 002D2624 (Ghidra, non-matching)
// GLOBAL DAT_002d289c float
// GLOBAL DAT_002d28a0 float
// GLOBAL DAT_002d28a4 float
// GLOBAL DAT_002d28a8 float

undefined4 func_002D2648(int param_1,int param_2,int param_3,int *param_4,float fparam_0)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define aiStack_88 ((int *)(albw_frame + 0x8))
  iVar1 = (int)*(short *)(param_1 + 4);
  *(short *)(param_1 + 4) = (short)param_3;
  uVar4 = (uint)*(byte *)(param_1 + 0x24);
  bVar6 = iVar1 != param_3;
  if (uVar4 < 2) {
    iVar5 = 0;
  }
  else {
    iVar5 = 2;
  }
  if (param_2 == 0 || param_2 == 2) {
    fVar7 = DAT_002d28a0;
    if (param_3 == 0xab) {
      if (bVar6) {
        param_4 = (int *)0x0;
        fVar8 = DAT_002d28a4;
        puVar2 = (uint *)func_002C11E8(aiStack_88,2,10,0);
        iVar1 = param_1 + iVar5 * 0x28;
        func_0016898C(*(int *)(iVar1 + 0x2c),puVar2);
        func_00168D60(*(int *)(iVar1 + 0x2c),fVar7,fVar8);
        uVar4 = *(uint *)(param_1 + 0x1c);
        if (uVar4 != 0xffffffff) {
          func_004CEA18(*(int *)(param_1 + 0x10),1,uVar4);
        }
      }
      iVar1 = *(int *)(param_1 + iVar5 * 0x28 + 0x2c);
    }
    else {
      if (param_3 == 0xac) {
        fVar7 = DAT_002d28a4;
        if (bVar6) {
          param_4 = (int *)0x0;
          fVar8 = DAT_002d28a0;
          puVar2 = (uint *)func_002C11E8(aiStack_88,1,10,0);
          iVar1 = param_1 + iVar5 * 0x28;
          func_0016898C(*(int *)(iVar1 + 0x2c),puVar2);
          func_00168D60(*(int *)(iVar1 + 0x2c),fVar8,fVar7);
          func_00168D60(*(int *)(param_1 + 0x14),fVar8,fVar8);
          uVar4 = *(uint *)(param_1 + 0x1c);
          if (uVar4 != 0xffffffff) {
            func_004CEA18(*(int *)(param_1 + 0x10),1,uVar4);
          }
        }
        fVar8 = DAT_002d28a8;
        *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x14) + 0x10) = fVar7;
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x14);
        iVar1 = func_00260C78(fVar8,*(float *)(iVar1 + 8),*(float *)(iVar1 + 0xc),
                              *(float *)(iVar1 + 0x14));
        if (iVar1 != 0) {
          uVar4 = *(uint *)(param_1 + 0x1c);
        }
        uVar3 = extraout_r1_00;
        if (iVar1 != 0 && uVar4 != 0xffffffff) {
          func_004CEA18(*(int *)(param_1 + 0x10),0,uVar4);
          uVar3 = extraout_r1_01;
        }
        goto LAB_002d2690;
      }
      if ((bVar6) && (iVar1 == 0xab || iVar1 == 0xac)) {
        param_4 = (int *)0x0;
        puVar2 = (uint *)func_002C11E8(aiStack_88,0,10,0);
        uVar4 = *(uint *)(param_1 + iVar5 * 0x28 + 0x2c);
        func_0016898C(uVar4,puVar2);
      }
      iVar1 = *(int *)(param_1 + iVar5 * 0x28 + 0x2c);
    }
    *(float *)(*(int *)(iVar1 + 0x14) + 0x10) = fparam_0;
    func_00168D60(*(int *)(param_1 + 0x14),fVar7,fVar7);
    uVar3 = extraout_r1;
  }
  else {
    iVar1 = *(int *)(param_1 + iVar5 * 0x28 + 0x54);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    *(float *)(*(int *)(iVar1 + 0x14) + 0x10) = fparam_0 * DAT_002d289c;
  }
LAB_002d2690:
  iVar1 = param_1 + param_2 * 0x28;
  func_00169A80(*(int **)(iVar1 + 0x2c),uVar3,uVar4,param_4);
  func_00168E9C(*(int **)(iVar1 + 0x2c),*(int *)(iVar1 + 0x28),(int *)0x0);
  func_004CEAF0(*(int *)(iVar1 + 0x28));
  return func_002D2AEC(param_1,param_2,param_3);
}

