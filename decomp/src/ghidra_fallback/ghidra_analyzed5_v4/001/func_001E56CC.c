#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_00276E6C(int param_1,int param_2);
extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int func_0048C258(int *param_1,undefined *param_2);
extern int DAT_001e57dc;
extern int *DAT_001e57e0;
extern undefined *DAT_001e57e4;

// USA 001E56CC <- EU 001E56CC (Ghidra, non-matching)
// GLOBAL DAT_001e57dc int
// GLOBAL DAT_001e57e0 int *
// GLOBAL DAT_001e57e4 undefined *

int * func_001E56CC(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *extraout_r1;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  
  piVar1 = (int *)func_00324A30(param_1,param_2);
  iVar7 = 0;
  iVar3 = DAT_001e57dc + 0x74;
  *piVar1 = DAT_001e57dc;
  piVar1[200] = iVar3;
  piVar1[0x11e] = 0;
  piVar1[0x11f] = 0;
  piVar6 = piVar1 + 0x121;
  piVar1[0x120] = 0;
  func_0010B3EC(piVar1 + 0x11e,0x60,(int)piVar6);
  piVar1[0x181] = 0;
  piVar1[0x182] = 0;
  piVar9 = DAT_001e57e0;
  piVar1[0x183] = 0;
  piVar1[0x184] = 0;
  piVar1[0x185] = 0;
  piVar1[0x186] = 0;
  uVar8 = 0;
  iVar10 = *(int *)(*piVar9 + 0x38);
  iVar3 = *(int *)(*param_2 + 0x28);
  if (iVar10 != 0) {
    piVar9 = piVar1 + 0x11e;
    while (iVar4 = (int)*(short *)((int)param_2 + iVar7 * 6 + 0x5a), -1 < iVar4) {
      iVar2 = func_00276E6C(iVar10,iVar4);
      bVar11 = iVar2 != 0;
      iVar4 = 0;
      piVar5 = extraout_r1;
      if (bVar11) {
        piVar5 = (int *)*piVar9;
        piVar6 = (int *)piVar1[0x11f];
        iVar4 = (int)piVar6 - (int)piVar5;
      }
      if ((bVar11 && piVar6 != piVar5) && iVar4 < 0 == (bVar11 && SBORROW4((int)piVar6,(int)piVar5))
         ) {
        piVar6 = (int *)piVar1[0x120];
        piVar6[(int)piVar5] = iVar2;
        *piVar9 = *piVar9 + 1;
      }
      uVar8 = uVar8 + iVar3;
      if ((0x32000 < uVar8) || (iVar7 = iVar7 + 1, 0x5f < iVar7)) break;
    }
  }
  func_0048C258(piVar1 + 0x11e,DAT_001e57e4);
  func_0010B380(piVar1 + 0x184,piVar1[0x11e],(int *)0x0,4);
  return piVar1;
}

