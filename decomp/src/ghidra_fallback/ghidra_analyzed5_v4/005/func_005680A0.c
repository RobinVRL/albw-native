#include "ghidra_types.h"

extern int func_003E1DC8(float *param_1,float *param_2,int param_3);
extern int func_0068FC18(float *param_1,float *param_2,float fparam_0);
extern int func_0068FD18(float *param_1,float *param_2,float fparam_0);

// USA 005680A0 <- EU 00568078 (Ghidra, non-matching)

void func_005680A0(int param_1,uint *param_2,float fparam_0)

{
  uint uVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((float *)(albw_frame + 0x0))
  lVar5 = (ulonglong)(uint)ALBW_AS_U32(fparam_0) << 0x20;
  pfVar2 = local_30;
  if ((*(uint *)(param_1 + 8) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 8) & 4) == 0) {
      func_0068FD18(*(float **)(param_1 + 0xc),(float *)(param_2 + 1),fparam_0);
    }
    else {
      puVar3 = *(uint **)(param_1 + 0xc);
      uVar1 = puVar3[1];
      uVar4 = puVar3[2];
      param_2[1] = *puVar3;
      param_2[2] = uVar1;
      param_2[3] = uVar4;
    }
    uVar1 = *param_2 & 0xfd7fffff;
    *param_2 = uVar1;
  }
  else {
    uVar1 = *param_2;
  }
  *param_2 = uVar1 & 0xf3ffffff;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 8) & 2) == 0) {
      func_0068FC18(*(float **)(param_1 + 0x10),local_30,ALBW_AS_F32(((ulonglong)lVar5 >> 0x20)));
    }
    else {
      pfVar2 = *(float **)(param_1 + 0x10);
    }
    if ((*(uint *)(param_1 + 8) & 8) == 0) {
      func_003E1DC8((float *)(param_2 + 4),pfVar2,1);
    }
    else {
      uVar1 = param_2[7];
      uVar4 = param_2[0xb];
      lVar5 = CONCAT44((int)((ulonglong)lVar5 >> 0x20),param_2[0xf]);
      func_003E1DC8((float *)(param_2 + 4),pfVar2,1);
      param_2[7] = uVar1;
      param_2[0xb] = uVar4;
      param_2[0xf] = (uint)lVar5;
    }
  }
  if ((*(uint *)(param_1 + 8) & 8) == 0) {
    pfVar2 = *(float **)(param_1 + 0x14);
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      func_0068FD18(*(float **)(param_1 + 0x14),local_30,ALBW_AS_F32(((ulonglong)lVar5 >> 0x20)));
      pfVar2 = local_30;
    }
    param_2[7] = (uint)ALBW_AS_U32(*pfVar2);
    param_2[0xb] = (uint)ALBW_AS_U32(pfVar2[1]);
    param_2[0xf] = (uint)ALBW_AS_U32(pfVar2[2]);
  }
  return;
}

