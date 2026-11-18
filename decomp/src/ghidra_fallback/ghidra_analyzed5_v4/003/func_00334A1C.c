#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_00334474(int param_1,undefined4 param_2);
extern int func_0033456C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_0058DA04(int param_1);
extern int DAT_00334b40;
extern int *DAT_00334b44;
extern float DAT_00334b48;

// USA 00334A1C <- EU 003349F8 (Ghidra, non-matching)
// GLOBAL DAT_00334b40 int
// GLOBAL DAT_00334b44 int *
// GLOBAL DAT_00334b48 float

undefined4 func_00334A1C(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  uint in_fpscr;
  float fVar4;
  
  switch((char)param_1[0x10e]) {
  case '\x01':
    return func_0033456C(param_1,in_r1,in_r2,in_r3);
  case '\x02':
    if (0x14 < *(byte *)(param_1 + 0x104)) {
      iVar3 = func_00165E28(param_1[0x110],*(undefined2 *)(DAT_00334b40 + 0x2a));
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x105) = 3;
      }
      func_00334474((int)param_1,3);
    }
    *(char *)(param_1 + 0x104) = (char)param_1[0x104] + '\x01';
    break;
  case '\x03':
    iVar3 = func_0014E2A0((int)param_1,param_1[0x103],0,0x100,0,0);
    if (iVar3 != 0) {
      cVar1 = *(char *)((int)param_1 + 0x413);
    }
    else {
      *(undefined1 *)((int)param_1 + 0x413) = 1;
      cVar1 = '\0';
    }
    if (iVar3 != 0 && cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0x412) == '\0') {
        *(undefined1 *)((int)param_1 + 0x412) = 1;
      }
      return 0;
    }
    break;
  case '\x04':
    bVar2 = func_0058DA04(*DAT_00334b44);
    if (bVar2) {
      *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    }
    else if ((uint)param_1[0x116] < (uint)param_1[0x117]) {
      iVar3 = param_1[0x116] + 1;
      param_1[0x116] = iVar3;
      iVar3 = param_1[0x117] - iVar3;
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0xf5] =
           (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) +
                (ALBW_AS_F32(param_1[0x115]) - ALBW_AS_F32(param_1[0xf5])) * (DAT_00334b48 / fVar4)));
      return 0;
    }
  }
  return 0;
}

