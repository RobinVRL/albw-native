// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_002C6F50(int param_1,undefined4 param_2,uint param_3);
extern int func_002C713C(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00521184();
extern int func_0058E2B8(int *param_1);
extern uint DAT_002c7498;
extern uint DAT_002c74b0;
extern int DAT_002c74b4;
extern char s_SE_NeedleRoller_HIT_002c749c[];

// USA 002C734C <- EU 002C7328 (Ghidra, non-matching)
// GLOBAL DAT_002c7498 uint
// GLOBAL DAT_002c74b0 uint
// GLOBAL DAT_002c74b4 int
// GLOBAL s_SE_NeedleRoller_HIT_002c749c string

/* WARNING: Variable defined which should be unmapped: objStack_18 */

void func_002C734C(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 extraout_r1;
  bool bVar5;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  uVar2 = *(uint *)(param_1[0x10a] + (char)param_1[0x104] * 8 + 4);
  pcVar4 = *(code **)(param_1[0x10a] + (char)param_1[0x104] * 8);
  if ((uVar2 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(param_1[0x108] + ((int)uVar2 >> 1)));
  }
  (*pcVar4)((int)(param_1[0x108]) + ((int)uVar2 >> 1));
  uVar2 = param_1[0x107];
  iVar3 = param_1[0x103] + 1;
  param_1[0x103] = iVar3;
  if (uVar2 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(uVar2,1,fparam_0);
  }
  func_002C713C((int)param_1);
  *(undefined1 *)((int)param_1 + 0x469) = 0;
  func_002C6F50((int)param_1,extraout_r1,uVar2);
  objStack_18[0] = 0;
  objStack_18[1] = 0;
  func_0014E2A0((int)param_1,param_1[0x10f],param_1 + 0x139,DAT_002c7498,0,0);
  cVar1 = *(char *)((int)param_1 + 0x469);
  bVar5 = cVar1 == '\x01';
  if (bVar5) {
    cVar1 = (char)param_1[0x104];
  }
  if (bVar5 && cVar1 == '\x01') {
    *(bool *)(param_1 + 0x11a) = (char)param_1[0x11a] == '\0';
    objStack_18[0] = DAT_002c74b0;
    objStack_18[1] = (uint)s_SE_NeedleRoller_HIT_002c749c;
    func_0014DBF4(param_1,(int *)objStack_18,param_1[0x10f] + 4,0);
    *(undefined2 *)(param_1 + 0x119) = *(undefined2 *)((int)param_1 + 0x466);
  }
  iVar3 = func_00521184((int)param_1);
  objStack_18[0] = iVar3 - param_1[0xfa];
  param_1[0x12a] = DAT_002c74b4;
  uVar2 = func_0058E2B8((int *)objStack_18);
  if (0x3fffffff < uVar2) {
    param_1[0x129] = (int)ALBW_AS_U32(-ALBW_AS_F32(param_1[0x10d]));
    param_1[299] = (int)ALBW_AS_U32(-ALBW_AS_F32(param_1[0x10c]));
    return;
  }
  param_1[0x129] = param_1[0x10d];
  param_1[299] = param_1[0x10c];
  return;
}

