#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0012D18C(int param_1);
extern int func_0012DF9C(int *param_1);
extern int func_0012F77C(int *param_1);
extern int func_0013B020(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0013B418(int *param_1);
extern int func_0014A168(int param_1,undefined4 param_2,int param_3);
extern int func_0014A250(int *param_1);
extern int func_001664CC(int *param_1);
extern int func_0016B550(int *param_1);
extern int func_0016E5A0(undefined4 *param_1,int param_2,int param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3);
extern int func_001B8DCC(int *param_1);
extern int func_001E06D0(int param_1,int param_2,int *param_3);
extern int func_00232CA8(int param_1,int param_2);
extern int func_002330F8(int *param_1);
extern int func_002610A0(int param_1,undefined4 param_2);
extern int func_00272570(int *param_1);
extern int func_002C2574(int *param_1);
extern int func_002C3034(int *param_1);
extern int func_002E2F78(int param_1,int *param_2);
extern int func_002E38E0(int *param_1);
extern int func_003239BC(void);
extern int func_004AB4D0(int *param_1);
extern int func_004AE0E0(int *param_1);
extern int func_004C870C(int param_1,int *param_2);
extern int func_004C8E10(int *param_1);
extern int func_00503A8C(int param_1);
extern int func_00503BE4(int *param_1);
extern int func_0050450C(int *param_1);
extern int func_00504C5C(int *param_1);
extern int func_00505094(int param_1);
extern int func_00580844(int param_1);
extern uint *DAT_0014c0b0;
extern undefined4 *DAT_0014c0b4;
extern int *DAT_0014c0b8;
extern int *DAT_0014c0bc;
extern int *DAT_0014c0c0;
extern int *DAT_0014c0c4;
extern int *DAT_0014c0c8;
extern int DAT_0014c0dc;
extern int *DAT_0014c0e0;
extern int *DAT_0014c0e4;
extern int *DAT_0014c0e8;
extern int *DAT_0014c0ec;
extern int *DAT_0014c0f0;
extern int *DAT_0014c104;
extern char s_ActorCommon_szs_0014c0cc[];
extern char s_CaptureFader_0014c0f4[];
extern char s_cf_0014c0cc[];

// USA 0014BDE0 <- EU 0014BDE0 (Ghidra, non-matching)
// GLOBAL DAT_0014c0b0 uint *
// GLOBAL DAT_0014c0b4 undefined4 *
// GLOBAL DAT_0014c0b8 int *
// GLOBAL DAT_0014c0bc int *
// GLOBAL DAT_0014c0c0 int *
// GLOBAL DAT_0014c0c4 int *
// GLOBAL DAT_0014c0c8 int *
// GLOBAL DAT_0014c0dc int
// GLOBAL DAT_0014c0e0 int *
// GLOBAL DAT_0014c0e4 int *
// GLOBAL DAT_0014c0e8 int *
// GLOBAL DAT_0014c0ec int *
// GLOBAL DAT_0014c0f0 int *
// GLOBAL DAT_0014c104 int *
// GLOBAL s_cf_0014c0cc string
// GLOBAL s_CaptureFader_0014c0f4 string

void func_0014BDE0(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 extraout_r1;
  int in_r3;
  int *piVar8;
  int unaff_r6;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar2 = DAT_0014c0b4;
  puVar1 = DAT_0014c0b0;
  piVar8 = *(int **)(param_1 + 0x44);
  if (piVar8 == (int *)0x0) {
    unaff_r6 = 1;
  }
  *(undefined4 *)(param_1 + 0x224) = 0;
  if (piVar8 != (int *)0x0) {
    unaff_r6 = func_0010983C(*puVar2,piVar8);
  }
  func_00504C5C((int *)0x0);
  puVar3 = (undefined4 *)func_0010BAB4(0x4c);
  puVar6 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = (int *)func_00580844(param_1);
    iVar5 = (**(code **)(*piVar4 + 0x18))(piVar4,6);
    puVar6 = func_0016E5A0(puVar3,iVar5,1,in_s0,in_s1,in_s2,in_s3);
  }
  *(undefined4 **)(param_1 + 0x1b0) = puVar6;
  puVar3 = (undefined4 *)func_0010BAB4(0x4c);
  puVar6 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = (int *)func_00580844(param_1);
    iVar5 = (**(code **)(*piVar4 + 0x18))(piVar4,9);
    puVar6 = func_0016E5A0(puVar3,iVar5,1,in_s0,in_s1,in_s2,in_s3);
  }
  *(undefined4 **)(param_1 + 0x1b4) = puVar6;
  func_00505094(*DAT_0014c0b8);
  func_002330F8((int *)0x0);
  if (*puVar1 < 2) {
    iVar5 = *(int *)(param_1 + 0x44);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x48);
  }
  func_00232CA8(*DAT_0014c0bc,iVar5);
  func_0012F77C((int *)0x0);
  func_002E38E0((int *)0x0);
  func_002E2F78(*DAT_0014c0c0,*(int **)(param_1 + 0x44));
  func_00272570((int *)0x0);
  func_0016B550((int *)0x0);
  func_0050450C((int *)0x0);
  *(int *)(*DAT_0014c0c8 + 0x10) = *DAT_0014c0c4 + 0x10;
  func_002C2574((int *)0x0);
  iVar5 = DAT_0014c0dc;
  local_24 = s_ActorCommon_szs_0014c0cc;
  local_28 = DAT_0014c0dc;
  func_001E06D0(*DAT_0014c0e0,2,&local_28);
  func_002610A0(0,extraout_r1);
  func_001B8DCC((int *)0x0);
  func_002C3034((int *)0x0);
  func_004AE0E0((int *)0x0);
  func_0013B418((int *)0x0);
  func_0013B020(*DAT_0014c0e4,*(int **)(param_1 + 0x44),0,in_r3);
  func_004AB4D0((int *)0x0);
  func_001664CC((int *)0x0);
  func_00503BE4((int *)0x0);
  func_00503A8C(*DAT_0014c0e8);
  func_0012DF9C((int *)0x0);
  func_0012D18C(*DAT_0014c0ec);
  func_004C8E10((int *)0x0);
  func_004C870C(*DAT_0014c0f0,*(int **)(param_1 + 0x44));
  iVar7 = func_003239BC();
  local_24 = s_CaptureFader_0014c0f4;
  local_28 = iVar5;
  piVar8 = func_0010B954(iVar7,(int)&local_28,piVar8,1,0);
  *(int **)(param_1 + 0x1c0) = piVar8;
  func_0014A250((int *)0x0);
  func_0014A168(*DAT_0014c104,param_1,*(int *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (unaff_r6 != 1) {
    func_0010983C(*puVar2,unaff_r6);
  }
  return;
}

