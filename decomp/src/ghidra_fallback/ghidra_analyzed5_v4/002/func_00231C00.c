#include "ghidra_types.h"

extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_005FF2A8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5, int param_6,int param_7);
extern int func_005FF7F0(int param_1);
extern int func_006013F0(int param_1);
extern int func_00601600(undefined4 param_1);
extern int func_006017F0(void);
extern int DAT_00231cb8;

// USA 00231C00 <- EU 00231C00 (Ghidra, non-matching)
// GLOBAL DAT_00231cb8 int

void func_00231C00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(int **)(param_1 + 4));
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(int **)(param_1 + 4));
  func_003E35DC(uVar3,uVar2);
  iVar1 = DAT_00231cb8;
  iVar5 = 0;
  do {
    piVar6 = (int *)(param_1 + 0x70 + iVar5 * 8);
    func_005FF7F0(param_1 + 8);
    piVar4 = *(int **)(param_2 + iVar5 * 4);
    func_005FF2A8(param_1 + 8,piVar4[2],*(undefined4 *)(piVar6[1] + 8),*piVar4,*(int *)(*piVar6 + 4)
                  ,iVar1,8);
    func_006013F0(param_1 + 8);
    uVar2 = func_006017F0();
    func_00601600(uVar2);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return;
}

