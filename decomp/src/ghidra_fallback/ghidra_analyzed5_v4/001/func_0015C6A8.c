#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_002228D0(int param_1,int param_2,uint param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern float func_004FAD90(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern char s_ReactStun_0015c76c[];

// USA 0015C6A8 <- EU 0015C6AC (Ghidra, non-matching)
// GLOBAL s_ReactStun_0015c76c string

void func_0015C6A8(int *param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  func_004FC07C((int)param_1,9,0xffffffff,0);
  if (param_1[600] != 0) {
    func_002228D0(param_1[600],9,0xffffffff);
  }
  func_004F88A0(param_1,(undefined2 *)param_1[0x247]);
  func_004FAD90((int)param_1);
  if (*(char *)((int)param_1 + 0xe4e) != '\0') {
    piVar2 = param_1 + 0x394;
    if (param_1[0xd1] == 0) {
      *piVar2 = 0;
      param_1[0x395] = 0;
      return;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x395])) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_18,param_1[0xd1],(uint *)s_ReactStun_0015c76c);
    *piVar2 = local_18;
    param_1[0x395] = iStack_14;
  }
  return;
}

