#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined DAT_001368dc;
extern int DAT_001368f0;
extern float DAT_001368f4;
extern float DAT_001368f8;
extern char s__SE_Curtain_CUT_001368df[];
extern undefined4 _DAT_001368dc;

// USA 001367EC <- EU 001367EC (Ghidra, non-matching)
// GLOBAL DAT_001368dc undefined
// GLOBAL DAT_001368f0 int
// GLOBAL DAT_001368f4 float
// GLOBAL DAT_001368f8 float

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_001367EC(int *param_1)

{
  float fVar1;
  uint *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_80 ((int *)(albw_frame + 0x0))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  puVar2 = (uint *)func_002C11E8(aiStack_80,2,1,0);
  func_0016898C(param_1[0x121],puVar2);
  fVar5 = ALBW_AS_F32(_DAT_001368dc);
  *(float *)(*(int *)(param_1[0x121] + 0x14) + 0x10) = ALBW_AS_F32(_DAT_001368dc);
  puVar2 = (uint *)func_002C11E8(aiStack_80,1,1,0);
  func_0016898C(param_1[0x122],puVar2);
  local_20 = DAT_001368f0;
  *(float *)(*(int *)(param_1[0x122] + 0x14) + 0x10) = fVar5;
  local_1c = s__SE_Curtain_CUT_001368df + 1;
  func_00150A84(param_1,&local_20,0);
  fVar1 = DAT_001368f8;
  pfVar3 = (float *)param_1[0x128];
  fVar4 = *(float *)(*(int *)(param_1[0x121] + 0x14) + 0x14) - DAT_001368f4;
  *pfVar3 = fVar5;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar5 / fVar4;
  pfVar3[4] = fVar5;
  pfVar3[3] = fVar1;
  return;
}

