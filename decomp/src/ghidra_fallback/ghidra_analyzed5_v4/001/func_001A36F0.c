// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00521184();
extern float func_00521298(int param_1);
extern int func_0065A474(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001a3794;
extern float DAT_001a3798;
extern float DAT_001a379c;

// USA 001A36F0 <- EU 001A36F0 (Ghidra, non-matching)
// GLOBAL DAT_001a3794 int *
// GLOBAL DAT_001a3798 float
// GLOBAL DAT_001a379c float

void func_001A36F0(int param_1)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(float *)(albw_frame + 0x0))
  #define local_c (*(float *)(albw_frame + 0x4))
  iVar1 = func_00521184(param_1);
  func_0051D27C((int *)(param_1 + 1000),iVar1,*DAT_001a3794);
  local_10 = DAT_001a3798;
  local_c = DAT_001a3798;
  func_00115154(&local_c,&local_10,*(uint *)(param_1 + 1000));
  fVar2 = DAT_001a379c;
  *(float *)(param_1 + 0x3dc) = local_c * DAT_001a379c;
  *(float *)(param_1 + 0x3e4) = local_10 * fVar2;
  if (*(uint *)(param_1 + 0x96c) < *(uint *)(param_1 + 0x970)) {
    *(uint *)(param_1 + 0x96c) = *(uint *)(param_1 + 0x96c) + 1;
  }
  else {
    fVar2 = func_00521298(param_1);
    if (0x3f7fffff < (int)ALBW_AS_U32(fVar2)) {
      func_0065A474((undefined4 *)(param_1 + 0x8bc),3);
    }
  }
  return;
}

