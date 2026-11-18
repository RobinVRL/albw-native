#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern int func_0042198C(int param_1,int param_2,int param_3);
extern int func_00421CC0(int param_1);
extern int func_00421D14(int param_1);
extern int func_00426294(uint param_1);
extern int func_00426D60(int param_1);
extern int func_0046D984(uint param_1,int *param_2,uint param_3,int param_4);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_0046d8e8;
extern int DAT_0046d8ec;

// USA 0046D808 <- EU 0046D7E0 (Ghidra, non-matching)
// GLOBAL DAT_0046d8e8 int *
// GLOBAL DAT_0046d8ec int

void func_0046D808(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  func_001B6C04(param_1);
  iVar1 = DAT_0046d8ec;
  iVar5 = 0;
  iVar6 = *DAT_0046d8e8;
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  do {
    iVar2 = func_0055696C(iVar6,*(int *)(iVar1 + iVar4 * 4));
    if (iVar2 == 2) {
      uVar3 = func_00426D60(*(int *)(iVar1 + iVar4 * 4));
      iVar2 = func_00426294(uVar3);
      if (iVar2 != 0) {
        *(int *)(param_1 + 200 + iVar5 * 8) = iVar2;
        iVar2 = iVar5 * 8;
        iVar5 = iVar5 + 1;
        *(undefined4 *)(param_1 + 200 + iVar2 + 4) = *(undefined4 *)(iVar1 + iVar4 * 4);
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 9);
  uVar3 = *(uint *)(param_1 + 0x110);
  func_0042198C(*(int *)(param_1 + 0xa8),uVar3,uVar3);
  func_00421CC0(*(int *)(param_1 + 0xa8));
  func_00421D14(*(int *)(param_1 + 0xa8));
  bVar7 = -1 < *(int *)(*(int *)(param_1 + 0xa8) + 0x2c);
  if (bVar7) {
    uVar3 = *(uint *)(*(int *)(param_1 + 0xa8) + 0x30);
  }
  if (!bVar7) {
    uVar3 = 0xffffffff;
  }
  func_0046D984(param_1,*(int **)(param_1 + 0xbc),uVar3,1);
  bVar7 = -1 < *(int *)(*(int *)(param_1 + 0xa8) + 0x2c);
  if (bVar7) {
    uVar3 = *(uint *)(*(int *)(param_1 + 0xa8) + 0x34);
  }
  if (!bVar7) {
    uVar3 = 0xffffffff;
  }
  func_0046D984(param_1,*(int **)(param_1 + 0xc0),uVar3,0);
  *(undefined4 *)(param_1 + 0x15c) = 0x2d;
  return;
}

