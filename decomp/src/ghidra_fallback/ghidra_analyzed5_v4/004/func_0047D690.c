#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_001B6E04(undefined4 *param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0047d894;
extern int DAT_0047d898;
extern undefined4 DAT_0047d89c;
extern int DAT_0047d8ac;
extern int *DAT_0047d8f8;
extern int *DAT_0047d8fc;
extern int *DAT_0047d900;
extern char s_BalloonDecide_0047d8d4[];
extern char s_BalloonIn_0047d8a0[];
extern char s_BalloonOut_0047d8b0[];
extern char s_BalloonWait_0047d8c8[];
extern char s_Position_0047d8bc[];
extern char s_W_WarpBalloon_02_0047d8e4[];

// USA 0047D690 <- EU 0047D668 (Ghidra, non-matching)
// GLOBAL DAT_0047d894 int
// GLOBAL DAT_0047d898 int
// GLOBAL DAT_0047d89c undefined4
// GLOBAL DAT_0047d8ac int
// GLOBAL DAT_0047d8f8 int *
// GLOBAL DAT_0047d8fc int *
// GLOBAL DAT_0047d900 int *
// GLOBAL s_BalloonDecide_0047d8d4 string
// GLOBAL s_BalloonIn_0047d8a0 string
// GLOBAL s_BalloonOut_0047d8b0 string
// GLOBAL s_BalloonWait_0047d8c8 string
// GLOBAL s_Position_0047d8bc string
// GLOBAL s_W_WarpBalloon_02_0047d8e4 string

int * func_0047D690(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar3 = func_001B6E04(param_1);
  *piVar3 = DAT_0047d894;
  iVar1 = DAT_0047d898;
  *(undefined2 *)(piVar3 + 0xe) = 0;
  *(undefined2 *)((int)piVar3 + 0x3a) = 0xffff;
  piVar3[0xf] = iVar1;
  piVar3[0x10] = 0;
  *(undefined2 *)(piVar3 + 0x11) = 0;
  *(undefined2 *)((int)piVar3 + 0x46) = 0xffff;
  piVar3[0x12] = iVar1;
  piVar3[0x13] = 0;
  *(undefined2 *)(piVar3 + 0x14) = 0;
  *(undefined2 *)((int)piVar3 + 0x52) = 0xffff;
  piVar3[0x15] = iVar1;
  piVar3[0x16] = 0;
  piVar3[0x17] = iVar1;
  piVar3[0x18] = iVar1;
  piVar3[0x19] = 0;
  piVar3[0x1a] = 0;
  (**(code **)(*piVar3 + 0x38))(piVar3,DAT_0047d89c,0);
  piVar6 = (int *)piVar3[7];
  func_0016773C((int)piVar6,5);
  iVar1 = DAT_0047d8ac;
  local_1c = s_BalloonIn_0047d8a0;
  local_20 = DAT_0047d8ac;
  func_00166C20(piVar6,0,&local_20,0);
  local_1c = s_BalloonOut_0047d8b0;
  local_20 = iVar1;
  func_00166C20(piVar6,1,&local_20,0);
  local_1c = s_Position_0047d8bc;
  local_20 = iVar1;
  func_00166C20(piVar6,2,&local_20,0);
  local_1c = s_BalloonWait_0047d8c8;
  local_20 = iVar1;
  func_00166C20(piVar6,3,&local_20,0);
  local_1c = s_BalloonDecide_0047d8d4;
  local_20 = iVar1;
  func_00166C20(piVar6,4,&local_20,0);
  piVar3[10] = (int)piVar6;
  *(undefined2 *)((int)piVar3 + 0x22) = 0;
  *(undefined2 *)(piVar3 + 8) = 0;
  piVar3[0xd] = (int)piVar6;
  *(undefined2 *)((int)piVar3 + 0x2e) = 1;
  *(undefined2 *)(piVar3 + 0xb) = 0;
  piVar3[0x10] = (int)piVar6;
  *(undefined2 *)((int)piVar3 + 0x3a) = 2;
  *(undefined2 *)(piVar3 + 0xe) = 5;
  piVar3[0x13] = (int)piVar6;
  *(undefined2 *)((int)piVar3 + 0x46) = 3;
  *(undefined2 *)(piVar3 + 0x11) = 0;
  piVar3[0x16] = (int)piVar6;
  *(undefined2 *)((int)piVar3 + 0x52) = 4;
  *(undefined2 *)(piVar3 + 0x14) = 0;
  local_1c = s_W_WarpBalloon_02_0047d8e4;
  local_20 = iVar1;
  piVar4 = (int *)func_005229AC(piVar6,&local_20);
  piVar2 = DAT_0047d8f8;
  if (piVar4 != (int *)0x0) {
    piVar5 = (int *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (piVar5 == piVar2) goto LAB_0047d838;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0047d838:
  piVar2 = DAT_0047d8fc;
  piVar3[0x1a] = (int)piVar4;
  piVar4 = (int *)func_005229AC(piVar6,piVar2);
  piVar2 = DAT_0047d900;
  if (piVar4 != (int *)0x0) {
    piVar6 = (int *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (piVar6 == piVar2) goto LAB_0047d87c;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0047d87c:
  piVar3[0x19] = (int)piVar4;
  *(undefined1 *)((int)piVar3 + 0xf) = 0x5a;
  return piVar3;
}

