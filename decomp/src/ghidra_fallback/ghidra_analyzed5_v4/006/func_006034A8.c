#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004BD280();
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern undefined4 DAT_0060352c;
extern int *DAT_00603530;
extern int DAT_00603534;
extern undefined4 *DAT_00603538;

// USA 006034A8 <- EU 00603480 (Ghidra, non-matching)
// GLOBAL DAT_0060352c undefined4
// GLOBAL DAT_00603530 int *
// GLOBAL DAT_00603534 int
// GLOBAL DAT_00603538 undefined4 *

int * func_006034A8(uint *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_r1;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_0060352c);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar6 = DAT_00603530;
    piVar3 = func_00339CC4(puVar2,param_1,5,DAT_00603530,0xff);
    iVar4 = DAT_00603534 + 0xb8;
    *piVar3 = DAT_00603534;
    piVar3[200] = iVar4;
    bVar1 = func_00588BF0((int)piVar3,0);
    if (!bVar1) {
      *(undefined1 *)((int)piVar3 + 0x855) = 4;
      uVar5 = 0;
      *(undefined1 *)((int)piVar3 + 0x853) = 4;
      func_004BD280((int)piVar3,4,0);
      func_00169A80((int *)piVar3[0x1eb],extraout_r1,uVar5,piVar6);
      func_00168E9C((int *)piVar3[0x1eb],piVar3[0x1e8],(int *)0x0);
      piVar3[0x22b] = piVar3[0x22b] | 0x410;
    }
    func_004C03B8((int)piVar3,DAT_00603538);
  }
  return piVar3;
}

