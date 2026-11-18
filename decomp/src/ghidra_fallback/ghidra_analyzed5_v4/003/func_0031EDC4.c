#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00352128(int param_1,int *param_2,uint *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_005811E8(int *param_1);
extern float DAT_0031ef8c;
extern undefined DAT_0031ef90;
extern float DAT_0031ef9c;
extern char s__RollCut_0031ef93[];
extern undefined4 _DAT_0031ef90;

// USA 0031EDC4 <- EU 0031EDA0 (Ghidra, non-matching)
// GLOBAL DAT_0031ef8c float
// GLOBAL DAT_0031ef90 undefined
// GLOBAL DAT_0031ef9c float

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0031EDC4(int param_1,float *param_2,undefined1 param_3,float fparam_0)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  if ((*(int *)(param_1 + 0x160) == 0) &&
     (*(undefined1 *)(param_1 + 0x158) = param_3, fVar4 = ALBW_AS_F32(_DAT_0031ef90), fVar2 = DAT_0031ef8c,
     DAT_0031ef8c < fparam_0)) {
    switch(*(undefined2 *)(*(int *)(param_1 + 0x2c) + 0x42)) {
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
      *(undefined4 *)(param_1 + 0x160) = 0x14;
      break;
    case 0x2e:
      *(undefined4 *)(param_1 + 0x160) = 0x14;
      iVar1 = func_005811E8((int *)(param_1 + 0x194));
      if (iVar1 == 0) {
        func_00352128(*(int *)(param_1 + 0x28) + 0x324,(int *)(param_1 + 0x194),
                      (uint *)(s__RollCut_0031ef93 + 1));
      }
      fparam_0 = fparam_0 * fVar4;
      break;
    case 0x2f:
      *(undefined4 *)(param_1 + 0x160) = 0x14;
      func_005811E8((int *)(param_1 + 0x194));
      fparam_0 = fparam_0 * fVar4;
    }
    if (param_2 == (float *)0x0) {
      fVar4 = DAT_0031ef9c;
      func_00115C70(&local_38,*(float **)(param_1 + 0x30),(float *)(param_1 + 0x7c));
      if (local_38 == fVar2 && local_30 == fVar2) {
        func_004D80A4(&local_2c,**(int **)(param_1 + 0x3c) + 0x80000000,fparam_0 * fVar4);
      }
      else {
        fVar3 = SQRT(local_38 * local_38 + fVar2 * fVar2 + local_30 * local_30);
        local_2c = local_38;
        local_24 = local_30;
        if (fVar2 < fVar3) {
          fVar3 = (fparam_0 * fVar4) / fVar3;
          local_2c = local_38 * fVar3;
          fVar2 = fVar2 * fVar3;
          local_24 = local_30 * fVar3;
        }
      }
      *(float *)(param_1 + 0x180) = local_2c;
      *(float *)(param_1 + 0x184) = fVar2;
      *(float *)(param_1 + 0x188) = local_24;
    }
    else {
      fVar2 = DAT_0031ef9c;
      func_00115C70(&local_2c,*(float **)(param_1 + 0x30),param_2);
      local_38 = local_2c;
      local_34 = local_28;
      local_30 = local_24;
      func_00115DC8(&local_38);
      func_00115D70(&local_38,&local_38,fparam_0 * fVar2);
      *(float *)(param_1 + 0x180) = local_38;
      *(undefined4 *)(param_1 + 0x184) = local_34;
      *(float *)(param_1 + 0x188) = local_30;
    }
    *(undefined1 *)(param_1 + 0x155) = 1;
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
    return 1;
  }
  return 0;
}

