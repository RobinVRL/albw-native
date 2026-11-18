#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_002007a0;
extern int *DAT_002007a4;
extern int DAT_002007a8;
extern float DAT_002007ac;
extern float DAT_002007b0;
extern int *DAT_002007c8;
extern int *DAT_002007cc;
extern char s_SE_Bari_ELEC_002007d0[];
extern char s_SE_Biri_ELEC_002007e0[];
extern char s_SE_Gigabari_ELEC_002007b4[];

// USA 0020062C <- EU 0020062C (Ghidra, non-matching)
// GLOBAL DAT_002007a0 int *
// GLOBAL DAT_002007a4 int *
// GLOBAL DAT_002007a8 int
// GLOBAL DAT_002007ac float
// GLOBAL DAT_002007b0 float
// GLOBAL DAT_002007c8 int *
// GLOBAL DAT_002007cc int *
// GLOBAL s_SE_Bari_ELEC_002007d0 string
// GLOBAL s_SE_Biri_ELEC_002007e0 string
// GLOBAL s_SE_Gigabari_ELEC_002007b4 string

undefined4 func_0020062C(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  iVar3 = func_00588BE4(param_1);
  piVar1 = DAT_002007a0;
  if ((iVar3 == *DAT_002007a0) && (*(char *)(param_1 + 0x93c) == '\0')) {
    if (*DAT_002007a4 != 0) {
      func_00115C70(&local_1c,*(float **)(*DAT_002007a4 + 0x1c),(float *)(param_1 + 0x3d0));
      local_28 = local_1c;
      local_24 = (char *)uStack_18;
      uStack_20 = uStack_14;
      iVar3 = func_0068C690(&local_28);
      *(int *)(param_1 + 0x8d4) = iVar3;
    }
    func_0051D27C((int *)(param_1 + 0x8d8),*(int *)(param_1 + 0x8d4),DAT_002007a8);
    in_s0 = DAT_002007ac;
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x8d8),DAT_002007ac);
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x8d8);
  }
  if (*(uint *)(param_1 + 0x8c8) < *(uint *)(param_1 + 0x8cc)) {
    *(uint *)(param_1 + 0x8c8) = *(uint *)(param_1 + 0x8c8) + 1;
  }
  else {
    func_0065D120((undefined4 *)(param_1 + 0x8dc),5,in_s0);
  }
  iVar3 = func_00588BE4(param_1);
  fVar2 = DAT_002007b0;
  if (iVar3 != *piVar1) {
    iVar3 = func_00588BE4(param_1);
    if ((iVar3 != *DAT_002007c8) && (iVar3 = func_00588BE4(param_1), iVar3 != *DAT_002007cc)) {
      local_24 = s_SE_Biri_ELEC_002007e0;
      local_28 = fVar2;
      return func_001507D8(param_1,(int *)&local_28,0);
    }
    local_24 = s_SE_Bari_ELEC_002007d0;
    local_28 = fVar2;
    return func_001507D8(param_1,(int *)&local_28,0);
  }
  local_24 = s_SE_Gigabari_ELEC_002007b4;
  local_28 = DAT_002007b0;
  return func_001507D8(param_1,(int *)&local_28,0);
}

