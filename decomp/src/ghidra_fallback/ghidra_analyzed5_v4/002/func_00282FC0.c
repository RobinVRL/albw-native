#include "ghidra_types.h"

extern int DAT_0028310c;
extern int DAT_00283110;
extern int DAT_00283114;
extern int DAT_00283118;
extern int DAT_0028311c;

// USA 00282FC0 <- EU 00282FE8 (Ghidra, non-matching)
// GLOBAL DAT_0028310c int
// GLOBAL DAT_00283110 int
// GLOBAL DAT_00283114 int
// GLOBAL DAT_00283118 int
// GLOBAL DAT_0028311c int

void func_00282FC0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = 0;
  iVar5 = param_1 + 0x9d8;
  iVar6 = 0;
  do {
    iVar8 = DAT_0028311c;
    iVar3 = DAT_00283118;
    iVar2 = DAT_00283114;
    iVar1 = DAT_00283110;
    iVar7 = DAT_0028310c;
    switch(iVar6) {
    case 0:
      *(undefined4 *)(iVar5 + iVar4 * 8) = 0xd6;
      *(undefined4 *)(iVar5 + iVar4 * 8 + 4) = 0x174;
      break;
    case 1:
      *(undefined4 *)(iVar5 + iVar4 * 8) = 0xa8;
      *(undefined4 *)(iVar5 + iVar4 * 8 + 4) = 0x156;
      break;
    case 2:
      *(undefined4 *)(iVar5 + iVar4 * 8) = 0x19c;
      *(undefined4 *)(iVar5 + iVar4 * 8 + 4) = 0x21a;
      break;
    case 3:
      *(undefined4 *)(iVar5 + iVar4 * 8) = 0x1b2;
      *(undefined4 *)(iVar5 + iVar4 * 8 + 4) = 0x22e;
      break;
    case 4:
      *(int *)(iVar5 + iVar4 * 8) = DAT_0028310c;
      *(int *)(iVar5 + iVar4 * 8 + 4) = iVar7 + 0x78;
      break;
    case 5:
      iVar7 = iVar5 + iVar4 * 8;
      *(int *)(iVar5 + iVar4 * 8) = DAT_00283110;
      iVar8 = iVar1 + 0x73;
      goto LAB_002830cc;
    case 6:
      iVar7 = iVar5 + iVar4 * 8;
      *(int *)(iVar5 + iVar4 * 8) = DAT_00283114;
      iVar8 = iVar2 + 0x68;
      goto LAB_002830cc;
    case 7:
      iVar7 = iVar5 + iVar4 * 8;
      *(int *)(iVar5 + iVar4 * 8) = DAT_00283118;
      iVar8 = iVar3 + 0x5c;
      goto LAB_002830cc;
    case 8:
      iVar7 = iVar5 + iVar4 * 8;
      *(int *)(iVar5 + iVar4 * 8) = DAT_0028311c;
      iVar8 = iVar8 + 0x74;
LAB_002830cc:
      *(int *)(iVar7 + 4) = iVar8;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 1;
    if (iVar4 == 9) {
      return;
    }
  } while( true );
}

