#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern uint *DAT_0020044c;
extern int *DAT_00200450;
extern int DAT_00200454;
extern float DAT_00200458;

// USA 00200370 <- EU 00200370 (Ghidra, non-matching)
// GLOBAL DAT_0020044c uint *
// GLOBAL DAT_00200450 int *
// GLOBAL DAT_00200454 int
// GLOBAL DAT_00200458 float

void func_00200370(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  float in_s0;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  uVar1 = func_00588BE4(param_1);
  bVar4 = uVar1 == *DAT_0020044c;
  if (bVar4) {
    uVar1 = (uint)*(byte *)(param_1 + 0x93c);
  }
  if (bVar4 && uVar1 == 0) {
    if (*DAT_00200450 != 0) {
      func_00115C70(&local_1c,*(float **)(*DAT_00200450 + 0x1c),(float *)(param_1 + 0x3d0));
      local_28 = local_1c;
      uStack_24 = uStack_18;
      uStack_20 = uStack_14;
      iVar2 = func_0068C690(&local_28);
      *(int *)(param_1 + 0x8d4) = iVar2;
    }
    func_0051D27C((int *)(param_1 + 0x8d8),*(int *)(param_1 + 0x8d4),DAT_00200454);
    in_s0 = DAT_00200458;
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x8d8),DAT_00200458);
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x8d8);
  }
  uVar5 = func_0058AB74(param_1);
  if (((int)uVar5 != 3) || (iVar2 = func_0058A8F0(param_1), iVar2 != 0)) {
    uVar3 = 0;
    if (*(char *)(param_1 + 0x93c) != '\0') {
      uVar3 = 10;
    }
    func_0065D120((undefined4 *)(param_1 + 0x8dc),uVar3,in_s0);
  }
  return;
}

