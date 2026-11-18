#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003B5E14(int param_1,int *param_2,int *param_3,int param_4,undefined1 param_5);
extern int func_004B948C(int param_1,int param_2);
extern undefined *DAT_00367bec;
extern int DAT_00367bf0;

// USA 00367AD4 <- EU 00367AB0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:1 char
// GLOBAL DAT_00367bec undefined *
// GLOBAL DAT_00367bf0 int

void func_00367AD4(int param_1,int *param_2,uint param_3,int *param_4,int param_5,char param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define iStack_3c (*(int *)(albw_frame + 0x4))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int * *)(albw_frame + 0x10))
  #define uStack_2c (*(uint *)(albw_frame + 0x14))
  #define piStack_28 (*(int * *)(albw_frame + 0x18))
  if ((((*(byte *)(param_1 + 0xf5) & 0x10) == 0) && (0 < (int)param_3)) && (param_2 != (int *)0x0))
  {
    iStack_34 = param_1;
    local_30 = param_2;
    uStack_2c = param_3;
    piStack_28 = param_4;
    iVar1 = func_0010CEE0(param_3 * 0x148,(int *)0x0,4);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_00100118(iVar1,DAT_00367bec,0x148,param_3);
    }
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xb0) = iVar2;
      *(uint *)(param_1 + 0xac) = param_3;
    }
    iVar2 = DAT_00367bf0;
    uVar5 = *(uint *)(param_1 + 0xac);
    iVar1 = *(int *)(param_1 + 0xb0);
    uVar3 = 0;
    if (uVar5 != 0) {
      do {
        piVar4 = param_4;
        if (uVar3 < param_3) {
          piVar4 = param_4 + uVar3 * 2;
        }
        (**(code **)(*piVar4 + 8))(piVar4);
        if (piVar4[1] != 0) {
          piVar4 = param_4;
          if (uVar3 < param_3) {
            piVar4 = param_4 + uVar3 * 2;
          }
          (**(code **)(*piVar4 + 8))(piVar4);
          iStack_3c = piVar4[1];
          local_40 = iVar2;
          func_003B5E14(iVar1 + uVar3 * 0x148,local_30,&local_40,1,param_6 + (char)uVar3);
          func_004B948C(param_5,iVar1 + uVar3 * 0x148);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar5);
    }
    *(byte *)(param_1 + 0xf5) = *(byte *)(param_1 + 0xf5) | 0x10;
  }
  return;
}

