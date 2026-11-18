#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00232540(undefined4 *param_1);
extern int DAT_00428e40;
extern int DAT_00428e44;
extern undefined1 *DAT_00428e48;
extern undefined4 DAT_00428e4c;
extern int DAT_00428e50;
extern undefined4 DAT_00428e54;

// USA 00428DAC <- EU 00428D8C (Ghidra, non-matching)
// GLOBAL DAT_00428e40 int
// GLOBAL DAT_00428e44 int
// GLOBAL DAT_00428e48 undefined1 *
// GLOBAL DAT_00428e4c undefined4
// GLOBAL DAT_00428e50 int
// GLOBAL DAT_00428e54 undefined4

int * func_00428DAC(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  piVar3 = func_00232540(param_1);
  puVar2 = DAT_00428e48;
  *piVar3 = DAT_00428e40;
  iVar1 = DAT_00428e44;
  *(undefined2 *)(piVar3 + 8) = 0;
  *(undefined2 *)((int)piVar3 + 0x22) = 0xffff;
  piVar3[9] = iVar1;
  piVar3[10] = 0;
  *puVar2 = 1;
  iVar1 = DAT_00428e50;
  local_1c = DAT_00428e4c;
  local_20 = DAT_00428e50;
  (**(code **)(*piVar3 + 0x38))(piVar3,&local_20,0);
  piVar4 = (int *)piVar3[7];
  func_0016773C((int)piVar4,1);
  local_1c = DAT_00428e54;
  local_20 = iVar1;
  func_00166C20(piVar4,0,&local_20,0);
  piVar3[10] = (int)piVar4;
  *(undefined2 *)((int)piVar3 + 0x22) = 0;
  *(undefined2 *)(piVar3 + 8) = 0;
  *puVar2 = 0;
  return piVar3;
}

