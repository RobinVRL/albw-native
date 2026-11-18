#include "ghidra_types.h"

extern int func_0010FBAC(uint *param_1,uint *param_2);
extern uint DAT_00564b60;
extern int DAT_00564b64;

// USA 00564ABC <- EU 00564A94 (Ghidra, non-matching)
// GLOBAL DAT_00564b60 uint
// GLOBAL DAT_00564b64 int

uint func_00564ABC(short *param_1,uint *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar2 = DAT_00564b60;
  puVar7 = *(uint **)(param_1 + 2);
  puVar6 = puVar7 + (uint)(ushort)puVar7[1] * 3;
  if (*param_1 != 0) {
    puVar5 = puVar6;
    if (*puVar6 < *puVar7) {
      do {
        uVar4 = *puVar5 >> 3;
        if ((uVar4 < param_3) && (((int)*(char *)((int)param_2 + uVar4) >> (*puVar5 & 7) & 1U) != 0)
           ) {
          uVar1 = *(ushort *)((int)puVar5 + 6);
        }
        else {
          uVar1 = (ushort)puVar5[1];
        }
        puVar6 = puVar7 + (uint)uVar1 * 3;
        uVar4 = *puVar5;
        puVar5 = puVar6;
      } while (*puVar6 < uVar4);
    }
    if (((uint *)puVar6[2] != (uint *)0x0) &&
       (uVar4 = func_0010FBAC((uint *)puVar6[2],param_2), uVar4 == 0)) {
      iVar3 = (int)((ulonglong)
                    ((longlong)DAT_00564b64 * (longlong)((int)puVar6 - (int)(puVar7 + 3))) >> 0x20);
      return (iVar3 >> 1) - (iVar3 >> 0x1f) & 0xffff;
    }
  }
  return uVar2;
}

