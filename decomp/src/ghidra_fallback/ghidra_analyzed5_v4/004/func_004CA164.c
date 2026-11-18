#include "ghidra_types.h"

extern int func_004C9B74(int param_1);
extern int func_004CADD8(undefined4 param_1,uint param_2);
extern int func_004CB500(int param_1);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern float func_004FAD90(int param_1);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);

// USA 004CA164 <- EU 004CA13C (Ghidra, non-matching)

int * func_004CA164(int *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  puVar1 = (undefined2 *)func_0054DDF4((int)param_1,1);
  param_1[0x269] = (int)puVar1;
  func_004F88A0(param_1,puVar1);
  piVar5 = param_1 + 0x22f;
  if ((char)param_1[0x25e] == '\0') {
    iVar2 = func_004C9B74((int)param_1);
    if (iVar2 == 0) {
      uVar3 = func_0066A284(piVar5,3);
      return (int *)uVar3;
    }
  }
  else {
    switch(*(undefined1 *)((int)param_1 + 0x8e5)) {
    case 0:
    case 1:
    case 3:
    case 4:
      if (*(char *)((int)param_1 + 0x98e) == '\0') {
        uVar3 = func_004CB500((int)param_1);
        return (int *)uVar3;
      }
      func_004C9B74((int)param_1);
      puVar4 = func_004CADD8(param_1,param_1[0x24a]);
      break;
    case 2:
      func_004C9B74((int)param_1);
      puVar4 = func_004CADD8(param_1,param_1[0x24a]);
      break;
    default:
      return param_1 + 0x240;
    }
    if (puVar4 == (undefined4 *)0x0) {
      param_1[0x167] = param_1[0x167] & 0xfffffffb;
      func_004FD038((int)(param_1 + 0x16a),0);
      param_1[0x167] = param_1[0x167] & 0xffffff7f;
      func_004FAD90((int)param_1);
      *(undefined1 *)(param_1 + 0x249) = 1;
      uVar3 = func_0066A284(piVar5,10);
      return (int *)uVar3;
    }
  }
  uVar3 = func_0066A284(piVar5,7);
  return (int *)uVar3;
}

