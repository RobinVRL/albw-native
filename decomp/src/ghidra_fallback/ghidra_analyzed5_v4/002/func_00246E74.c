#include "ghidra_types.h"

extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_00194EF8(undefined4 *param_1,uint *param_2);
extern int func_004CEAF0(int param_1);
extern int func_00588BE4(int param_1);
extern int DAT_00246f90;
extern int *DAT_00246f94;
extern int DAT_00246f98;
extern undefined4 DAT_00246f9c;
extern undefined4 DAT_00246fa0;
extern undefined4 DAT_00246fa4;

// USA 00246E74 <- EU 00246E74 (Ghidra, non-matching)
// GLOBAL DAT_00246f90 int
// GLOBAL DAT_00246f94 int *
// GLOBAL DAT_00246f98 int
// GLOBAL DAT_00246f9c undefined4
// GLOBAL DAT_00246fa0 undefined4
// GLOBAL DAT_00246fa4 undefined4

int * func_00246E74(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  piVar2 = func_00194EF8(param_1,param_2);
  iVar1 = DAT_00246f90;
  piVar2[200] = DAT_00246f90 + 0x5c;
  *piVar2 = iVar1;
  piVar2[0x134] = 0;
  iVar3 = func_00588BE4((int)piVar2);
  iVar5 = *DAT_00246f94;
  puVar4 = (uint *)func_0014E904((int)piVar2,1,0);
  iVar1 = DAT_00246f98;
  piVar2[0x134] = (int)puVar4;
  func_00169688(puVar4,0,(int *)(iVar1 + (uint)(iVar3 != iVar5) * 8),piVar2[0x11e]);
  func_0016A02C(piVar2[0x134],-1,(int *)0xffffffff,0);
  local_78[1] = 3;
  local_70 = &local_6c;
  local_78[0] = 1;
  local_24 = 0;
  local_20 = 0;
  local_6c = 0;
  local_68 = DAT_00246fa0;
  uStack_64 = DAT_00246f9c;
  uStack_60 = DAT_00246fa4;
  uStack_5c = DAT_00246f9c;
  local_58 = 0xff;
  uVar6 = DAT_00246f9c;
  func_0016898C(piVar2[0x134],local_78);
  *(undefined4 *)(*(int *)(piVar2[0x134] + 0x14) + 0x10) = uVar6;
  func_00168E9C((int *)piVar2[0x134],piVar2[0x120],(int *)0x0);
  func_004CEAF0(piVar2[0x120]);
  return piVar2;
}

