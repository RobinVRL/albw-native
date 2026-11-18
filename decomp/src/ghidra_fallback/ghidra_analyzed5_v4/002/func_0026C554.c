#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_002ACC68(undefined4 *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_0058A7D4(void);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 DAT_0026c830;
extern undefined4 DAT_0026c834;
extern float DAT_0026c838;
extern int *DAT_0026c83c;
extern float DAT_0026c840;
extern int DAT_0026c844;
extern undefined4 DAT_0026c848;
extern int *DAT_0026c84c;
extern uint DAT_0026c850;
extern float DAT_0026c854;
extern float DAT_0026c858;
extern float DAT_0026c85c;
extern undefined DAT_0026c860;
extern int DAT_0026c874;
extern char s_HBSE_Peace_RUN_0026c862[];
extern undefined4 _DAT_0026c860;

// USA 0026C554 <- EU 0026C57C (Ghidra, non-matching)
// GLOBAL DAT_0026c830 undefined4
// GLOBAL DAT_0026c834 undefined4
// GLOBAL DAT_0026c838 float
// GLOBAL DAT_0026c83c int *
// GLOBAL DAT_0026c840 float
// GLOBAL DAT_0026c844 int
// GLOBAL DAT_0026c848 undefined4
// GLOBAL DAT_0026c84c int *
// GLOBAL DAT_0026c850 uint
// GLOBAL DAT_0026c854 float
// GLOBAL DAT_0026c858 float
// GLOBAL DAT_0026c85c float
// GLOBAL DAT_0026c860 undefined
// GLOBAL DAT_0026c874 int
// GLOBAL s_HBSE_Peace_RUN_0026c862 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0026C554(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  fVar6 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar6);
  uVar8 = DAT_0026c830;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0026c830;
  *(undefined4 *)(param_1 + 0x3e4) = uVar8;
  uVar3 = *(int *)(param_1 + 0x900) + 0x20000000U >> 0x1e;
  if (uVar3 == 0 || uVar3 == 2) {
    *(undefined4 *)(param_1 + 0x908) = DAT_0026c848;
    uVar9 = func_0058AB74(param_1);
    if ((int)uVar9 != 1) {
      func_004FC07C(param_1,1,0,0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x908) = DAT_0026c834;
    uVar9 = func_0058AB74(param_1);
    if ((int)uVar9 != 2) {
      func_004FC07C(param_1,2,0,0);
    }
  }
  iVar2 = func_0051E6D0(*DAT_0026c83c,(float *)(param_1 + 0x3d0),DAT_0026c838);
  *(char *)(param_1 + 0x90c) = (char)iVar2;
  fVar6 = DAT_0026c840;
  if (iVar2 == 0) {
    uVar9 = func_0058AB74(param_1);
    if ((int)uVar9 != 0) {
      func_004FC07C(param_1,0,0,0);
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x904);
    pfVar5 = (float *)(DAT_0026c844 + (uVar3 >> 0x18) * 0x10);
    fVar7 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x3dc) =
         (*pfVar5 + pfVar5[1] * fVar7 * DAT_0026c840) * *(float *)(param_1 + 0x908);
    fVar7 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x3e4) =
         (pfVar5[2] + pfVar5[3] * fVar7 * fVar6) * *(float *)(param_1 + 0x908);
    if (((*(short *)(param_1 + 0x8fc) == 0) &&
        (*(uint *)(*DAT_0026c84c + 0x10) +
         (uint)((ulonglong)*(uint *)(*DAT_0026c84c + 0x10) * (ulonglong)DAT_0026c850 >> 0x21) * -3
         == 0)) && (bVar1 = func_002ACC68((undefined4 *)(param_1 + 0x3d0)), bVar1)) {
      iVar2 = *(int *)(param_1 + 0x900);
      *(int *)(param_1 + 0x900) = iVar2 + -0x80000000;
      *(uint *)(param_1 + 0x904) = iVar2 + 0xa0000000U & 0xc0000000;
      *(undefined2 *)(param_1 + 0x8fc) = 10;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x8f0);
  bVar1 = *(uint *)(param_1 + 0x8f4) == uVar3;
  if (uVar3 < *(uint *)(param_1 + 0x8f4)) {
    *(uint *)(param_1 + 0x8f0) = uVar3 + 1;
  }
  else {
    bVar1 = *(short *)(param_1 + 0x8fc) == 0;
  }
  if (bVar1) {
    puVar4 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar4);
    iVar2 = (int)((ulonglong)uVar3 * 4 >> 0x20) * 0x40000000;
    *(int *)(param_1 + 0x900) = iVar2;
    *(int *)(param_1 + 0x904) = iVar2;
    puVar4 = (uint *)func_0058A7D4();
    fVar6 = DAT_0026c854;
    uVar3 = func_00111A64(puVar4);
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = VectorFloatToUnsigned(ALBW_AS_F32(_DAT_0026c860) + fVar7 * DAT_0026c858 * fVar6 * DAT_0026c85c,3);
    *(int *)(param_1 + 0x8f4) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x8f8) = uVar8;
    }
    else {
      fVar7 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x8f8) = fVar6 / fVar7;
    }
    *(undefined4 *)(param_1 + 0x8f0) = 0;
  }
  uVar9 = func_0058AB74(param_1);
  if ((int)uVar9 == 2) {
    local_1c = s_HBSE_Peace_RUN_0026c862 + 2;
    local_20 = DAT_0026c874;
    func_001507D8(param_1,&local_20,0);
  }
  return;
}

