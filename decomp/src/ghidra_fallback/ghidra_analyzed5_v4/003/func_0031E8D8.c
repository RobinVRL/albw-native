#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_00537B48(int param_1);
extern int func_0053ED3C(int param_1);
extern int func_005811E8(int *param_1);
extern undefined4 DAT_0031e980;

// USA 0031E8D8 <- EU 0031E8B4 (Ghidra, non-matching)
// GLOBAL DAT_0031e980 undefined4

void func_0031E8D8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define afStack_70 ((float *)(albw_frame + 0x0))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_2c (*(float *)(albw_frame + 0x44))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x48))
  #define local_24 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x50))
  #define local_1c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(float *)(albw_frame + 0x58))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x5c))
  iVar1 = func_005811E8((int *)(param_1 + 0x19c));
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)func_0053ED3C(*(int *)(param_1 + 0x4c));
    func_001119F4(afStack_70,puVar2);
    local_40 = *(float *)(param_1 + 0x170) / *(float *)(param_1 + 0x164);
    uStack_3c = DAT_0031e980;
    local_38 = DAT_0031e980;
    local_30 = DAT_0031e980;
    uStack_28 = DAT_0031e980;
    local_20 = DAT_0031e980;
    local_1c = DAT_0031e980;
    local_34 = DAT_0031e980;
    local_24 = DAT_0031e980;
    uStack_14 = DAT_0031e980;
    local_2c = local_40;
    local_18 = local_40;
    func_001157FC(afStack_70,afStack_70,&local_40);
    iVar1 = *(int *)(param_1 + 0x19c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x1a0))) {
      func_004A2D1C(iVar1,afStack_70);
    }
    iVar1 = *(int *)(param_1 + 0x28);
    uVar3 = func_00537B48(iVar1 + 0x40c);
    func_003521F0(iVar1 + 0x324,uVar3);
  }
  return;
}

