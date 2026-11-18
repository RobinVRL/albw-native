#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001150B0(int param_1,undefined4 *param_2);
extern int func_00403F18(int *param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int func_0041F7CC(void);
extern int func_0041F7DC(void *param_1);
extern int func_005FFDC0(void);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern int DAT_0012ec00;

// USA 0012EA48 <- EU 0012EA48 (Ghidra, non-matching)
// GLOBAL DAT_0012ec00 int

void func_0012EA48(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define local_128 (*(uint *)(albw_frame + 0x8))
  #define local_124 (*(int *)(albw_frame + 0xc))
  #define local_120 (*(int *)(albw_frame + 0x10))
  #define auStack_11c ((undefined1 *)(albw_frame + 0x14))
  #define local_1c (*(int *)(albw_frame + 0x114))
  #define local_18 (*(uint * *)(albw_frame + 0x118))
  iVar2 = param_1 + 0x6b4;
  func_001150B0(iVar2,(undefined4 *)(param_1 + 0x179c));
  local_128 = 0;
  local_124 = 0;
  local_120 = 0;
  func_0010B3EC(&local_128,0x40,(int)auStack_11c);
  piVar3 = *(int **)(param_1 + 0xe18);
  piVar5 = piVar3 + *(int *)(param_1 + 0xe10);
  for (; piVar3 != piVar5; piVar3 = piVar3 + 1) {
    if (((*(uint *)(*piVar3 + 0x68) & 4) != 0) && ((int)local_128 < local_124)) {
      *(int *)(local_120 + local_128 * 4) = *piVar3;
      local_128 = local_128 + 1;
    }
  }
  if (local_128 != 0) {
    func_005FFDC0();
    func_006003D8(0x208,&local_1c);
    *(int *)(DAT_0012ec00 + param_1) = local_1c;
    func_006003D8(0x208,(int *)&local_18);
    uVar1 = *(int *)(param_1 + 0x1840) << 2;
    func_0010E3C4(local_18,*(uint **)(param_1 + 0x183c),uVar1);
    func_00601378(uVar1);
    uVar4 = func_0041F7CC();
    uVar4 = (**(code **)(*(int *)(param_1 + 0x20) + 0x20))(param_1 + 0x20,uVar4,iVar2,0);
    func_0041F7DC(uVar4);
    uVar1 = local_128;
    uVar6 = 0;
    if (0 < (int)local_128) {
      do {
        if (uVar6 < local_128) {
          piVar3 = *(int **)(local_120 + uVar6 * 4);
        }
        else {
          piVar3 = (int *)0x0;
        }
        if ((piVar3[6] & 2U) != 0) {
          (**(code **)(*piVar3 + 0x10))(piVar3,param_1 + 0x20,iVar2);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar1);
    }
    uVar4 = func_0041F7CC();
    uVar4 = func_00403F18((int *)(param_1 + 0x20),uVar4,iVar2,0);
    func_0041F7DC(uVar4);
    func_005FFDC0();
  }
  return;
}

