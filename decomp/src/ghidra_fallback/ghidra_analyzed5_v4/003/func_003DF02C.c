#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003D28DC(undefined2 param_1);
extern int func_003D29AC(undefined4 param_1,undefined4 param_2,int param_3);
extern int func_003D29F4(undefined4 param_1,undefined4 param_2,ushort param_3,undefined2 *param_4);
extern int func_003D2C58(undefined4 param_1,undefined4 *param_2);
extern undefined4 DAT_003df2b4;

// USA 003DF02C <- EU 003DF00C (Ghidra, non-matching)
// GLOBAL DAT_003df2b4 undefined4

void func_003DF02C(uint *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 ((uint * *)(albw_frame + 0x0))
  #define puStack_b0 (*(uint * *)(albw_frame + 0x10))
  #define local_ac (*(uint * *)(albw_frame + 0x14))
  #define puStack_a8 (*(uint * *)(albw_frame + 0x18))
  #define local_a4 (*(uint * *)(albw_frame + 0x1c))
  #define puStack_a0 (*(uint * *)(albw_frame + 0x20))
  #define puStack_9c (*(uint * *)(albw_frame + 0x24))
  #define local_98 (*(uint * *)(albw_frame + 0x28))
  #define puStack_94 (*(uint * *)(albw_frame + 0x2c))
  #define puStack_90 (*(uint * *)(albw_frame + 0x30))
  #define puStack_8c (*(uint * *)(albw_frame + 0x34))
  #define puStack_88 (*(uint * *)(albw_frame + 0x38))
  #define local_78 (*(uint *)(albw_frame + 0x48))
  #define local_74 (*(uint *)(albw_frame + 0x4c))
  #define local_6c ((ushort *)(albw_frame + 0x54))
  #define local_68 ((undefined2 *)(albw_frame + 0x58))
  #define local_60 ((ushort *)(albw_frame + 0x60))
  #define local_40 (*(int *)(albw_frame + 0x80))
  #define local_3c (*(int *)(albw_frame + 0x84))
  #define local_38 (*(int *)(albw_frame + 0x88))
  #define local_34 (*(int *)(albw_frame + 0x8c))
  #define local_30 (*(int *)(albw_frame + 0x90))
  #define local_2c (*(int *)(albw_frame + 0x94))
  #define auStack_28 ((undefined2 *)(albw_frame + 0x98))
  if ((char)param_1[0x4c6] == '\0') {
    if (param_2 == 0) {
      local_68[0] = 0;
    }
    else {
      local_68[0] = 2;
      func_001163A0((uint *)param_1[0x42a],param_1 + 6,0x1080);
      coproc_moveto_Data_Synchronization(0);
    }
    func_003D29AC(2,local_68,4);
    func_003D28DC(0x4000);
    func_0010C0C0((int *)(param_1 + 2));
    software_interrupt(0x24);
    if ((int)*param_1 < 0) {
      func_0010A98C(*param_1);
    }
    software_interrupt(0x19);
    if ((int)*param_1 < 0) {
      func_0010A98C(*param_1);
    }
    *(char *)((int)param_1 + 0x1319) = *(char *)((int)param_1 + 0x1319) + '\x01';
    func_0010C160((int *)(param_1 + 2));
    func_003D29F4(2,local_6c,2,auStack_28);
    func_003D29F4(2,local_60,(ushort)DAT_003df2b4 & local_6c[0] << 1,auStack_28);
    local_c0[0] = param_1 + 0x426;
    local_c0[1] = (uint *)&local_30;
    local_c0[2] = (uint *)&local_40;
    local_c0[3] = (uint *)&local_38;
    puStack_b0 = param_1 + 0x428;
    local_a4 = &local_78;
    puStack_a0 = param_1 + 0x4c2;
    puStack_9c = param_1 + 0x4c4;
    local_ac = param_1 + 0x42a;
    puStack_a8 = param_1 + 0x4c0;
    local_98 = param_1 + 0x561;
    puStack_94 = param_1 + 0x563;
    puStack_90 = param_1 + 0x565;
    puStack_8c = param_1 + 0x567;
    puStack_88 = param_1 + 0x569;
    iVar3 = 0;
    if (local_6c[0] != 0) {
      do {
        func_003D2C58((uint)local_60[iVar3],local_c0[iVar3]);
        func_003D2C58(local_60[iVar3] | 0x10000,local_c0[iVar3] + 1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)local_6c[0]);
    }
    param_1[0x4bc] = local_78;
    param_1[0x4bd] = local_78 + 0xa00;
    param_1[0x4be] = local_74;
    param_1[0x4bf] = local_74 + 0xa00;
    iVar3 = 0;
    do {
      param_1[iVar3 + 0x42c] = local_30 + iVar3 * 0xc0;
      param_1[iVar3 + 0x45c] = local_40 + iVar3 * 0xc;
      param_1[iVar3 + 0x48c] = local_38 + iVar3 * 0x20;
      param_1[iVar3 + 0x444] = local_2c + iVar3 * 0xc0;
      param_1[iVar3 + 0x474] = local_3c + iVar3 * 0xc;
      iVar2 = iVar3 + 1;
      param_1[iVar3 + 0x4a4] = local_34 + iVar3 * 0x20;
      iVar3 = iVar2;
    } while (iVar2 < 0x18);
    func_003D28DC(0x4000);
    *(undefined1 *)((int)param_1 + 0x1319) = 0;
    *(undefined2 *)((int)param_1 + 0x131a) = 4;
    *(undefined2 *)param_1[0x426] = 4;
    *(short *)((int)param_1 + 0x131a) = *(short *)((int)param_1 + 0x131a) + 1;
    software_interrupt(0x18);
    if ((int)param_1[1] < 0) {
      func_0010A98C(param_1[1]);
    }
    uVar1 = *(ushort *)((int)param_1 + 0x131a) & 1;
    *(ushort *)((int)param_1 + 0x131e) = uVar1;
    *(ushort *)(param_1 + 0x4c7) = uVar1;
    *(undefined1 *)(param_1 + 0x4c6) = 1;
  }
  return;
}

