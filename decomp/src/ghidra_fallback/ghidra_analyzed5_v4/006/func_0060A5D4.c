#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001E48F8(int param_1,int param_2);
extern int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3);
extern int func_004356B4(int *param_1);
extern int func_004C2554(int param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int DAT_004c3630;
extern uint *DAT_004c3634;
extern undefined4 *DAT_004c3638;
extern undefined4 DAT_004c363c;
extern undefined4 DAT_004c3640;
extern undefined4 DAT_004c3644;
extern float DAT_004c3648;
extern undefined4 DAT_004c364c;
extern undefined4 DAT_004c3650;
extern undefined4 DAT_004c3654;
extern undefined4 *DAT_004c3658;
extern undefined4 DAT_004c365c;
extern int *DAT_004c3660;
extern int *DAT_004c3664;
extern undefined4 DAT_004c3668;
extern undefined4 DAT_004c366c;
extern undefined4 DAT_0060a5d4;

// USA 0060A5D4 <- EU 0060A5AC (Ghidra, non-matching)
// GLOBAL DAT_004c3630 int
// GLOBAL DAT_004c3634 uint *
// GLOBAL DAT_004c3638 undefined4 *
// GLOBAL DAT_004c363c undefined4
// GLOBAL DAT_004c3640 undefined4
// GLOBAL DAT_004c3644 undefined4
// GLOBAL DAT_004c3648 float
// GLOBAL DAT_004c364c undefined4
// GLOBAL DAT_004c3650 undefined4
// GLOBAL DAT_004c3654 undefined4
// GLOBAL DAT_004c3658 undefined4 *
// GLOBAL DAT_004c365c undefined4
// GLOBAL DAT_004c3660 int *
// GLOBAL DAT_004c3664 int *
// GLOBAL DAT_004c3668 undefined4
// GLOBAL DAT_004c366c undefined4
// GLOBAL DAT_0060a5d4 undefined4

int func_0060A5D4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  puVar4 = (undefined4 *)func_0010BAB4(DAT_0060a5d4);
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = (int *)func_001E4B08(puVar4,(uint *)param_1,1);
    iVar2 = DAT_004c3630;
    piVar1[200] = DAT_004c3630 + 0x78;
    *piVar1 = iVar2;
    piVar1[0x13d] = 0;
    *(undefined1 *)(piVar1 + 0x13e) = 0;
    puVar4 = (undefined4 *)func_0054D964((int)piVar1,0);
    if (((*DAT_004c3634 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004c3634), iVar2 != 0)) {
      *DAT_004c3638 = DAT_004c363c;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar2 = (**(code **)*puVar4)(puVar4,DAT_004c3638), iVar2 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    piVar1[0x13f] = (int)puVar4;
    iVar2 = func_004EE484(piVar1 + 0x140);
    iVar6 = iVar2 + -0x500;
    iVar3 = func_0054D89C(iVar6,0);
    *(int *)(iVar2 + 100) = iVar3;
    *(undefined1 *)(iVar2 + 0x68) = 0;
    *(undefined1 *)(iVar2 + 0x69) = 0;
    *(undefined1 *)(iVar2 + 0x6a) = 0;
    *(undefined1 *)(iVar2 + 0x6b) = 0;
    uVar7 = DAT_004c3644;
    uVar5 = DAT_004c3640;
    *(undefined1 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x70) = uVar7;
    *(undefined4 *)(iVar2 + 0x74) = uVar5;
    fVar8 = func_0054DE3C(iVar6,0,1);
    uVar7 = DAT_004c3650;
    uVar5 = DAT_004c364c;
    *(float *)(iVar2 + 0x78) = DAT_004c3648 - fVar8;
    *(undefined4 *)(iVar2 + 0x7c) = uVar5;
    uVar5 = DAT_004c3654;
    *(undefined4 *)(iVar2 + 0x8c) = uVar7;
    *(undefined4 *)(iVar2 + 0x90) = uVar5;
    *(undefined4 *)(iVar2 + 0x88) = 0;
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar2 + 0x98) = uVar5;
    *(undefined4 *)(iVar2 + 0x9c) = uVar7;
    *(int *)(iVar2 + 0xa0) = iVar6;
    *(int *)(iVar2 + 0xa8) = iVar2 + -0x124;
    *(int *)(iVar2 + 0xa4) = iVar2 + 0x94;
    *(undefined1 *)(iVar2 + 0xac) = 0;
    puVar4 = DAT_004c3658;
    *(undefined1 *)(iVar2 + 0xad) = 1;
    *(undefined1 *)(iVar2 + 0xae) = 0;
    *(undefined1 *)(iVar2 + 0xaf) = 0;
    *(undefined1 *)(iVar2 + 0xb0) = 1;
    uVar5 = puVar4[1];
    *(undefined4 *)(iVar2 + 0xbc) = *puVar4;
    *(undefined4 *)(iVar2 + 0xc0) = uVar5;
    uVar5 = DAT_004c365c;
    *(undefined4 *)(iVar2 + 0xb4) = DAT_004c365c;
    *(int *)(iVar2 + 0xb8) = iVar6;
    uVar7 = puVar4[2];
    uVar9 = puVar4[3];
    *(int *)(iVar2 + 200) = iVar6;
    *(undefined4 *)(iVar2 + 0xcc) = uVar7;
    *(undefined4 *)(iVar2 + 0xd0) = uVar9;
    *(undefined4 **)(iVar2 + -0x114) = (undefined4 *)(iVar2 + 0xb4);
    *(undefined4 *)(iVar2 + 0xc4) = uVar5;
    uVar5 = func_0014E428(iVar6,0,0,0,1,0,0);
    *(undefined4 *)(iVar2 + -0xc) = uVar5;
    *(undefined4 *)(iVar2 + -0x88) = uVar5;
    iVar3 = func_00588BE4(iVar6);
    if ((iVar3 == *DAT_004c3660) || (iVar3 = func_00588BE4(iVar6), iVar3 == *DAT_004c3664)) {
      func_001E48F8(iVar6,5);
      *(undefined1 *)(iVar2 + 0xaf) = 1;
      *(undefined1 *)(iVar2 + 0x6b) = 1;
    }
    *(undefined4 *)(iVar2 + -0x1c) = 0x13;
    uVar5 = DAT_004c366c;
    *(undefined4 *)(iVar2 + -0x18) = DAT_004c3668;
    *(undefined4 *)(iVar2 + -0x14) = uVar5;
    func_00151148(*(int *)(iVar2 + 100),0);
    func_004C2554(iVar6);
    fVar10 = *(float *)(iVar2 + 0x78);
    fVar8 = *(float *)(iVar2 + -300);
    iVar3 = *(int *)(iVar2 + -4);
    uVar5 = *(undefined4 *)(iVar2 + -0x128);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar2 + -0x130);
    *(float *)(iVar3 + 8) = fVar8 + fVar10;
    *(undefined4 *)(iVar3 + 0xc) = uVar5;
    func_004356B4(*(int **)(iVar2 + -4));
    return iVar6;
  }
  return 0;
}

