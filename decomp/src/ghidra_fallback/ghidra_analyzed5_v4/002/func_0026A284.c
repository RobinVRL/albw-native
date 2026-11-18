#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_00564A78(int param_1,int *param_2);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern float DAT_0026a468;
extern float DAT_0026a46c;
extern undefined4 DAT_0026a470;
extern undefined4 DAT_0026a474;
extern int DAT_0026a480;
extern int DAT_0026a484;
extern float DAT_0026a488;
extern float DAT_0026a48c;
extern char s_mouse_2_0026a478[];

// USA 0026A284 <- EU 0026A2AC (Ghidra, non-matching)
// GLOBAL DAT_0026a468 float
// GLOBAL DAT_0026a46c float
// GLOBAL DAT_0026a470 undefined4
// GLOBAL DAT_0026a474 undefined4
// GLOBAL DAT_0026a480 int
// GLOBAL DAT_0026a484 int
// GLOBAL DAT_0026a488 float
// GLOBAL DAT_0026a48c float
// GLOBAL s_mouse_2_0026a478 string

void func_0026A284(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  fVar6 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar6);
  fVar7 = func_0058AA40(param_1);
  fVar11 = DAT_0026a46c;
  fVar6 = DAT_0026a468;
  iVar8 = (int)fVar7;
  uVar9 = DAT_0026a470;
  if (iVar8 == 0x25) {
LAB_0026a368:
    *(undefined4 *)(param_1 + 0x990) = uVar9;
  }
  else {
    if (iVar8 - 0x26U < 0xc) {
      iVar8 = 0x31 - iVar8;
    }
    else {
      uVar9 = DAT_0026a474;
      if (iVar8 == 0x41) goto LAB_0026a368;
      if (0xc < iVar8 - 0x42U) {
        *(float *)(param_1 + 0x990) = DAT_0026a46c;
        goto LAB_0026a36c;
      }
      iVar8 = 0x4e - iVar8;
    }
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    fVar7 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = *(float *)(param_1 + 0x990);
    *(float *)(param_1 + 0x990) = fVar10 + (DAT_0026a46c - fVar10) * (DAT_0026a468 / fVar7);
  }
LAB_0026a36c:
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x990));
  piVar5 = *(int **)(param_1 + 0x9a0);
  local_24 = s_mouse_2_0026a478;
  local_28 = DAT_0026a480;
  uVar1 = func_00564A78(*(int *)(param_1 + 0x40c),&local_28);
  iVar8 = DAT_0026a484;
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) + uVar1 * 0x30;
  iVar3 = *(int *)(iVar2 + 0x1c);
  iVar4 = *(int *)(iVar2 + 0x2c);
  piVar5[1] = *(int *)(iVar2 + 0xc);
  piVar5[2] = iVar3;
  piVar5[3] = iVar4;
  piVar5[0x16] = iVar8;
  func_004356B4(piVar5);
  lVar12 = func_0058ACC8(param_1,DAT_0026a488);
  if ((int)lVar12 == 0) {
    lVar12 = func_0058ACC8(param_1,DAT_0026a48c);
    if ((int)lVar12 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x9a4) + 0x61) = 0;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x9a4);
    func_004D80A4((float *)(iVar8 + 0x24),*(uint *)(param_1 + 1000),fVar6);
    *(float *)(iVar8 + 0x28) = fVar11;
    *(undefined1 *)(*(int *)(param_1 + 0x9a4) + 0x61) = 1;
  }
  iVar8 = func_0058A8F0(param_1);
  if (iVar8 != 0) {
    func_00660718((undefined4 *)(param_1 + 0x8c8),0);
  }
  return;
}

