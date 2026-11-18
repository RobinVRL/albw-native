#include "ghidra_types.h"

extern int func_0023248C(int param_1,int *param_2,undefined4 param_3);
extern int func_0041F7CC(void);
extern int func_0041F7DC(void *param_1);
extern int func_00452194(int param_1);
extern int func_004A064C(undefined4 *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3);
extern int func_00580A88(int param_1);
extern int *DAT_00452ec0;

// USA 00452CB4 <- EU 00452C8C (Ghidra, non-matching)
// GLOBAL DAT_00452ec0 int *

undefined4 func_00452CB4(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  float fparam_0;
  float fparam_1;
  float in_s2;
  float in_s3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_38 ((undefined4 *)(albw_frame + 0x8))
  if (((*(int *)(param_1 + 0x1c) != 0) && ((*(uint *)(param_1 + 0x18) & 4) == 0)) &&
     ((*(uint *)(param_1 + 0x18) & 0x10) == 0)) {
    func_00452194(param_1);
    if (*(float *)(param_1 + 0x26c) <= *(float *)(param_1 + 0x274)) {
      fparam_0 = *(float *)(param_1 + 0x270);
      fparam_1 = *(float *)(param_1 + 0x278);
      if (fparam_0 <= fparam_1) {
        iVar1 = *(int *)(param_1 + 0xb0);
        if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x44) & 1) != 0)) {
          *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
        }
        iVar1 = *(int *)(param_1 + 0xb4);
        if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x44) & 1) != 0)) {
          *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
        }
        if (((*(int **)(param_1 + 0x1c))[4] == 0) &&
           (iVar1 = **(int **)(param_1 + 0x1c), iVar1 != 0)) {
          uVar2 = func_0041F7CC();
          uVar2 = (**(code **)(*param_2 + 0x24))(param_2,uVar2,iVar1,param_3);
          func_0041F7DC(uVar2);
        }
        func_004A064C(auStack_38,*DAT_00452ec0,fparam_0,fparam_1,in_s2,in_s3);
        func_00580A88(param_1 + 0x268);
        iVar1 = *(int *)(param_1 + 0xb0);
        iVar3 = *(int *)(param_1 + 0x1c);
        if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x44) & 1) == 0)) {
          *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
          *(byte *)(iVar3 + 0x70) = *(byte *)(iVar3 + 0x70) | 2;
        }
        iVar1 = *(int *)(param_1 + 0xb4);
        iVar3 = *(int *)(param_1 + 0x1c);
        if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x44) & 1) == 0)) {
          *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
          *(byte *)(iVar3 + 0x70) = *(byte *)(iVar3 + 0x70) | 2;
        }
        if (((*(int **)(param_1 + 0x1c))[4] == 0) &&
           (iVar1 = **(int **)(param_1 + 0x1c), iVar1 != 0)) {
          uVar2 = func_0041F7CC();
          uVar2 = (**(code **)(*param_2 + 0x24))(param_2,uVar2,iVar1,param_3);
          func_0041F7DC(uVar2);
        }
        return func_00580A88((int)auStack_38);
      }
    }
    func_0023248C(param_1,param_2,param_3);
    iVar3 = *(int *)(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x4c);
    while (piVar4 = (int *)(iVar1 - iVar3),
          piVar4 != (int *)((param_1 + 0x48) - *(int *)(param_1 + 0x54))) {
      if ((piVar4[6] & 2U) != 0) {
        (**(code **)(*piVar4 + 0x10))(piVar4,param_2,param_3);
      }
      iVar1 = *(int *)((int)piVar4 + iVar3 + 4);
    }
  }
  return 0;
}

