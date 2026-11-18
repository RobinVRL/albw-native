#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_002FCC74(int *param_1,undefined2 param_2);
extern int func_0068C690(float *param_1);
extern float *DAT_0038e9fc;
extern float DAT_0038ea00;
extern float DAT_0038ea04;
extern uint *DAT_0038ea08;
extern float DAT_0038ea0c;

// USA 0038E900 <- EU 0038E8DC (Ghidra, non-matching)
// GLOBAL DAT_0038e9fc float *
// GLOBAL DAT_0038ea00 float
// GLOBAL DAT_0038ea04 float
// GLOBAL DAT_0038ea08 uint *
// GLOBAL DAT_0038ea0c float

undefined4 func_0038E900(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define fStack_40 (*(float *)(albw_frame + 0x10))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define fStack_38 (*(float *)(albw_frame + 0x18))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define fStack_1c (*(float *)(albw_frame + 0x34))
  pfVar3 = *(float **)(param_1 + 0x30);
  local_24 = *pfVar3;
  local_20 = pfVar3[1];
  fStack_1c = pfVar3[2];
  local_50 = *DAT_0038e9fc;
  local_4c = DAT_0038e9fc[1];
  local_48 = DAT_0038e9fc[2];
  local_44 = DAT_0038e9fc[3];
  fStack_40 = DAT_0038e9fc[4];
  fStack_3c = DAT_0038e9fc[5];
  fStack_38 = DAT_0038e9fc[6];
  fStack_34 = DAT_0038e9fc[7];
  local_28 = DAT_0038e9fc[10];
  local_30 = DAT_0038e9fc[8];
  fStack_2c = DAT_0038e9fc[9];
  local_48 = ALBW_AS_F32(func_0068C690((float *)(param_1 + 0x7c)));
  if (param_2 == 0) {
    if (param_3 == 0) {
      local_20 = local_20 + DAT_0038ea04;
      func_00115C54(&local_24,&local_24,(float *)(param_1 + 0x98));
      uVar2 = *DAT_0038ea08;
      iVar4 = *(int *)(uVar2 + 0x18);
      local_50 = (*(float **)(uVar2 + 0x10))[8];
      uVar5 = func_00114608((uint)ALBW_AS_U32((**(float **)(uVar2 + 0x10) * DAT_0038ea0c)),uVar2);
      local_4c = ALBW_AS_F32(uVar5);
      local_44 = *(float *)(iVar4 + 0xe4);
    }
  }
  else {
    local_20 = local_20 + DAT_0038ea00;
  }
  if ((param_3 & ~param_2) == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x2c) + 0x60);
    if (piVar1 != (int *)0x0) {
      return (**(code **)(*piVar1 + 0x34))(piVar1,&local_24,&local_50,0);
    }
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x2c) + 100);
    if (piVar1 != (int *)0x0) {
      func_002FCC74(piVar1,0x28);
    }
  }
  return 0;
}

