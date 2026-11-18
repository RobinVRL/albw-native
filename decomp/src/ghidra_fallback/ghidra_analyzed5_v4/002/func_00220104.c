#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_002201E4(int param_1,int param_2);
extern float DAT_002201e0;

// USA 00220104 <- EU 00220104 (Ghidra, non-matching)
// GLOBAL DAT_002201e0 float

undefined4 func_00220104(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  *(int *)(param_1 + 0xab0) = (int)*(short *)(param_1 + 0x508);
  uVar1 = func_002201E4(param_1,(int)*(char *)(param_1 + 0xafd));
  *(uint *)(param_1 + 0xa10) = uVar1;
  if (*(char *)(param_1 + 0xafd) == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 0xa04) + 0x28);
    if ((iVar3 == 0) || (*(uint *)(*(int *)(param_1 + 0xa04) + 0x20) <= uVar1)) goto LAB_0022017c;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa00);
    iVar3 = *(int *)(uVar2 + 0x28);
    if (iVar3 != 0) {
      uVar2 = *(uint *)(uVar2 + 0x20);
    }
    if (iVar3 == 0 || uVar2 <= uVar1) {
LAB_0022017c:
      iVar3 = 0;
      goto LAB_00220180;
    }
  }
  iVar3 = *(int *)(iVar3 + uVar1 * 4);
LAB_00220180:
  local_10 = *(undefined4 *)(iVar3 + 0x20);
  local_18 = *(float *)(iVar3 + 0x18);
  uVar4 = *(undefined4 *)(iVar3 + 0x1c);
  *(float *)(param_1 + 0xa14) = local_18;
  *(undefined4 *)(param_1 + 0xa18) = uVar4;
  *(undefined4 *)(param_1 + 0xa1c) = local_10;
  local_14 = *(undefined4 *)(param_1 + 0x3d4);
  func_00115C70((float *)(param_1 + 0xa20),&local_18,(float *)(param_1 + 0x3d0));
  func_00115DC8((float *)(param_1 + 0xa20));
  return func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0xa20),DAT_002201e0);
}

