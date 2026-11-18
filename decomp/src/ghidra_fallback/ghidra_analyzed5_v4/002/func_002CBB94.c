#include "ghidra_types.h"

extern int func_0037425C(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C081C(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6);
extern int func_004C17C0(int param_1);
extern int func_006538F0(undefined4 *param_1,uint *param_2,undefined1 param_3);
extern int DAT_002cbc9c;
extern undefined4 DAT_002cbca0;
extern int DAT_002cbca4;
extern undefined4 DAT_002cbca8;
extern undefined4 DAT_002cbcac;
extern undefined4 *DAT_002cbcb0;

// USA 002CBB94 <- EU 002CBB70 (Ghidra, non-matching)
// GLOBAL DAT_002cbc9c int
// GLOBAL DAT_002cbca0 undefined4
// GLOBAL DAT_002cbca4 int
// GLOBAL DAT_002cbca8 undefined4
// GLOBAL DAT_002cbcac undefined4
// GLOBAL DAT_002cbcb0 undefined4 *

int * func_002CBB94(undefined4 *param_1,uint *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = (int *)func_006538F0(param_1,param_2,1);
  piVar4[0x276] = 0;
  *(undefined2 *)(piVar4 + 0x277) = 0;
  *(undefined2 *)((int)piVar4 + 0x9de) = 0xffff;
  *(undefined2 *)(piVar4 + 0x278) = 0xffff;
  *(undefined2 *)((int)piVar4 + 0x9e2) = 0xffff;
  *(undefined2 *)(piVar4 + 0x279) = 0xffff;
  *(undefined1 *)((int)piVar4 + 0x9e6) = 0;
  iVar2 = DAT_002cbc9c;
  *(undefined1 *)((int)piVar4 + 0x9e7) = 0;
  *(undefined1 *)(piVar4 + 0x27a) = 0;
  *(undefined1 *)((int)piVar4 + 0x9e9) = 0;
  *(undefined1 *)((int)piVar4 + 0x9ea) = 0;
  piVar4[200] = iVar2 + 0xbc;
  *piVar4 = iVar2;
  sVar1 = *(short *)((int)piVar4 + 0x32);
  if ((sVar1 < 2) && (sVar1 != 0)) {
    if (sVar1 == 1) {
      func_004BE114(piVar4,2,0,0,DAT_002cbcac);
      func_004C17C0((int)piVar4);
    }
  }
  else {
    func_004C081C((int)piVar4,2,DAT_002cbca4,(int *)0x0,1,0);
    func_004BE114(piVar4,2,0,0,0);
  }
  func_0037425C((int)piVar4);
  puVar3 = DAT_002cbcb0;
  piVar4[0x22b] = piVar4[0x22b] | 0x410;
  func_004C03B8((int)piVar4,puVar3);
  return piVar4;
}

