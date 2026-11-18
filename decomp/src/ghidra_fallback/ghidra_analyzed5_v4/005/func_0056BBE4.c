#include "ghidra_types.h"

extern int func_0040F54C(int param_1);
extern int func_0040F74C(undefined4 *param_1,byte *param_2,undefined4 param_3,int param_4,int param_5, undefined4 param_6,undefined4 param_7);
extern int func_004108D0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00410AB8(undefined4 *param_1,undefined4 param_2);
extern undefined4 DAT_0056bcd4;

// USA 0056BBE4 <- EU 0056BBBC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_0056bcd4 undefined4

int func_0056BBE4(int param_1,undefined4 *param_2,uint param_3,byte *param_4,int param_5,int param_6
                 ,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((*(char *)(param_1 + 400) == '\0') || (param_3 < 0x7c)) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = func_0040F74C(param_2,param_4,0,0,(int)*(char *)(param_1 + 0x191),DAT_0056bcd4,param_1)
    ;
  }
  puVar2 = (undefined4 *)0x0;
  if (*(char *)(puVar3 + 0x14) != '\0') {
    if (param_7 == 0) {
      iVar1 = func_0040F54C((int)puVar3);
    }
    else if (param_7 == 1) {
      iVar1 = func_0040F54C((int)puVar3);
    }
    else {
      if (param_7 != 2) {
        return 0;
      }
      iVar1 = func_0040F54C((int)puVar3);
    }
    if (iVar1 == 0) {
      return 0;
    }
    if (param_2 + 0x15 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = func_00410AB8(param_2 + 0x15,puVar3);
      if ((puVar2 != (undefined4 *)0x0 && param_5 != 0) && param_6 != 0) {
        func_004108D0((int)puVar2,param_5,param_6);
      }
    }
  }
  return (int)puVar2;
}

