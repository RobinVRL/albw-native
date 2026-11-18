#include "ghidra_types.h"

extern int func_002A27C4(int param_1,int param_2);
extern int func_002A49F8(int param_1,int param_2,int param_3);
extern int func_002A5DB4(int param_1,int param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_00520FD4(void);
extern int func_00556EAC(int param_1,int param_2);
extern undefined8 func_0058AB74(int param_1);
extern float func_0058AC38(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int DAT_002a6f5c;
extern int *DAT_002a6f60;
extern undefined4 DAT_002a6f64;
extern undefined4 DAT_002a6f68;
extern int DAT_002a6f6c;
extern int DAT_002a6f70;
extern int DAT_002a6f74;

// USA 002A6C6C <- EU 002A6C48 (Ghidra, non-matching)
// GLOBAL DAT_002a6f5c int
// GLOBAL DAT_002a6f60 int *
// GLOBAL DAT_002a6f64 undefined4
// GLOBAL DAT_002a6f68 undefined4
// GLOBAL DAT_002a6f6c int
// GLOBAL DAT_002a6f70 int
// GLOBAL DAT_002a6f74 int

undefined4 func_002A6C6C(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if ((*(char *)(param_1 + 0xb92) == '\0') ||
     (pfVar3 = (float *)func_00520FC0(), fVar5 = *pfVar3 - *(float *)(param_1 + 0x3d0),
     fVar6 = pfVar3[2] - *(float *)(param_1 + 0x3d8),
     (int)ALBW_AS_U32((fVar5 * fVar5 + fVar6 * fVar6)) <= DAT_002a6f5c)) {
    bVar2 = func_00520FD4();
    if ((bVar2) || (bVar2 = func_00556EAC(*DAT_002a6f60,0x67), bVar2)) {
      return func_00662128((undefined4 *)(param_1 + 0x9e0),2);
    }
    if (*(char *)(param_1 + 0xb92) == '\0') {
      uVar7 = func_0058AB74(param_1);
      if (((int)uVar7 != 2) && (uVar7 = func_0058AB74(param_1), (int)uVar7 != 0x1e)) {
        func_004FC07C(param_1,2,0,0);
        *(undefined1 *)(*(int *)(param_1 + 0xa18) + 0x44) = 1;
      }
      func_002A27C4(param_1,0);
      uVar1 = DAT_002a6f64;
      *(undefined2 *)(param_1 + 0xb50) = 0x3c;
      *(undefined4 *)(param_1 + 0xb24) = uVar1;
    }
    func_002A5DB4(param_1,0);
    uVar7 = func_0058AB74(param_1);
    if (((int)uVar7 == 2) || (uVar7 = func_0058AB74(param_1), (int)uVar7 == 0x1e)) {
      func_002A27C4(param_1,0);
      pfVar3 = (float *)func_00520FC0();
      fVar5 = *pfVar3 - *(float *)(param_1 + 0x3d0);
      fVar6 = pfVar3[2] - *(float *)(param_1 + 0x3d8);
      if ((int)ALBW_AS_U32((fVar5 * fVar5 + fVar6 * fVar6)) < DAT_002a6f74) {
        return func_00662128((undefined4 *)(param_1 + 0x9e0),5);
      }
      fVar5 = func_0058AC38(param_1);
      lVar8 = func_0058ACC8(param_1,fVar5);
      if (((int)lVar8 != 0) && (*(short *)(param_1 + 0xb50) == 0)) {
        if (*(char *)(param_1 + 0xb92) != '\x03') {
          return func_004FC07C(param_1,0,0xffffffff,0);
        }
        return func_004FC07C(param_1,1,0xc,0);
      }
    }
    else {
      func_002A27C4(param_1,0);
      if (*(char *)(param_1 + 0xb92) == '\x03') {
        iVar4 = func_002A49F8(param_1,*(int *)(DAT_002a6f6c + 0x78),0);
        if ((iVar4 != 0) &&
           (pfVar3 = (float *)func_00520FC0(), fVar5 = *pfVar3 - *(float *)(param_1 + 0x3d0),
           fVar6 = pfVar3[2] - *(float *)(param_1 + 0x3d8),
           (int)ALBW_AS_U32((fVar5 * fVar5 + fVar6 * fVar6)) < DAT_002a6f70)) {
          if (*(char *)(param_1 + 0xb9d) != '\0') {
            return func_00662128((undefined4 *)(param_1 + 0x9e0),10);
          }
          return func_00662128((undefined4 *)(param_1 + 0x9e0),9);
        }
      }
      else {
        iVar4 = func_002A49F8(param_1,0,0);
        uVar1 = DAT_002a6f68;
        if (iVar4 != 0) {
          if (*(byte *)(param_1 + 0xb92) < 3) {
            *(undefined4 *)(param_1 + 0xb58) = 10;
            *(undefined4 *)(param_1 + 0xb5c) = uVar1;
            *(undefined4 *)(param_1 + 0xb54) = 0;
          }
          if (*(char *)(param_1 + 0xb92) != '\x02') {
            return func_00662128((undefined4 *)(param_1 + 0x9e0),7);
          }
          return func_00662128((undefined4 *)(param_1 + 0x9e0),8);
        }
      }
    }
  }
  else {
    func_00662128((undefined4 *)(param_1 + 0x9e0),6);
  }
  return 0;
}

