#include "ghidra_types.h"

extern int func_0010FD28(uint *param_1,undefined4 param_2);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E5518(int param_1,int param_2,uint *param_3);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_002E0064(int *param_1,int param_2);
extern int func_0049BB30(uint *param_1,uint param_2);
extern int func_004D6AA8(int param_1);
extern int func_004D6E6C(int param_1);
extern int func_00584488(void);
extern int func_00588BE4(int param_1);
extern int DAT_004d7d94;
extern int DAT_004d7d98;
extern int *DAT_004d7d9c;
extern int *DAT_004d7da0;
extern int *DAT_004d7da4;
extern int *DAT_004d7da8;
extern int *DAT_004d7dac;
extern int *DAT_004d7db0;
extern int *DAT_004d7db4;
extern float DAT_004d7db8;

// USA 004D7BB8 <- EU 004D7B90 (Ghidra, non-matching)
// GLOBAL DAT_004d7d94 int
// GLOBAL DAT_004d7d98 int
// GLOBAL DAT_004d7d9c int *
// GLOBAL DAT_004d7da0 int *
// GLOBAL DAT_004d7da4 int *
// GLOBAL DAT_004d7da8 int *
// GLOBAL DAT_004d7dac int *
// GLOBAL DAT_004d7db0 int *
// GLOBAL DAT_004d7db4 int *
// GLOBAL DAT_004d7db8 float

int * func_004D7BB8(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  uint uVar10;
  
  piVar3 = func_001E56CC(param_1,param_2);
  iVar5 = DAT_004d7d94;
  iVar8 = 0;
  piVar3[200] = DAT_004d7d94 + 0x74;
  *piVar3 = iVar5;
  iVar7 = DAT_004d7d98;
  piVar3[0x187] = 0;
  piVar3[0x188] = 0;
  piVar3[0x189] = iVar7;
  puVar4 = (uint *)(piVar3 + 0x18a);
  func_0010FD28(puVar4,iVar5);
  *(undefined1 *)(piVar3 + 0x18e) = 0;
  *(undefined1 *)((int)piVar3 + 0x639) = 0;
  *(undefined1 *)((int)piVar3 + 0x63a) = 0;
  *(undefined1 *)((int)piVar3 + 0x63b) = 0;
  iVar5 = func_00588BE4((int)piVar3);
  piVar6 = DAT_004d7da0;
  iVar7 = *DAT_004d7d9c;
  *(bool *)((int)piVar3 + 0x639) = iVar5 == iVar7;
  if (*piVar6 != 0) {
    cVar1 = *(char *)(*piVar6 + 0x18);
    *(bool *)((int)piVar3 + 0x63a) = cVar1 == '\a' || cVar1 == '%';
  }
  if (iVar5 == iVar7) {
    if ((*DAT_004d7da4 == 0) || (bVar2 = func_00584488(), !bVar2)) {
      *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
      return piVar3;
    }
    if (*(char *)((int)piVar3 + 0x639) != '\0') {
      func_002E0064((int *)(*(int *)(*DAT_004d7da8 + 0x3dbe4) + 0x24),(int)param_2);
    }
  }
  if (((iVar5 == *DAT_004d7dac) || (iVar5 == *DAT_004d7db0)) || (iVar5 == *DAT_004d7db4)) {
    fVar9 = ALBW_AS_F32(piVar3[0xf4]) + ALBW_AS_F32(piVar3[0xf5]) + ALBW_AS_F32(piVar3[0xf6]);
    if (fVar9 < DAT_004d7db8) {
      fVar9 = -fVar9;
    }
    uVar10 = VectorFloatToUnsigned(fVar9,3);
    func_0049BB30(puVar4,uVar10);
    func_001E5518((int)piVar3,0x7fffffff,puVar4);
  }
  func_001E518C(piVar3,param_2,0,0,0);
  func_004D6E6C((int)piVar3);
  iVar5 = piVar3[0x187];
  iVar7 = piVar3[0x188];
  if (((*(char *)((int)piVar3 + 0x639) == '\0') || (*(char *)((int)piVar3 + 0x63a) != '\0')) &&
     (iVar5 != 0)) {
    do {
      piVar6 = *(int **)(iVar7 + iVar8 * 0x38 + 4);
      (**(code **)(*piVar6 + 0x10))(piVar6,0x24);
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar5);
  }
  func_004D6AA8((int)piVar3);
  return piVar3;
}

