#include "ghidra_types.h"

extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_0050d66c;

// USA 0050D544 <- EU 0050D51C (Ghidra, non-matching)
// GLOBAL DAT_0050d66c int *

undefined4 func_0050D544(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((short)param_1[0x264] != 0) {
    *(short *)(param_1 + 0x264) = (short)param_1[0x264] + -1;
    return 0;
  }
  *(undefined2 *)(param_1 + 0x264) = 100;
  piVar1 = DAT_0050d66c;
  uVar5 = 0;
  uVar4 = 0;
  if ((char)param_1[0x17] != '\0') {
    do {
      iVar3 = (int)*(short *)((int)param_1 + uVar4 * 6 + 0x5e);
      if (0 < iVar3) {
        iVar3 = func_0052FBDC(*piVar1 + 0x3dbbc,iVar3,0);
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
          if (((iVar3 != 0) && (*(short *)(iVar3 + 0x36) != 0)) &&
             (bVar2 = func_00588BF0(iVar3,0), bVar2)) {
            uVar5 = 1;
          }
        }
        else if ((uVar5 != 0) &&
                ((iVar3 == 0 ||
                 ((*(short *)(iVar3 + 0x36) != 0 && (bVar2 = func_00588BF0(iVar3,0), bVar2)))))) {
          uVar5 = 0;
        }
      }
    } while (((uVar5 & uVar4) == 0) &&
            (uVar4 = uVar4 + 1, (int)uVar4 < (int)(uint)*(byte *)(param_1 + 0x17)));
    if (uVar5 != 0) {
      *(undefined1 *)((int)param_1 + 0x853) = 6;
      *(undefined1 *)((int)param_1 + 0x855) = 7;
                    /* WARNING: Could not recover jumptable at 0x0050d63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0xac))(param_1,6,0xffffffff);
    }
  }
  *(undefined1 *)((int)param_1 + 0x853) = 0;
  *(undefined1 *)((int)param_1 + 0x855) = 1;
                    /* WARNING: Could not recover jumptable at 0x0050d664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
}

