#include "ghidra_types.h"

extern undefined DAT_00000009;

// USA 00490CD0 <- EU 00490CA8 (Ghidra, non-matching)
// GLOBAL DAT_00000009 undefined
// GLOBAL EXT_00000008 undefined

undefined4 func_00490CD0(int *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  
  *param_2 = 0;
  uVar2 = 0;
  if (*param_1 != 0) {
    if ((char)param_1[4] == '\0') {
      pcVar5 = (char *)param_1[3];
      if (param_1[2] < (int)pcVar5) {
        pcVar7 = (char *)(*param_1 + param_1[2]);
        pcVar6 = (char *)0x0;
        if (*pcVar7 != '\0') {
          do {
            if (pcVar7[(int)pcVar6] == '%') {
              if ((pcVar7 + (int)pcVar6)[1] != '%') {
                if (0 < (int)pcVar6) {
                  pcVar5 = pcVar6;
                  (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],pcVar7);
                  pcVar7 = pcVar7 + (int)pcVar6;
                  pcVar3 = pcVar6 + param_1[2];
                  pcVar6 = (char *)0x0;
                  param_1[2] = (int)pcVar3;
                }
                pcVar3 = pcVar6 + 1;
                if (pcVar7[(int)pcVar3] == '@') {
                  pcVar6 = pcVar6 + 2;
                  goto LAB_00490e14;
                }
                if (pcVar7[(int)pcVar3] != '<') {
                  *param_2 = 0x25;
                  goto LAB_00490dc0;
                }
                *(undefined1 *)(param_1 + 4) = 1;
                pcVar6 = pcVar6 + 2;
                goto LAB_00490e14;
              }
              (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],pcVar7,pcVar6 + 1);
              pcVar5 = pcVar7 + (int)(pcVar6 + 1);
              pcVar3 = pcVar6 + param_1[2] + 2;
              pcVar6 = (char *)0x0;
              pcVar7 = pcVar5 + 1;
              param_1[2] = (int)pcVar3;
            }
            else {
              pcVar6 = pcVar6 + 1;
            }
          } while (pcVar7[(int)pcVar6] != '\0');
          if (0 < (int)pcVar6) {
            (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],pcVar7,pcVar6);
            param_1[2] = (int)(pcVar6 + param_1[2]);
          }
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
LAB_00490dc0:
  cVar1 = pcVar7[(int)pcVar3];
  uVar4 = (uint)cVar1;
  if (((uVar4 != 0x2b && uVar4 != 0x2d) && (uVar4 != 0x20 && uVar4 != 0x23)) &&
     (uVar4 != 0x68 && uVar4 != 0x6c)) {
    bVar9 = 0x4b < uVar4;
    bVar8 = uVar4 != 0x4c;
    if (bVar8) {
      bVar9 = 0x2d < uVar4;
    }
    if (bVar8 && uVar4 != 0x2e) {
      pcVar5 = (char *)(uVar4 - 0x30);
      bVar9 = &SupervisorCall < pcVar5;
    }
    if (bVar9 && ((bVar8 && uVar4 != 0x2e) && pcVar5 != &DAT_00000009)) {
      if (pcVar7[(int)pcVar3] != '\0') {
        param_2[(int)pcVar3] = cVar1;
        pcVar6 = pcVar3 + 1;
        param_2[(int)pcVar6] = 0;
LAB_00490e14:
        param_1[2] = (int)(pcVar6 + param_1[2]);
        return 1;
      }
LAB_00490e74:
      *param_2 = 0;
      param_1[2] = param_1[3];
      return 1;
    }
  }
  if (0x1e < (int)pcVar3) goto LAB_00490e74;
  param_2[(int)pcVar3] = cVar1;
  pcVar3 = pcVar3 + 1;
  goto LAB_00490dc0;
}

