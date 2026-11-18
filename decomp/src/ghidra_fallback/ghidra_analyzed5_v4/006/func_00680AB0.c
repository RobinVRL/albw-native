#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0045F2F8(undefined4 *param_1,uint param_2);
extern undefined4 *DAT_00680afc;
extern int DAT_00680b00;

// USA 00680AB0 <- EU 00680A88 (Ghidra, non-matching)
// GLOBAL DAT_00680afc undefined4 *
// GLOBAL DAT_00680b00 int

int * func_00680AB0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar1 = DAT_00680afc;
  if (param_1 == (int *)0x0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_00680afc,param_1);
  }
  puVar3 = (undefined4 *)func_0010CF28(0xf0,param_1,4);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_0045F2F8(puVar3,0);
    iVar2 = DAT_00680b00;
    piVar4[0xe] = DAT_00680b00 + 0xac;
    *piVar4 = iVar2;
  }
  if (iVar5 != 1) {
    func_0010983C(*puVar1,iVar5);
  }
  return piVar4;
}

