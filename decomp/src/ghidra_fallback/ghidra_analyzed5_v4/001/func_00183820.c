#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001843B0(int param_1);
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

// USA 00183820 <- EU 00183820 (Ghidra, non-matching)
// GLOBAL DAT_00183a20 int
// GLOBAL DAT_00183a24 float
// GLOBAL DAT_00183a28 int
// GLOBAL DAT_00183a2c int
// GLOBAL DAT_00183a30 float
// GLOBAL EXT_00000008 undefined

void func_00183820(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  uint extraout_r1_00;
  float *pfVar4;
  int *in_r3;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  pfVar4 = &local_20;
  uVar1 = *(byte *)(param_1 + 0x9f9) - 3;
  bVar5 = uVar1 == 3;
  if (uVar1 < 4) {
    bVar5 = *(char *)(param_1 + 0x9c9) == '\0';
  }
  if (!bVar5) {
    local_20 = *(float *)(param_1 + 0x3d0);
    uStack_1c = *(undefined4 *)(param_1 + 0x3d4);
    uStack_18 = *(undefined4 *)(param_1 + 0x3d8);
    iVar2 = *(int *)(param_1 + 0x7a0);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),&local_20);
    func_00169A80(*(int **)(param_1 + 0x7ac),extraout_r1,pfVar4,in_r3);
    iVar2 = 0;
    func_00168E9C(*(int **)(param_1 + 0x7ac),*(int *)(param_1 + 0x7a0),(int *)0x0);
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      in_r3 = (int *)&SupervisorCall;
      iVar2 = (uint)*(byte *)(param_1 + 0x852) * 0xc + 8;
      iVar3 = (int)*(char *)(*(int *)(param_1 + 0x790) + iVar2);
      if (iVar3 != -1) {
        func_00169A80(*(int **)(param_1 + 0x7b0),iVar3,iVar2,(int *)&SupervisorCall);
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
        iVar3 = DAT_00183a28 + (uVar1 >> 0x18) * 0x10;
        fVar6 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = *(float *)(iVar3 + 8) + *(float *)(iVar3 + 0xc) * fVar6 * DAT_00183a24;
        fVar6 = fVar6 * fVar6;
        if ((int)ALBW_AS_U32(fVar6) < DAT_00183a2c) {
          fVar6 = DAT_00183a30;
        }
        fVar7 = *(float *)(param_1 + 0x9bc);
        iVar3 = *(int *)(param_1 + 0x990);
        uVar1 = *(uint *)(iVar3 + 0x164) | 0x40000000;
        *(uint *)(iVar3 + 0x164) = uVar1;
        *(float *)(iVar3 + 0x74) = fVar6;
        *(float *)(iVar3 + 0x78) = fVar6;
        *(float *)(iVar3 + 0x7c) = fVar7 * fVar6;
      }
      func_00169A80(*(int **)(param_1 + 0x994),uVar1,iVar2,in_r3);
      func_00168E9C(*(int **)(param_1 + 0x994),*(int *)(param_1 + 0x990),(int *)0x0);
      func_001843B0(param_1);
    }
    func_004BF874(param_1,&local_20,0);
    func_004BDBAC(param_1,0);
  }
  return;
}

