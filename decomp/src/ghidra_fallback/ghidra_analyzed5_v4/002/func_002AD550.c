#include "ghidra_types.h"

extern int func_00352128(int param_1,int *param_2,uint *param_3);
extern int func_004FB024(int param_1);
extern float func_004FB2F0(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_005811E8(int *param_1);
extern float DAT_002ad628;
extern undefined4 DAT_002ad62c;
extern int DAT_002ad630;
extern char s_ReactStun_002ad61c[];

// USA 002AD550 <- EU 002AD52C (Ghidra, non-matching)
// GLOBAL DAT_002ad628 float
// GLOBAL DAT_002ad62c undefined4
// GLOBAL DAT_002ad630 int
// GLOBAL s_ReactStun_002ad61c string

void func_002AD550(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  iVar1 = func_005811E8((int *)(param_1 + 0x2a8));
  if (iVar1 == 0) {
    func_00352128(*(int *)(param_1 + 0x34) + 0x324,(int *)(param_1 + 0x2a8),
                  (uint *)s_ReactStun_002ad61c);
    uVar3 = DAT_002ad62c;
    fVar4 = DAT_002ad628;
    *(int *)(param_1 + 0x26c) = param_2;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x270) = uVar3;
    }
    else {
      in_s0 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x270) = fVar4 / in_s0;
    }
    *(undefined4 *)(param_1 + 0x268) = 0;
    *(undefined4 *)(param_1 + 0x274) = uVar3;
    *(undefined4 *)(param_1 + 0x278) = 0;
    *(undefined4 *)(param_1 + 0x27c) = 0;
    if (param_2 != 0) {
      iVar1 = (int)*(char *)(DAT_002ad630 + *(int *)(param_1 + 0x34));
      if (-1 < iVar1) {
        func_004FC07C(*(int *)(param_1 + 0x34),iVar1,0xffffffff,1);
      }
      func_004FB2F0(*(int *)(param_1 + 0x34),in_s0);
      func_004FB024(*(int *)(param_1 + 0x34));
    }
    if (param_3 != 0) {
      iVar1 = *(int *)(param_1 + 0x34);
      *(int *)(iVar1 + 0x740) = param_2;
      if (param_2 == 0) {
        *(undefined4 *)(iVar1 + 0x744) = uVar3;
      }
      else {
        fVar2 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(iVar1 + 0x744) = fVar4 / fVar2;
      }
      *(undefined4 *)(iVar1 + 0x73c) = 0;
    }
  }
  return;
}

