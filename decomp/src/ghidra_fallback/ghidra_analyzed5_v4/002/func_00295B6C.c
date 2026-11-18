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

// USA 00295B6C <- EU 00295B94 (Ghidra, non-matching)
// GLOBAL DAT_00295d44 int *
// GLOBAL DAT_00295d48 float
// GLOBAL DAT_00295d4c float
// GLOBAL DAT_00295d50 undefined *
// GLOBAL DAT_00295d54 int
// GLOBAL DAT_00295d58 int

void func_00295B6C(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x70]; /* entry_sp - 0x70 .. entry_sp + 0x0 */
#define stack0xffffff98 (*(undefined4 *)(albw_frame + 0x8))
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  int iVar6;
  float fparam_0;
  float fparam_0_00;
  uint uVar7;
  #define auStack_64 ((undefined1 *)(albw_frame + 0xc))
  #define iStack_60 (*(int *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  iVar2 = *(int *)(param_1 + 0x4c);
  if (*(int *)(iVar2 + 0x128) << 0x1a < 0) {
    iVar3 = func_0054030C(iVar2);
    piVar1 = DAT_00295d44;
    if (iVar3 == 0) {
      func_004EB908(*DAT_00295d44,0x1e,1);
    }
    else {
      func_002972C0(iVar2,0x78);
      if ((*(uint *)(iVar2 + 0x128) & 0x40) == 0) {
        uStack_5c = *(undefined4 *)(DAT_00295d54 + 4);
        iStack_60 = DAT_00295d58;
        iVar3 = func_00540654(iVar2,&iStack_60);
        if (iVar3 != 0) {
          func_00296D70(iVar2,0x10000,-1,0,0);
          func_004EB908(*piVar1,0x3c,0);
        }
      }
      else if (*(int *)(iVar2 + 0x1c) != 0) {
        iVar6 = *(int *)(iVar2 + 0x20);
        fparam_0 = DAT_00295d48;
        fparam_0_00 = DAT_00295d4c;
        for (iVar3 = *(int *)(iVar2 + 0x18) - iVar6; iVar3 != (iVar2 + 0x14) - iVar6;
            iVar3 = *(int *)(iVar3 + iVar6 + 4) - iVar6) {
          uVar7 = 0;
          iVar4 = func_00100118((int)auStack_64,DAT_00295d50,0xd,4);
          *(float *)(iVar4 + 0x34) = fparam_0;
          *(undefined1 *)(iVar4 + 0x38) = 0x7f;
          *(undefined1 *)(iVar4 + 0x3b) = 0;
          *(undefined2 *)(iVar4 + 0x39) = 0;
          iVar4 = *(int *)(iVar3 + 0xc);
          uVar5 = extraout_r1;
          if (iVar4 != 0) {
            uVar5 = *(undefined4 *)(iVar4 + 0xac);
          }
          if (iVar4 == 0) {
            uVar5 = 0xffffffff;
          }
          iVar4 = func_00569A3C(*piVar1,uVar5,&stack0xffffff98);
          if ((iVar4 != 0) && ((uVar7 & 2) != 0)) {
            func_00258038(iVar3,1,0x1e,fparam_0);
            func_00258038(iVar3,2,0x1e,fparam_0_00);
          }
        }
      }
    }
    *(uint *)(iVar2 + 0x128) = *(uint *)(iVar2 + 0x128) & 0xffffff9f;
  }
  return;
}

