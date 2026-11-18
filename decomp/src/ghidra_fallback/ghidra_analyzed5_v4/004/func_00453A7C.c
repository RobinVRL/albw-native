#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_003FDF90(int param_1,int param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00453b90;
extern int DAT_00453b94;
extern undefined4 DAT_00453b98;
extern int DAT_00453b9c;

// USA 00453A7C <- EU 00453A54 (Ghidra, non-matching)
// GLOBAL DAT_00453b90 int
// GLOBAL DAT_00453b94 int
// GLOBAL DAT_00453b98 undefined4
// GLOBAL DAT_00453b9c int

int * func_00453A7C(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  piVar1 = func_004B9A10(param_1,0);
  uVar3 = 0;
  iVar2 = DAT_00453b90 + 0x5c;
  *piVar1 = DAT_00453b90;
  piVar1[0xe] = iVar2;
  *(undefined2 *)(piVar1 + 0x1d) = 0;
  iVar2 = DAT_00453b94;
  *(undefined2 *)((int)piVar1 + 0x76) = 0xffff;
  piVar1[0x1e] = iVar2;
  piVar1[0x1f] = 0;
  piVar1[0x20] = 0;
  piVar1[0x21] = 0;
  piVar1[0x22] = 0;
  func_0010B3EC(piVar1 + 0x20,6,(int)(piVar1 + 0x23));
  piVar1[0x29] = 6;
  (**(code **)(*piVar1 + 0x38))(piVar1,DAT_00453b98,0);
  piVar6 = (int *)piVar1[7];
  func_0016773C((int)piVar6,6);
  iVar2 = DAT_00453b9c;
  iVar7 = DAT_00453b9c + -0x30;
  iVar8 = DAT_00453b9c + 0x30;
  do {
    piVar4 = (int *)(iVar2 + uVar3 * 8);
    iVar5 = *piVar6;
    (**(code **)(*piVar4 + 8))(piVar4);
    iVar5 = func_003FDF90(*(int *)(iVar5 + 0x14),piVar4[1]);
    func_00166C20(piVar6,uVar3,(int *)(iVar7 + uVar3 * 8),iVar5);
    iVar5 = func_005229AC(piVar6,(int *)(iVar8 + uVar3 * 8));
    piVar4 = piVar1 + 0x20;
    if (*piVar4 < piVar1[0x21]) {
      *(int *)(piVar1[0x22] + *piVar4 * 4) = iVar5;
      *piVar4 = *piVar4 + 1;
    }
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x44) & 1) != 0)) {
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 6);
  *(undefined1 *)((int)piVar1 + 0xf) = 0x40;
  func_004B9958((int)piVar1,2);
  return piVar1;
}

