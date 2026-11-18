#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern float func_004FAD90(int param_1);
extern int func_00521078(int param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0021bd74;
extern float DAT_0021bd78;
extern int DAT_0021bd88;
extern char s_Disappear_0021bd7c[];
extern char s_SE_FireMoldworm_DISAPPEAR_0021bd8c[];
extern char s_SE_Moldworm_DISAPPEAR_0021bda8[];

// USA 0021BC40 <- EU 0021BC40 (Ghidra, non-matching)
// GLOBAL DAT_0021bd74 int *
// GLOBAL DAT_0021bd78 float
// GLOBAL DAT_0021bd88 int
// GLOBAL s_Disappear_0021bd7c string
// GLOBAL s_SE_FireMoldworm_DISAPPEAR_0021bd8c string
// GLOBAL s_SE_Moldworm_DISAPPEAR_0021bda8 string

void func_0021BC40(int *param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if ((param_1[0x167] & 0x30U) == 0) {
    return;
  }
  iVar4 = func_00588BE4((int)param_1);
  piVar2 = DAT_0021bd74;
  if (iVar4 == *DAT_0021bd74) {
    uVar1 = param_1[0x168] & 0x20;
  }
  else {
    uVar1 = param_1[0x168] & 0x4000;
  }
  if (uVar1 == 0) {
    if (DAT_0021bd78 <= ALBW_AS_F32(param_1[0xf8])) {
      return;
    }
    fVar6 = DAT_0021bd78;
    bVar3 = func_00521078((int)param_1);
    if (!bVar3) {
      return;
    }
    fVar5 = ALBW_AS_F32(param_1[3]) - ALBW_AS_F32(param_1[0xf5]);
    if (fVar5 <= fVar6) {
      fVar5 = -fVar5;
    }
    if (0x3f7fffff < (int)ALBW_AS_U32(fVar5)) {
      return;
    }
  }
  param_1[0x167] = param_1[0x167] & 0xffffffcf;
  if (param_1[0xd1] != 0) {
    func_004A1B9C(&local_20,param_1[0xd1],(uint *)s_Disappear_0021bd7c);
  }
  iVar4 = func_00588BE4((int)param_1);
  local_20 = DAT_0021bd88;
  if (iVar4 == *piVar2) {
    local_1c = s_SE_FireMoldworm_DISAPPEAR_0021bd8c;
    func_00150A84(param_1,&local_20,0);
  }
  else {
    local_1c = s_SE_Moldworm_DISAPPEAR_0021bda8;
    func_00150A84(param_1,&local_20,0);
  }
  func_004FAD90((int)param_1);
  param_1[0x167] = param_1[0x167] & 0xffffff7f;
  return;
}

