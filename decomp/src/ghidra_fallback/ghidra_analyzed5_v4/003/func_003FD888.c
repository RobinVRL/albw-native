#include "ghidra_types.h"

extern int func_003E6600(int *param_1,int param_2,uint param_3,int *param_4);
extern int DAT_003fd904;
extern int DAT_003fd908;

// USA 003FD888 <- EU 003FD868 (Ghidra, non-matching)
// GLOBAL DAT_003fd904 int
// GLOBAL DAT_003fd908 int

int * func_003FD888(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar4 = 1;
  iVar1 = func_003E6600(param_2,DAT_003fd904,0x3000000,(int *)0x1);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    *param_1 = param_2;
    iVar1 = 0;
    bVar5 = (short)param_2[4] != 0;
    if (bVar5) {
      iVar4 = DAT_003fd908;
    }
    piVar2 = (int *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
    if (bVar5) {
      do {
        iVar3 = *piVar2 + iVar4;
        if (iVar3 == 0) {
          param_1[3] = piVar2;
        }
        else if (iVar3 == 0x10000) {
          param_1[1] = piVar2;
        }
        else if (iVar3 == 0xc0000) {
          param_1[2] = piVar2;
        }
        iVar1 = iVar1 + 1;
        piVar2 = (int *)((int)piVar2 + piVar2[1]);
      } while (iVar1 < (int)(uint)*(ushort *)(param_2 + 4));
    }
  }
  return piVar2;
}

