#include "ghidra_types.h"

extern int func_0010A7BC(int *param_1);
extern int func_0010A884(int *param_1);
extern int func_0040D440(int *param_1);
extern int func_00412BB4(void);
extern int func_00412C8C(int *param_1,int param_2);
extern int func_004157F4(int param_1);
extern int DAT_0040eb7c;
extern int DAT_0040eb80;
extern int DAT_0040eb84;

// USA 0040EAE4 <- EU 0040EAC4 (Ghidra, non-matching)
// GLOBAL DAT_0040eb7c int
// GLOBAL DAT_0040eb80 int
// GLOBAL DAT_0040eb84 int

void func_0040EAE4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  piVar2 = (int *)func_00412BB4();
  iVar3 = func_0010A884((int *)(iVar1 + 4));
  if (iVar3 == 0) {
    func_00412C8C(piVar2,1);
    func_0010A7BC((int *)(iVar1 + 4));
  }
  func_0040D440(param_1);
  func_004157F4((int)(param_1 + 0x76b));
  iVar3 = DAT_0040eb84;
  iVar1 = DAT_0040eb80;
  *(undefined4 *)(DAT_0040eb7c + (int)param_1) = 0;
  iVar4 = 0;
  do {
    param_1[iVar4 * 4 + 0xa7d] = 0;
    param_1[iVar4 * 4 + 0xa7a] = iVar1;
    param_1[iVar4 * 4 + 0xa7b] = iVar1;
    iVar5 = iVar4 + 1;
    param_1[iVar4 * 4 + 0xa7c] = 1;
    param_1[iVar4 * 4 + 0xa7b] = iVar3;
    iVar4 = iVar5;
  } while (iVar5 < 4);
  *(undefined1 *)((int)param_1 + 0x2c2e) = 1;
  return;
}

