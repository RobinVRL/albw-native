#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_00149BD4(byte *param_1,int param_2);
extern int func_001DC928(int param_1,int param_2);
extern int func_001DC9C8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001E1ECC(int param_1);
extern int func_001E45E0(undefined1 *param_1);
extern void func_001FE4C0(int param_1,float fparam_0);
extern int func_0028C02C(int param_1,int param_2);
extern int func_0028C920(int param_1,int param_2,undefined4 *param_3,float fparam_0,float fparam_1);
extern int func_0028F370(int param_1);
extern int func_0028F7B0(int param_1,uint param_2);
extern int func_002927A0(int param_1,int param_2,float *param_3);
extern int func_002D12B4(int param_1);
extern int func_002D16D0(int param_1,int param_2);
extern int func_002D3B28(int param_1,int param_2);
extern int func_002D3C74(int param_1);
extern int func_002D4188(int param_1,int param_2);
extern int func_002D4434(int *param_1);
extern int func_0031E2D0(int param_1);
extern int func_00340704(int param_1);
extern int func_00361C34(int param_1);
extern int func_004B083C(void);
extern int func_005401C8(int param_1);
extern int *DAT_001dbc6c;
extern undefined4 *DAT_001dbc70;
extern undefined4 *DAT_001dbc74;
extern int *DAT_001dbc78;
extern undefined4 DAT_001dbc7c;
extern undefined4 DAT_001dbc80;
extern float DAT_001dbc84;
extern float DAT_001dbc88;
extern undefined4 DAT_001dbc8c;
extern int *DAT_001dbc90;

// USA 001DB8D8 <- EU 001DB8D8 (Ghidra, non-matching)
// GLOBAL DAT_001dbc6c int *
// GLOBAL DAT_001dbc70 undefined4 *
// GLOBAL DAT_001dbc74 undefined4 *
// GLOBAL DAT_001dbc78 int *
// GLOBAL DAT_001dbc7c undefined4
// GLOBAL DAT_001dbc80 undefined4
// GLOBAL DAT_001dbc84 float
// GLOBAL DAT_001dbc88 float
// GLOBAL DAT_001dbc8c undefined4
// GLOBAL DAT_001dbc90 int *

undefined4 func_001DB8D8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float fparam_1;
  float fparam_0;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  float in_s0;
  undefined4 uVar11;
  undefined8 uVar12;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(char *)(iVar3 + 0x6be) != '\0') {
    iVar4 = func_001E1ECC(*DAT_001dbc6c);
    puVar7 = DAT_001dbc70;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = func_0010983C(*DAT_001dbc70,iVar4);
    }
    puVar1 = DAT_001dbc74;
    iVar10 = 0;
    *DAT_001dbc74 = 1;
    do {
      (**(code **)(**(int **)(iVar3 + iVar10 * 4 + 0x630) + 8))(*(int **)(iVar3 + iVar10 * 4 + 0x630));
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x19);
    *puVar1 = 0xffffffff;
    if (iVar4 != 1) {
      func_0010983C(*puVar7,iVar4);
    }
  }
  if (*(char *)(*DAT_001dbc78 + 0x18) == '\a' || *(char *)(*DAT_001dbc78 + 0x18) == '%') {
    func_00149BD4((byte *)(iVar3 + 0x598),
                  (uint)*(byte *)(iVar3 + 0x599) - (uint)*(byte *)(iVar3 + 0x598));
  }
  else if (((*(char *)(iVar3 + 0x598) == '\0') && (*(char *)(iVar3 + 0x6c8) != '\0')) &&
          (*(short *)(*(int *)(iVar3 + 0x614) + 0x42) != 0x28)) {
    uVar5 = (uint)(*(byte *)(iVar3 + 0x599) >> 3);
    if (uVar5 < 3) {
      uVar5 = 3;
    }
    func_00149BD4((byte *)(iVar3 + 0x598),(uVar5 << 0x1a) >> 0x18);
  }
  iVar4 = 0;
  *(undefined1 *)(iVar3 + 0x6c8) = 0;
  do {
    func_002D4434((int *)(iVar3 + 0x694 + iVar4 * 0xc));
    uVar11 = DAT_001dbc7c;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  if (*(short *)(*(int *)(iVar3 + 0x614) + 0x42) == 0x28) {
    iVar4 = *(int *)(iVar3 + 0x604);
    uVar6 = *(undefined4 *)(iVar4 + 0x6c);
    uVar8 = *(undefined4 *)(iVar4 + 0x70);
    *(undefined4 *)(iVar3 + 0x368) = *(undefined4 *)(iVar4 + 0x68);
    *(undefined4 *)(iVar3 + 0x36c) = uVar6;
    *(undefined4 *)(iVar3 + 0x370) = uVar8;
    uVar6 = *(undefined4 *)(iVar4 + 0x68);
    piVar9 = *(int **)(iVar4 + 0x6c);
    *(undefined4 *)(iVar3 + 0x3d8) = *(undefined4 *)(iVar4 + 0x70);
    *(undefined4 *)(iVar3 + 0x3d0) = uVar6;
    *(int **)(iVar3 + 0x3d4) = piVar9;
    *(undefined4 *)(iVar3 + 0x3dc) = uVar11;
    *(undefined4 *)(iVar3 + 0x3e0) = uVar11;
    *(undefined4 *)(iVar3 + 0x3e4) = uVar11;
    *(undefined4 *)(iVar3 + 1000) = 0;
  }
  else {
    uVar6 = param_2[1];
    uVar8 = param_2[2];
    *(undefined4 *)(iVar3 + 0x368) = *param_2;
    *(undefined4 *)(iVar3 + 0x36c) = uVar6;
    *(undefined4 *)(iVar3 + 0x370) = uVar8;
    uVar6 = param_2[1];
    piVar9 = (int *)param_2[2];
    *(undefined4 *)(iVar3 + 0x3d0) = *param_2;
    *(undefined4 *)(iVar3 + 0x3d4) = uVar6;
    *(int **)(iVar3 + 0x3d8) = piVar9;
    *(undefined4 *)(iVar3 + 0x3dc) = uVar11;
    *(undefined4 *)(iVar3 + 0x3e0) = uVar11;
    *(undefined4 *)(iVar3 + 0x3e4) = uVar11;
    *(undefined4 *)(iVar3 + 1000) = param_2[6];
  }
  bVar2 = func_005401C8(*(int *)(iVar3 + 0x614));
  uVar12 = CONCAT44(DAT_001dbc80,uVar11);
  if (bVar2) {
    *(undefined4 *)(iVar3 + 0x5a8) = DAT_001dbc80;
    func_001E45E0((undefined1 *)(iVar3 + 0x5ac));
    func_001FE4C0(*(int *)(iVar3 + 0x5f4),in_s0);
  }
  *(undefined4 *)(iVar3 + 0x620) = 0;
  *(undefined1 *)(iVar3 + 0x6bb) = 0;
  *(undefined1 *)(iVar3 + 0x6bc) = 1;
  func_002D3C74(*(int *)(iVar3 + 0x5f8));
  func_0031E2D0(*(int *)(iVar3 + 0x5fc));
  func_00340704(*(int *)(iVar3 + 0x604));
  func_00361C34(*(int *)(iVar3 + 0x608));
  func_0028F370(*(int *)(iVar3 + 0x614));
  func_002D12B4(*(int *)(iVar3 + 0x618));
  func_0028C02C(*(int *)(iVar3 + 0x600),0);
  func_002D16D0(*(int *)(iVar3 + 0x604),0);
  iVar4 = 0;
  do {
    iVar10 = *(int *)(iVar3 + iVar4 * 4 + 0x630);
    if (iVar10 != 0) {
      func_002D4188(iVar10,0);
    }
    fparam_0 = DAT_001dbc88;
    fparam_1 = DAT_001dbc84;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x19);
  puVar7 = (undefined4 *)(iVar3 + 0x3d0);
  *(undefined4 *)(*(int *)(iVar3 + 0x600) + 0xac) = 0;
  func_0028C920(*(int *)(iVar3 + 0x600),0,puVar7,fparam_0,fparam_1);
  func_001DC9C8(iVar3,extraout_r1,puVar7,piVar9);
  *(undefined1 *)(iVar3 + 0x6b9) = 1;
  *(undefined1 *)(iVar3 + 0x6ba) = 1;
  func_0028C02C(*(int *)(iVar3 + 0x600),1);
  *(undefined1 *)(iVar3 + 0x6bd) = 0;
  uVar11 = DAT_001dbc8c;
  *(undefined1 *)(iVar3 + 0x6c1) = 0;
  *(int *)(iVar3 + 0x6d0) = (int)((ulonglong)uVar12 >> 0x20);
  *(undefined4 *)(iVar3 + 0x720) = uVar11;
  *(int *)(iVar3 + 0x724) = (int)uVar12;
  *(undefined1 *)(iVar3 + 0x6c3) = 0;
  *(undefined1 *)(iVar3 + 0x6c4) = 0;
  *(undefined1 *)(iVar3 + 0x6c5) = 0;
  *(undefined1 *)(iVar3 + 0x6c6) = 0;
  *(undefined1 *)(iVar3 + 0x6c7) = 0;
  *(undefined4 *)(iVar3 + 0x71c) = *(undefined4 *)(iVar3 + 1000);
  func_002D3B28(*(int *)(iVar3 + 0x5f8),(uint)(*(int *)(iVar3 + 0x4cc) != 0));
  iVar4 = func_004B083C();
  if ((iVar4 == 0) && (*(char *)(*DAT_001dbc90 + 0x25) == '\0')) {
    return func_001DC928(iVar3,1);
  }
  func_0028F7B0(*(int *)(iVar3 + 0x614),0x90);
  return func_002927A0(*(int *)(iVar3 + 0x614),*(int *)(iVar3 + 0x608),(float *)0x1);
}

