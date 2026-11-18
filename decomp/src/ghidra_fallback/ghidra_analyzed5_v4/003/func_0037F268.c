#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_004FC1CC(int param_1,int param_2,byte param_3,float fparam_0);
extern int func_004FCF20(int param_1,int param_2);
extern int func_005330A8(int param_1,int param_2,int *param_3);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0037f67c;
extern int *DAT_0037f680;
extern undefined4 *DAT_0037f684;
extern int *DAT_0037f688;
extern undefined4 *DAT_0037f68c;
extern float DAT_0037f690;
extern float DAT_0037f694;
extern undefined4 *DAT_0037f698;
extern int *DAT_0037f69c;
extern int *DAT_0037f6a0;
extern undefined4 DAT_0037f6a4;
extern int DAT_0037f6a8;
extern uint DAT_0037f6ac;
extern int *DAT_0037f6b0;
extern int *DAT_0037f7b8;
extern int DAT_0037f7bc;

// USA 0037F268 <- EU 0037F244 (Ghidra, non-matching)
// GLOBAL DAT_0037f67c int *
// GLOBAL DAT_0037f680 int *
// GLOBAL DAT_0037f684 undefined4 *
// GLOBAL DAT_0037f688 int *
// GLOBAL DAT_0037f68c undefined4 *
// GLOBAL DAT_0037f690 float
// GLOBAL DAT_0037f694 float
// GLOBAL DAT_0037f698 undefined4 *
// GLOBAL DAT_0037f69c int *
// GLOBAL DAT_0037f6a0 int *
// GLOBAL DAT_0037f6a4 undefined4
// GLOBAL DAT_0037f6a8 int
// GLOBAL DAT_0037f6ac uint
// GLOBAL DAT_0037f6b0 int *
// GLOBAL DAT_0037f7b8 int *
// GLOBAL DAT_0037f7bc int

/* WARNING: Variable defined which should be unmapped: objStack_40 */

undefined4 func_0037F268(int param_1)

{
  float fparam_0;
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_34 ((uint *)(albw_frame + 0xc))
  iVar2 = func_00588BE4(param_1);
  if (iVar2 == *DAT_0037f67c) {
    uVar3 = func_005330A8(param_1,0,DAT_0037f680);
    objStack_40[0] = 0;
    objStack_40[1] = 0;
    piVar4 = func_0014DF18(*(int *)(param_1 + 0x2d0),*DAT_0037f684,DAT_0037f684[1],uVar3,0,0);
    *(int **)(param_1 + 0xa6c) = piVar4;
  }
  else {
    uVar3 = func_005330A8(param_1,0,DAT_0037f688);
    objStack_40[0] = 0;
    objStack_40[1] = 0;
    piVar4 = func_0014DF18(*(int *)(param_1 + 0x2d0),*DAT_0037f68c,DAT_0037f68c[1],uVar3,0,0);
    *(int **)(param_1 + 0xa6c) = piVar4;
  }
  fVar11 = DAT_0037f690;
  func_00115D70((float *)objStack_40,(float *)(param_1 + 0x4e4),DAT_0037f690);
  piVar4[0x59] = piVar4[0x59] | 0x40000000;
  fparam_0 = DAT_0037f694;
  uVar12 = CONCAT44(DAT_0037f694,fVar11);
  piVar4[0x1d] = objStack_40[0];
  piVar4[0x1e] = objStack_40[1];
  piVar4[0x1f] = objStack_40[2];
  func_004FC1CC(param_1,*(int *)(param_1 + 0xa6c),0xb,fparam_0);
  func_0036D0C8((int *)(param_1 + 0x8c0),0);
  if (*(int *)(param_1 + 0x8c0) == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = func_0010983C(*DAT_0037f698,*(int *)(param_1 + 0x8c0));
  }
  iVar5 = func_00588BE4(param_1);
  if (iVar5 == *DAT_0037f67c) {
    uVar3 = func_005330A8(param_1,0,DAT_0037f69c);
    objStack_40[0] = 1;
    objStack_40[1] = 0;
    piVar4 = func_0014DF18(*(int *)(param_1 + 0x2d0),*DAT_0037f684,DAT_0037f684[1],uVar3,1,0);
    *(int **)(param_1 + 0xa70) = piVar4;
  }
  else {
    uVar3 = func_005330A8(param_1,0,DAT_0037f6a0);
    objStack_40[0] = 1;
    objStack_40[1] = 0;
    piVar4 = func_0014DF18(*(int *)(param_1 + 0x2d0),*DAT_0037f68c,DAT_0037f68c[1],uVar3,1,0);
    *(int **)(param_1 + 0xa70) = piVar4;
  }
  *(float *)(param_1 + 0xb14) = ALBW_AS_F32(uVar12);
  iVar5 = *(int *)(param_1 + 0xa70);
  func_00115D70((float *)objStack_40,(float *)(param_1 + 0x4e4),ALBW_AS_F32(uVar12));
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  *(uint *)(iVar5 + 0x74) = objStack_40[0];
  *(uint *)(iVar5 + 0x78) = objStack_40[1];
  *(uint *)(iVar5 + 0x7c) = objStack_40[2];
  iVar5 = func_0054DDF4(param_1,1);
  *(int *)(param_1 + 0xb38) = iVar5;
  puVar6 = (undefined4 *)func_0010BAB4(100);
  uVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = func_004EE484(puVar6);
  }
  *(undefined4 *)(param_1 + 0xa1c) = uVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0x10);
  iVar5 = DAT_0037f6a8;
  uVar7 = DAT_0037f6a4;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 0;
    uVar10 = *(undefined4 *)(iVar5 + 0xf8);
    puVar6[2] = *(undefined4 *)(iVar5 + 0xf4);
    puVar6[3] = uVar10;
    *puVar6 = uVar7;
  }
  objStack_40[0] = param_1 + 0xa28;
  *(undefined4 **)(param_1 + 0xa28) = puVar6;
  puVar6 = (undefined4 *)func_0010BAB4(0x10);
  iVar5 = DAT_0037f6a8;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 0;
    uVar10 = *(undefined4 *)(iVar5 + 0xf8);
    puVar6[2] = *(undefined4 *)(iVar5 + 0xf4);
    puVar6[3] = uVar10;
    *puVar6 = uVar7;
  }
  *(undefined4 **)(param_1 + 0xa2c) = puVar6;
  iVar5 = func_0054D964(param_1,1);
  *(int *)(param_1 + 0xa24) = iVar5;
  *(int *)(param_1 + 0xa20) = iVar5;
  objStack_40[1] = CONCAT22((*(undefined2 *)((char *)&objStack_40[1] + 2)),0xe0);
  *(undefined2 *)(iVar5 + 0x28) = 0xe0;
  iVar5 = *(int *)(param_1 + 0xa20);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_1 + 0xa90);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_1 + 0xa94);
  *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + 0xa98);
  iVar5 = *(int *)(param_1 + 0xa24);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_1 + 0xa90);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_1 + 0xa94);
  *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + 0xa98);
  func_004356B4(*(int **)(param_1 + 0xa20));
  func_004356B4(*(int **)(param_1 + 0xa24));
  iVar5 = DAT_0037f6a8;
  iVar8 = *(int *)(param_1 + 0xa28);
  uVar7 = *(undefined4 *)(DAT_0037f6a8 + 0xdc);
  uVar10 = *(undefined4 *)(DAT_0037f6a8 + 0xe0);
  *(int *)(iVar8 + 4) = param_1;
  *(undefined4 *)(iVar8 + 8) = uVar7;
  *(undefined4 *)(iVar8 + 0xc) = uVar10;
  iVar8 = *(int *)(param_1 + 0xa2c);
  uVar10 = *(undefined4 *)(iVar5 + 0xe4);
  uVar7 = *(undefined4 *)(iVar5 + 0xe8);
  *(int *)(iVar8 + 4) = param_1;
  *(undefined4 *)(iVar8 + 8) = uVar10;
  *(undefined4 *)(iVar8 + 0xc) = uVar7;
  local_34[0] = *(uint *)(param_1 + 0x2cc);
  objStack_40[1] = *(uint *)objStack_40[0];
  objStack_40[0] = (uint)*(short *)(param_1 + 0x54);
  objStack_40[2] = DAT_0037f6ac;
  uVar3 = objStack_40[2];
  (*(undefined2 *)((char *)&objStack_40[2] + 0)) = (undefined2)DAT_0037f6ac;
  uVar1 = (undefined2)objStack_40[2];
  objStack_40[2] = uVar3;
  func_0014EB8C(*(int *)(param_1 + 0xa1c),*(undefined4 *)(param_1 + 0xa20),
                *(undefined2 **)(param_1 + 0xb38),local_34,*(short *)(param_1 + 0x54),objStack_40[1]
                ,uVar1);
  iVar5 = *(int *)(param_1 + 0xa20);
  *(uint *)(iVar5 + 0x2c) = *(uint *)(iVar5 + 0x2c) | 0x40008;
  func_004FC1CC(param_1,*(int *)(param_1 + 0xa70),0xb,ALBW_AS_F32(((ulonglong)uVar12 >> 0x20)));
  func_004FCF20(param_1 + 0x5a8,*(int *)(param_1 + 0xa1c));
  if (iVar2 != 1) {
    func_0010983C(*DAT_0037f698,iVar2);
  }
  *(int *)(param_1 + 0x444) = param_1 + 0xaac;
  func_0036D0C8((int *)(param_1 + 0x8c4),0);
  iVar2 = *(int *)(param_1 + 0x8c4);
  if (iVar2 == 0) {
    local_34[0] = 1;
  }
  else {
    local_34[0] = func_0010983C(*DAT_0037f698,iVar2);
  }
  iVar5 = 0;
  iVar2 = func_00588BE4(param_1);
  piVar4 = DAT_0037f67c;
  if (iVar2 == *DAT_0037f67c) {
    objStack_40[2] = func_005330A8(param_1,0,DAT_0037f6b0);
    iVar2 = DAT_0037f7bc;
  }
  else {
    objStack_40[2] = func_005330A8(param_1,0,DAT_0037f7b8);
    iVar2 = DAT_0037f7bc;
  }
  do {
    puVar6 = (undefined4 *)(param_1 + 0x8c8 + iVar5 * 0x20);
    uVar7 = *(undefined4 *)(param_1 + 0x3d4);
    uVar10 = *(undefined4 *)(param_1 + 0x3d8);
    *puVar6 = *(undefined4 *)(param_1 + 0x3d0);
    puVar6[1] = uVar7;
    puVar6[2] = uVar10;
    uVar7 = (undefined4)uVar12;
    puVar6[5] = uVar7;
    puVar6[6] = uVar7;
    puVar6[7] = uVar7;
    iVar8 = func_00588BE4(param_1);
    objStack_40[0] = 0;
    objStack_40[1] = 0;
    if (iVar8 == *piVar4) {
      piVar9 = func_0014DF18(*(int *)(param_1 + 0x2d0),*DAT_0037f684,DAT_0037f684[1],objStack_40[2],
                             0,0);
      puVar6[3] = piVar9;
    }
    else {
      piVar9 = func_0014DF18(*(int *)(param_1 + 0x2d0),*(undefined4 *)(iVar2 + 4),
                             *(int *)(iVar2 + 8),objStack_40[2],0,0);
      puVar6[3] = piVar9;
    }
    iVar5 = iVar5 + 1;
    piVar9[0x59] = piVar9[0x59] | 0x40000000;
    piVar9[0x1d] = puVar6[5];
    piVar9[0x1e] = puVar6[6];
    piVar9[0x1f] = puVar6[7];
    *(int *)(puVar6[3] + 0x134) = (int)uVar12;
  } while (iVar5 != 10);
  if (local_34[0] != 1) {
    return func_0010983C(*DAT_0037f698,local_34[0]);
  }
  return 0;
}

