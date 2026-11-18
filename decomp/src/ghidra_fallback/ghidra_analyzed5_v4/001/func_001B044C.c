// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0014E76C(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B7B0(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern undefined8 func_0058AB74(int param_1);
extern int DAT_001b0538;
extern int DAT_001b054c;
extern char s_SE_Soldier_DASH_001b053c[];

// USA 001B044C <- EU 001B044C (Ghidra, non-matching)
// GLOBAL DAT_001b0538 int
// GLOBAL DAT_001b054c int
// GLOBAL s_SE_Soldier_DASH_001b053c string

void func_001B044C(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(char * *)(albw_frame + 0xc))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  iVar1 = DAT_001b0538;
  if ((*(char *)((int)param_1 + 0x911) == '\x03') &&
     (uVar2 = func_0058AB74((int)param_1), (int)uVar2 == 3)) {
    local_74 = s_SE_Soldier_DASH_001b053c;
    local_78 = iVar1;
    func_00150A84(param_1,&local_78,0);
    func_002F8DE4(param_1,4,0xffffffff,0);
    *(undefined1 *)(param_1 + 0x28c) = 1;
  }
  else {
    func_0010A464(&local_78);
    local_14 = s_SE_Soldier_DASH_001b053c;
    local_18 = iVar1;
    func_0014E76C((int)param_1,&local_18,(int)&local_78);
    func_0025B7B0((int)&local_78,0xf);
    func_002F8DE4(param_1,2,0xffffffff,1);
    *(undefined1 *)(param_1 + 0x28c) = 0;
    func_0025B874(&local_78);
  }
  iVar1 = DAT_001b054c;
  param_1[0xf7] = DAT_001b054c;
  param_1[0xf9] = iVar1;
  *(undefined1 *)((int)param_1 + 0x909) = 0;
  param_1[0x239] = *(int *)(param_1[0x26e] + 4);
  param_1[0x167] = param_1[0x167] | 8;
  return;
}

