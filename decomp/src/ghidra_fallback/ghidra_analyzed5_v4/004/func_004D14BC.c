#include "ghidra_types.h"

extern int func_00133D34(uint *param_1,int param_2,int param_3);
extern int func_0014E138(int param_1,int param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CF478(int param_1,int param_2);
extern int func_005821DC(int param_1,int param_2);
extern int func_006901E4(undefined4 *param_1,int param_2);
extern int *DAT_004d15bc;

// USA 004D14BC <- EU 004D1494 (Ghidra, non-matching)
// GLOBAL DAT_004d15bc int *

undefined4 func_004D14BC(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar5;
  int *piVar6;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x566);
  if (((uVar4 == 0) && (*(char *)(param_1 + 0x564) != '\0')) &&
     (uVar4 = 0, *(int *)(param_1 + 0x560) != 0)) {
    iVar2 = func_005821DC(*DAT_004d15bc,*(int *)(param_1 + 0x560));
    param_3 = 0;
    func_004CF478(*(int *)(param_1 + 0x530),iVar2);
    uVar4 = extraout_r1;
  }
  uVar5 = 0;
  cVar1 = *(char *)(*(int *)(param_1 + 0x530) + 0x30);
  if (0 < *(int *)(param_1 + 0x538)) {
    do {
      if (uVar5 < *(uint *)(param_1 + 0x538)) {
        uVar4 = *(uint *)(param_1 + 0x540);
        piVar6 = *(int **)(uVar4 + uVar5 * 4);
      }
      else {
        piVar6 = (int *)0x0;
      }
      func_00169A80(piVar6,uVar4,param_3,param_4);
      uVar4 = extraout_r1_00;
      if (cVar1 != '\0') {
        param_3 = 0;
        func_00168E9C(piVar6,*(int *)(param_1 + 0x530),(int *)0x0);
        uVar4 = extraout_r1_01;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(param_1 + 0x538));
  }
  if (cVar1 != '\0') {
    uVar4 = 0;
    if (0 < *(int *)(param_1 + 0x544)) {
      do {
        if (uVar4 < *(uint *)(param_1 + 0x544)) {
          puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x54c) + uVar4 * 4);
        }
        else {
          puVar3 = (undefined4 *)0x0;
        }
        func_006901E4(puVar3,*(int *)(param_1 + 0x530));
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < *(int *)(param_1 + 0x544));
    }
  }
  func_00133D34((uint *)(param_1 + 0x40c),param_1,*(int *)(param_1 + 0x530));
  return func_0014E138(param_1,param_2);
}

