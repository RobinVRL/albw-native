#include "ghidra_types.h"

extern int func_0010F240(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,uint param_6, int param_7);
extern int func_0010F620(void);
extern int func_0010F708(undefined4 *param_1);
extern int func_0010F7EC(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8, undefined4 param_9,int param_10,undefined4 param_11,undefined4 param_12);
extern int func_0010FB48(int param_1);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int DAT_003c8d74;
extern undefined4 DAT_003c8d78;
extern uint DAT_003c8d7c;
extern int DAT_003c8d80;
extern int DAT_003c8d84;

// USA 003C8BF0 <- EU 003C8BCC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 uint
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_003c8d74 int
// GLOBAL DAT_003c8d78 undefined4
// GLOBAL DAT_003c8d7c uint
// GLOBAL DAT_003c8d80 int
// GLOBAL DAT_003c8d84 int

uint func_003C8BF0(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,uint param_6
                  ,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define iStack_88 (*(int *)(albw_frame + 0x8))
  #define local_84 (*(int *)(albw_frame + 0xc))
  #define local_80 (*(int *)(albw_frame + 0x10))
  #define local_68 ((int *)(albw_frame + 0x28))
  #define local_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x38))
  #define local_54 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x40))
  #define local_48 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_40 (*(uint *)(albw_frame + 0x50))
  #define iStack_3c (*(int *)(albw_frame + 0x54))
  #define local_34 (*(int * *)(albw_frame + 0x5c))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x60))
  #define iStack_2c (*(int *)(albw_frame + 0x64))
  #define iStack_28 (*(int *)(albw_frame + 0x68))
  piVar6 = (int *)0x0;
  local_34 = param_1;
  puStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  puVar2 = func_0010F620();
  uVar4 = DAT_003c8d7c;
  if (puVar2 != (undefined4 *)0x0) {
    func_00110490(puVar2,0x130);
    piVar3 = func_0010F708(puVar2);
    uVar4 = DAT_003c8d7c;
    if (piVar3 != (int *)0x0) {
      local_68[0] = 0;
      local_40 = param_2[2] & 0xff | in_r12 & 0xffffff00;
      local_48 = *param_2;
      uStack_44 = param_2[1];
      local_5c = param_2[3];
      local_60 = 0;
      uStack_58 = 0;
      local_54 = 0;
      local_50 = 0;
      iStack_88 = *(int *)(DAT_003c8d74 + 0x10);
      local_84 = param_4;
      local_80 = param_3;
      iStack_3c = param_3;
      uVar4 = func_0010F7EC(&iStack_88,local_68,0,DAT_003c8d78,2,&local_48,0x10,2,&local_60,0x14,1,0
                           );
      iVar1 = local_68[0];
      if (-1 < (int)uVar4) {
        piVar5 = func_0010FB48(DAT_003c8d80);
        if (piVar5 == (int *)0x0) {
          software_interrupt(0x23);
          uVar4 = DAT_003c8d7c;
        }
        else {
          *piVar5 = DAT_003c8d84;
          piVar5[1] = iVar1;
          uVar4 = func_0010F240((int)piVar3,piVar5,local_80,local_84,param_5,param_6,param_7);
          if ((int)uVar4 < 0) {
            (**(code **)(*piVar5 + 0x30))(piVar5);
          }
          else {
            uVar4 = 0;
          }
        }
      }
      if ((uVar4 & 0x80000000) == 0) {
        piVar6 = piVar3;
        uVar4 = 0;
      }
      else {
        (**(code **)(*piVar3 + 0x30))(piVar3);
      }
    }
  }
  if (-1 < (int)uVar4) {
    *local_34 = (int)piVar6;
    uVar4 = 0;
  }
  return uVar4;
}

