#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_002B200C(undefined4 param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004F32A4(int param_1,uint param_2);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_00588BE4(int param_1);
extern int func_0058A1F4(int param_1);
extern float func_0058AC14(int param_1);
extern undefined4 DAT_004f3538;
extern int *DAT_004f353c;
extern undefined DAT_004f3540;
extern undefined4 DAT_004f3548;

// USA 004F3320 <- EU 004F32F8 (Ghidra, non-matching)
// GLOBAL DAT_004f3538 undefined4
// GLOBAL DAT_004f353c int *
// GLOBAL DAT_004f3540 undefined
// GLOBAL DAT_004f3548 undefined4

void func_004F3320(int param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  uVar8 = DAT_004f3538;
  *(undefined4 *)(param_1 + 0x4f0) = DAT_004f3538;
  if ((param_2 == 0) && (*(byte *)(param_3 + 0x2a) != 0)) {
    uVar3 = func_002B200C((uint)*(byte *)(param_3 + 0x2a));
    func_004FABDC(param_1,2,uVar3,0);
  }
  iVar4 = func_00588BE4(param_1);
  if (iVar4 == *DAT_004f353c) {
    cVar1 = *(char *)(param_3 + 0x24);
    bVar6 = cVar1 == '\x02';
    if (!bVar6) {
      cVar1 = *(char *)(param_3 + 0x25);
    }
    piVar2 = (int *)(param_1 + 0x8fc);
    if (bVar6 || cVar1 == '\x03') {
      func_004F32A4(param_1,1);
      func_004FAB60(param_1,1,1);
      fVar7 = func_0058AC14(param_1);
      func_004FB070(param_1,fVar7);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8bc) + 0x14) + 0x10) = DAT_004f3548;
      iVar4 = *piVar2;
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == *(int *)(param_1 + 0x900))) {
        iVar5 = *(int *)(iVar4 + 0x20);
        if ((iVar5 != 0) &&
           ((*(int *)(iVar4 + 0x24) == *(int *)(iVar5 + 0xc) && (0 < *(int *)(iVar5 + 4))))) {
          *(undefined1 *)(iVar5 + 0x280) = 1;
        }
        *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & 0xfffffffb | 8;
        return;
      }
    }
    else if ((param_2 == 0) || ((param_2 != 2 && (uVar3 = func_0058A1F4(param_1), uVar3 != 0)))) {
      func_004F32A4(param_1,0);
      func_004FAB60(param_1,0,0);
      fVar7 = func_0058AC14(param_1);
      func_004FB070(param_1,fVar7);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8bc) + 0x14) + 0x10) = uVar8;
      iVar4 = *(int *)(param_1 + 0x8fc);
      if (((iVar4 == 0) || (*(int *)(iVar4 + 0x1c) != *(int *)(param_1 + 0x900))) ||
         (((*(uint *)(iVar4 + 0x3c) & 4) == 0 && (*(uint *)(iVar4 + 0x3c) & 0x40) == 0 &&
          (((iVar5 = *(int *)(iVar4 + 0x20), iVar5 == 0 ||
            (*(int *)(iVar4 + 0x24) != *(int *)(iVar5 + 0xc))) || (*(int *)(iVar5 + 4) < 1)))))) {
        if (*(int *)(param_1 + 0x344) == 0) {
          *piVar2 = 0;
          *(undefined4 *)(param_1 + 0x900) = 0;
        }
        else {
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == *(int *)(param_1 + 0x900))) {
            func_00110848(iVar4);
          }
          func_004A1B9C(&local_30,*(int *)(param_1 + 0x344),(uint *)&DAT_004f3540);
          *piVar2 = local_30;
          *(undefined4 *)(param_1 + 0x900) = uStack_2c;
        }
      }
    }
  }
  return;
}

