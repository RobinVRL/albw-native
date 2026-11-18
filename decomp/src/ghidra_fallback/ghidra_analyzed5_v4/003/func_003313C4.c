#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00331114(int param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int DAT_003314c0;
extern undefined4 DAT_003314c4;
extern uint DAT_003314c8;
extern int *DAT_003314cc;

// USA 003313C4 <- EU 003313A0 (Ghidra, non-matching)
// GLOBAL DAT_003314c0 int
// GLOBAL DAT_003314c4 undefined4
// GLOBAL DAT_003314c8 uint
// GLOBAL DAT_003314cc int *

/* WARNING: Variable defined which should be unmapped: objStack_68 */

int * func_003313C4(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_68 ((uint *)(albw_frame + 0x8))
  #define local_18 ((uint *)(albw_frame + 0x58))
  piVar2 = func_00150E40(param_1,param_2);
  iVar3 = DAT_003314c0;
  piVar2[200] = DAT_003314c0 + 0x54;
  *piVar2 = iVar3;
  piVar2[0x103] = 0;
  piVar2[0x104] = 0;
  objStack_68[0] = 1;
  objStack_68[1] = 0;
  piVar6 = piVar2 + 0x104;
  objStack_68[2] = 0;
  iVar3 = func_0014E428((int)piVar2,0,0,0,1,0,0);
  piVar2[0x103] = iVar3;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_004EDC9C(puVar4);
  }
  uVar1 = DAT_003314c4;
  piVar2[0x104] = (int)puVar5;
  objStack_68[1] = (uint)(objStack_68 + 3);
  objStack_68[2] = 0x40;
  (*(undefined1 *)((char *)&objStack_68[3] + 0)) = 0;
  objStack_68[0] = DAT_003314c8;
  func_00111A20((int)objStack_68,uVar1,local_18);
  func_004EDB28(piVar2[0x104],(int)objStack_68);
  func_00331114((int)piVar2);
  local_18[0] = piVar2[0xb3];
  func_004EDAD0(*piVar6,local_18);
  *(short *)(*piVar6 + 0x2c) = (short)piVar2[0x15];
  func_004A7F00(*DAT_003314cc,*piVar6,3);
  iVar3 = piVar2[0x103];
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar3 + 0x80),piVar2[0xfa],(float *)(piVar2 + 0xf4));
  func_004CEAF0(piVar2[0x103]);
  return piVar2;
}

