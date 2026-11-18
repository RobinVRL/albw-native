#include "ghidra_types.h"

extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004CE68C(int param_1,uint param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int DAT_0023757c;
extern char s_SE_Grass_BREAK_002375c4[];
extern char s_SE_Grass_BREAK_ICE_002375b0[];
extern char s_SE_Grass_BURN_002375a0[];
extern char s_SE_Grass_CUT_00237580[];
extern char s_SE_Grass_LIFT_00237590[];

// USA 00237288 <- EU 00237288 (Ghidra, non-matching)
// GLOBAL DAT_0023757c int
// GLOBAL s_SE_Grass_BREAK_002375c4 string
// GLOBAL s_SE_Grass_BREAK_ICE_002375b0 string
// GLOBAL s_SE_Grass_BURN_002375a0 string
// GLOBAL s_SE_Grass_CUT_00237580 string
// GLOBAL s_SE_Grass_LIFT_00237590 string

undefined4 func_00237288(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int unaff_r8;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  if (param_3 == 2) {
    unaff_r8 = 1;
  }
  if (param_3 != 2) {
    unaff_r8 = 0;
  }
  pcVar6 = (char *)param_1[0x18d];
  if (param_2 < (uint)param_1[0x18c]) {
    pcVar6 = pcVar6 + param_2 * 0x104;
  }
  iVar8 = *(int *)(pcVar6 + 8);
  uVar5 = param_2;
  if (param_2 < (uint)param_1[0x11e]) {
    uVar5 = param_1[0x120];
  }
  uVar2 = param_1[0x184];
  if (param_2 < (uint)param_1[0x11e]) {
    iVar7 = *(int *)(uVar5 + param_2 * 4);
  }
  else {
    iVar7 = 0;
  }
  if (unaff_r8 == 0) {
    if (*(short *)(iVar7 + 0x2a) == 0) {
      if (param_2 < uVar2) {
        iVar3 = *(int *)(param_1[0x186] + param_2 * 4);
      }
      else {
        iVar3 = 0;
      }
      func_003521F0(iVar3 + 4,0);
    }
    else {
      if (param_2 < uVar2) {
        iVar3 = *(int *)(param_1[0x186] + param_2 * 4);
      }
      else {
        iVar3 = 0;
      }
      func_003521F0(iVar3 + 4,2);
    }
  }
  else {
    if (param_2 < uVar2) {
      iVar3 = *(int *)(param_1[0x186] + param_2 * 4);
    }
    else {
      iVar3 = 0;
    }
    func_003521F0(iVar3 + 4,1);
  }
  if (*pcVar6 == '\x03') {
    if (param_2 < (uint)param_1[0x184]) {
      piVar4 = *(int **)(param_1[0x186] + param_2 * 4);
    }
    else {
      piVar4 = (int *)0x0;
    }
    (**(code **)(*piVar4 + 0x40))(piVar4);
    iVar3 = *(int *)(pcVar6 + 0x10);
    *(undefined1 *)(iVar3 + 0x3d) = 1;
    *(undefined4 *)(iVar3 + 0x39) = *(undefined4 *)(pcVar6 + 0xf8);
    iVar3 = *(int *)(pcVar6 + 0x10);
    *(undefined1 *)(iVar3 + 0x42) = 1;
    *(undefined4 *)(iVar3 + 0x3e) = *(undefined4 *)(pcVar6 + 0xfc);
    func_004CE68C(*(int *)(pcVar6 + 8),0,*(int *)(pcVar6 + 0x10));
    (**(code **)(**(int **)(pcVar6 + 8) + 0x10))(*(int **)(pcVar6 + 8),pcVar6[0xea] + '(');
  }
  else {
    if (param_2 < (uint)param_1[0x184]) {
      piVar4 = *(int **)(param_1[0x186] + param_2 * 4);
    }
    else {
      piVar4 = (int *)0x0;
    }
    (**(code **)(*piVar4 + 0x30))(piVar4);
    func_004CE68C(*(int *)(pcVar6 + 8),0,*(int *)(pcVar6 + 0x10));
    (**(code **)(**(int **)(pcVar6 + 8) + 0x10))
              (*(int **)(pcVar6 + 8),(uint)(byte)pcVar6[0xea] + unaff_r8 * 2 + 0x24 & 0xff);
  }
  pcVar6[0xe8] = '\0';
  pcVar6[0xe9] = '\0';
  if (unaff_r8 == 0) {
    cVar1 = '\x05';
  }
  else {
    cVar1 = '\x02';
  }
  pcVar6[0x100] = '\0';
  *pcVar6 = cVar1;
  (**(code **)(*param_1 + 0x6c))(param_1,param_2);
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  if (iVar7 != 0) {
    func_004D8AEC((float *)(iVar8 + 0x80),0,(float *)(iVar7 + 4));
  }
  if (iVar8 != 0) {
    func_004CEAF0(iVar8);
  }
  if (iVar7 != 0) {
    switch(param_3) {
    case 0:
      local_30 = DAT_0023757c;
      local_2c = s_SE_Grass_BREAK_002375c4;
      return func_0014DBF4(param_1,&local_30,iVar7 + 4,0);
    case 1:
      local_30 = DAT_0023757c;
      local_2c = s_SE_Grass_CUT_00237580;
      func_0014DBF4(param_1,&local_30,iVar7 + 4,0);
      break;
    case 2:
      local_30 = DAT_0023757c;
      local_2c = s_SE_Grass_BURN_002375a0;
      return func_0014DBF4(param_1,&local_30,iVar7 + 4,0);
    case 3:
      local_30 = DAT_0023757c;
      local_2c = s_SE_Grass_BREAK_ICE_002375b0;
      return func_0014DBF4(param_1,&local_30,iVar7 + 4,0);
    case 4:
      local_30 = DAT_0023757c;
      local_2c = s_SE_Grass_LIFT_00237590;
      return func_0014DBF4(param_1,&local_30,iVar7 + 4,0);
    }
  }
  return 0;
}

