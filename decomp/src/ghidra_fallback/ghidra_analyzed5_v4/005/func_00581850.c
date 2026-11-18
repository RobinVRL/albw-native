#include "ghidra_types.h"

extern int func_0010FBAC(uint *param_1,uint *param_2);

// USA 00581850 <- EU 00581828 (Ghidra, non-matching)

char * func_00581850(int param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      pcVar6 = *(char **)(*(int *)(param_1 + 8) + iVar7 * 4);
      if ((pcVar6 != (char *)0x0) && (*pcVar6 == 'S')) {
        cVar1 = pcVar6[1];
        bVar8 = cVar1 == 'L';
        if (bVar8) {
          cVar1 = pcVar6[2];
        }
        if (bVar8 && cVar1 == 'N') {
          uVar2 = (uint)(byte)pcVar6[3];
          bVar8 = uVar2 == 0x4b;
          if (bVar8) {
            uVar2 = *(uint *)(pcVar6 + 8);
          }
          if (bVar8 && uVar2 == 0x32) {
            iVar3 = *(int *)(pcVar6 + 0xc);
            uVar2 = 0;
            if (iVar3 != 0) {
              do {
                pcVar5 = pcVar6 + *(int *)(pcVar6 + uVar2 * 4 + 0x10);
                *(char **)(pcVar5 + 0x1c) = pcVar6 + iVar3 * 4 + 0x10;
                uVar4 = func_0010FBAC((uint *)(pcVar6 + iVar3 * 4 + 0x10 + *(int *)(pcVar5 + 8)),
                                      param_2);
                if (uVar4 == 0) {
                  return pcVar5;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < *(uint *)(pcVar6 + 0xc));
            }
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 4));
  }
  return (char *)0x0;
}

