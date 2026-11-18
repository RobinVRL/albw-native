#include "ghidra_types.h"

extern int func_003C9278(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4);
extern int func_003C9764(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6);
extern int func_003C97C4(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_0056130C(int param_1);
extern undefined4 DAT_003c813c;
extern int DAT_003c8140;
extern undefined4 DAT_003c8144;

// USA 003C7EEC <- EU 003C7EC8 (Ghidra, non-matching)
// GLOBAL DAT_003c813c undefined4
// GLOBAL DAT_003c8140 int
// GLOBAL DAT_003c8144 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_70 */

int func_003C7EEC(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_70 ((uint *)(albw_frame + 0x0))
  #define local_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(int *)(albw_frame + 0x10))
  #define local_5c (*(int *)(albw_frame + 0x14))
  #define local_58 (*(int * *)(albw_frame + 0x18))
  #define local_54 (*(uint *)(albw_frame + 0x1c))
  #define local_50 (*(int *)(albw_frame + 0x20))
  #define iStack_4c (*(int *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 ** *)(albw_frame + 0x2c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(uint *)(albw_frame + 0x40))
  #define local_2c (*(uint *)(albw_frame + 0x44))
  #define local_28 (*(uint *)(albw_frame + 0x48))
  #define local_24 (*(int *)(albw_frame + 0x4c))
  #define puStack_20 (*(undefined4 * *)(albw_frame + 0x50))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x54))
  #define auStack_18 ((undefined1 *)(albw_frame + 0x58))
  iVar2 = DAT_003c8140;
  uVar1 = DAT_003c813c;
  objStack_70[0] = (uint)&local_44;
  local_64 = 0;
  local_68 = DAT_003c813c;
  local_48 = 1;
  uStack_40 = 1;
  local_24 = *(int *)(DAT_003c8140 + 0x10);
  objStack_70[1] = 1;
  local_44 = (undefined4 **)objStack_70[0];
  iVar3 = func_003C9764(&local_24,&local_50,3,1,objStack_70[0],1);
  if (iVar3 < 0) {
    local_68 = uVar1;
    if (local_60 != 0 || local_5c != 0) {
      local_54 = func_0056130C((int)&local_68);
      func_003C97C4(&local_54,extraout_r1,local_60,local_5c);
    }
  }
  else {
    local_64 = *(undefined4 *)(iVar2 + 0x10);
    local_60 = local_50;
    local_5c = iStack_4c;
    local_3c = 2;
    uStack_38 = DAT_003c8144;
    uStack_34 = 0;
    puStack_20 = &local_3c;
    local_24 = 2;
    uStack_1c = 0xc;
    iVar3 = func_003C9278((int)&local_68,&local_58,&local_24,1);
    if (iVar3 < 0) {
      local_68 = uVar1;
      if (local_60 != 0 || local_5c != 0) {
        local_30 = func_0056130C((int)&local_68);
        func_003C97C4(&local_30,extraout_r1_00,local_60,local_5c);
      }
    }
    else {
      objStack_70[1] = 0x36c0;
      objStack_70[0] = param_1;
      iVar3 = (**(code **)*local_58)(local_58,auStack_18,0,0);
      if (-1 < iVar3) {
        (**(code **)(*local_58 + 0x30))(local_58);
        iVar3 = local_5c;
        iVar2 = local_60;
        if (local_60 != 0 || local_5c != 0) {
          objStack_70[0] = func_0056130C((int)&local_68);
          func_003C97C4(objStack_70,extraout_r1_03,iVar2,iVar3);
          local_60 = 0;
          local_5c = 0;
        }
        iVar3 = local_5c;
        iVar2 = local_60;
        local_64 = 0;
        local_68 = uVar1;
        if (local_60 != 0 || local_5c != 0) {
          objStack_70[0] = func_0056130C((int)&local_68);
          func_003C97C4(objStack_70,extraout_r1_04,iVar2,iVar3);
        }
        return 0;
      }
      (**(code **)(*local_58 + 0x30))(local_58);
      if (local_60 != 0 || local_5c != 0) {
        local_2c = func_0056130C((int)&local_68);
        func_003C97C4(&local_2c,extraout_r1_01,local_60,local_5c);
        local_60 = 0;
        local_5c = 0;
      }
      local_64 = 0;
      local_68 = uVar1;
      if (local_5c != 0 || local_60 != 0) {
        local_28 = func_0056130C((int)&local_68);
        func_003C97C4(&local_28,extraout_r1_02,local_60,local_5c);
      }
    }
  }
  return iVar3;
}

