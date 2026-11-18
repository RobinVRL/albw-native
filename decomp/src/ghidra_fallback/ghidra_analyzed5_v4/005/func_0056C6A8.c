#include "ghidra_types.h"

extern int func_0056A2BC(int param_1,uint param_2);
extern int func_0056A32C(int param_1);
extern int func_0056A338(uint *param_1);
extern int func_0056A35C(uint *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4);
extern int func_0056A448(uint *param_1);
extern int func_0056A480(uint *param_1);
extern int func_0056A4A8(uint *param_1);
extern int func_0056A4D0(uint *param_1);
extern int func_0056A4F8(uint *param_1);
extern float func_0056A51C(uint *param_1);
extern int func_0058FB74(undefined4 *param_1,undefined4 *param_2);
extern uint DAT_0056c73c;

// USA 0056C6A8 <- EU 0056C680 (Ghidra, non-matching)
// GLOBAL DAT_0056c73c uint

undefined4 func_0056C6A8(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  float fVar6;
  
  iVar2 = func_0056A2BC(param_1[1],param_3);
  puVar3 = (uint *)func_0056A32C(iVar2);
  fVar6 = func_0056A51C(puVar3);
  *param_2 = ALBW_AS_U32(fVar6);
  uVar4 = func_0056A4F8(puVar3);
  *(char *)((int)param_2 + 9) = (char)uVar4;
  iVar2 = func_0056A4D0(puVar3);
  *(char *)((int)param_2 + 10) = (char)iVar2;
  func_0056A35C(puVar3,(undefined1 *)((int)param_2 + 0xb),(undefined1 *)(param_2 + 3),2);
  puVar5 = (undefined4 *)func_0056A448(puVar3);
  func_0058FB74(param_2 + 1,puVar5);
  if (*(uint *)(*param_1 + 8) < DAT_0056c73c) {
    *(undefined1 *)((int)param_2 + 0xe) = 0x40;
    uVar1 = 0;
    *(undefined1 *)((int)param_2 + 0xf) = 0;
  }
  else {
    uVar4 = func_0056A338(puVar3);
    *(char *)((int)param_2 + 0xe) = (char)uVar4;
    uVar4 = func_0056A480(puVar3);
    *(char *)((int)param_2 + 0xf) = (char)uVar4;
    uVar4 = func_0056A4A8(puVar3);
    uVar1 = (undefined1)uVar4;
  }
  *(undefined1 *)(param_2 + 4) = uVar1;
  return 1;
}

