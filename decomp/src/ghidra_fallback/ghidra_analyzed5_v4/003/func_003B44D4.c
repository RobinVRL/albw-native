#include "ghidra_types.h"

extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_002B5608(int param_1);
extern int func_003840A0(int param_1,int param_2);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_003A2FD4(byte *param_1,uint param_2);
extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern float DAT_003b4834;
extern float DAT_003b4838;
extern undefined DAT_003b483c;
extern int DAT_003b4864;
extern int *DAT_003b4868;
extern float DAT_003b486c;
extern float DAT_003b4870;
extern float DAT_003b48f4;
extern char s_ADrinkP_003b483f[];
extern char s_Drink_003b4874[];
extern char s_SE_PL_MEDICINE_PURPRE_START_003b4848[];
extern undefined4 _DAT_003b483c;

// USA 003B44D4 <- EU 003B44B0 (Ghidra, non-matching)
// GLOBAL DAT_003b4834 float
// GLOBAL DAT_003b4838 float
// GLOBAL DAT_003b483c undefined
// GLOBAL DAT_003b4864 int
// GLOBAL DAT_003b4868 int *
// GLOBAL DAT_003b486c float
// GLOBAL DAT_003b4870 float
// GLOBAL DAT_003b48f4 float
// GLOBAL s_ADrinkP_003b483f string
// GLOBAL s_Drink_003b4874 string
// GLOBAL s_SE_PL_MEDICINE_PURPRE_START_003b4848 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003B44D4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x918) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  switch(*(undefined1 *)(param_1 + 0x90)) {
  case 0x11:
  case 0x14:
  case 0x1a:
  case 0x1e:
  case 0x1f:
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
    iVar3 = func_00260C78(DAT_003b4834,*(float *)(iVar3 + 8),*(float *)(iVar3 + 0xc),
                          *(float *)(iVar3 + 0x14));
    if (iVar3 != 0) {
      piVar2 = (int *)(*(int *)(param_1 + 0x48) + 0x1160);
      (**(code **)(*piVar2 + 0x10))(piVar2,0);
    }
    break;
  case 0x12:
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
    if (*(char *)(iVar3 + 0x1c) == '\0') {
      if (*(float *)(iVar3 + 0x10) < DAT_003b4838) {
        if (*(float *)(iVar3 + 8) <= DAT_003b4838) goto LAB_003b4620;
      }
      else if (*(float *)(iVar3 + 8) == *(float *)(iVar3 + 0x14)) {
LAB_003b4620:
        piVar2 = (int *)(*(int *)(param_1 + 0x48) + 0x1160);
        pcVar5 = *(code **)(*piVar2 + 0x10);
        uVar4 = 0x12;
        goto LAB_003b4764;
      }
    }
    break;
  case 0x13:
    func_002B5608(*(int *)(param_1 + 0x48));
    bVar1 = func_003840A0(*(int *)(param_1 + 0x48) + 0x8c0,0x77);
    if (bVar1) {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
      iVar3 = func_00260C78(ALBW_AS_F32(_DAT_003b483c),*(float *)(iVar3 + 8),*(float *)(iVar3 + 0xc),
                            *(float *)(iVar3 + 0x14));
      if (iVar3 != 0) {
        func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x89,10,1);
        iVar3 = *(int *)(*(int *)(param_1 + 0x48) + 0x344);
        if (iVar3 != 0) {
          func_004A1B9C(aiStack_18,iVar3,(uint *)(s_ADrinkP_003b483f + 1));
        }
        func_003A2FD4((byte *)(*(int *)(param_1 + 0x48) + 0xbc8),1);
        local_1c = s_SE_PL_MEDICINE_PURPRE_START_003b4848;
        local_20 = DAT_003b4864;
        func_004EABB8(*DAT_003b4868,&local_20,(undefined4 *)0x0);
      }
      *(undefined2 *)(*(int *)(param_1 + 0x48) + 0xaf4) = 2;
      return 0;
    }
    bVar1 = func_003840A0(*(int *)(param_1 + 0x48) + 0x8c0,0x89);
    if (bVar1) {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
      iVar3 = func_00260C78(DAT_003b486c,*(float *)(iVar3 + 8),*(float *)(iVar3 + 0xc),
                            *(float *)(iVar3 + 0x14));
      if (iVar3 == 0) {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
        iVar3 = func_00260C78(DAT_003b4870,*(float *)(iVar3 + 8),*(float *)(iVar3 + 0xc),
                              *(float *)(iVar3 + 0x14));
        if ((iVar3 != 0) && (iVar3 = *(int *)(*(int *)(param_1 + 0x48) + 0x344), iVar3 != 0)) {
          func_004A1B9C(&local_20,iVar3,(uint *)s_Drink_003b4874);
        }
      }
      else {
        piVar2 = (int *)(*(int *)(param_1 + 0x48) + 0x1160);
        pcVar5 = *(code **)(*piVar2 + 0x10);
        uVar4 = 0x13;
LAB_003b4764:
        (*pcVar5)(piVar2,uVar4);
      }
    }
    break;
  default:
    goto switchD_003b44dc_caseD_15;
  case 0x18:
  case 0x19:
    *(undefined2 *)(*(int *)(param_1 + 0x48) + 0xaf4) = 2;
    if (*(int *)(param_1 + 0x6c) < 0x27) {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
      iVar3 = func_00260C78(DAT_003b48f4,*(float *)(iVar3 + 8),*(float *)(iVar3 + 0xc),
                            *(float *)(iVar3 + 0x14));
      if (iVar3 == 0) {
        return 0;
      }
      piVar2 = (int *)(*(int *)(param_1 + 0x48) + 0x1438);
                    /* WARNING: Could not recover jumptable at 0x003b48c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*piVar2 + 0x18))(piVar2,0);
    }
    piVar2 = (int *)(*(int *)(param_1 + 0x48) + 0x1438);
    (**(code **)(*piVar2 + 0x10))(piVar2,0);
    piVar2 = *(int **)(*(int *)(param_1 + 0x48) + 0x93c);
    iVar3 = func_003ABB24(piVar2,1,1);
    if (iVar3 == 0) {
      return 0;
    }
    return func_003B147C((int *)piVar2[1],1,1);
  }
  *(undefined2 *)(*(int *)(param_1 + 0x48) + 0xaf4) = 2;
switchD_003b44dc_caseD_15:
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
  if (*(char *)(iVar3 + 0x1c) == '\0') {
    if (*(float *)(iVar3 + 0x10) < DAT_003b4838) {
      if (*(float *)(iVar3 + 8) <= DAT_003b4838) goto LAB_003b48dc;
    }
    else if (*(float *)(iVar3 + 8) == *(float *)(iVar3 + 0x14)) {
LAB_003b48dc:
      return func_003ABB24(*(int **)(*(int *)(param_1 + 0x48) + 0x93c),1,1);
    }
  }
  return 0;
}

