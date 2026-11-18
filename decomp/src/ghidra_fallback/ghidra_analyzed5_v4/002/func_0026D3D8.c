#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_00655D90(int *param_1);

// USA 0026D3D8 <- EU 0026D400 (Ghidra, non-matching)

undefined4 func_0026D3D8(int *param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  uint in_r2;
  int *in_r3;
  float *pfVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define auStack_40 ((undefined4 *)(albw_frame + 0x10))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_14 (*(undefined4 *)(albw_frame + 0x3c))
  pfVar3 = &local_50;
  func_00655D90(param_1);
  uVar2 = extraout_r1;
  if ((char)param_1[0x23d] != '\n') {
    func_001119F4(auStack_40,
                  (undefined4 *)
                  (*(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + param_1[0x24a] * 0x30));
    local_50 = local_34;
    local_4c = local_24;
    local_48 = local_14;
    iVar1 = param_1[0x247];
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    in_r2 = param_1[0xfa];
    func_004D7EB0((float *)(iVar1 + 0x80),0x80000000,in_r2,&local_50);
    uVar2 = extraout_r1_00;
    in_r3 = (int *)pfVar3;
  }
  func_00169A80((int *)param_1[0x249],uVar2,in_r2,in_r3);
  func_00168E9C((int *)param_1[0x249],param_1[0x247],(int *)0x0);
  return func_004CEAF0(param_1[0x247]);
}

