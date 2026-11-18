#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_001988CC(uint param_1);
extern int func_004356B4(int *param_1);
extern int func_00659CDC(undefined4 *param_1,undefined1 param_2);
extern float DAT_001987f8;
extern undefined DAT_001987fc;
extern int DAT_00198810;
extern char s__SE_ZoraFire_FLY_001987ff[];
extern undefined4 _DAT_001987fc;

// USA 00198730 <- EU 00198730 (Ghidra, non-matching)
// GLOBAL DAT_001987f8 float
// GLOBAL DAT_001987fc undefined
// GLOBAL DAT_00198810 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00198730(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x468));
  fVar4 = *(float *)(param_1 + 0x478);
  if (*(float *)(param_1 + 0x3d4) < fVar4) {
    fVar3 = *(float *)(param_1 + 0x3d4) + DAT_001987f8;
    if (fVar4 < fVar3) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x3d4) = fVar3;
  }
  func_001988CC(param_1);
  fVar4 = ALBW_AS_F32(_DAT_001987fc);
  iVar1 = *(int *)(param_1 + 0x448);
  fVar3 = *(float *)(param_1 + 0x3d4);
  uVar2 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar3 - *(float *)(iVar1 + 0x5c) * fVar4;
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  func_004356B4(*(int **)(param_1 + 0x448));
  if (0xf0 < *(int *)(param_1 + 0x420)) {
    func_00659CDC((undefined4 *)(param_1 + 0x420),1);
  }
  local_c = s__SE_ZoraFire_FLY_001987ff + 1;
  local_10 = DAT_00198810;
  return func_001507D8(param_1,&local_10,0);
}

