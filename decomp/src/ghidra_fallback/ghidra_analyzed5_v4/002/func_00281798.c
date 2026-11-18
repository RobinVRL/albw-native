#include "ghidra_types.h"

extern int func_0014D494(int param_1);
extern int func_0014D4E8(int param_1,undefined4 param_2);
extern int func_0014D4FC(int param_1);
extern int func_0014D594(int param_1);
extern int func_002E29F8(uint *param_1);
extern int func_004C684C(int param_1,undefined4 param_2,int param_3);
extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_0051ABC8(int param_1,undefined4 param_2);
extern int func_0051AE40(int param_1);
extern int func_00520E34(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_0058D8F0(int param_1);
extern int func_0061DE9C(int param_1,int param_2,undefined1 param_3);
extern int *DAT_002819d4;
extern int *DAT_002819d8;
extern byte *DAT_002819dc;
extern int DAT_002819e0;
extern int *DAT_002819e4;

// USA 00281798 <- EU 002817C0 (Ghidra, non-matching)
// GLOBAL DAT_002819d4 int *
// GLOBAL DAT_002819d8 int *
// GLOBAL DAT_002819dc byte *
// GLOBAL DAT_002819e0 int
// GLOBAL DAT_002819e4 int *

undefined4 func_00281798(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = DAT_002819e4;
  iVar7 = DAT_002819e0;
  piVar3 = DAT_002819d8;
  piVar2 = DAT_002819d4;
  iVar6 = *DAT_002819d4;
  switch(param_2) {
  case 0:
    *(undefined1 *)(param_1 + 0x998) = 0;
    func_002E29F8((uint *)(param_1 + 0x99c));
    func_0014D4E8(*(int *)(*piVar2 + 300),param_1 + 0x998);
    break;
  case 1:
    if (*(char *)(param_1 + 0x995) == '\0') {
      func_0014D594(*(int *)(iVar6 + 300));
      *(undefined1 *)(param_1 + 0x995) = 1;
      return 0;
    }
    iVar7 = func_00520E34(*(int *)(iVar6 + 300));
    if (iVar7 == 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x995) = 0;
    return 1;
  case 2:
    if (*(char *)(param_1 + 0x964) == '\x05') {
      return 0;
    }
    func_0061DE9C(param_1,5,0);
    return 0;
  case 3:
    if (*DAT_002819d8 != 0) {
      *(undefined4 *)(*DAT_002819d8 + 0x584) = 0;
    }
    *(undefined1 *)(param_1 + 0x994) = 0;
    break;
  case 4:
    func_0014D494(*(int *)(iVar6 + 300));
    break;
  case 5:
    func_0014D4FC(*(int *)(iVar6 + 300));
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0x989);
    if (cVar1 == '\0') {
      func_0051ABC8(iVar6,(uint)*DAT_002819dc);
      *(undefined1 *)(param_1 + 0x989) = 1;
      return 0;
    }
    if (cVar1 == '\x01') {
      bVar5 = func_00584B94(*DAT_002819e4,DAT_002819e0);
      if (bVar5) {
        *(undefined1 *)(param_1 + 0x992) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x992) = 1;
        func_004CDF40(*piVar4,iVar7,1);
      }
      if ((*piVar3 == 0) ||
         (iVar7 = func_004C684C(*piVar3,(uint *)(param_1 + 0x99c),(int)*(short *)(param_1 + 0x32)),
         iVar7 == 0)) {
        *(undefined1 *)(param_1 + 0x993) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x993) = 0;
      }
      *(undefined1 *)(param_1 + 0x989) = 2;
      return 0;
    }
    if (cVar1 != '\x02') {
      return 1;
    }
    if (*(char *)(param_1 + 0x993) != '\0') {
      return 0;
    }
    return 1;
  case 7:
    if (*(char *)(param_1 + 0x989) == '\x02') {
      func_0051AE40(iVar6);
      *(undefined1 *)(param_1 + 0x989) = 3;
    }
    else {
      iVar7 = func_0058D8F0(iVar6);
      if (iVar7 == 0) {
        *(undefined1 *)(param_1 + 0x989) = 0;
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

