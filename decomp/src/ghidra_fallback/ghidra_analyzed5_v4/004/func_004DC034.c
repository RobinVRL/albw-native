#include "ghidra_types.h"

extern int func_00297298(int param_1,int param_2);
extern int func_004EB908(int param_1,int param_2,int param_3);
extern int func_00540A70(int param_1,int *param_2);
extern int DAT_004dc0e8;
extern float DAT_004dc0ec;
extern float DAT_004dc0f0;
extern undefined4 *DAT_004dc0f4;
extern undefined4 DAT_004dc0f8;
extern int *DAT_004dc0fc;

// USA 004DC034 <- EU 004DC00C (Ghidra, non-matching)
// GLOBAL DAT_004dc0e8 int
// GLOBAL DAT_004dc0ec float
// GLOBAL DAT_004dc0f0 float
// GLOBAL DAT_004dc0f4 undefined4 *
// GLOBAL DAT_004dc0f8 undefined4
// GLOBAL DAT_004dc0fc int *

void func_004DC034(int *param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
  iVar4 = DAT_004dc0e8;
  param_1[0x26a] = 0;
  param_1[0x20d] = iVar4;
  fVar1 = DAT_004dc0ec;
  param_1[0x26c] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + DAT_004dc0ec));
  fVar2 = DAT_004dc0f0;
  param_1[0x267] = param_1[0xf4];
  param_1[0x268] = param_1[0xf5];
  param_1[0x269] = param_1[0xf6];
  local_10 = DAT_004dc0f8;
  param_1[0x267] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x267]) + fVar2));
  param_1[0x269] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x269]) + fVar1));
  param_1[0x22b] = param_1[0x22b] | 2;
  *(undefined2 *)(param_1 + 0x213) = 0x28;
  piVar3 = DAT_004dc0fc;
  local_c = *DAT_004dc0f4;
  iVar4 = func_00540A70(*DAT_004dc0fc,&local_10);
  if (iVar4 != 0) {
    func_00297298(*piVar3,0x78);
    func_004EB908(*piVar3,0xb4,1);
  }
  return;
}

