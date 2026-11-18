#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001150B0(int param_1,undefined4 *param_2);
extern int func_0012D8DC(int param_1);
extern int func_00403F18(int *param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int func_0041F7CC(void);
extern int func_0041F7DC(void *param_1);
extern int func_005FFDC0(void);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern int DAT_0012dec4;

// USA 0012DCF4 <- EU 0012DCF4 (Ghidra, non-matching)
// GLOBAL DAT_0012dec4 int

void func_0012DCF4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint in_r12;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define local_128 (*(uint *)(albw_frame + 0x8))
  #define local_124 (*(uint *)(albw_frame + 0xc))
  #define local_120 (*(int *)(albw_frame + 0x10))
  #define auStack_11c ((undefined1 *)(albw_frame + 0x14))
  #define local_1c (*(int *)(albw_frame + 0x114))
  #define local_18 (*(uint * *)(albw_frame + 0x118))
  iVar1 = param_1 + 0x6b4;
  func_001150B0(iVar1,(undefined4 *)(param_1 + 0x171c));
  local_128 = 0;
  local_124 = 0;
  local_120 = 0;
  func_0010B3EC(&local_128,0x40,(int)auStack_11c);
  piVar4 = *(int **)(param_1 + 0xe18);
  piVar5 = piVar4 + *(int *)(param_1 + 0xe10);
  for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
    iVar2 = *piVar4;
    bVar8 = (*(uint *)(iVar2 + 0x68) & 8) != 0;
    uVar6 = 0;
    if (bVar8) {
      uVar6 = (uint)*(byte *)(iVar2 + 0xf);
    }
    uVar7 = uVar6;
    if (bVar8 && uVar6 != 0) {
      uVar7 = local_128;
      in_r12 = local_124;
    }
    if ((bVar8 && uVar6 != 0) && (int)uVar7 < (int)in_r12) {
      *(int *)(local_120 + local_128 * 4) = iVar2;
      in_r12 = local_128;
      local_128 = local_128 + 1;
    }
  }
  if (local_128 != 0) {
    func_0012D8DC(param_1);
    func_005FFDC0();
    func_006003D8(0x208,&local_1c);
    *(int *)(DAT_0012dec4 + param_1) = local_1c;
    func_006003D8(0x208,(int *)&local_18);
    uVar6 = *(int *)(param_1 + 0x1838) << 2;
    func_0010E3C4(local_18,*(uint **)(param_1 + 0x1834),uVar6);
    func_00601378(uVar6);
    uVar3 = func_0041F7CC();
    uVar3 = (**(code **)(*(int *)(param_1 + 0x20) + 0x20))(param_1 + 0x20,uVar3,iVar1,0);
    func_0041F7DC(uVar3);
    uVar6 = local_128;
    uVar7 = 0;
    if (0 < (int)local_128) {
      do {
        if (uVar7 < local_128) {
          piVar4 = *(int **)(local_120 + uVar7 * 4);
        }
        else {
          piVar4 = (int *)0x0;
        }
        if ((piVar4[6] & 2U) != 0) {
          (**(code **)(*piVar4 + 0x10))(piVar4,param_1 + 0x20,iVar1);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar6);
    }
    uVar3 = func_0041F7CC();
    uVar3 = func_00403F18((int *)(param_1 + 0x20),uVar3,iVar1,0);
    func_0041F7DC(uVar3);
    func_005FFDC0();
  }
  return;
}

