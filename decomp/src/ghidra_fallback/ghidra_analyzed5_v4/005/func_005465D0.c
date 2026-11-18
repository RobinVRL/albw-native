#include "ghidra_types.h"

extern int func_00376DF8(int param_1,float *param_2,float *param_3);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern undefined4 DAT_0054665c;
extern float DAT_00546660;

// USA 005465D0 <- EU 005465A8 (Ghidra, non-matching)
// GLOBAL DAT_0054665c undefined4
// GLOBAL DAT_00546660 float

undefined4 func_005465D0(int param_1,int param_2,uint *param_3,float fparam_0,float fparam_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  uVar1 = DAT_0054665c;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2cc);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  pfVar3 = *(float **)(param_1 + 0x30);
  local_28 = *pfVar3;
  fStack_20 = pfVar3[2];
  local_24 = pfVar3[1] + DAT_00546660;
  local_1c = local_28;
  local_18 = local_24;
  local_14 = fStack_20;
  func_004D8054(&local_1c,*param_3,fparam_0);
  iVar2 = func_00376DF8(param_2,&local_28,&local_1c);
  if (iVar2 == 0) {
    local_28 = local_1c;
    local_24 = local_18;
    fStack_20 = local_14;
    local_18 = local_18 - fparam_1;
    iVar2 = func_00376DF8(param_2,&local_28,&local_1c);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

