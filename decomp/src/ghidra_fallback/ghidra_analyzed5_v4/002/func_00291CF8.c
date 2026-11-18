#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0053FD30(int param_1,int param_2);
extern float DAT_00291e44;

// USA 00291CF8 <- EU 00291D20 (Ghidra, non-matching)
// GLOBAL DAT_00291e44 float

void func_00291CF8(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  iVar1 = func_0053FD30(param_1,0);
  if (iVar1 != 0) {
    func_00115154(&local_30,&local_28,(uint)ALBW_AS_U32(param_2[6]));
    local_2c = DAT_00291e44;
    fVar3 = DAT_00291e44;
    func_00115C70(&fStack_24,param_2,(float *)(*(int *)(param_1 + 0x10) + 0x3d0));
    fVar2 = local_30 * fStack_24 + local_2c * fStack_20 + local_28 * fStack_1c;
    if (fVar2 <= fVar3) {
      fVar2 = -fVar2;
    }
    func_00115C70(&local_30,param_2,param_3);
    local_2c = fVar3;
    func_00115DC8(&local_30);
    *(undefined1 *)(param_1 + 0xd8) = 1;
    *(undefined1 *)(param_1 + 0xd9) = 1;
    *(float *)(param_1 + 0xdc) = *param_2;
    *(float *)(param_1 + 0xe0) = param_2[1];
    *(float *)(param_1 + 0xe4) = param_2[2];
    *(float *)(param_1 + 0xe8) = param_2[3];
    *(float *)(param_1 + 0xec) = param_2[4];
    *(float *)(param_1 + 0xf0) = param_2[5];
    *(float *)(param_1 + 0xf4) = param_2[6];
    *(undefined2 *)(param_1 + 0xf8) = *(undefined2 *)(param_2 + 7);
    *(undefined2 *)(param_1 + 0xfa) = *(undefined2 *)((int)param_2 + 0x1e);
    *(undefined2 *)(param_1 + 0xfc) = *(undefined2 *)(param_2 + 8);
    *(undefined2 *)(param_1 + 0xfe) = *(undefined2 *)((int)param_2 + 0x22);
    *(float *)(param_1 + 0x100) = param_2[9];
    *(float *)(param_1 + 0x104) = local_30;
    *(float *)(param_1 + 0x108) = local_2c;
    *(float *)(param_1 + 0x10c) = local_28;
    *(float *)(param_1 + 0x110) = fVar2;
  }
  return;
}

