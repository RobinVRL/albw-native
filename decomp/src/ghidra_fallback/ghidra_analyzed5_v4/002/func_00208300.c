#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0037E4D0(int param_1,undefined4 param_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern float func_0058AC38(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002084b4;
extern float DAT_002084b8;
extern undefined4 *DAT_002084bc;
extern int DAT_002084c0;

// USA 00208300 <- EU 00208300 (Ghidra, non-matching)
// GLOBAL DAT_002084b4 float
// GLOBAL DAT_002084b8 float
// GLOBAL DAT_002084bc undefined4 *
// GLOBAL DAT_002084c0 int

undefined4 func_00208300(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  fVar2 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),0,fVar2);
  func_00115C70(&local_38,(float *)(param_1 + 0xc88),(float *)(param_1 + 0x3d0));
  local_28 = local_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  iVar1 = func_0068C690(&local_28);
  fVar3 = func_0058AC38(param_1);
  fVar4 = func_0058AA40(param_1);
  fVar2 = DAT_002084b4;
  func_0051D39C((int *)(param_1 + 1000),iVar1,(int)((fVar3 - fVar4) - DAT_002084b4));
  if (*(char *)(param_1 + 0xd18) == '\0') {
    if (*(int *)(param_1 + 0xd08) == 0) {
      if (*(uint *)(param_1 + 0xa28) <= *(uint *)(param_1 + 0xa24)) {
        fVar3 = func_0058AC38(param_1);
        fVar3 = fVar3 * DAT_002084b8;
        *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(param_1 + 0xa18);
        *(undefined4 *)(param_1 + 0xa20) = *DAT_002084bc;
        iVar5 = (int)fVar3;
        iVar1 = iVar5;
        if (iVar5 == 0) {
          iVar1 = DAT_002084c0;
        }
        *(int *)(param_1 + 0xa28) = iVar5;
        if (iVar5 == 0) {
          *(int *)(param_1 + 0xa2c) = iVar1;
        }
        else {
          fVar3 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0xa2c) = fVar2 / fVar3;
        }
        *(undefined4 *)(param_1 + 0xa34) = 0;
        *(undefined4 *)(param_1 + 0xa24) = 0;
        *(undefined4 *)(param_1 + 0xd08) = 1;
      }
    }
    else if (((*(int *)(param_1 + 0xd08) == 1) &&
             (*(uint *)(param_1 + 0xa28) <= *(uint *)(param_1 + 0xa24))) &&
            (iVar1 = func_0058A8F0(param_1), iVar1 != 0)) {
      func_0065D630((undefined4 *)(param_1 + 0x8bc),0x23);
    }
    iVar1 = func_0068C690((float *)(param_1 + 0x3dc));
    return func_0037E4D0(param_1 + 0x9ac,iVar1 - *(int *)(param_1 + 1000));
  }
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),0x11);
  }
  return 0;
}

