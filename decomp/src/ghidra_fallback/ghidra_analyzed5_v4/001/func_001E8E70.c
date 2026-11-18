#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern uint DAT_001e9014;
extern undefined *DAT_001e9018;
extern int *DAT_001e901c;

// USA 001E8E70 <- EU 001E8E70 (Ghidra, non-matching)
// GLOBAL DAT_001e9014 uint
// GLOBAL DAT_001e9018 undefined *
// GLOBAL DAT_001e901c int *

undefined4 func_001E8E70(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = DAT_001e9014;
  puVar3 = (undefined4 *)func_0010BAB4(DAT_001e9014);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    func_00110490(puVar3,uVar1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0x100;
    puVar3[0xc] = 0;
    if (puVar3 + 0xd != (undefined4 *)0x0) {
      puVar3[0xc] = puVar3 + 0xd;
    }
    iVar4 = func_00100118((int)(puVar3 + 0xd),DAT_001e9018,0x148,0x100);
    puVar3 = (undefined4 *)(iVar4 + -0x34);
    *(undefined4 *)(iVar4 + 0x14800) = 0;
    *(undefined4 *)(iVar4 + 0x14804) = 0;
    *(undefined4 *)(iVar4 + 0x14808) = 0;
    *(undefined4 *)(iVar4 + 0x1480c) = 0;
    *(undefined4 *)(iVar4 + 0x14810) = 0;
    *(undefined4 *)(iVar4 + 0x14814) = 0;
    *(undefined4 *)(iVar4 + 0x14818) = 0;
    *(undefined4 *)(iVar4 + 0x1481c) = 0;
    *(undefined4 *)(iVar4 + 84000) = 0;
  }
  piVar2 = DAT_001e901c;
  *DAT_001e901c = (int)puVar3;
  iVar4 = func_0010CEE0(0x8400,(int *)0x0,4);
  if (iVar4 != 0) {
    iVar5 = 0;
    iVar6 = 0xff;
    puVar3[3] = iVar4;
    do {
      iVar6 = iVar6 + -1;
      *(int *)(iVar4 + iVar5 * 4) = iVar4 + (iVar5 + 0x20) * 4;
      iVar5 = iVar5 + 0x20;
    } while (iVar6 != 0);
    *(undefined4 *)(iVar4 + 0x7f80) = 0;
    puVar3[4] = iVar4;
    func_0010B3EC(puVar3,0x100,iVar4 + 0x8000);
  }
  iVar4 = *piVar2;
  iVar5 = func_0010CEE0(0x8400,(int *)0x0,4);
  if (iVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  iVar7 = 0xff;
  *(int *)(iVar4 + 0x20) = iVar5;
  do {
    iVar7 = iVar7 + -1;
    *(int *)(iVar5 + iVar6 * 4) = iVar5 + (iVar6 + 0x20) * 4;
    iVar6 = iVar6 + 0x20;
  } while (iVar7 != 0);
  *(undefined4 *)(iVar5 + 0x7f80) = 0;
  *(int *)(iVar4 + 0x24) = iVar5;
  return func_0010B3EC((undefined4 *)(iVar4 + 0x14),0x100,iVar5 + 0x8000);
}

