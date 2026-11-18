#include "ghidra_types.h"

extern int func_002ACD14(undefined4 *param_1,int param_2,int param_3);
extern int func_002B1470(undefined4 *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB0D8(int param_1,float *param_2);
extern float DAT_002aecf0;
extern float DAT_002aecf4;
extern float DAT_002aecf8;
extern float DAT_002aecfc;

// USA 002AEB10 <- EU 002AEAEC (Ghidra, non-matching)
// GLOBAL DAT_002aecf0 float
// GLOBAL DAT_002aecf4 float
// GLOBAL DAT_002aecf8 float
// GLOBAL DAT_002aecfc float

/* WARNING: Removing unreachable block (ram,0x002aeb90) */
/* WARNING: Removing unreachable block (ram,0x002aeb94) */
/* WARNING: Removing unreachable block (ram,0x002aeba4) */
/* WARNING: Removing unreachable block (ram,0x002aec30) */
/* WARNING: Removing unreachable block (ram,0x002aec34) */
/* WARNING: Removing unreachable block (ram,0x002aec44) */

undefined4 func_002AEB10(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = DAT_002aecf8;
  fVar7 = DAT_002aecf4;
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  fVar2 = DAT_002aecfc;
  fVar8 = DAT_002aecf0;
  fVar9 = ALBW_AS_F32(param_1[0x96]);
  pfVar3 = (float *)(param_1[0xd] + 0x3d0);
  fVar10 = *pfVar3;
  fVar5 = (fVar9 - fVar10) * fVar7;
  if (fVar5 <= DAT_002aecfc) {
    fVar5 = -fVar5;
  }
  fVar6 = DAT_002aecf0;
  if ((DAT_002aecf0 <= fVar5) && (fVar6 = fVar5, fVar1 < fVar5)) {
    fVar6 = fVar1;
  }
  fVar6 = fVar10 + fVar6;
  if ((fVar9 <= fVar6) || (fVar6 < fVar10)) {
    *pfVar3 = fVar9;
  }
  else {
    *pfVar3 = fVar6;
  }
  fVar9 = ALBW_AS_F32(param_1[0x98]);
  pfVar3 = (float *)(param_1[0xd] + 0x3d8);
  fVar5 = *pfVar3;
  fVar7 = (fVar9 - fVar5) * fVar7;
  if (fVar7 <= fVar2) {
    fVar7 = -fVar7;
  }
  if ((fVar8 <= fVar7) && (fVar8 = fVar7, fVar1 < fVar7)) {
    fVar8 = fVar1;
  }
  fVar8 = fVar5 + fVar8;
  if ((fVar9 <= fVar8) || (fVar8 < fVar5)) {
    *pfVar3 = fVar9;
  }
  else {
    *pfVar3 = fVar8;
  }
  if ((*(char *)((int)param_1 + 0x266) == '\0') && ((*(uint *)(param_1[0xd] + 0x5a0) & 0x200) == 0))
  {
    *(undefined1 *)((int)param_1 + 0x266) = 1;
    if (-1 < *(char *)((int)param_1 + 0x265)) {
      func_004FABDC(param_1[0xd],(int)*(char *)((int)param_1 + 0x265),0xffffffff,0);
    }
    iVar4 = func_002B1470(param_1);
    if (iVar4 != 0) {
      return 0;
    }
  }
  fVar8 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x10),1,fVar8);
  func_004FB0D8(param_1[0xd],(float *)(param_1 + 0x10));
  if ((uint)param_1[10] < (uint)param_1[0xb]) {
    param_1[10] = param_1[10] + 1;
  }
  return func_002ACD14(param_1,0,0);
}

