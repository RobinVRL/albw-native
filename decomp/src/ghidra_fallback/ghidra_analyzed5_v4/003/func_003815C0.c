#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00588BE4(int param_1);
extern int *DAT_00381664;
extern undefined4 DAT_00381668;

// USA 003815C0 <- EU 0038159C (Ghidra, non-matching)
// GLOBAL DAT_00381664 int *
// GLOBAL DAT_00381668 undefined4

void func_003815C0(int param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  if ((param_2 & 0xff) - 0x15 < 8) {
    func_004FABDC(param_1,0xc,0xffffffff,0);
  }
  uVar3 = param_2 & 0xff;
  bVar6 = 0x1d < uVar3;
  bVar5 = uVar3 != 0x1e;
  if (bVar5) {
    uVar3 = uVar3 - 0xe;
    bVar6 = 2 < uVar3;
  }
  if (((!bVar6 || (!bVar5 || uVar3 == 3)) && (*(char *)(param_1 + 0xb34) != '\0')) &&
     (iVar4 = func_00588BE4(param_1), uVar2 = DAT_00381668, iVar4 != *DAT_00381664)) {
    cVar1 = *(char *)(param_3 + 0x24);
    if ((cVar1 == '\x06' || cVar1 == '\x05') || (cVar1 == '\b' || cVar1 == '\x0e')) {
      if (*(uint *)(param_1 + 0xaf4) < *(uint *)(param_1 + 0xaf8)) {
        *(uint *)(param_1 + 0xaf4) = *(uint *)(param_1 + 0xaf4) + 1;
      }
      return;
    }
    *(undefined4 *)(param_1 + 0xaf8) = 4;
    *(undefined4 *)(param_1 + 0xafc) = uVar2;
    *(undefined4 *)(param_1 + 0xaf4) = 0;
  }
  return;
}

