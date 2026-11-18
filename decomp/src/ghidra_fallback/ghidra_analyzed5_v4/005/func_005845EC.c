#include "ghidra_types.h"

extern int func_00527E38(int param_1,int param_2);
extern int DAT_005846b8;

// USA 005845EC <- EU 005845C4 (Ghidra, non-matching)
// GLOBAL DAT_005846b8 int

void func_005845EC(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = DAT_005846b8;
  iVar2 = *(int *)(param_1 + 0x57c);
  iVar4 = *(int *)(param_1 + 0x580);
  iVar6 = 0;
  do {
    uVar7 = *(uint *)(iVar1 + iVar6 * 0x10);
    iVar3 = func_00527E38(param_1,uVar7);
    if (iVar3 == 0) {
      if ((*(uint *)(param_1 + 0x588 + ((int)uVar7 >> 5) * 4) & 1 << (uVar7 & 0x1f)) == 0) {
        if ((iVar6 < 5) && (iVar2 + iVar4 <= iVar6)) {
          iVar3 = param_2[3];
          iVar5 = param_2[1];
          if (iVar3 < iVar5) {
            param_2[3] = iVar3 + 1;
            iVar3 = param_2[2] + iVar3;
            if (iVar5 <= iVar3) goto LAB_0058465c;
            goto LAB_005846a0;
          }
        }
      }
      else {
        iVar3 = param_2[3];
        iVar5 = param_2[1];
        if (iVar3 < iVar5) {
          param_2[3] = iVar3 + 1;
          iVar3 = iVar3 + param_2[2];
          if (iVar5 <= iVar3) {
LAB_0058465c:
            iVar3 = iVar3 - iVar5;
          }
LAB_005846a0:
          *(uint *)(*param_2 + iVar3 * 4) = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    if (0x1c < iVar6) {
      return;
    }
  } while( true );
}

