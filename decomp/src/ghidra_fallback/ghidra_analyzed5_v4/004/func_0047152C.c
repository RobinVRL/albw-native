#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00583794(int *param_1,int *param_2);
extern int DAT_004716ec;
extern int DAT_004716f0;
extern undefined4 DAT_004716f4;
extern undefined DAT_004716f8;
extern int DAT_004716fc;
extern undefined DAT_00471700;
extern undefined DAT_00471704;
extern int *DAT_0047170c;
extern int *DAT_00471710;
extern int *DAT_00471730;
extern int DAT_00471734;
extern char s_Action_00471728[];
extern char s_cmn_action_leave_00471714[];

// USA 0047152C <- EU 00471504 (Ghidra, non-matching)
// GLOBAL DAT_004716ec int
// GLOBAL DAT_004716f0 int
// GLOBAL DAT_004716f4 undefined4
// GLOBAL DAT_004716f8 undefined
// GLOBAL DAT_004716fc int
// GLOBAL DAT_00471700 undefined
// GLOBAL DAT_00471704 undefined
// GLOBAL DAT_0047170c int *
// GLOBAL DAT_00471710 int *
// GLOBAL DAT_00471730 int *
// GLOBAL DAT_00471734 int
// GLOBAL s_Action_00471728 string
// GLOBAL s_cmn_action_leave_00471714 string

int * func_0047152C(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(int *)(albw_frame + 0x8))
  #define local_94 (*(undefined2 * *)(albw_frame + 0xc))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x10))
  #define local_8c ((undefined2 *)(albw_frame + 0x14))
  #define local_4e (*(undefined2 *)(albw_frame + 0x52))
  #define local_48 ((int *)(albw_frame + 0x58))
  #define local_34 (*(undefined * *)(albw_frame + 0x6c))
  #define local_30 (*(int *)(albw_frame + 0x70))
  #define pcStack_2c (*(char * *)(albw_frame + 0x74))
  #define iStack_28 (*(int *)(albw_frame + 0x78))
  #define local_24 (*(char * *)(albw_frame + 0x7c))
  piVar2 = func_004B9A10(param_1,0);
  iVar4 = DAT_004716ec;
  iVar6 = DAT_004716ec + -0x54;
  piVar2[0xe] = DAT_004716ec;
  *piVar2 = iVar6;
  iVar6 = DAT_004716f0;
  *(undefined2 *)(piVar2 + 0x1d) = 0;
  *(undefined2 *)((int)piVar2 + 0x76) = 0xffff;
  piVar2[0x1e] = iVar6;
  piVar2[0x1f] = 0;
  (**(code **)(iVar4 + -0x1c))(piVar2,DAT_004716f4,0);
  piVar7 = (int *)piVar2[7];
  func_0016773C((int)piVar7,3);
  iVar4 = DAT_004716fc;
  local_34 = &DAT_004716f8;
  local_48[4] = DAT_004716fc;
  func_00166C20(piVar7,0,local_48 + 4,0);
  local_34 = &DAT_00471700;
  local_48[4] = iVar4;
  func_00166C20(piVar7,1,local_48 + 4,0);
  local_34 = &DAT_00471704;
  local_48[4] = iVar4;
  func_00166C20(piVar7,2,local_48 + 4,0);
  piVar2[10] = (int)piVar7;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar7;
  *(undefined2 *)((int)piVar2 + 0x2e) = 1;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  piVar2[0x1f] = (int)piVar7;
  *(undefined2 *)((int)piVar2 + 0x76) = 2;
  piVar1 = DAT_0047170c;
  *(undefined2 *)(piVar2 + 0x1d) = 0;
  piVar7 = (int *)func_005229AC(piVar7,piVar1);
  piVar1 = DAT_00471710;
  if (piVar7 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar7 + 8))(piVar7);
    do {
      if (piVar3 == piVar1) {
        if (piVar7 == (int *)0x0) {
          return piVar2;
        }
        local_48[1] = 0;
        local_48[0] = 0;
        local_30 = iVar4;
        pcStack_2c = s_cmn_action_leave_00471714;
        iStack_28 = iVar4;
        local_24 = s_Action_00471728;
        local_48[2] = 0;
        local_48[3] = 0xffffffff;
        iVar4 = func_005826A4(*DAT_00471730,local_48,&iStack_28,&local_30);
        if (iVar4 == 0) {
          return piVar2;
        }
        local_94 = local_8c;
        uStack_90 = 0x20;
        local_4e = 0;
        local_98 = DAT_00471734;
        local_8c[0] = 0;
        uVar5 = func_00583794(local_48,&local_98);
        (**(code **)(local_98 + 8))(&local_98);
        (**(code **)(*piVar7 + 0x60))(piVar7,local_94,0,uVar5 & 0xffff);
        return piVar2;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
  return piVar2;
}

