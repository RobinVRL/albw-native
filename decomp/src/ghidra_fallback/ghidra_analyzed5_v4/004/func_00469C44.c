#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_001B6E04(undefined4 *param_1);
extern int func_00469B14(int param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00469f88;
extern int DAT_00469f8c;
extern int DAT_00469f90;
extern undefined4 DAT_00469f94;
extern undefined DAT_00469f98;
extern int DAT_00469f9c;
extern undefined DAT_00469fa0;
extern undefined DAT_00469fa4;
extern undefined DAT_00469fbc;
extern float DAT_0046a058;
extern char s_Compass_00469fb4[];
extern char s_InWarpPoint_00469fcc[];
extern char s_LinkAttention_00469fd8[];
extern char s_P_Boss_00_0046a004[];
extern char s_P_Compass_00_00469ff4[];
extern char s_P_Entrance_00_0046a048[];
extern char s_P_Link_00_0046a01c[];
extern char s_P_Propeller_00_0046a028[];
extern char s_P_Stair_00_00469fe8[];
extern char s_P_Valve_00_0046a010[];
extern char s_P_WarpPoint_00_0046a038[];
extern char s_Rotate_00469fc4[];
extern char s_Stair_00469fac[];

// USA 00469C44 <- EU 00469C1C (Ghidra, non-matching)
// GLOBAL DAT_00469f88 int
// GLOBAL DAT_00469f8c int
// GLOBAL DAT_00469f90 int
// GLOBAL DAT_00469f94 undefined4
// GLOBAL DAT_00469f98 undefined
// GLOBAL DAT_00469f9c int
// GLOBAL DAT_00469fa0 undefined
// GLOBAL DAT_00469fa4 undefined
// GLOBAL DAT_00469fbc undefined
// GLOBAL DAT_0046a058 float
// GLOBAL s_Compass_00469fb4 string
// GLOBAL s_InWarpPoint_00469fcc string
// GLOBAL s_LinkAttention_00469fd8 string
// GLOBAL s_P_Boss_00_0046a004 string
// GLOBAL s_P_Compass_00_00469ff4 string
// GLOBAL s_P_Entrance_00_0046a048 string
// GLOBAL s_P_Link_00_0046a01c string
// GLOBAL s_P_Propeller_00_0046a028 string
// GLOBAL s_P_Stair_00_00469fe8 string
// GLOBAL s_P_Valve_00_0046a010 string
// GLOBAL s_P_WarpPoint_00_0046a038 string
// GLOBAL s_Rotate_00469fc4 string
// GLOBAL s_Stair_00469fac string

int * func_00469C44(undefined4 *param_1,int *param_2,int *param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar2 = func_001B6E04(param_1);
  iVar4 = DAT_00469f8c;
  *piVar2 = DAT_00469f88;
  *(undefined2 *)(piVar2 + 0xe) = 0;
  *(undefined2 *)((int)piVar2 + 0x3a) = 0xffff;
  piVar2[0xf] = iVar4;
  piVar2[0x10] = 0;
  *(undefined2 *)(piVar2 + 0x11) = 0;
  *(undefined2 *)((int)piVar2 + 0x46) = 0xffff;
  piVar2[0x12] = iVar4;
  piVar2[0x13] = 0;
  *(undefined2 *)(piVar2 + 0x14) = 0;
  *(undefined2 *)((int)piVar2 + 0x52) = 0xffff;
  piVar2[0x15] = iVar4;
  piVar2[0x16] = 0;
  *(undefined2 *)(piVar2 + 0x17) = 0;
  *(undefined2 *)((int)piVar2 + 0x5e) = 0xffff;
  piVar2[0x18] = iVar4;
  piVar2[0x19] = 0;
  *(undefined1 *)(piVar2 + 0x22) = 0xe;
  piVar2[0x23] = iVar4;
  piVar2[0x24] = iVar4;
  piVar2[0x25] = iVar4;
  piVar2[0x26] = iVar4;
  piVar2[0x27] = iVar4;
  iVar4 = DAT_00469f90;
  piVar2[0x28] = -1;
  *(undefined1 *)(piVar2 + 0x29) = 0;
  piVar2[0x2a] = iVar4;
  piVar2[0x2b] = iVar4;
  *(undefined1 *)(piVar2 + 0x2c) = 0;
  (**(code **)(*piVar2 + 0x38))(piVar2,DAT_00469f94,0);
  piVar5 = (int *)piVar2[7];
  func_0016773C((int)piVar5,9);
  iVar4 = DAT_00469f9c;
  local_24 = &DAT_00469f98;
  local_28 = DAT_00469f9c;
  func_00166C20(piVar5,0,&local_28,0);
  local_24 = &DAT_00469fa0;
  local_28 = iVar4;
  func_00166C20(piVar5,1,&local_28,0);
  local_24 = &DAT_00469fa4;
  local_28 = iVar4;
  func_00166C20(piVar5,2,&local_28,0);
  local_24 = s_Stair_00469fac;
  local_28 = iVar4;
  func_00166C20(piVar5,3,&local_28,0);
  local_24 = s_Compass_00469fb4;
  local_28 = iVar4;
  func_00166C20(piVar5,4,&local_28,0);
  local_24 = &DAT_00469fbc;
  local_28 = iVar4;
  func_00166C20(piVar5,5,&local_28,0);
  local_24 = s_Rotate_00469fc4;
  local_28 = iVar4;
  func_00166C20(piVar5,6,&local_28,0);
  local_24 = s_InWarpPoint_00469fcc;
  local_28 = iVar4;
  func_00166C20(piVar5,7,&local_28,0);
  local_24 = s_LinkAttention_00469fd8;
  local_28 = iVar4;
  func_00166C20(piVar5,8,&local_28,0);
  piVar2[10] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x2e) = 1;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  piVar2[0x10] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x3a) = 2;
  *(undefined2 *)(piVar2 + 0xe) = 0;
  piVar2[0x16] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x52) = 6;
  *(undefined2 *)(piVar2 + 0x14) = 0;
  piVar2[0x19] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x5e) = 8;
  *(undefined2 *)(piVar2 + 0x17) = 0;
  local_24 = s_P_Stair_00_00469fe8;
  local_28 = iVar4;
  iVar3 = func_005229AC(piVar5,&local_28);
  piVar2[0x1a] = iVar3;
  local_24 = s_P_Compass_00_00469ff4;
  local_28 = iVar4;
  iVar3 = func_005229AC(piVar5,&local_28);
  piVar2[0x1b] = iVar3;
  local_24 = s_P_Boss_00_0046a004;
  local_28 = iVar4;
  iVar3 = func_005229AC(piVar5,&local_28);
  piVar2[0x1c] = iVar3;
  local_24 = s_P_Valve_00_0046a010;
  local_28 = iVar4;
  iVar3 = func_005229AC(piVar5,&local_28);
  piVar2[0x1e] = iVar3;
  local_24 = s_P_Link_00_0046a01c;
  local_28 = iVar4;
  iVar3 = func_005229AC(piVar5,&local_28);
  piVar2[0x1d] = iVar3;
  local_24 = s_P_Propeller_00_0046a028;
  local_28 = iVar4;
  iVar3 = func_005229AC(piVar5,&local_28);
  piVar2[0x1f] = iVar3;
  local_24 = s_P_WarpPoint_00_0046a038;
  local_28 = iVar4;
  iVar3 = func_005229AC(piVar5,&local_28);
  piVar2[0x20] = iVar3;
  local_24 = s_P_Entrance_00_0046a048;
  local_28 = iVar4;
  iVar4 = func_005229AC(piVar5,&local_28);
  piVar2[0x21] = iVar4;
  iVar4 = func_005229AC(param_2,param_3);
  fVar1 = DAT_0046a058;
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar4 + 0x20);
    piVar2[0x25] = *(int *)(iVar4 + 0x1c);
    piVar2[0x26] = iVar3;
    piVar2[0x27] = (int)ALBW_AS_U32((*(float *)(iVar4 + 0x3c) * fVar1));
  }
  func_00469B14((int)piVar2);
  return piVar2;
}

