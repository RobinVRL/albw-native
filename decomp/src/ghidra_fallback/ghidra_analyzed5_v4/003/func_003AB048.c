#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int DAT_003ab124;
extern int DAT_003ab128;
extern int DAT_003ab12c;
extern undefined *DAT_003ab130;

// USA 003AB048 <- EU 003AB024 (Ghidra, non-matching)
// GLOBAL DAT_003ab124 int
// GLOBAL DAT_003ab128 int
// GLOBAL DAT_003ab12c int
// GLOBAL DAT_003ab130 undefined *

int func_003AB048(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = func_00150E40(param_1,param_2);
  iVar1 = DAT_003ab128;
  iVar3 = DAT_003ab124;
  piVar2[200] = DAT_003ab128 + 0x54;
  *piVar2 = iVar1;
  piVar2[0x103] = iVar3;
  piVar2[0x104] = iVar3;
  piVar2[0x105] = iVar3;
  *(undefined2 *)(piVar2 + 0x106) = 5;
  *(undefined1 *)((int)piVar2 + 0x41a) = 1;
  piVar2[0x107] = 0;
  iVar3 = DAT_003ab12c;
  piVar2[0x109] = 0x1e;
  piVar2[0x108] = 0;
  piVar2[0x10a] = iVar3;
  *(undefined1 *)(piVar2 + 0x10b) = 0;
  piVar2[0x10c] = piVar2[0xb3];
  iVar3 = func_00100118((int)(piVar2 + 0x10d),DAT_003ab130,4,0x60);
  *(ushort *)(iVar3 + 0x180) = (ushort)(byte)param_2[0x16];
  *(undefined1 *)(iVar3 + 0x182) = 0;
  *(bool *)(iVar3 + 0x183) = *(short *)((int)param_2 + 0x2a) == 0;
  *(bool *)(iVar3 + 0x184) = (short)param_2[0xb] == 1;
  piVar2 = (int *)func_0014E428(iVar3 + -0x434,0,0,0,1,0,0);
  *(int **)(iVar3 + -0x18) = piVar2;
  (**(code **)(*piVar2 + 0x10))(piVar2,0x24);
  return iVar3 + -0x434;
}

