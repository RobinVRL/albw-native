#include "ghidra_types.h"

extern int func_003869FC(int param_1);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_00542E58(int param_1);
extern int func_00543170(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556EAC(int param_1,int param_2);
extern int *DAT_003b97a0;
extern int DAT_003b97a4;
extern int *DAT_003b97ec;
extern int DAT_003b97f0;
extern int DAT_003b97f4;
extern int DAT_003b97f8;
extern char s_SE_PL_Sword_POWER_CHARGE_FIN_003b97cc[];
extern char s_SE_PL_Sword_POWER_CHARGE_FIN_Lv2_003b97a8[];

// USA 003B93F8 <- EU 003B93D4 (Ghidra, non-matching)
// GLOBAL DAT_003b97a0 int *
// GLOBAL DAT_003b97a4 int
// GLOBAL DAT_003b97ec int *
// GLOBAL DAT_003b97f0 int
// GLOBAL DAT_003b97f4 int
// GLOBAL DAT_003b97f8 int
// GLOBAL s_SE_PL_Sword_POWER_CHARGE_FIN_003b97cc string
// GLOBAL s_SE_PL_Sword_POWER_CHARGE_FIN_Lv2_003b97a8 string

undefined4 func_003B93F8(int *param_1)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar7 = param_1[0x12];
  iVar5 = func_00543170(iVar7);
  if (((iVar5 == 0) && (*(char *)(iVar7 + 0xb40) != '\0')) && ((char)param_1[0x1c] == '\0')) {
    func_003B147C(param_1,2,0);
  }
  sVar1 = (short)param_1[0x24];
  if (((sVar1 != 0) && (*(short *)(param_1 + 0x24) = sVar1 + -1, sVar1 == 2)) &&
     (*(char *)(param_1[0x12] + 0x936) == '\x02')) {
    func_003869FC(param_1[0x12] + 0xbd4);
    local_18 = DAT_003b97a4;
    if (*(char *)(*(int *)(param_1[0x12] + 0x8bc) + 4) == '\0') {
      local_14 = s_SE_PL_Sword_POWER_CHARGE_FIN_003b97cc;
      func_004EABB8(*DAT_003b97a0,&local_18,(undefined4 *)0x0);
    }
    else {
      local_14 = s_SE_PL_Sword_POWER_CHARGE_FIN_Lv2_003b97a8;
      func_004EABB8(*DAT_003b97a0,&local_18,(undefined4 *)0x0);
    }
  }
  piVar2 = DAT_003b97ec;
  if ((char)param_1[0x27] != '\0') {
    return 0;
  }
  bVar3 = func_00556EAC(*DAT_003b97ec,0x16);
  if (((bVar3) || (bVar3 = func_00542E58(param_1[0x12]), bVar3)) &&
     ((*(int *)(param_1[0x12] + 0xa00) < 0x40000001 &&
      (iVar5 = (**(code **)(*param_1 + 0x104))(param_1,10), iVar5 == 0)))) goto LAB_003b9788;
  iVar8 = param_1[0x12];
  iVar7 = func_00543170(iVar8);
  iVar5 = DAT_003b97f4;
  if (((iVar7 == 0) && (*(char *)(iVar8 + 0xb40) != '\0')) ||
     (*(char *)(param_1[0x12] + 0xb3d) != '\0')) {
    if (DAT_003b97f0 < *(int *)(param_1[0x12] + 0xa00)) {
      return 0;
    }
    iVar5 = (**(code **)(*param_1 + 0x104))(param_1,10);
    if (iVar5 != 0) {
      return 0;
    }
    goto LAB_003b9788;
  }
  uVar4 = (ushort)*(byte *)(param_1[0x12] + 0x936);
  bVar3 = uVar4 != 2;
  if (!bVar3) {
    uVar4 = *(ushort *)(param_1 + 0x24);
  }
  if ((bVar3 || uVar4 != 0) ||
     (((iVar7 = (**(code **)(*param_1 + 0x104))(param_1,1), iVar7 == 0 &&
       (iVar7 = (**(code **)(*param_1 + 0x104))(param_1,0), iVar7 == 0)) &&
      (iVar7 = (**(code **)(*param_1 + 0x104))(param_1,2), iVar7 == 0)))) {
    iVar7 = (**(code **)(*param_1 + 0x104))(param_1,1);
    if (((iVar7 == 0) && (iVar7 = (**(code **)(*param_1 + 0x104))(param_1,0), iVar7 == 0)) ||
       (*(short *)(param_1[0x12] + 0xafe) != 0)) {
      iVar5 = (**(code **)(*param_1 + 0x104))(param_1,2);
      if (iVar5 == 0) {
        return 0;
      }
      if (*(short *)((int)param_1 + 0x92) != 0) {
        return 0;
      }
      iVar5 = (**(code **)(*param_1 + 0x134))(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      if (*(short *)(param_1[0x12] + 0xafe) != 0) {
        return 0;
      }
    }
    else {
      iVar7 = (**(code **)(*param_1 + 0x134))(param_1);
      if (iVar7 == 0) {
        iVar7 = param_1[0x12];
        if (*(char *)(iVar7 + 0x936) != '\x02') {
          return 0;
        }
        if (*(char *)(*(int *)(iVar7 + 0x8bc) + 4) != '\0') {
          return 0;
        }
        if (*(int *)(iVar7 + 0xa00) < iVar5) {
          return 0;
        }
      }
    }
    goto LAB_003b9788;
  }
  iVar7 = *(int *)(param_1[0x12] + 0xa00);
  if (*(char *)(*(int *)(param_1[0x12] + 0x8bc) + 4) == '\0') {
joined_r0x003b964c:
    if (iVar7 < 0x40000001) {
      func_003B147C(param_1,10,0);
    }
  }
  else {
    bVar3 = SBORROW4(iVar7,iVar5);
    iVar8 = iVar7 - iVar5;
    if (iVar5 < iVar7) {
      bVar3 = SBORROW4(DAT_003b97f8,iVar7);
      iVar8 = DAT_003b97f8 - iVar7;
      iVar5 = DAT_003b97f8;
    }
    if (((iVar7 != iVar5 && iVar8 < 0 == bVar3) && (uVar6 = func_0055696C(*piVar2,0x2c), 2 < uVar6))
       && ((bVar3 = func_00556EAC(*piVar2,0x2b), bVar3 ||
           (((bVar3 = func_00556EAC(*piVar2,0x2c), bVar3 ||
             (bVar3 = func_00556EAC(*piVar2,0x2f), bVar3)) ||
            (bVar3 = func_00556EAC(*piVar2,0x2e), bVar3)))))) {
      iVar7 = *(int *)(param_1[0x12] + 0xa00);
      goto joined_r0x003b964c;
    }
  }
  iVar5 = (**(code **)(*param_1 + 0x134))(param_1);
  if ((iVar5 == 0) || ((short)param_1[0x24] != 0)) {
    return 0;
  }
LAB_003b9788:
  return func_003B147C(param_1,10,0);
}

