#include "ghidra_types.h"

extern int func_0044D9D4(int param_1,float *param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0058791C(int param_1,int *param_2);
extern float DAT_0044e21c;
extern float DAT_0044e220;
extern float DAT_0044e224;
extern float DAT_0044e228;
extern undefined4 DAT_0044e22c;
extern undefined DAT_0044e230;
extern int DAT_0044e248;
extern int *DAT_0044e24c;
extern char s_ASE_S_MAP_PIN_DRUG_0044e233[];
extern char s_SE_S_MAP_PIN_RETURN_0044e250[];
extern undefined4 _DAT_0044e230;

// USA 0044E168 <- EU 0044E140 (Ghidra, non-matching)
// GLOBAL DAT_0044e21c float
// GLOBAL DAT_0044e220 float
// GLOBAL DAT_0044e224 float
// GLOBAL DAT_0044e228 float
// GLOBAL DAT_0044e22c undefined4
// GLOBAL DAT_0044e230 undefined
// GLOBAL DAT_0044e248 int
// GLOBAL DAT_0044e24c int *
// GLOBAL s_ASE_S_MAP_PIN_DRUG_0044e233 string
// GLOBAL s_SE_S_MAP_PIN_RETURN_0044e250 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0044E168(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  fVar1 = DAT_0044e228;
  fVar6 = DAT_0044e224;
  if (*(char *)(*(int *)(param_1 + 300) + 0x15c) == '\x02') {
    iVar3 = *(int *)(param_1 + 0x120);
    if (iVar3 != 0) {
      fVar6 = DAT_0044e220 - *(float *)(iVar3 + 0x20);
      *(float *)(param_1 + 0xe8) = DAT_0044e21c - *(float *)(iVar3 + 0x1c);
      *(float *)(param_1 + 0xec) = fVar6;
    }
  }
  else {
    fVar5 = DAT_0044e220 - DAT_0044e224;
    *(undefined4 *)(param_1 + 0xe8) = DAT_0044e22c;
    *(float *)(param_1 + 0xec) = fVar6 + fVar5 * fVar1;
  }
  func_0044D9D4(param_1,(float *)(param_1 + 0xe0));
  uVar2 = _DAT_0044e230;
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xe0);
  iVar3 = DAT_0044e248;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x104) = uVar2;
  local_1c = s_ASE_S_MAP_PIN_DRUG_0044e233 + 1;
  local_20 = iVar3;
  iVar4 = func_0058791C(*DAT_0044e24c,&local_20);
  if (iVar4 != 1) {
    local_14 = s_SE_S_MAP_PIN_RETURN_0044e250;
    local_18 = iVar3;
    func_00533078(param_1,&local_18,0);
  }
  return;
}

