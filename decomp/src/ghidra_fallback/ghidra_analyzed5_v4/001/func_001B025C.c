#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001B0744(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_002F8E54(int param_1);
extern int func_002F928C(int param_1,int *param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0065AF54(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_001b0394;
extern int DAT_001b0398;
extern float DAT_001b039c;
extern uint DAT_001b03a0;

// USA 001B025C <- EU 001B025C (Ghidra, non-matching)
// GLOBAL DAT_001b0394 int
// GLOBAL DAT_001b0398 int
// GLOBAL DAT_001b039c float
// GLOBAL DAT_001b03a0 uint

undefined4 func_001B025C(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  #define local_1c (*(int *)(albw_frame + 0x14))
  #define local_18 ((int *)(albw_frame + 0x18))
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(afStack_28,pfVar1,(float *)(param_1 + 0x3d0));
  iVar2 = func_0068C690(afStack_28);
  iVar5 = DAT_001b0394;
  func_0051D2F4((int *)(param_1 + 1000),iVar2,DAT_001b0398,DAT_001b0394,DAT_001b039c);
  iVar2 = *(int *)(param_1 + 1000);
  *(int *)(param_1 + 0x8dc) = iVar2;
  local_1c = iVar2 - *(int *)(param_1 + 0xa2c);
  uVar3 = func_0058E2B8(&local_1c);
  puVar6 = (undefined4 *)(param_1 + 0x90c);
  if ((uVar3 < 0x40000000) || (iVar4 = func_002F8E54(param_1), iVar4 != 0)) {
    func_0065AF54(puVar6,9);
  }
  else {
    iVar4 = func_002F928C(param_1,(int *)0x0);
    if (iVar4 == 1) {
      return func_001B0744(param_1,extraout_r1,iVar2,iVar5);
    }
    if (iVar4 == 2) {
      return func_0065AF54(puVar6,2);
    }
    if ((*(uint *)(param_1 + 0x39c) & 0x78) == 0) {
      *(undefined4 *)(param_1 + 0xa1c) = 0;
    }
    else {
      iVar5 = func_0068C690((float *)(param_1 + 0x960));
      local_18[0] = func_0068C690((float *)(param_1 + 0x3dc));
      local_18[0] = local_18[0] - iVar5;
      uVar3 = func_0058E2B8(local_18);
      if (DAT_001b03a0 < uVar3) {
        return func_0065AF54(puVar6,10);
      }
    }
  }
  return 0;
}

