#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_0034CA24(undefined4 *param_1);
extern int func_004FA124(int *param_1,int param_2,int param_3);
extern int func_0058A3E0(uint param_1);
extern int func_00656B60(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0012bb6c;
extern float DAT_0012bb70;

// USA 0012B9E0 <- EU 0012B9E0 (Ghidra, non-matching)
// GLOBAL DAT_0012bb6c int *
// GLOBAL DAT_0012bb70 float

int func_0012B9E0(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  cVar1 = (char)param_1[0x230];
  cVar2 = *(char *)(param_3 + 0x24);
  if (param_2 == 10 || param_2 == 8) {
    param_1[0x167] = param_1[0x167] | 0x80000;
    if ((cVar1 == '\0') || ((cVar1 == '\x05' && (param_1[0xe8] == param_1[0xe9])))) {
      *(undefined1 *)((int)param_1 + 0x77d) = 7;
      *(undefined1 *)((int)param_1 + 0x77e) = 0xff;
      *(undefined1 *)((int)param_1 + 0x77f) = 0;
      goto LAB_0012ba6c;
    }
    *(undefined1 *)((int)param_1 + 0x77d) = 8;
    *(undefined1 *)((int)param_1 + 0x77e) = 0xff;
    *(undefined1 *)((int)param_1 + 0x77f) = 0;
  }
  else {
    param_1[0x167] = param_1[0x167] & 0xfff7ffff;
    *(undefined1 *)((int)param_1 + 0x77d) = 0xff;
    *(undefined1 *)((int)param_1 + 0x77e) = 0xff;
    *(undefined1 *)((int)param_1 + 0x77f) = 0;
    if (cVar2 == '\f') {
      if (param_1[0xe8] == param_1[0xe9]) {
        func_00656B60(param_1 + 0x22f,1);
        func_0034CA24((undefined4 *)param_1[0x10f]);
        return 0;
      }
      func_00656B60(param_1 + 0x22f,4);
      func_0034CA24((undefined4 *)param_1[0x10f]);
      return 0;
    }
LAB_0012ba6c:
    if (cVar1 == '\0') {
      if (cVar2 == '\x05') {
        func_002917A4(*DAT_0012bb6c,param_1 + 0xf4,0,DAT_0012bb70);
        return 0xf;
      }
      if (cVar2 == '\x0e') {
        func_002917A4(*DAT_0012bb6c,param_1 + 0xf4,0,DAT_0012bb70);
        func_004FA124(param_1,0xe,0);
        return 0xf;
      }
      uVar3 = func_0058A3E0(param_3);
      if (uVar3 != 0) {
        return 0xb;
      }
      goto LAB_0012bb1c;
    }
  }
  if (cVar1 == '\x04') {
    return 0;
  }
LAB_0012bb1c:
  param_1[0x168] = param_1[0x168] | 0x80;
  return param_2;
}

