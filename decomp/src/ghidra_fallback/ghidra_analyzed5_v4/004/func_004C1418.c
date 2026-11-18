#include "ghidra_types.h"

extern int func_004BD784(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_004BFE7C(int param_1,float *param_2,int *param_3,uint *param_4,uint param_5,float fparam_0);
extern int func_004C0350(int param_1);
extern int func_004C0550(int param_1,int param_2);
extern longlong func_004C0600(int param_1,uint param_2);
extern int func_004C0D70(int param_1,int param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_004c1584;
extern int DAT_004c1588;
extern float DAT_004c158c;
extern float DAT_004c1590;
extern float DAT_004c1594;
extern float DAT_004c1598;
extern float DAT_004c159c;
extern float DAT_004c15a0;

// USA 004C1418 <- EU 004C13F0 (Ghidra, non-matching)
// GLOBAL DAT_004c1584 float
// GLOBAL DAT_004c1588 int
// GLOBAL DAT_004c158c float
// GLOBAL DAT_004c1590 float
// GLOBAL DAT_004c1594 float
// GLOBAL DAT_004c1598 float
// GLOBAL DAT_004c159c float
// GLOBAL DAT_004c15a0 float

undefined4 func_004C1418(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  longlong lVar4;
  
  if ((char)param_1[0x216] == '\x01') {
    iVar2 = func_004BFE7C((int)param_1,(float *)(param_1 + 0xf4),param_1 + 0xfa,(uint *)0x0,0,
                          ALBW_AS_F32(param_1[0x20d]));
    if (iVar2 == 4) {
      (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x853),0xffffffff);
      param_1[0x20d] = DAT_004c1588;
      (**(code **)(*param_1 + 0xa4))(param_1);
      *(undefined1 *)(param_1 + 0x216) = 2;
      uVar3 = extraout_r1;
    }
    else {
      uVar3 = param_1[0x22b];
      if ((uVar3 & 0x4000) == 0) {
        if ((iVar2 == 3) && ((uint)*(byte *)((int)param_1 + 0x852) != (int)(char)param_1[0x217])) {
          func_0068C794((float *)(param_1 + 0x20d),DAT_004c1598,DAT_004c1594,DAT_004c1590,
                        DAT_004c158c);
          uVar3 = extraout_r1_01;
        }
        else {
          func_004C0350((int)param_1);
          uVar3 = extraout_r1_00;
        }
      }
    }
    if ((param_1[0x22b] & 0x100U) == 0) {
      return func_004BD784((int)param_1,uVar3,DAT_004c15a0,DAT_004c159c);
    }
  }
  else if ((*(char *)((int)param_1 + 0x85f) != '\0') &&
          (iVar2 = func_0051D2F4(param_1 + 0xfa,param_1[0x206],param_1[0x250],param_1[0x251],
                                 DAT_004c1584), iVar2 != 0)) {
    *(undefined1 *)((int)param_1 + 0x85f) = 0;
    if ((int)(short)param_1[0x241] == 0xffffffff) {
      if (param_2 == 0) {
        uVar1 = *(undefined1 *)((int)param_1 + 0x853);
      }
      else {
        uVar1 = *(undefined1 *)((int)param_1 + 0x855);
      }
                    /* WARNING: Could not recover jumptable at 0x004c157c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0xac))(param_1,uVar1,0xffffffff);
    }
    lVar4 = func_004C0600((int)param_1,(int)(short)param_1[0x241]);
    if ((int)lVar4 != 0) {
      func_004C0550((int)param_1,(int)*(short *)((int)param_1 + 0x906));
      return func_004C0D70((int)param_1,(int)(short)param_1[0x242]);
    }
  }
  return 0;
}

