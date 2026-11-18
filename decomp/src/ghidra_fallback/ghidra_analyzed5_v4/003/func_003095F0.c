#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D8A88(float *param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern float *DAT_003096ac;
extern float DAT_003096b0;

// USA 003095F0 <- EU 003095CC (Ghidra, non-matching)
// GLOBAL DAT_003096ac float *
// GLOBAL DAT_003096b0 float

undefined4 func_003095F0(int param_1,float *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  float fparam_0;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  piVar1 = *(int **)(param_1 + 0x41c);
  local_24 = 7;
  *(undefined2 *)(piVar1 + 10) = 7;
  func_004D8A88((float *)(piVar1 + 0x19),*(uint *)(param_1 + 1000));
  local_30 = *DAT_003096ac;
  local_2c = DAT_003096ac[1];
  local_28 = DAT_003096ac[2];
  if (param_3 == 0) {
    local_30 = DAT_003096b0;
    local_2c = DAT_003096b0;
    local_28 = DAT_003096b0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 1000);
    fVar3 = DAT_003096b0;
    fparam_0 = func_0054DE3C(param_1,1,2);
    func_004D80A4(&local_30,uVar2,fparam_0);
    local_2c = fVar3;
  }
  fVar3 = func_0054DE3C(param_1,1,1);
  local_2c = fVar3 + local_2c;
  func_00115C54(&local_30,&local_30,param_2);
  piVar1[1] = (int)ALBW_AS_U32(local_30);
  piVar1[2] = (int)ALBW_AS_U32(local_2c);
  piVar1[3] = (int)ALBW_AS_U32(local_28);
  return func_004356B4(piVar1);
}

