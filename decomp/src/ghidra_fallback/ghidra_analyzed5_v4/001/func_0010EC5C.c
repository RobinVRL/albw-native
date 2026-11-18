#include "ghidra_types.h"

extern int func_0010F240(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,uint param_6, int param_7);
extern int func_0010F620(void);
extern int func_0010F708(undefined4 *param_1);
extern int func_0010F7EC(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8, undefined4 param_9,int param_10,undefined4 param_11,undefined4 param_12);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int DAT_0010edb4;
extern uint DAT_0010edb8;

// USA 0010EC5C <- EU 0010EC5C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 undefined4
// GLOBAL DAT_0010edb4 int
// GLOBAL DAT_0010edb8 uint

uint func_0010EC5C(int *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                  undefined4 param_7)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int * *)(albw_frame + 0x0))
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 ** *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  puVar1 = func_0010F620();
  uVar3 = DAT_0010edb8;
  if (puVar1 != (undefined4 *)0x0) {
    func_00110490(puVar1,0x130);
    piVar2 = func_0010F708(puVar1);
    uVar3 = DAT_0010edb8;
    if (piVar2 != (int *)0x0) {
      local_30 = &local_30;
      local_38 = 0;
      local_34 = 1;
      local_2c = 1;
      local_28 = *(int *)(DAT_0010edb4 + 0x10);
      local_3c = param_2;
      uVar3 = func_0010F7EC(&local_28,&local_38,0,3,1,local_30,1,2,param_7,0xc,1,0);
      if (-1 < (int)uVar3) {
        local_40 = (int *)0x0;
        uVar3 = (**(code **)(*piVar2 + 0x3c))(piVar2,&local_40,local_38);
        if (-1 < (int)uVar3) {
          uVar3 = func_0010F240((int)piVar2,local_40,local_3c,param_3,param_4,param_5,param_6);
          if ((int)uVar3 < 0) {
            (**(code **)(*local_40 + 0x30))(local_40);
          }
          else {
            uVar3 = 0;
          }
        }
      }
      if ((uVar3 & 0x80000000) != 0) {
        (**(code **)(*piVar2 + 0x30))(piVar2);
        return uVar3;
      }
      *param_1 = (int)piVar2;
      uVar3 = 0;
    }
  }
  return uVar3;
}

