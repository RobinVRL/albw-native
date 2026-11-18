#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004F8254();
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053F480(int param_1);
extern int func_00548B78(int param_1,float *param_2,float fparam_0);
extern int func_00588BE4(int param_1);
extern float func_0058A404(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int *DAT_002e7a98;
extern int *DAT_002e7a9c;
extern int *DAT_002e7aa0;
extern int *DAT_002e7aa4;
extern int *DAT_002e7aa8;
extern int *DAT_002e7aac;
extern float DAT_002e7ab0;
extern int *DAT_002e7ab4;
extern int DAT_002e7ab8;
extern int *DAT_002e7abc;
extern int *DAT_002e7ac0;
extern undefined4 DAT_002e7ac4;

// USA 002E781C <- EU 002E77F8 (Ghidra, non-matching)
// GLOBAL DAT_002e7a98 int *
// GLOBAL DAT_002e7a9c int *
// GLOBAL DAT_002e7aa0 int *
// GLOBAL DAT_002e7aa4 int *
// GLOBAL DAT_002e7aa8 int *
// GLOBAL DAT_002e7aac int *
// GLOBAL DAT_002e7ab0 float
// GLOBAL DAT_002e7ab4 int *
// GLOBAL DAT_002e7ab8 int
// GLOBAL DAT_002e7abc int *
// GLOBAL DAT_002e7ac0 int *
// GLOBAL DAT_002e7ac4 undefined4

bool func_002E781C(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float fparam_0;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((int *)(albw_frame + 0x8))
  iVar7 = *(int *)(param_2 + 0x2c);
  iVar4 = func_0052FBA0(*DAT_002e7a98 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (iVar4 != 0) {
    iVar4 = func_00588BE4(iVar4);
    if (iVar4 == *DAT_002e7a9c) {
      return false;
    }
    if (iVar4 == *DAT_002e7aa0) {
      return false;
    }
    if (iVar4 == *DAT_002e7aa4) {
      return false;
    }
    if (iVar4 == *DAT_002e7aa8) goto switchD_002e78c0_caseD_4;
    if (iVar4 == *DAT_002e7aac) {
      return false;
    }
  }
  if (iVar7 != 0) {
    iVar4 = (int)*(char *)(iVar7 + 1);
    if (*(char *)(param_1 + 0xd45) == '\0') {
      switch(iVar4) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 7:
      case 0xf:
      case 0x10:
        if (*(char *)(param_1 + 0x8cc) == '\x02' || *(char *)(param_1 + 0x8cc) == '\x03')
        goto LAB_002e7a88;
        break;
      case 5:
        iVar4 = func_0052FBA0(*DAT_002e7a98 + 0x3dbbc,*(uint *)(param_1 + 0xc90));
        if ((iVar4 != 0) && (*(uint *)(iVar4 + 0x4d8) < *(uint *)(iVar4 + 0x4dc))) {
          return false;
        }
        uVar9 = func_0058AB74(param_1);
        if ((int)uVar9 == 0x16) {
          pfVar5 = (float *)func_00520FC0();
          iVar4 = func_00548B78(param_1,pfVar5,DAT_002e7ab0);
          if ((((iVar4 != 0) && (*(uint *)(param_1 + 0xb40) <= *(uint *)(param_1 + 0xb3c))) &&
              (*DAT_002e7ab4 != 0)) && (iVar4 = func_0053F480(*DAT_002e7ab4), iVar4 != 0)) {
            fparam_0 = func_0058A404(param_1);
            uVar8 = (uint)((int)ALBW_AS_U32(fparam_0) <= DAT_002e7ab8);
            if (((int)ALBW_AS_U32(fparam_0) <= DAT_002e7ab8) && ((int)ALBW_AS_U32(fparam_0) < 0x3f000001)) {
              uVar8 = 2;
            }
            uVar6 = func_00111A64((uint *)(*DAT_002e7abc + 0x660));
            uVar2 = DAT_002e7ac4;
            local_28[0] = *DAT_002e7ac0;
            local_28[1] = DAT_002e7ac0[1];
            local_28[2] = DAT_002e7ac0[2];
            if ((int)((ulonglong)uVar6 * 100 >> 0x20) < local_28[uVar8]) {
              func_006640EC((undefined4 *)(param_1 + 0x8c8),4,fparam_0);
            }
            else {
              *(undefined4 *)(param_1 + 0xb40) = 0xc;
              *(undefined4 *)(param_1 + 0xb44) = uVar2;
              *(undefined4 *)(param_1 + 0xb3c) = 0;
            }
          }
        }
      }
    }
    else if (((iVar4 == 1 || iVar4 == 2) || (iVar4 == 3 || iVar4 == 0x10)) &&
            ((cVar1 = *(char *)(param_1 + 0x8cc), cVar1 == '\x0e' || cVar1 == '\x0f' ||
             ((cVar1 == '\x10' || cVar1 == '\x11') || cVar1 == '\x12')))) {
LAB_002e7a88:
      *(undefined1 *)(param_1 + 0xd3d) = 1;
      return false;
    }
  }
switchD_002e78c0_caseD_4:
  bVar3 = func_004F8254(param_1,param_2);
  return bVar3;
}

