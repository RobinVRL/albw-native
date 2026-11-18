#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002FD11C(int *param_1,int param_2);
extern int func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_004BC61C(int *param_1);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int *DAT_00244b0c;
extern uint DAT_00244b10;
extern int *DAT_00244b14;
extern uint *DAT_00244b18;
extern undefined4 *DAT_00244b1c;
extern undefined4 DAT_00244b20;

// USA 00244A04 <- EU 00244A04 (Ghidra, non-matching)
// GLOBAL DAT_00244b0c int *
// GLOBAL DAT_00244b10 uint
// GLOBAL DAT_00244b14 int *
// GLOBAL DAT_00244b18 uint *
// GLOBAL DAT_00244b1c undefined4 *
// GLOBAL DAT_00244b20 undefined4

void func_00244A04(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)((int)param_1 + 0x2d7) == '\0') {
    func_004BC61C(param_1);
    piVar3 = DAT_00244b0c;
    bVar1 = func_005822A0(*DAT_00244b0c,0xfb,4);
    if ((bVar1) && (bVar1 = func_005822A0(*piVar3,DAT_00244b10,4), !bVar1)) {
      piVar3 = *(int **)(*DAT_00244b14 + 0x44);
      if (((*DAT_00244b18 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00244b18), iVar2 != 0)) {
        *DAT_00244b1c = DAT_00244b20;
      }
      if ((piVar3 == (int *)0x0) ||
         (iVar2 = (**(code **)(*piVar3 + 8))(piVar3,DAT_00244b1c), iVar2 == 0)) {
        piVar3 = (int *)0x0;
      }
      if ((piVar3 != (int *)0x0) && ((char)piVar3[0x1f] == '\0')) {
        func_002FD11C(piVar3,1);
        func_0036720C((int)(param_1 + 0x263),1,0x1e,0x3c,0,3,1);
      }
    }
  }
  return;
}

