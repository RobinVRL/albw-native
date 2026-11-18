#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014F510(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014FC94(int param_1,int param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_001d41b0;
extern uint *DAT_001d41b4;
extern undefined4 DAT_001d41b8;
extern undefined4 *DAT_001d41bc;

// USA 001D3F5C <- EU 001D3F5C (Ghidra, non-matching)
// GLOBAL DAT_001d41b0 int *
// GLOBAL DAT_001d41b4 uint *
// GLOBAL DAT_001d41b8 undefined4
// GLOBAL DAT_001d41bc undefined4 *

undefined4 func_001D3F5C(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  uint in_fpscr;
  float fparam_0;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 0x470) + *(char *)(param_1 + 0x458) * 8 + 4);
  pcVar6 = *(code **)(*(int *)(param_1 + 0x470) + *(char *)(param_1 + 0x458) * 8);
  if ((uVar3 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(int *)(*(int *)(param_1 + 0x468) + ((int)uVar3 >> 1)));
  }
  (*pcVar6)((int)(*(int *)(param_1 + 0x468)) + ((int)uVar3 >> 1));
  iVar4 = *(int *)(param_1 + 0x454) + 1;
  *(int *)(param_1 + 0x454) = iVar4;
  if (*(int *)(param_1 + 0x464) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x464),1,fparam_0);
  }
  func_004D8240((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 0x488),*(uint *)(param_1 + 1000),
                *(float *)(param_1 + 0x478));
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  if (*(char *)(param_1 + 0x48d) == '\0') {
    iVar4 = *(int *)(param_1 + 0x438);
    uVar7 = *(undefined4 *)(param_1 + 0x3d4);
    uVar8 = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(iVar4 + 8) = uVar7;
    *(undefined4 *)(iVar4 + 0xc) = uVar8;
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x3d0);
    uVar9 = *(undefined4 *)(param_1 + 0x3d8);
    iVar4 = func_00520FC0();
    uVar7 = *(undefined4 *)(iVar4 + 4);
    iVar4 = *(int *)(param_1 + 0x438);
    *(undefined4 *)(iVar4 + 4) = uVar8;
    *(undefined4 *)(iVar4 + 8) = uVar7;
    *(undefined4 *)(iVar4 + 0xc) = uVar9;
  }
  func_004356B4(*(int **)(param_1 + 0x438));
  piVar1 = DAT_001d41b0;
  if ((*(char *)(param_1 + 0x48d) == '\0') &&
     (puVar5 = (undefined4 *)func_0052FBA0(*DAT_001d41b0 + 0x3dbbc,*(uint *)(param_1 + 0x50)),
     uVar7 = DAT_001d41b8, puVar2 = DAT_001d41b4, puVar5 != (undefined4 *)0x0)) {
    if (((*DAT_001d41b4 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001d41b4), iVar4 != 0)) {
      *DAT_001d41bc = uVar7;
    }
    iVar4 = (**(code **)*puVar5)(puVar5,DAT_001d41bc);
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      if ((*(char *)(param_1 + 0x48d) == '\0') &&
         (puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0x50)),
         puVar5 != (undefined4 *)0x0)) {
        if (((*puVar2 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001d41b4), iVar4 != 0)) {
          *DAT_001d41bc = uVar7;
        }
        iVar4 = (**(code **)*puVar5)(puVar5,DAT_001d41bc);
        if (iVar4 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
      }
      else {
        puVar5 = (undefined4 *)0x0;
      }
      if (*(char *)((int)puVar5 + 0x97b) != '\0') {
        func_0014FC94(param_1,*(int *)(param_1 + 0x44c));
      }
    }
  }
  return func_0014F510(param_1,*(undefined4 *)(param_1 + 0x438),param_1 + 0x428,0x1800,0,0);
}

