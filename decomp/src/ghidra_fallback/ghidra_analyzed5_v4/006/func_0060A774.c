#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004D2F20(int param_1);
extern int func_004EDC9C(undefined4 *param_1);
extern undefined4 DAT_0060a814;
extern undefined4 DAT_0060a824;
extern undefined *DAT_0060a828;
extern int DAT_0060a82c;
extern char s_MapActor_0060a818[];

// USA 0060A774 <- EU 0060A74C (Ghidra, non-matching)
// GLOBAL DAT_0060a814 undefined4
// GLOBAL DAT_0060a824 undefined4
// GLOBAL DAT_0060a828 undefined *
// GLOBAL DAT_0060a82c int
// GLOBAL s_MapActor_0060a818 string

int * func_0060A774(uint *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_0060a814);
  uVar1 = DAT_0060a824;
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00150E40(puVar2,param_1);
    piVar3[0x103] = 0;
    piVar3[0x104] = 10;
    piVar3[0x105] = 0;
    if (piVar3 + 0x106 != (int *)0x0) {
      piVar3[0x105] = (int)(piVar3 + 0x106);
    }
    iVar4 = func_00100118((int)(piVar3 + 0x106),DAT_0060a828,0x1c,10);
    piVar3 = (int *)(iVar4 + -0x418);
    iVar6 = DAT_0060a82c + 0x54;
    *piVar3 = DAT_0060a82c;
    *(int *)(iVar4 + -0xf8) = iVar6;
    *(undefined4 *)(iVar4 + 0x118) = 0;
    *(undefined4 *)(iVar4 + 0x11c) = 0;
    puVar5 = (undefined4 *)func_0010BAB4(0x48);
    puVar2 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar2 = func_004EDC9C(puVar5);
    }
    *(undefined4 **)(iVar4 + 0x120) = puVar2;
    *(undefined4 *)(iVar4 + 0x124) = uVar1;
    *(char **)(iVar4 + 0x128) = s_MapActor_0060a818;
    *(undefined4 *)(iVar4 + 300) = 0;
    *(undefined1 *)(iVar4 + 0x130) = 0;
    func_004D2F20((int)piVar3);
    *(bool *)(iVar4 + 0x130) = (char)param_1[0x16] != '\0';
  }
  return piVar3;
}

