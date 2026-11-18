#include "ghidra_types.h"

extern int func_005FEF2C(int param_1,undefined4 param_2,int param_3);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FF5DC(uint param_1);
extern int func_005FF760(void);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601600(undefined4 param_1);
extern int func_006017F0(void);
extern undefined4 DAT_0049ae18;
extern int DAT_0049ae1c;
extern int DAT_0049ae20;

// USA 0049AD90 <- EU 0049AD68 (Ghidra, non-matching)
// GLOBAL DAT_0049ae18 undefined4
// GLOBAL DAT_0049ae1c int
// GLOBAL DAT_0049ae20 int

undefined4 func_0049AD90(int param_1,undefined4 param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar5;
  int in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  if (0 < *(int *)(param_1 + 0x14c)) {
    local_10 = in_r3;
    func_005FF418(*(uint *)(param_1 + (1 - *(int *)(param_1 + 0x148)) * 4 + 0x128),param_2,param_3);
    func_006003D8(DAT_0049ae18,&local_10);
    uVar2 = 0;
    if (local_10 != 0) {
      uVar2 = func_006017F0();
    }
    func_00601600(uVar2);
    func_005FF760();
    iVar3 = *(int *)(param_1 + 0x124) + 2;
    lVar1 = (longlong)DAT_0049ae1c * (longlong)iVar3;
    uVar5 = (uint)lVar1;
    iVar4 = (int)((ulonglong)lVar1 >> 0x20);
    iVar4 = (iVar4 - (iVar4 >> 0x1f)) * -3;
    func_005FEF2C(0x400,iVar4,uVar5);
    iVar4 = param_1 + (iVar4 + iVar3) * 4;
    func_005FF5DC(*(uint *)(iVar4 + 0x130));
    func_005FEF2C(0x410,extraout_r1,uVar5);
    func_005FF5DC(*(uint *)(iVar4 + 0x15c));
    func_005FEF2C(DAT_0049ae20,extraout_r1_00,uVar5);
    func_005FF5DC(*(uint *)(iVar4 + 0x13c));
    return func_005FF418(*(uint *)(param_1 + *(int *)(param_1 + 0x148) * 4 + 0x128),extraout_r1_01,uVar5);
  }
  return 0;
}

