#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014A998(int param_1,int param_2);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0050574C(undefined4 param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_00603248;
extern int DAT_0060324c;
extern int *DAT_00603250;
extern int DAT_00603254;

// USA 006031E8 <- EU 006031C0 (Ghidra, non-matching)
// GLOBAL DAT_00603248 undefined4
// GLOBAL DAT_0060324c int
// GLOBAL DAT_00603250 int *
// GLOBAL DAT_00603254 int

int * func_006031E8(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00603248);
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = func_00150E40(puVar1,param_1);
    iVar3 = DAT_0060324c + 0x54;
    *piVar4 = DAT_0060324c;
    piVar4[200] = iVar3;
    piVar4[0x103] = param_1[2];
    func_0014A998(*DAT_00603250,0);
    iVar3 = DAT_00603254 + 0x54;
    *piVar4 = DAT_00603254;
    piVar4[200] = iVar3;
    piVar2 = func_0050574C(piVar4,(int)param_1,0,0);
    piVar4[0x104] = (int)piVar2;
    piVar4[0x105] = (int)(short)param_1[10];
  }
  return piVar4;
}

