// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_004265BC(undefined4 param_1);
extern int func_004267DC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4);
extern int func_00426EFC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4);
extern int func_00556A9C();
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_00438278;
extern int DAT_0043827c;
extern int *DAT_00438280;
extern int *DAT_004382ac;
extern char s_Collect_00438284[];
extern char s_cl_instruction_kinstaFlagOn_01_0043828c[];

// USA 00438078 <- EU 00438058 (Ghidra, non-matching)
// GLOBAL DAT_00438278 int
// GLOBAL DAT_0043827c int
// GLOBAL DAT_00438280 int *
// GLOBAL DAT_004382ac int *
// GLOBAL s_Collect_00438284 string
// GLOBAL s_cl_instruction_kinstaFlagOn_01_0043828c string

void func_00438078(int param_1,uint param_2)

{
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *in_r2;
  undefined1 *in_r3;
  int *piVar8;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(int *)(albw_frame + 0x0))
  #define local_9c (*(char * *)(albw_frame + 0x4))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x8))
  #define local_94 ((char *)(albw_frame + 0xc))
  #define uStack_55 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_48 ((int *)(albw_frame + 0x58))
  #define local_30 (*(int *)(albw_frame + 0x70))
  #define local_2c (*(char * *)(albw_frame + 0x74))
  #define local_28 (*(int *)(albw_frame + 0x78))
  #define local_24 (*(char * *)(albw_frame + 0x7c))
  if (0x19 < param_2) {
    return;
  }
  piVar8 = &local_a0;
  uVar4 = func_004265BC(param_2);
  fparam_0 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  func_002316CC(param_1 + 0x74,fparam_0);
  piVar7 = DAT_00438280;
  iVar6 = DAT_00438278;
  local_48[3] = 0xffffffff;
  local_9c = local_94;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  uStack_98 = 0x40;
  uStack_55 = 0;
  local_94[0] = '\0';
  local_a0 = DAT_0043827c;
  if (*(int *)(param_1 + 0x94) != 0) {
    func_004267DC((int)&local_a0,uVar4,(uint)in_r2,in_r3);
    local_2c = s_Collect_00438284;
    local_30 = iVar6;
    in_r2 = &local_30;
    iVar5 = func_005826A4(*piVar7,local_48,in_r2,&local_a0);
    in_r3 = (undefined1 *)piVar8;
    if (iVar5 != 0) {
      func_001788DC(*(int *)(param_1 + 0x8c),local_48);
      iVar5 = *(int *)(param_1 + 0x8c);
      piVar8 = *(int **)(param_1 + 0x94);
      in_r2 = (int *)0x0;
      *(undefined2 *)(iVar5 + 0x32) = 0;
      *(undefined1 *)(iVar5 + 0x3d) = 0;
      in_r3 = (undefined1 *)(uint)(*(ushort *)(*(int *)(param_1 + 0x8c) + 0x20) >> 1);
      (**(code **)(*piVar8 + 0x60))(piVar8,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 8));
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    func_00426EFC((int)&local_a0,uVar4,(uint)in_r2,in_r3);
    local_24 = s_Collect_00438284;
    local_28 = iVar6;
    iVar5 = func_005826A4(*piVar7,local_48,&local_28,&local_a0);
    if (iVar5 != 0) {
      local_2c = s_cl_instruction_kinstaFlagOn_01_0043828c;
      local_30 = iVar6;
      (**(code **)(local_a0 + 8))(&local_a0);
      (**(code **)(local_a0 + 8))(&local_a0);
      pcVar2 = local_9c;
      (**(code **)(local_30 + 8))(&local_30);
      bVar1 = true;
      if (pcVar2 != local_2c) {
        iVar6 = 0;
        do {
          if (local_9c[iVar6] != local_2c[iVar6]) break;
          if (local_9c[iVar6] == '\0') goto LAB_00438218;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x40001);
        bVar1 = false;
      }
LAB_00438218:
      if (bVar1) {
        iVar6 = *(int *)(param_1 + 0x90);
        bVar3 = func_00556A9C(*DAT_004382ac);
        *(ushort *)(iVar6 + 0x60) = (ushort)bVar3;
      }
      func_001788DC(*(int *)(param_1 + 0x90),local_48);
      iVar6 = *(int *)(param_1 + 0x90);
      piVar7 = *(int **)(param_1 + 0x98);
      *(undefined2 *)(iVar6 + 0x32) = 0;
      *(undefined1 *)(iVar6 + 0x3d) = 0;
      (**(code **)(*piVar7 + 0x60))
                (piVar7,*(undefined4 *)(*(int *)(param_1 + 0x90) + 8),0,
                 *(ushort *)(*(int *)(param_1 + 0x90) + 0x20) >> 1);
    }
  }
  return;
}

