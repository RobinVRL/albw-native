#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00588BF0(int param_1,int param_2);
extern undefined4 DAT_001acaf8;
extern undefined4 DAT_001acafc;

// USA 001AC92C <- EU 001AC92C (Ghidra, non-matching)
// GLOBAL DAT_001acaf8 undefined4
// GLOBAL DAT_001acafc undefined4

void func_001AC92C(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  iVar3 = 0;
  iVar4 = 8;
  puVar6 = (undefined4 *)(param_1 + 0x95c);
  do {
    iVar4 = iVar4 + -1;
    puVar6[iVar3] = iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar4 != 0);
  sVar1 = *(short *)(param_1 + 0x30);
  if (sVar1 == 0) {
    bVar2 = func_00588BF0(param_1,0);
    if (bVar2) goto LAB_001aca10;
    bVar2 = func_00588BF0(param_1,1);
    if (bVar2) {
      *puVar6 = 1;
      *(undefined4 *)(param_1 + 0x960) = 0;
      goto LAB_001aca10;
    }
  }
  else {
    if (sVar1 != 1) {
      if (sVar1 == 2) {
        *puVar6 = 3;
        *(undefined4 *)(param_1 + 0x968) = 0;
      }
      goto LAB_001aca10;
    }
    bVar2 = func_00588BF0(param_1,0);
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x960) = 2;
      *(undefined4 *)(param_1 + 0x964) = 1;
      goto LAB_001aca10;
    }
    bVar2 = func_00588BF0(param_1,1);
    if (bVar2) goto LAB_001aca10;
  }
  *puVar6 = 2;
  *(undefined4 *)(param_1 + 0x964) = 0;
LAB_001aca10:
  *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_1 + 0x3d0);
  uVar7 = DAT_001acaf8;
  *(undefined4 *)(param_1 + 0x914) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_1 + 0x3d8);
  uVar5 = *(undefined4 *)(puVar6[*(short *)(param_1 + 0x32)] * 8 + 4 + *(int *)(param_1 + 0x958));
  *(undefined4 *)(param_1 + 0x8f8) =
       *(undefined4 *)(*(int *)(param_1 + 0x958) + puVar6[*(short *)(param_1 + 0x32)] * 8);
  *(undefined4 *)(param_1 + 0x8fc) = uVar7;
  *(undefined4 *)(param_1 + 0x900) = uVar5;
  func_00115C54((float *)(param_1 + 0x8f8),(float *)(param_1 + 0x8f8),(float *)(param_1 + 8));
  if (*(float *)(param_1 + 0x910) <= *(float *)(param_1 + 0x8f8)) {
    uVar5 = 0x40000000;
  }
  else {
    uVar5 = 0xc0000000;
  }
  *(undefined4 *)(param_1 + 0x8f4) = uVar5;
  *(undefined4 *)(param_1 + 0x904) =
       *(undefined4 *)(*(int *)(param_1 + 0x958) + puVar6[*(short *)(param_1 + 0x32)] * 8);
  *(undefined4 *)(param_1 + 0x908) = uVar7;
  *(undefined4 *)(param_1 + 0x90c) = uVar7;
  func_00115C54((float *)(param_1 + 0x904),(float *)(param_1 + 0x904),(float *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x91c) = uVar7;
  func_004FC07C(param_1,0,0xffffffff,0);
  uVar7 = DAT_001acafc;
  *(undefined4 *)(param_1 + 0x924) = 0xf0;
  *(undefined4 *)(param_1 + 0x928) = uVar7;
  *(undefined4 *)(param_1 + 0x920) = 0;
  return;
}

