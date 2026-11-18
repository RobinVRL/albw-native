#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0014FDC4(int param_1,float *param_2,int param_3,float fparam_0,float fparam_1);
extern int func_002ECA34(int param_1);
extern int func_002F4260(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_0053F480(int param_1);
extern int func_00548B78(int param_1,float *param_2,float fparam_0);
extern int func_00548E78(int param_1,undefined4 param_2,undefined4 param_3);
extern float func_0058A404(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int DAT_002f69d4;
extern float DAT_002f69d8;
extern float DAT_002f69dc;
extern float DAT_002f69e0;
extern float DAT_002f69e4;
extern float DAT_002f69e8;
extern float DAT_002f69ec;
extern float DAT_002f69f0;
extern float DAT_002f69f4;
extern float DAT_002f69f8;
extern float DAT_002f69fc;
extern int *DAT_002f6a00;
extern int DAT_002f6a04;
extern int *DAT_002f6a08;
extern int *DAT_002f6a0c;
extern undefined4 DAT_002f6a10;

// USA 002F6754 <- EU 002F6730 (Ghidra, non-matching)
// GLOBAL DAT_002f69d4 int
// GLOBAL DAT_002f69d8 float
// GLOBAL DAT_002f69dc float
// GLOBAL DAT_002f69e0 float
// GLOBAL DAT_002f69e4 float
// GLOBAL DAT_002f69e8 float
// GLOBAL DAT_002f69ec float
// GLOBAL DAT_002f69f0 float
// GLOBAL DAT_002f69f4 float
// GLOBAL DAT_002f69f8 float
// GLOBAL DAT_002f69fc float
// GLOBAL DAT_002f6a00 int *
// GLOBAL DAT_002f6a04 int
// GLOBAL DAT_002f6a08 int *
// GLOBAL DAT_002f6a0c int *
// GLOBAL DAT_002f6a10 undefined4

undefined4 func_002F6754(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  longlong lVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c ((int *)(albw_frame + 0x14))
  pfVar2 = (float *)func_00520FC0();
  local_38 = *pfVar2;
  fStack_34 = pfVar2[1];
  local_30 = pfVar2[2];
  fVar6 = DAT_002f69d8;
  func_0014FDC4(param_1,&local_38,DAT_002f69d4,*(float *)(param_1 + 0xb8c),DAT_002f69d8);
  fVar5 = *(float *)(param_1 + 0xb8c);
  *(float *)(param_1 + 0xb8c) = fVar5 + (DAT_002f69dc - fVar5) * fVar6;
  lVar7 = func_0058ACC8(param_1,DAT_002f69e0);
  if (((((int)lVar7 != 0) || (lVar7 = func_0058ACC8(param_1,DAT_002f69e4), (int)lVar7 != 0)) ||
      (lVar7 = func_0058ACC8(param_1,DAT_002f69e8), (int)lVar7 != 0)) ||
     (fVar6 = DAT_002f69ec, lVar7 = func_0058ACC8(param_1,DAT_002f69ec), (int)lVar7 != 0)) {
    fVar6 = *(float *)(param_1 + 0xb8c) * DAT_002f69f0;
    *(float *)(param_1 + 0xb8c) = fVar6;
  }
  if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
    *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
  }
  else {
    fVar5 = DAT_002f69f4;
    func_00520FC0();
    if (*(char *)(param_1 + 0xd45) == '\x01') {
      if (*(char *)(param_1 + 0xd48) == '\x02') {
        iVar3 = 0x11;
      }
      else {
        iVar3 = 0xe;
      }
      goto LAB_002f6848;
    }
    iVar3 = func_002F4260(param_1,3);
    if (iVar3 != 0x23) goto LAB_002f6848;
    iVar3 = func_00548E78(param_1,0x3c,0x19);
    if (iVar3 == 0) {
      fVar6 = DAT_002f69f8;
    }
    *(int *)(param_1 + 0xb10) = iVar3;
    if (iVar3 == 0) {
      *(float *)(param_1 + 0xb14) = fVar6;
    }
    else {
      fVar6 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xb14) = fVar5 / fVar6;
    }
    *(undefined4 *)(param_1 + 0xb0c) = 0;
  }
  if (*(char *)(param_1 + 0xd3d) == '\0') {
    pfVar2 = (float *)func_00520FC0();
    iVar3 = func_00548B78(param_1,pfVar2,DAT_002f69fc);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xb3c) < *(uint *)(param_1 + 0xb40)) {
      return 0;
    }
    if (*DAT_002f6a00 == 0) {
      return 0;
    }
    iVar3 = func_0053F480(*DAT_002f6a00);
    if (iVar3 == 0) {
      return 0;
    }
    fVar6 = func_0058A404(param_1);
    if (DAT_002f6a04 < (int)ALBW_AS_U32(fVar6)) {
      iVar3 = 0;
    }
    else if ((int)ALBW_AS_U32(fVar6) < 0x3f000001) {
      iVar3 = 2;
    }
    else {
      iVar3 = 1;
    }
    uVar4 = func_00111A64((uint *)(*DAT_002f6a08 + 0x660));
    uVar1 = DAT_002f6a10;
    local_2c[0] = *DAT_002f6a0c;
    local_2c[1] = DAT_002f6a0c[1];
    local_2c[2] = DAT_002f6a0c[2];
    if (local_2c[iVar3] <= (int)((ulonglong)uVar4 * 100 >> 0x20)) {
      *(undefined4 *)(param_1 + 0xb40) = 0xc;
      *(undefined4 *)(param_1 + 0xb44) = uVar1;
      *(undefined4 *)(param_1 + 0xb3c) = 0;
      return 0;
    }
    return func_006640EC((undefined4 *)(param_1 + 0x8c8),4,fVar6);
  }
  iVar3 = func_002ECA34(param_1);
LAB_002f6848:
  return func_006640EC((undefined4 *)(param_1 + 0x8c8),(char)iVar3,fVar6);
}

