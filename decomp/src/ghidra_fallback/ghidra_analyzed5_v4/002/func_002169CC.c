#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004F4A68();
extern int func_0068C690(float *param_1);
extern float DAT_00216ba4;
extern int DAT_00216ba8;
extern float DAT_00216bac;
extern undefined4 DAT_00216bb0;

// USA 002169CC <- EU 002169CC (Ghidra, non-matching)
// GLOBAL DAT_00216ba4 float
// GLOBAL DAT_00216ba8 int
// GLOBAL DAT_00216bac float
// GLOBAL DAT_00216bb0 undefined4

undefined4 func_002169CC(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  if ((*(char *)(param_1 + 0xb38) != '\0') || (*(char *)(param_1 + 0x8c0) != '\t'))
  goto LAB_00216b8c;
  fVar4 = *(float *)(param_2 + 8);
  if (fVar4 <= DAT_00216ba4) {
    fVar4 = -fVar4;
  }
  if ((DAT_00216ba8 <= (int)ALBW_AS_U32(fVar4)) || (*(char *)(param_1 + 0xb3c) == '\0')) goto LAB_00216b8c;
  local_40 = *(float *)(param_2 + 4);
  local_38 = *(float *)(param_2 + 0xc);
  pfVar3 = (float *)(param_1 + 0x9fc);
  local_3c = DAT_00216ba4;
  fVar4 = DAT_00216ba4;
  func_00115D70(&local_28,&local_40,
                (*pfVar3 * local_40 + *(float *)(param_1 + 0xa00) * DAT_00216ba4 +
                *(float *)(param_1 + 0xa04) * local_38) * DAT_00216bac);
  local_34 = local_28;
  uStack_30 = uStack_24;
  uStack_2c = uStack_20;
  func_00115C70(pfVar3,pfVar3,&local_34);
  func_00115DC8(pfVar3);
  iVar2 = func_0068C690(pfVar3);
  *(int *)(param_1 + 0xa64) = iVar2;
  *(undefined1 *)(param_1 + 0xb38) = 1;
  uVar1 = DAT_00216bb0;
  *(undefined4 *)(param_1 + 0xaa4) = 5;
  *(undefined4 *)(param_1 + 0xaa8) = uVar1;
  *(undefined4 *)(param_1 + 0xaa0) = 0;
  fVar5 = *(float *)(param_1 + 0xb40) - *(float *)(param_2 + 0x10);
  *(float *)(param_1 + 0xb40) = fVar5;
  fVar6 = *(float *)(param_1 + 0xb48) - *(float *)(param_2 + 0x18);
  *(float *)(param_1 + 0xb48) = fVar6;
  if (fVar4 <= fVar5) {
LAB_00216b08:
    if ((*(float *)(param_2 + 4) < fVar4) && (fVar4 < fVar5)) goto LAB_00216b24;
  }
  else {
    if (*(float *)(param_2 + 4) <= fVar4) goto LAB_00216b08;
LAB_00216b24:
    *(float *)(param_1 + 0xb40) = -fVar5;
  }
  if (fVar4 <= fVar6) {
LAB_00216b48:
    if ((*(float *)(param_2 + 0xc) < fVar4) && (fVar4 < fVar6)) goto LAB_00216b64;
  }
  else {
    if (*(float *)(param_2 + 0xc) <= fVar4) goto LAB_00216b48;
LAB_00216b64:
    *(float *)(param_1 + 0xb48) = -fVar6;
  }
  *(float *)(param_1 + 0xb40) = *(float *)(param_1 + 0xb40) + *(float *)(param_2 + 0x10);
  *(float *)(param_1 + 0xb48) = *(float *)(param_1 + 0xb48) + *(float *)(param_2 + 0x18);
LAB_00216b8c:
  return func_004F4A68(param_1,param_2);
}

