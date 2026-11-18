#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_003FF260(undefined4 *param_1);
extern int func_0048FB4C(undefined4 *param_1);
extern uint DAT_00689398;
extern undefined4 DAT_0068939c;
extern undefined4 DAT_006893a0;
extern undefined4 DAT_006893a4;
extern undefined4 DAT_006893a8;
extern undefined4 DAT_006893ac;

// USA 006892D0 <- EU 006892A8 (Ghidra, non-matching)
// GLOBAL DAT_00689398 uint
// GLOBAL DAT_0068939c undefined4
// GLOBAL DAT_006893a0 undefined4
// GLOBAL DAT_006893a4 undefined4
// GLOBAL DAT_006893a8 undefined4
// GLOBAL DAT_006893ac undefined4

undefined4 * func_006892D0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = DAT_00689398;
  puVar3 = (undefined4 *)func_0010CF28(DAT_00689398,param_2,param_3);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    func_00110490(puVar3,uVar1);
    puVar4 = func_0048FB4C(puVar3);
    puVar4[10] = puVar4 + 0xc;
    puVar4[0xb] = 0x80;
    *(undefined1 *)(puVar4[10] + 0x7f) = 0;
    uVar2 = DAT_006893a4;
    *(undefined1 *)puVar4[10] = 0;
    puVar4[9] = uVar2;
    *(undefined1 *)(puVar4 + 0x2c) = 7;
    *(undefined1 *)((int)puVar4 + 0xb1) = 0xff;
    *puVar4 = DAT_006893a8;
    puVar4 = func_003FF260(puVar4 + 0x2d);
    *puVar4 = DAT_006893ac;
    puVar3 = puVar4 + 0x24;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    puVar4[0x22] = 0;
    puVar4[0x23] = 0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar4[0x20] = puVar3;
      iVar6 = 0x17f;
      iVar5 = 0;
      puVar4[0x23] = 0x180;
      do {
        iVar6 = iVar6 + -1;
        puVar3[iVar5] = puVar3 + iVar5 + 0x19;
        iVar5 = iVar5 + 0x19;
      } while (iVar6 != 0);
      puVar4[0x258b] = 0;
      puVar4[0x21] = puVar3;
    }
    puVar4 = puVar4 + -0x2d;
  }
  return puVar4;
}

