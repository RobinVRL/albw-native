#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_0011629C(uint *param_1,uint *param_2,uint param_3);

// USA 00562DFC <- EU 00562DD4 (Ghidra, non-matching)

undefined1 func_00562DFC(int *param_1,char *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  
  if (*param_2 == '\x01') {
    iVar5 = param_1[1];
  }
  else {
    iVar5 = *param_1;
  }
  iVar6 = param_1[iVar5 + 3];
  iVar5 = *(int *)(iVar6 + 0x30);
  iVar9 = *(int *)(iVar6 + 0x38) + iVar6;
  uVar3 = func_00103CBC((char *)param_3);
  uVar8 = 0;
  if (*(int *)(iVar6 + 0x34) != 0) {
    do {
      piVar7 = (int *)(iVar5 + iVar6 + uVar8 * 8);
      uVar4 = func_0011629C(param_3,(uint *)(*piVar7 + iVar9),uVar3);
      if ((uVar4 == 0) &&
         ((cVar1 = *(char *)(*piVar7 + iVar9 + uVar3), cVar1 == '\0' || (cVar1 == '.')))) {
        *(int *)(param_2 + 4) = *piVar7 + iVar9;
        uVar3 = piVar7[1] & 0xff;
        cVar1 = (char)piVar7[1];
        param_2[2] = cVar1;
        cVar2 = (char)((uint)piVar7[1] >> 0x10);
        param_2[3] = cVar2;
        if (0x87 < uVar3) {
          return 0;
        }
        if (uVar3 < 0x78) {
          if (uVar3 < 0x70) {
            if (uVar3 < 0x10) {
              if (param_2[1] != '\x01') {
                return 0;
              }
            }
            else {
              param_2[2] = cVar1 + -0x10;
              param_2[3] = cVar2 + -0x10;
              if (param_2[1] != '\x02') {
                return 0;
              }
            }
          }
          else {
            param_2[2] = cVar1 + -0x70;
            param_2[3] = cVar2 + -0x70;
            if (param_2[1] != '\x03') {
              return 0;
            }
          }
        }
        else {
          param_2[2] = cVar1 + -0x78;
          param_2[3] = cVar2 + -0x78;
          if (param_2[1] != '\x04') {
            return 0;
          }
        }
        return 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(iVar6 + 0x34));
  }
  return 0;
}

