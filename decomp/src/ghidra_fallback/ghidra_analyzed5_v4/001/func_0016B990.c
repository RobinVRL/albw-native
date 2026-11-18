#include "ghidra_types.h"

extern int func_0026FB60(int param_1,int *param_2,uint param_3,int param_4,undefined4 param_5, undefined4 param_6);
extern int func_00270D04(uint *param_1,uint param_2,int param_3,int *param_4,undefined4 *param_5, undefined8 param_6,int param_7);
extern int func_003FA6B0(int *param_1);

// USA 0016B990 <- EU 0016B990 (Ghidra, non-matching)

void func_0016B990(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  
  if (*(char *)(param_1 + 0xfa7) == '\0') {
    piVar9 = *(int **)(param_1 + 0x74);
    uVar7 = 0x30;
    do {
      piVar3 = (int *)(param_1 + 0x284);
      if (uVar7 < 0x33) {
        piVar3 = (int *)(param_1 + 0x284 + uVar7 * 0x38);
      }
      *(undefined1 *)((int)piVar3 + 0x15) = 1;
      iVar4 = 0;
      do {
        iVar1 = iVar4 * 0x20;
        iVar4 = iVar4 + 1;
        *(undefined1 *)(*piVar9 + (uVar7 & 0xffff) * 0x100 + iVar1 + 0x1c) = 0;
      } while (iVar4 < 8);
      if (*piVar3 != 0) {
        iVar4 = *(int *)(param_1 + 0x10) + (uVar7 & 0xffff) * 0x278;
        *(undefined4 *)(iVar4 + 0x168) = 0;
        *(undefined4 *)(iVar4 + 0x16c) = 0;
        uVar8 = 0;
        if (*(char *)((int)piVar3 + 0x17) != '\0') {
          uVar6 = 0;
          do {
            piVar5 = (int *)(param_1 + 0xf9c);
            if (uVar6 < 2) {
              piVar5 = (int *)(param_1 + 0xf9c) + uVar6;
            }
            cVar2 = func_0026FB60(*piVar5,(int *)(param_1 + 0x10),uVar7 & 0xffff,uVar8 & 0xffff,
                                  param_2,param_3);
            if (cVar2 != '\0') {
              uVar8 = uVar8 + 1;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < 2);
        }
        func_00270D04((uint *)*piVar3,uVar7,uVar8,(int *)(param_1 + 0x10),piVar3 + 2,
                      CONCAT44(param_3,param_2),(int)(char)piVar3[5]);
      }
      uVar7 = uVar7 + 1;
      *(undefined1 *)((int)piVar3 + 0x15) = 0;
      *(undefined1 *)((int)piVar3 + 0x16) = 0;
    } while ((int)uVar7 < 0x33);
    func_003FA6B0(*(int **)(param_1 + 0x74));
    *(undefined1 *)(param_1 + 0xfab) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xfab) = 0;
  }
  return;
}

