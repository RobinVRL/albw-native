#include "ghidra_types.h"

extern int func_00160430(int param_1,undefined1 param_2);
extern int func_00160484(undefined4 *param_1);
extern int func_00161178(undefined4 *param_1);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);

// USA 0015D5B0 <- EU 0015D5B4 (Ghidra, non-matching)

undefined4 func_0015D5B0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = (uint)*(short *)((int)param_1 + 0x2e);
  uVar1 = uVar4 & 0xff;
  if ((uVar1 < 4) && (1 < uVar1)) {
    iVar2 = uVar1 - 2;
  }
  else {
    iVar2 = -1;
  }
  if (((iVar2 < 0) && ((uVar4 & 0xff) != 0)) && (-1 < (int)param_1[0x3e6])) {
    puVar3 = func_00161178(param_1);
    if ((puVar3 != (undefined4 *)0x0) && (*(char *)(puVar3 + 0x230) != '\x16')) {
      func_0065836C(puVar3 + 0x22f,4);
    }
    func_00160430((int)param_1,4);
    param_1[0x3e6] = 0xffffffff;
  }
  else {
    bVar5 = param_1[0x252] == param_1[0x251];
    if ((uint)param_1[0x252] <= (uint)param_1[0x251]) {
      bVar5 = (uVar4 & 0xff) == 0;
    }
    if (((!bVar5) || (iVar2 = func_00160484(param_1), iVar2 == 0)) &&
       ((uint)param_1[0x239] <= (uint)param_1[0x238])) {
      return func_0065836C(param_1 + 0x22f,3);
    }
  }
  return 0;
}

