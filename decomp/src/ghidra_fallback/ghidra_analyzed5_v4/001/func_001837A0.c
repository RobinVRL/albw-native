#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001843B0(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BDBAC(int param_1,int param_2);
extern int func_004BE858(int param_1);
extern int func_004BF418(int param_1);
extern int func_004BF874(int param_1,float *param_2,int param_3);
extern int func_004C0DE8(int param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int DAT_00183a20;
extern float DAT_00183a24;
extern int DAT_00183a28;
extern int DAT_00183a2c;
extern float DAT_00183a30;

// USA 001837A0 <- EU 001837A0 (Ghidra, non-matching)
// GLOBAL DAT_00183a20 int
// GLOBAL DAT_00183a24 float
// GLOBAL DAT_00183a28 int
// GLOBAL DAT_00183a2c int
// GLOBAL DAT_00183a30 float
// GLOBAL EXT_00000008 undefined

void func_001837A0(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  int iVar4;
  uint extraout_r1_00;
  float *pfVar5;
  int *piVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  piVar6 = (int *)(*(char *)(param_1 + 0x964) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x97c) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar2;
  if (*(int *)(param_1 + 0x970) != 0) {
    fVar8 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x970),1,fVar8);
  }
  pfVar5 = &fStack_20;
  uVar1 = *(byte *)(param_1 + 0x9f9) - 3;
  bVar7 = uVar1 == 3;
  if (uVar1 < 4) {
    bVar7 = *(char *)(param_1 + 0x9c9) == '\0';
  }
  if (!bVar7) {
    fStack_20 = *(float *)(param_1 + 0x3d0);
    uStack_1c = *(undefined4 *)(param_1 + 0x3d4);
    uStack_18 = *(undefined4 *)(param_1 + 0x3d8);
    iVar2 = *(int *)(param_1 + 0x7a0);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),&fStack_20);
    func_00169A80(*(int **)(param_1 + 0x7ac),extraout_r1,pfVar5,piVar6);
    iVar2 = 0;
    func_00168E9C(*(int **)(param_1 + 0x7ac),*(int *)(param_1 + 0x7a0),(int *)0x0);
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      piVar6 = (int *)&SupervisorCall;
      iVar2 = (uint)*(byte *)(param_1 + 0x852) * 0xc + 8;
      iVar4 = (int)*(char *)(*(int *)(param_1 + 0x790) + iVar2);
      if (iVar4 != -1) {
        func_00169A80(*(int **)(param_1 + 0x7b0),iVar4,iVar2,(int *)&SupervisorCall);
        iVar2 = 0;
        func_00168E9C(*(int **)(param_1 + 0x7b0),*(int *)(param_1 + 0x7a0),(int *)0x0);
      }
    }
    if (*(byte *)(param_1 + 0x9f9) < 3) {
      func_004BF418(param_1);
    }
    else if (*(char *)(param_1 + 0x964) == '\a') {
      func_004C0DE8(param_1,param_1 + 0x9ac);
    }
    else {
      func_004BE858(param_1);
    }
    func_004CEAF0(*(int *)(param_1 + 0x7a0));
    if (2 < *(byte *)(param_1 + 0x9f9)) {
      uVar1 = extraout_r1_00;
      if (*(int *)(param_1 + 0x9b8) != 0) {
        func_0051D27C((int *)(param_1 + 0x9b8),0,DAT_00183a20);
        iVar2 = DAT_00183a28;
        uVar1 = *(uint *)(param_1 + 0x9b8);
        iVar4 = DAT_00183a28 + (uVar1 >> 0x18) * 0x10;
        fVar8 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = *(float *)(iVar4 + 8) + *(float *)(iVar4 + 0xc) * fVar8 * DAT_00183a24;
        fVar8 = fVar8 * fVar8;
        if ((int)ALBW_AS_U32(fVar8) < DAT_00183a2c) {
          fVar8 = DAT_00183a30;
        }
        fVar9 = *(float *)(param_1 + 0x9bc);
        iVar4 = *(int *)(param_1 + 0x990);
        uVar1 = *(uint *)(iVar4 + 0x164) | 0x40000000;
        *(uint *)(iVar4 + 0x164) = uVar1;
        *(float *)(iVar4 + 0x74) = fVar8;
        *(float *)(iVar4 + 0x78) = fVar8;
        *(float *)(iVar4 + 0x7c) = fVar9 * fVar8;
      }
      func_00169A80(*(int **)(param_1 + 0x994),uVar1,iVar2,piVar6);
      func_00168E9C(*(int **)(param_1 + 0x994),*(int *)(param_1 + 0x990),(int *)0x0);
      func_001843B0(param_1);
    }
    func_004BF874(param_1,&fStack_20,0);
    func_004BDBAC(param_1,0);
  }
  return;
}

