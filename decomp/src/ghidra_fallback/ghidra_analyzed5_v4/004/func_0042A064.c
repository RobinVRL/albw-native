#include "ghidra_types.h"


// USA 0042A064 <- EU 0042A044 (Ghidra, non-matching)

undefined4 func_0042A064(short *param_1,uint param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = 0;
  psVar4 = param_1;
  do {
    while( true ) {
      psVar3 = psVar4;
      sVar1 = *psVar3;
      if ((sVar1 == 0) ||
         (((sVar1 == 10 && (uVar5 = uVar5 + 1 & 0xffff, param_3 <= uVar5)) ||
          (iVar2 = -(uint)(psVar3 < param_1), bVar6 = param_2 < (uint)((int)psVar3 - (int)param_1),
          (int)-(iVar2 + (uint)bVar6) < 0 !=
          (SBORROW4(0,iVar2) != SBORROW4((uint)(psVar3 < param_1),(uint)bVar6)))))) {
        return 0;
      }
      if (sVar1 == 0xe) break;
      psVar4 = psVar3;
      if (sVar1 == 0xf) {
        psVar4 = psVar3 + 3;
        goto LAB_0042a0bc;
      }
LAB_0042a0f0:
      psVar4 = psVar4 + 1;
    }
    psVar4 = (short *)((int)psVar3 + (ushort)psVar3[3] + 8);
LAB_0042a0bc:
    if (psVar3 == (short *)0x0) goto LAB_0042a0f0;
    sVar1 = psVar3[1];
    bVar6 = sVar1 == 0;
    if (bVar6) {
      sVar1 = psVar3[2];
    }
    if ((bVar6 && sVar1 == 2) && (100 < (ushort)psVar3[4])) {
      return 1;
    }
  } while( true );
}

