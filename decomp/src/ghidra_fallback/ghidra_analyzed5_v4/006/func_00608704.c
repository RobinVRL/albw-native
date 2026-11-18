#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004BD280();
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern undefined4 DAT_00608798;
extern int *DAT_0060879c;
extern int DAT_006087a0;
extern undefined4 *DAT_006087a4;

// USA 00608704 <- EU 006086DC (Ghidra, non-matching)
// GLOBAL DAT_00608798 undefined4
// GLOBAL DAT_0060879c int *
// GLOBAL DAT_006087a0 int
// GLOBAL DAT_006087a4 undefined4 *

int * func_00608704(uint *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  int *piVar6;
  
  puVar3 = (undefined4 *)func_0010BAB4(DAT_00608798);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar6 = DAT_0060879c;
    piVar4 = func_00339CC4(puVar3,param_1,6,DAT_0060879c,0xff);
    iVar1 = DAT_006087a0;
    piVar4[200] = DAT_006087a0 + 0xb8;
    piVar4[0x263] = 0;
    *piVar4 = iVar1;
    bVar2 = func_00588BF0((int)piVar4,0);
    if ((bVar2) && (bVar2 = func_00588BF0((int)piVar4,1), !bVar2)) {
      *(undefined1 *)((int)piVar4 + 0x853) = 4;
      *(undefined1 *)((int)piVar4 + 0x855) = 5;
      uVar5 = 0;
      func_004BD280((int)piVar4,4,0);
      func_00169A80((int *)piVar4[0x1eb],extraout_r1,uVar5,piVar6);
      func_00168E9C((int *)piVar4[0x1eb],piVar4[0x1e8],(int *)0x0);
    }
    func_004C03B8((int)piVar4,DAT_006087a4);
  }
  return piVar4;
}

