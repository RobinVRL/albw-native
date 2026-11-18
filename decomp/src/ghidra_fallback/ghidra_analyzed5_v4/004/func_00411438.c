#include "ghidra_types.h"

extern int func_001022F4(void);
extern int func_0010EE40(void);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003D2908(undefined4 param_1,undefined4 param_2);
extern int func_0041166C(int *param_1,uint param_2,int *param_3,uint param_4);
extern int func_0041252C(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,int param_6);
extern int func_0041343C(int param_1,uint param_2,undefined4 param_3);
extern int func_004134E4(int *param_1,int *param_2,int param_3);
extern int func_0056C9A4(int *param_1,uint param_2);
extern int func_0056C9FC(int param_1,int param_2);
extern int func_0056CA78(int *param_1,int param_2);
extern int func_0056CBF8(int param_1,uint param_2);
extern uint DAT_00411588;

// USA 00411438 <- EU 00411418 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_00411588 uint

undefined4 func_00411438(int *param_1,uint param_2,uint param_3,int *param_4,uint param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define aiStack_58 ((int *)(albw_frame + 0x8))
  #define local_4c (*(char *)(albw_frame + 0x14))
  #define local_48 (*(uint *)(albw_frame + 0x18))
  #define uStack_44 (*(uint *)(albw_frame + 0x1c))
  #define local_40 (*(uint *)(albw_frame + 0x20))
  uVar1 = func_0056CBF8(param_1[1],param_2);
  piVar2 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar1);
  if ((piVar2 != (int *)0x0) ||
     (piVar2 = func_0041166C(param_1,param_2,param_4,param_5), piVar2 != (int *)0x0)) {
    func_004134E4(aiStack_58,piVar2,1);
    if ((local_4c != '\0') && (iVar3 = func_0056C9A4(aiStack_58,param_3), iVar3 != 0)) {
      return 1;
    }
    iVar3 = func_0056C9FC((int)aiStack_58,param_3);
    puVar4 = (uint *)(**(code **)(*param_4 + 8))(param_4,iVar3 + 0x20);
    if (puVar4 != (uint *)0x0) {
      puVar5 = (uint *)func_0010EE40();
      iVar6 = func_001022F4();
      if ((puVar5 <= puVar4) && ((uint)((int)puVar4 + iVar3 + 0x20) <= (uint)(iVar6 + (int)puVar5)))
      {
        local_48 = DAT_00411588;
        uStack_44 = uVar1;
        local_40 = param_3;
        func_001163A0(puVar4,&local_48,0x20);
        puVar4 = puVar4 + 8;
        iVar6 = func_0056CA78(aiStack_58,param_3);
        iVar6 = func_0041252C((int)param_1,uVar1,(int)puVar4,iVar3,iVar6,param_5);
        if (iVar6 == iVar3) {
          func_0041343C((int)aiStack_58,param_3,puVar4);
          func_003D2908(puVar4,iVar3);
          return 1;
        }
      }
    }
  }
  return 0;
}

