#include "ghidra_types.h"

extern int func_004C43E0(int param_1,int *param_2);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00527AC0(int param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_005474CC(int param_1);
extern int func_00547550(int *param_1);
extern int func_00547578(int *param_1);
extern int func_00547AC4(int *param_1);
extern int func_005821B4(int param_1,int param_2);
extern int *DAT_0027a4fc;
extern int *DAT_0027a500;

// USA 0027A3A8 <- EU 0027A3D0 (Ghidra, non-matching)
// GLOBAL DAT_0027a4fc int *
// GLOBAL DAT_0027a500 int *

void func_0027A3A8(int param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  piVar1 = DAT_0027a4fc;
  iVar5 = *(int *)(*DAT_0027a4fc + 0x38);
  piVar8 = *(int **)(iVar5 + 0x18);
  piVar9 = piVar8 + *(int *)(iVar5 + 0x10);
  iVar5 = func_005821B4(*DAT_0027a4fc,param_1);
  piVar2 = DAT_0027a500;
  do {
    if (piVar8 == piVar9) {
      return;
    }
    iVar6 = func_00547AC4((int *)*piVar8);
    if (((iVar6 != 0) && (bVar3 = func_00547578((int *)*piVar8), bVar3 == 0)) &&
       (bVar4 = func_005474CC(*piVar8), !bVar4)) {
      iVar6 = func_00547550((int *)*piVar8);
      piVar7 = (int *)*piVar8;
      if (iVar6 == 0) {
        if ((short)piVar7[0x14] == param_1) {
          iVar6 = func_00527AC0(*piVar7);
          if (iVar6 != 0) goto LAB_0027a4a4;
          func_004C43E0(*piVar2,(int *)*piVar8);
        }
      }
      else {
        iVar6 = func_0052FBDC(*piVar2 + 0x3dbbc,(int)(short)piVar7[0x15],0);
        if ((iVar6 == 0) &&
           (iVar6 = func_005821B4(*piVar1,(int)*(short *)(*piVar8 + 0x50)),
           *(short *)(iVar6 + 0x46) == *(short *)(iVar5 + 0x46))) {
LAB_0027a4a4:
          func_004C4AF4(*piVar2,(int *)*piVar8,0);
        }
      }
    }
    piVar8 = piVar8 + 1;
  } while( true );
}

