#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00229E24(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0022bc50;
extern uint *DAT_0022bc54;
extern undefined4 DAT_0022bc58;
extern undefined4 *DAT_0022bc5c;

// USA 0022BB78 <- EU 0022BB78 (Ghidra, non-matching)
// GLOBAL DAT_0022bc50 int *
// GLOBAL DAT_0022bc54 uint *
// GLOBAL DAT_0022bc58 undefined4
// GLOBAL DAT_0022bc5c undefined4 *

undefined4 func_0022BB78(int param_1)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  func_00229E24(param_1);
  uVar4 = DAT_0022bc58;
  puVar3 = DAT_0022bc54;
  piVar2 = DAT_0022bc50;
  uVar8 = 0;
  do {
    puVar5 = (uint *)(param_1 + 0x8c0);
    if (uVar8 < 0xf) {
      puVar5 = puVar5 + uVar8;
    }
    puVar6 = (undefined4 *)func_0052FBA0(*piVar2 + 0x3dbbc,*puVar5);
    if (puVar6 != (undefined4 *)0x0) {
      if (((*puVar3 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0022bc54), iVar7 != 0)) {
        *DAT_0022bc5c = uVar4;
      }
      iVar7 = (**(code **)*puVar6)(puVar6,DAT_0022bc5c);
      if (iVar7 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      if (puVar6 != (undefined4 *)0x0) {
        cVar1 = *(char *)(puVar6 + 0x230);
        if (cVar1 == '\x04' || cVar1 == '\x05') {
          return 0;
        }
        if (cVar1 == '\x03') {
          return 0;
        }
      }
    }
    uVar8 = uVar8 + 1;
    if (0xe < (int)uVar8) {
      return func_0065E8B8((undefined4 *)(param_1 + 0x8fc),0xb);
    }
  } while( true );
}

