#include "ghidra_types.h"

extern int func_004F5390(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4, undefined4 param_5,float fparam_0);
extern float func_0058A77C(int param_1,int param_2);
extern int func_006624F4(undefined4 *param_1,undefined1 param_2);

// USA 002ABDE8 <- EU 002ABDC4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int

bool func_002ABDE8(undefined4 *param_1,uint param_2,int param_3,undefined4 *param_4,
                  undefined1 param_5,undefined4 param_6,int param_7)

{
  char cVar1;
  byte bVar2;
  float fparam_0;
  
  if (param_2 == 0) {
    cVar1 = *(char *)(param_1 + 1);
    if (cVar1 != '\0') {
      func_006624F4(param_1,0);
    }
    return cVar1 != '\0';
  }
  if ((param_7 == 0) &&
     ((0x20 < param_2 ||
      ((bVar2 = *(byte *)(param_1 + 1), bVar2 != 0 &&
       ((0x14 < bVar2 || ((param_2 == 3 && (3 < bVar2)))))))))) {
    return false;
  }
  fparam_0 = func_0058A77C(param_1[0xd],(int)*(char *)(param_3 + 0x21));
  func_004F5390(param_1 + 0x2a,param_3,param_4,param_5,param_6,fparam_0);
  func_006624F4(param_1,(char)param_2);
  return true;
}

