#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0019A6DC(int param_1,int param_2,int param_3);
extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B070C(int param_1);
extern int func_00527794(int param_1,int *param_2);
extern int func_00569834(int param_1,int *param_2);
extern int func_0058791C(int param_1,int *param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_00588354(int param_1,int *param_2);
extern int *DAT_0014f4d8;
extern int DAT_0014f4dc;
extern int DAT_0014f4e0;
extern char s__s__s_0014f4e4[];
extern char s_cf_0014f4e4[];

// USA 0014F0F8 <- EU 0014F0F8 (Ghidra, non-matching)
// GLOBAL DAT_0014f4d8 int *
// GLOBAL DAT_0014f4dc int
// GLOBAL DAT_0014f4e0 int
// GLOBAL s_cf_0014f4e4 string

undefined4 func_0014F0F8(int *param_1,int *param_2,undefined1 *param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(uint * *)(albw_frame + 0xc))
  #define local_70 (*(int *)(albw_frame + 0x10))
  #define local_6c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_2d (*(undefined1 *)(albw_frame + 0x53))
  #define local_2c (*(uint * *)(albw_frame + 0x54))
  #define local_28 (*(uint * *)(albw_frame + 0x58))
  piVar2 = DAT_0014f4d8;
  uVar3 = func_00569834(*DAT_0014f4d8,param_2);
  iVar7 = DAT_0014f4e0;
  if ((uVar3 & 0x8000) != 0) {
    local_74 = (uint *)local_6c;
    local_70 = 0x40;
    uStack_2d = 0;
    local_78 = DAT_0014f4dc;
    local_2c = local_74;
    (**(code **)(*param_2 + 8))(param_2);
    uVar8 = 0;
    do {
      if (*(char *)(param_2[1] + uVar8) == '\0') {
        if ((int)uVar8 < 0x40001) goto LAB_0014f19c;
        break;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 0x40001);
    uVar8 = 0;
LAB_0014f19c:
    if (local_70 <= (int)uVar8) {
      uVar8 = local_70 - 1;
    }
    local_28 = local_2c;
    (**(code **)(*param_2 + 8))(param_2);
    func_0010E3C4(local_28,(uint *)param_2[1],uVar8);
    *(undefined1 *)((int)local_2c + uVar8) = 0;
    local_78 = iVar7;
    piVar4 = (int *)(**(code **)(*param_1 + 0x48))(param_1);
    (**(code **)(*piVar4 + 8))(piVar4);
    iVar9 = piVar4[1];
    (**(code **)(*param_2 + 8))(param_2);
    uVar8 = param_2[1];
    func_004994B0((int)&local_78,s__s__s_0014f4e4,uVar8,iVar9);
    iVar5 = func_00588354(*piVar2,&local_78);
    if (iVar5 != 0) {
      (**(code **)(local_78 + 8))(&local_78);
      func_004994B0((int)param_2,local_74,uVar8,iVar9);
      uVar3 = func_00569834(*piVar2,param_2);
      *param_3 = 1;
    }
  }
  if ((uVar3 & 0x4000) == 0) {
    if ((uVar3 & 0x2000) == 0) goto LAB_0014f3a0;
    local_74 = (uint *)local_6c;
    local_70 = 0x40;
    uStack_2d = 0;
    local_6c[0] = 0;
    local_78 = iVar7;
    uVar6 = func_004B070C((uint)*(byte *)((int)param_1 + 0x393));
    (**(code **)(*param_2 + 8))(param_2);
    uVar8 = param_2[1];
    func_004994B0((int)&local_78,s__s__s_0014f4e4,uVar8,uVar6);
    iVar7 = func_00588354(*piVar2,&local_78);
  }
  else {
    local_74 = (uint *)local_6c;
    local_70 = 0x40;
    uStack_2d = 0;
    local_6c[0] = 0;
    local_78 = iVar7;
    uVar6 = func_004B070C((uint)*(byte *)((int)param_1 + 0x392));
    (**(code **)(*param_2 + 8))(param_2);
    uVar8 = param_2[1];
    func_004994B0((int)&local_78,s__s__s_0014f4e4,uVar8,uVar6);
    iVar7 = func_00588354(*piVar2,&local_78);
  }
  if (iVar7 != 0) {
    (**(code **)(local_78 + 8))(&local_78);
    func_004994B0((int)param_2,local_74,uVar8,uVar6);
    uVar3 = func_00569834(*piVar2,param_2);
    *param_3 = 1;
  }
LAB_0014f3a0:
  iVar5 = param_1[0x101];
  iVar7 = param_1[0xff] - iVar5;
  do {
    if (iVar7 == (int)param_1 + (0x3f8 - iVar5)) {
      bVar1 = false;
LAB_0014f3f4:
      if ((uVar3 & 4) == 0) {
        if (((uVar3 & 1) != 0) && (bVar1)) {
          return 0;
        }
      }
      else {
        iVar7 = func_0058791C(*piVar2,param_2);
        if (iVar7 != 0) {
          return 0;
        }
      }
      if ((uVar3 & 8) == 0) {
        if ((((uVar3 & 2) != 0) && (iVar7 = func_00587FCC(*piVar2,param_2), iVar7 != -1)) &&
           (param_1[0x100] != 0)) {
          iVar9 = param_1[0x101];
          for (iVar5 = param_1[0xff] - iVar9; iVar5 != (int)param_1 + (0x3f8 - iVar9);
              iVar5 = *(int *)(iVar5 + iVar9 + 4) - iVar9) {
            func_0019A6DC(iVar5,iVar7,0);
          }
        }
      }
      else {
        func_002DF0B0(*piVar2,param_2,0);
      }
      return 1;
    }
    iVar9 = func_00527794(iVar7,param_2);
    if (iVar9 != 0) {
      bVar1 = true;
      goto LAB_0014f3f4;
    }
    iVar7 = *(int *)(iVar7 + iVar5 + 4) - iVar5;
  } while( true );
}

