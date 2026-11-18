#include "ghidra_types.h"

extern int func_00292010(int param_1,undefined4 *param_2,undefined4 param_3);
extern int func_0029237C(int param_1);
extern int func_00292428(int param_1);
extern int func_00292568(int param_1);
extern int func_00318BBC(int param_1,int param_2);
extern int func_004B9AF4(undefined4 *param_1,int param_2);
extern int func_004BD99C(int param_1);
extern int func_004BDF3C(undefined4 param_1);
extern int func_0051BB74(int param_1,int *param_2,int param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_0053FA48(int param_1);
extern int func_0058DFB0(int param_1);
extern int func_00665160(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00319288;
extern int *DAT_0031928c;
extern float DAT_00319290;
extern int *DAT_00319294;

// USA 00318F9C <- EU 00318F78 (Ghidra, non-matching)
// GLOBAL DAT_00319288 int *
// GLOBAL DAT_0031928c int *
// GLOBAL DAT_00319290 float
// GLOBAL DAT_00319294 int *

undefined4 func_00318F9C(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int extraout_r1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  piVar5 = DAT_00319294;
  piVar4 = DAT_0031928c;
  piVar3 = DAT_00319288;
  iVar7 = *DAT_00319288;
  switch(param_2) {
  case 0:
    sVar6 = *(short *)(param_1 + 0x4d0);
    if (sVar6 == 0) {
      func_00318BBC(param_1,2);
      iVar7 = *piVar3;
      if ((iVar7 != 0) &&
         (iVar7 = func_0052FBA0(iVar7 + 0x3dbbc,*(uint *)(param_1 + 0x4c0)), iVar7 != 0)) {
        func_004BD99C(iVar7);
      }
      local_28 = *(int *)(param_1 + 0x3d0);
      local_24 = *(undefined4 *)(param_1 + 0x3d4);
      uStack_20 = *(undefined4 *)(param_1 + 0x3d8);
      iVar7 = func_00520FC0();
      local_24 = *(undefined4 *)(iVar7 + 4);
      func_00292010(*piVar4,&local_28,*(undefined4 *)(param_1 + 1000));
      sVar6 = *(short *)(param_1 + 0x4d0);
    }
    else {
      iVar7 = *DAT_0031928c;
      if (sVar6 != 1) {
        if (sVar6 != 2) {
          return 0;
        }
        sVar6 = *(short *)(param_1 + 0x4d8);
        if ((sVar6 != 0) && (*(short *)(param_1 + 0x4d8) = sVar6 + -1, sVar6 == 1)) {
          func_00292568(iVar7);
        }
        iVar7 = *(int *)(*(int *)(param_1 + 0x414) + 0x14);
        if (*(char *)(iVar7 + 0x1c) != '\0') {
          return 0;
        }
        if (*(float *)(iVar7 + 0x10) < DAT_00319290) {
          if (DAT_00319290 < *(float *)(iVar7 + 8)) {
            return 0;
          }
        }
        else if (*(float *)(iVar7 + 8) != *(float *)(iVar7 + 0x14)) {
          return 0;
        }
        break;
      }
      iVar7 = func_0053FA48(iVar7);
      if (iVar7 == 0) {
        return 0;
      }
      sVar6 = *(short *)(param_1 + 0x4d0);
      *(undefined2 *)(param_1 + 0x4d8) = 0xdc;
    }
    *(short *)(param_1 + 0x4d0) = sVar6 + 1;
    return 0;
  case 1:
    if (*(short *)(param_1 + 0x4d0) == 0) {
      func_004B9AF4(&local_28,0x5d);
      func_0051BB74(*piVar5,&local_28,0,0);
      *(short *)(param_1 + 0x4d0) = *(short *)(param_1 + 0x4d0) + 1;
    }
    iVar7 = func_0058DFB0(*piVar5);
    if (iVar7 == 0) {
      return 0;
    }
    func_0029237C(*piVar4);
    func_00665160((undefined4 *)(param_1 + 0x49c),6);
    break;
  case 2:
    if (*(short *)(param_1 + 0x4d6) != 0) {
      return 0;
    }
    break;
  case 3:
    if (*(short *)(param_1 + 0x4d0) == 0) {
      if ((iVar7 != 0) &&
         (iVar7 = func_0052FBA0(iVar7 + 0x3dbbc,*(uint *)(param_1 + 0x4c0)), iVar7 != 0)) {
        func_004BD99C(iVar7);
      }
      func_00292428(*piVar4);
      *(short *)(param_1 + 0x4d0) = *(short *)(param_1 + 0x4d0) + 1;
    }
    break;
  case 4:
    sVar6 = *(short *)(param_1 + 0x4d0) + 1;
    *(short *)(param_1 + 0x4d0) = sVar6;
    if (sVar6 == 0x46) {
      func_004BDF3C(0);
    }
    if (*(ushort *)(param_1 + 0x4d0) < 200) {
      return 0;
    }
    break;
  case 5:
    if ((*(short *)(param_1 + 0x4d0) == 0) && (iVar7 != 0)) {
      iVar8 = func_0052FBA0(iVar7 + 0x3dbbc,*(uint *)(param_1 + 0x4c0));
      iVar7 = 0;
      iVar2 = extraout_r1;
      if (iVar8 != 0) {
        iVar7 = (int)*(short *)(iVar8 + 0x5e);
        iVar2 = iVar7;
      }
      if (((iVar8 != 0 && iVar2 != 0) && -1 < iVar7) &&
         (iVar7 = func_0052FBDC(*piVar3 + 0x3dbbc,iVar2,0), iVar7 != 0)) {
        sVar6 = *(short *)(iVar7 + 0x2c);
        sVar1 = *(short *)(iVar7 + 0x44);
        *(char *)(param_1 + 0x520) = (char)*(undefined2 *)(iVar7 + 0x42);
        *(int *)(param_1 + 0x524) = (int)sVar1;
        *(short *)(param_1 + 0x528) = sVar6;
        *(char *)(param_1 + 0x52a) = (char)(sVar6 >> 7) + '\x01';
        *(undefined1 *)(param_1 + 0x4db) = 1;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x4d0) = 0;
  return 1;
}

