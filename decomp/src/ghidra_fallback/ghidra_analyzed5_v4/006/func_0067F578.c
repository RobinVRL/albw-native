#include "ghidra_types.h"


// USA 0067F578 <- EU 0067F550 (Ghidra, non-matching)

int * func_0067F578(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  
  bVar1 = *(byte *)(param_2 + 0x44);
  iVar4 = param_1[1];
  bVar10 = (bVar1 & 1) != 0;
  if (bVar10) {
    bVar1 = *(byte *)(param_2 + 0x46);
  }
  iVar2 = param_1[3];
  pcVar7 = (char *)(uint)(bVar10 && bVar1 != 0);
  bVar10 = pcVar7 != (char *)0x0;
  iVar8 = 0;
  if (bVar10) {
    iVar8 = iVar2;
  }
  if (iVar8 < 0) {
    pcVar7 = (char *)*param_1;
  }
  if (bVar10 && iVar2 != 0) {
    if (iVar8 >= 0) {
      iVar8 = iVar2 + -1 + param_1[2];
      if (iVar4 <= iVar8) {
        iVar8 = iVar8 - iVar4;
      }
      pcVar7 = (char *)(iVar8 + *param_1);
    }
    pcVar7 = (char *)(int)*pcVar7;
  }
  if (iVar2 < iVar4) {
    param_1[3] = iVar2 + 1;
    iVar2 = iVar2 + param_1[2];
    if (param_1[1] <= iVar2) {
      iVar2 = iVar2 - param_1[1];
    }
    *(char *)(*param_1 + iVar2) = (char)pcVar7;
  }
  piVar3 = (int *)param_1[0x14];
  iVar4 = *piVar3;
  if (iVar4 < piVar3[1]) {
    *piVar3 = iVar4 + 1;
    *(char *)(piVar3[2] + iVar4) = (char)pcVar7;
  }
  if ((*(int *)(param_2 + 0x10) != 0) &&
     (piVar3 = (int *)(*(int *)(param_2 + 0x14) + -4), piVar3 != (int *)0x0)) {
    do {
      do {
        do {
          iVar4 = (int)piVar3;
          bVar1 = *(byte *)(iVar4 + 0x44);
          bVar10 = (bVar1 & 1) != 0;
          if (bVar10) {
            bVar1 = *(byte *)(iVar4 + 0x46);
          }
          if (bVar10 && bVar1 != 0) {
            uVar6 = 1;
            puVar5 = (undefined1 *)param_1[3];
            bVar10 = (int)puVar5 < 0;
            bVar11 = puVar5 != (undefined1 *)0x0;
            if (bVar10) {
              puVar5 = (undefined1 *)*param_1;
            }
            if (bVar11) {
              if (!bVar10) {
                puVar5 = puVar5 + param_1[2] + -1;
                if (param_1[1] <= (int)puVar5) {
                  puVar5 = puVar5 + -param_1[1];
                }
                puVar5 = puVar5 + *param_1;
              }
              uVar6 = *puVar5;
            }
          }
          else {
            uVar6 = 0;
          }
          iVar8 = param_1[1];
          iVar2 = param_1[3];
          if (iVar2 < iVar8) {
            param_1[3] = iVar2 + 1;
            iVar2 = iVar2 + param_1[2];
            if (iVar8 <= iVar2) {
              iVar2 = iVar2 - iVar8;
            }
            *(undefined1 *)(*param_1 + iVar2) = uVar6;
          }
          piVar3 = (int *)param_1[0x14];
          iVar8 = *piVar3;
          if (iVar8 < piVar3[1]) {
            *piVar3 = iVar8 + 1;
            *(undefined1 *)(piVar3[2] + iVar8) = uVar6;
          }
        } while ((*(int *)(iVar4 + 0x10) != 0) &&
                (piVar3 = (int *)(*(int *)(iVar4 + 0x14) + -4), piVar3 != (int *)0x0));
        if (0 < param_1[3]) {
          param_1[3] = param_1[3] + -1;
        }
        piVar9 = (int *)(*(int *)(iVar4 + 0xc) + 0x14);
        if (iVar4 != 0) {
          piVar9 = (int *)(iVar4 + 4);
        }
        piVar3 = (int *)(*(int *)(iVar4 + 0xc) + 0x14);
        bVar10 = (int *)*piVar9 == piVar3;
        if (!bVar10) {
          piVar3 = (int *)(*piVar9 + -4);
          bVar10 = piVar3 == (int *)0x0;
        }
      } while (!bVar10);
      do {
        iVar4 = *(int *)(iVar4 + 0xc);
        if (0 < param_1[3]) {
          param_1[3] = param_1[3] + -1;
        }
        if (iVar4 == param_2) {
          return param_1;
        }
        piVar9 = (int *)(*(int *)(iVar4 + 0xc) + 0x14);
        piVar3 = piVar9;
        if (iVar4 != 0) {
          piVar3 = (int *)(iVar4 + 4);
        }
        piVar3 = (int *)*piVar3;
        bVar10 = piVar3 == piVar9;
        if (!bVar10) {
          piVar3 = piVar3 + -1;
          bVar10 = piVar3 == (int *)0x0;
        }
      } while (bVar10);
    } while( true );
  }
  if (0 < param_1[3]) {
    param_1[3] = param_1[3] + -1;
  }
  return param_1;
}

