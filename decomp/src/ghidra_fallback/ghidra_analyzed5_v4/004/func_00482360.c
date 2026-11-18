#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0012CBA4(int param_1);
extern int func_0012CE90(undefined4 *param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_002313DC(int param_1);
extern undefined4 DAT_00482618;
extern undefined4 DAT_0048261c;
extern undefined DAT_00482620;
extern int DAT_00482624;
extern undefined DAT_0048265c;
extern undefined DAT_00482668;
extern char s_DecideOut_00482650[];
extern char s_Decide_00482648[];
extern char s_InWait_00482660[];
extern char s_KeyOn_00482630[];
extern char s_L_SetName_00_00482638[];
extern char s_OutWait_00482670[];
extern char s_TouchOn_00482628[];

// USA 00482360 <- EU 00482338 (Ghidra, non-matching)
// GLOBAL DAT_00482618 undefined4
// GLOBAL DAT_0048261c undefined4
// GLOBAL DAT_00482620 undefined
// GLOBAL DAT_00482624 int
// GLOBAL DAT_0048265c undefined
// GLOBAL DAT_00482668 undefined
// GLOBAL s_DecideOut_00482650 string
// GLOBAL s_Decide_00482648 string
// GLOBAL s_InWait_00482660 string
// GLOBAL s_KeyOn_00482630 string
// GLOBAL s_L_SetName_00_00482638 string
// GLOBAL s_OutWait_00482670 string
// GLOBAL s_TouchOn_00482628 string

undefined4 * func_00482360(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  puVar5 = func_0012CE90(param_1);
  uVar2 = DAT_00482618;
  *(undefined2 *)(puVar5 + 0x24) = 0;
  *(undefined2 *)((int)puVar5 + 0x92) = 0xffff;
  puVar5[0x25] = uVar2;
  puVar5[0x26] = 0;
  *(undefined2 *)(puVar5 + 0x27) = 0;
  *(undefined2 *)((int)puVar5 + 0x9e) = 0xffff;
  uVar3 = DAT_0048261c;
  puVar5[0x28] = uVar2;
  puVar5[0x29] = 0;
  *(undefined1 *)(puVar5 + 0x2a) = 0;
  *puVar5 = uVar3;
  *(undefined1 *)((int)puVar5 + 0xa9) = 0;
  *(undefined1 *)((int)puVar5 + 0xaa) = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x74);
  piVar7 = (int *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    piVar7 = func_00168434(puVar6);
  }
  func_00168100(piVar7,param_2,param_3);
  puVar5[7] = piVar7;
  puVar5[6] = puVar5[6] | 0x10;
  func_0016773C((int)piVar7,8);
  iVar4 = DAT_00482624;
  local_34 = &DAT_00482620;
  local_38 = DAT_00482624;
  func_00166C20(piVar7,0,&local_38,0);
  local_34 = s_TouchOn_00482628;
  local_38 = iVar4;
  func_00166C20(piVar7,1,&local_38,0);
  local_34 = s_KeyOn_00482630;
  local_38 = iVar4;
  func_00166C20(piVar7,2,&local_38,0);
  local_2c = s_L_SetName_00_00482638;
  local_30 = iVar4;
  (**(code **)(*param_3 + 8))(param_3);
  (**(code **)(*param_3 + 8))(param_3);
  pcVar9 = (char *)param_3[1];
  (**(code **)(local_30 + 8))(&local_30);
  bVar1 = true;
  if (pcVar9 != local_2c) {
    iVar8 = 0;
    do {
      if (*(char *)(param_3[1] + iVar8) != local_2c[iVar8]) break;
      if (*(char *)(param_3[1] + iVar8) == '\0') goto LAB_004824bc;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x40001);
    bVar1 = false;
  }
LAB_004824bc:
  local_28 = iVar4;
  if (bVar1) {
    local_24 = s_Decide_00482648;
    func_00166C20(piVar7,3,&local_28,0);
  }
  else {
    local_24 = s_DecideOut_00482650;
    func_00166C20(piVar7,3,&local_28,0);
  }
  local_34 = &DAT_0048265c;
  local_38 = iVar4;
  func_00166C20(piVar7,4,&local_38,0);
  local_34 = s_InWait_00482660;
  local_38 = iVar4;
  func_00166C20(piVar7,5,&local_38,0);
  local_34 = &DAT_00482668;
  local_38 = iVar4;
  func_00166C20(piVar7,6,&local_38,0);
  local_34 = s_OutWait_00482670;
  local_38 = iVar4;
  func_00166C20(piVar7,7,&local_38,0);
  puVar5[10] = piVar7;
  *(undefined2 *)((int)puVar5 + 0x22) = 0;
  *(undefined2 *)(puVar5 + 8) = 0;
  puVar5[0xd] = piVar7;
  *(undefined2 *)((int)puVar5 + 0x2e) = 4;
  *(undefined2 *)(puVar5 + 0xb) = 0;
  puVar5[0x10] = piVar7;
  *(undefined2 *)((int)puVar5 + 0x3a) = 1;
  *(undefined2 *)(puVar5 + 0xe) = 1;
  puVar5[0x13] = piVar7;
  *(undefined2 *)((int)puVar5 + 0x46) = 1;
  *(undefined2 *)(puVar5 + 0x11) = 3;
  puVar5[0x16] = piVar7;
  *(undefined2 *)((int)puVar5 + 0x52) = 2;
  *(undefined2 *)(puVar5 + 0x14) = 0;
  puVar5[0x19] = piVar7;
  *(undefined2 *)((int)puVar5 + 0x5e) = 3;
  *(undefined2 *)(puVar5 + 0x17) = 0;
  puVar5[0x26] = piVar7;
  *(undefined2 *)((int)puVar5 + 0x92) = 6;
  *(undefined2 *)(puVar5 + 0x24) = 0;
  func_0012CBA4((int)puVar5);
  *(ushort *)(puVar5[5] + 0x16) = *(ushort *)(puVar5[5] + 0x16) & 0xffbf;
  func_002313DC((int)(puVar5 + 8));
  return puVar5;
}

