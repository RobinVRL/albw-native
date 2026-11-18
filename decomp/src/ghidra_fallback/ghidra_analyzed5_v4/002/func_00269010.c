#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001882B0(int param_1,undefined4 param_2,float fparam_0);
extern int func_004F7E8C();
extern int func_004F81F0(int param_1);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053A440(int param_1,float *param_2,uint *param_3,int param_4,float *param_5);
extern int func_00588BE4(int param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_00269124;
extern int *DAT_00269128;
extern float DAT_0026912c;

// USA 00269010 <- EU 00269038 (Ghidra, non-matching)
// GLOBAL DAT_00269124 int *
// GLOBAL DAT_00269128 int *
// GLOBAL DAT_0026912c float

undefined4 func_00269010(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define afStack_28 ((float *)(albw_frame + 0x18))
  #define local_1c (*(float *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  if (*(char *)(param_1 + 0x4b5) == '\0') {
    iVar2 = *(int *)(param_1 + 0x430);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x434);
  }
  uVar1 = func_004F81F0(iVar2);
  if ((((uVar1 == 7) && (*(int *)(param_2 + 0x2c) != 0)) &&
      (func_0053A440(param_1,afStack_28,(uint *)(param_2 + 0x28),0xf,(float *)(param_2 + 0x10)),
      *(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x0f')) &&
     ((iVar2 = func_0052FBA0(*DAT_00269124 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar2 != 0 &&
      (iVar3 = func_00588BE4(iVar2), iVar3 == *DAT_00269128)))) {
    pfVar4 = (float *)func_00520FC0();
    func_00115C70(&local_1c,pfVar4,(float *)(param_1 + 0x3d0));
    local_34 = local_1c;
    uStack_30 = uStack_18;
    uStack_2c = uStack_14;
    iVar3 = func_0068C690(&local_34);
    func_001882B0(iVar2,iVar3,DAT_0026912c);
  }
  return func_004F7E8C(param_1,param_2);
}

