#include "ghidra_types.h"

extern int func_003D57CC(int *param_1,uint param_2);
extern int func_0068FB40(int param_1,uint param_2);

// USA 003D5820 <- EU 003D5800 (Ghidra, non-matching)

int func_003D5820(int *param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar6 = 1;
  *param_1 = *(int *)(param_2 + 4);
  func_003D57CC(param_1,0x11);
  uVar1 = *param_3;
  if (uVar1 == 0) {
LAB_003d5984:
    uVar4 = 8;
LAB_003d5988:
    func_003D57CC(param_1,uVar4 | 0x62);
    return (int)*(char *)(*param_1 + 0x2c);
  }
  do {
    iVar5 = iVar6;
    if (uVar1 == 0x85) {
LAB_003d5888:
      iVar7 = 1;
LAB_003d588c:
      func_003D57CC(param_1,2);
    }
    else {
      if (uVar1 < 0x86) {
        if (uVar1 == 10) goto LAB_003d5888;
        if (uVar1 != 0xd) goto LAB_003d585c;
        if (param_3[1] != 10) goto LAB_003d5888;
        iVar7 = 2;
        goto LAB_003d588c;
      }
      if (uVar1 == 0x2028 || uVar1 == 0x2029) goto LAB_003d5888;
LAB_003d585c:
      iVar7 = -1;
    }
    do {
      uVar4 = (uint)*param_3;
      if (uVar4 == 0x20) {
LAB_003d5910:
        iVar6 = 1;
      }
      else {
        if (0x20 < uVar4) {
          bVar8 = uVar4 == 0x85;
          if (!bVar8) {
            uVar4 = uVar4 - 0x2028;
            bVar8 = uVar4 == 0;
          }
          if (!bVar8) {
            bVar8 = uVar4 != 1;
            if (bVar8) {
              uVar4 = uVar4 - 0xc00;
            }
            if (bVar8 && uVar4 != 0x3d8) goto LAB_003d58d8;
          }
          goto LAB_003d5910;
        }
        if (uVar4 - 9 < 5) goto LAB_003d5910;
LAB_003d58d8:
        iVar6 = 0;
      }
      if (iVar6 == iVar5) {
        uVar4 = 8;
      }
      else {
        uVar4 = 4;
      }
      func_003D57CC(param_1,uVar4);
      iVar2 = *param_1;
      uVar1 = *param_3;
      iVar5 = *(int *)(iVar2 + 0xc);
      while( true ) {
        if (iVar5 == iVar2 + 8) {
          return 0;
        }
        iVar3 = func_0068FB40(iVar5 + 8,(uint)uVar1);
        if (iVar3 != 0) break;
        iVar5 = *(int *)(iVar5 + 4);
      }
      *param_1 = *(int *)(iVar5 + 8);
      if ((iVar7 != -1) && (iVar7 = iVar7 + -1, iVar7 == 0)) {
        func_003D57CC(param_1,1);
      }
      param_3 = param_3 + 1;
      uVar1 = *param_3;
      if (uVar1 == 0) {
        if (iVar6 != 0) goto LAB_003d5984;
        uVar4 = 4;
        goto LAB_003d5988;
      }
      iVar5 = iVar6;
    } while (0 < iVar7);
  } while( true );
}

