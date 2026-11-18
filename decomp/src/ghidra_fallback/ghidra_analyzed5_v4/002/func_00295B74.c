#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00258038(int param_1,uint param_2,undefined4 param_3,float fparam_0);
extern int func_00296D70(int param_1,uint param_2,int param_3,int param_4,int param_5);
extern int func_002972C0(int param_1,undefined4 param_2);
extern int func_004EB908(int param_1,int param_2,int param_3);
extern int func_0054030C(int param_1);
extern int func_00540654(int param_1,int *param_2);
extern int func_00569A3C(int param_1,uint param_2,undefined2 *param_3);
extern int *DAT_00295d44;
extern float DAT_00295d48;
extern float DAT_00295d4c;
extern undefined *DAT_00295d50;
extern int DAT_00295d54;
extern int DAT_00295d58;

// USA 00295B74 <- EU 00295B9C (Ghidra, non-matching)
// GLOBAL DAT_00295d44 int *
// GLOBAL DAT_00295d48 float
// GLOBAL DAT_00295d4c float
// GLOBAL DAT_00295d50 undefined *
// GLOBAL DAT_00295d54 int
// GLOBAL DAT_00295d58 int

/* WARNING: Variable defined which should be unmapped: objStack_68 */

void func_00295B74(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  int iVar5;
  float fparam_0;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_68 ((uint *)(albw_frame + 0x8))
  #define auStack_64 ((undefined1 *)(albw_frame + 0xc))
  #define local_60 (*(int *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  if (*(int *)(param_1 + 0x128) << 0x1a < 0) {
    iVar2 = func_0054030C(param_1);
    piVar1 = DAT_00295d44;
    if (iVar2 == 0) {
      func_004EB908(*DAT_00295d44,0x1e,1);
    }
    else {
      func_002972C0(param_1,0x78);
      if ((*(uint *)(param_1 + 0x128) & 0x40) == 0) {
        local_5c = *(undefined4 *)(DAT_00295d54 + 4);
        local_60 = DAT_00295d58;
        iVar2 = func_00540654(param_1,&local_60);
        if (iVar2 != 0) {
          objStack_68[0] = 0;
          func_00296D70(param_1,0x10000,-1,0,0);
          func_004EB908(*piVar1,0x3c,0);
        }
      }
      else if (*(int *)(param_1 + 0x1c) != 0) {
        iVar5 = *(int *)(param_1 + 0x20);
        fparam_0 = DAT_00295d48;
        fparam_0_00 = DAT_00295d4c;
        for (iVar2 = *(int *)(param_1 + 0x18) - iVar5; iVar2 != (param_1 + 0x14) - iVar5;
            iVar2 = *(int *)(iVar2 + iVar5 + 4) - iVar5) {
          objStack_68[0] = 0;
          iVar3 = func_00100118((int)auStack_64,DAT_00295d50,0xd,4);
          *(float *)(iVar3 + 0x34) = fparam_0;
          *(undefined1 *)(iVar3 + 0x38) = 0x7f;
          *(undefined1 *)(iVar3 + 0x3b) = 0;
          *(undefined2 *)(iVar3 + 0x39) = 0;
          iVar3 = *(int *)(iVar2 + 0xc);
          uVar4 = extraout_r1;
          if (iVar3 != 0) {
            uVar4 = *(undefined4 *)(iVar3 + 0xac);
          }
          if (iVar3 == 0) {
            uVar4 = 0xffffffff;
          }
          iVar3 = func_00569A3C(*piVar1,uVar4,objStack_68);
          if ((iVar3 != 0) && ((objStack_68[0] & 2) != 0)) {
            func_00258038(iVar2,1,0x1e,fparam_0);
            func_00258038(iVar2,2,0x1e,fparam_0_00);
          }
        }
      }
    }
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) & 0xffffff9f;
  }
  return;
}

