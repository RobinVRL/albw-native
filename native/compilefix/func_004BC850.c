/* USA 004BC850 (EU 004BC828 + 004BC8B0): converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4) with one fix.
 * Lost stack store (lostframe class): the original copies the actor position Vec3 (+0x3D0..+0x3D8)
 * to the stack with `ldm r0, {r0, r1, r2}; stm sp, {r0, r1, r2}` (EU 004BC8C0) and passes &sp to
 * the base-matrix writer 004D8AEC / 004D7EB0 and to 004BF874; Ghidra kept only the x / y stores,
 * as two separate locals, so z was whatever the stack held (0): every actor updated here (the NPC
 * soldiers of the title flyover) was drawn at z = 0 instead of its position (Azahar GDB stub:
 * soldier spawned at (-2, 0, -11.5), drawn at z -11.75 there, -0.26 here). Now the third store (albw_frame + 0x10 = sp+8) is added.
 * Confidence: high (instruction-level). */
#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BCAA8(int param_1);
extern int func_004BDBAC(int param_1,int param_2);
extern int func_004BF418(int param_1);
extern int func_004BF874(int param_1,float *param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 004BC850 <- EU 004BC828 (Ghidra, non-matching)

void func_004BC850(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  float *pfVar8;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))   /* lost z store (EU 004BC8C4 stm) */
  piVar7 = (int *)(*(char *)(param_1 + 0x964) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x97c) + (int)piVar7);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar1 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar2;
  if (*(int *)(param_1 + 0x970) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x970),1,fparam_0);
  }
  func_004BCAA8(param_1);
  pfVar8 = &fStack_18;
  pfVar5 = &fStack_18;
  fStack_18 = *(float *)(param_1 + 0x3d0);
  uStack_14 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_10 = *(undefined4 *)(param_1 + 0x3d8);
  iVar2 = *(int *)(param_1 + 0x828);
  iVar3 = *(int *)(param_1 + 0x7a0);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  if (iVar2 == 0) {
    func_004D8AEC((float *)(iVar3 + 0x80),*(uint *)(param_1 + 1000),&fStack_18);
    uVar6 = extraout_r1_00;
  }
  else {
    pfVar5 = *(float **)(param_1 + 1000);
    func_004D7EB0((float *)(iVar3 + 0x80),*(uint *)(param_1 + 0x828),(uint)pfVar5,&fStack_18);
    uVar6 = extraout_r1;
    piVar7 = (int *)pfVar8;
  }
  func_00169A80(*(int **)(param_1 + 0x7ac),uVar6,pfVar5,piVar7);
  uVar6 = 0;
  func_00168E9C(*(int **)(param_1 + 0x7ac),*(int *)(param_1 + 0x7a0),(int *)0x0);
  if ((*(int **)(param_1 + 0x7b0) != (int *)0x0) && (*(byte *)(param_1 + 0x916) != 0)) {
    func_00169A80(*(int **)(param_1 + 0x7b0),(uint)*(byte *)(param_1 + 0x916),uVar6,piVar7);
    func_00168E9C(*(int **)(param_1 + 0x7b0),*(int *)(param_1 + 0x7a0),(int *)0x0);
  }
  func_004BF418(param_1);
  func_004CEAF0(*(int *)(param_1 + 0x7a0));
  func_004BF874(param_1,&fStack_18,0);
  func_004BDBAC(param_1,0);
  *(undefined1 *)(param_1 + 0x913) = 2;
  return;
}

