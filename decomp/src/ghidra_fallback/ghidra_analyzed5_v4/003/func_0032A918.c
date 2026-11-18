#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A468(int param_1);
extern int DAT_0032aa08;
extern int DAT_0032aa0c;
extern float DAT_0032aa10;
extern float DAT_0032aa14;
extern int DAT_0032aa18;
extern float DAT_0032aa1c;

// USA 0032A918 <- EU 0032A8F4 (Ghidra, non-matching)
// GLOBAL DAT_0032aa08 int
// GLOBAL DAT_0032aa0c int
// GLOBAL DAT_0032aa10 float
// GLOBAL DAT_0032aa14 float
// GLOBAL DAT_0032aa18 int
// GLOBAL DAT_0032aa1c float

undefined4 func_0032A918(int *param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  
  iVar2 = DAT_0032aa08;
  if (*(char *)((int)param_1 + 0xbad) != '\x13') {
    param_1[0xf7] = DAT_0032aa08;
    param_1[0xf8] = iVar2;
    param_1[0xf9] = iVar2;
    func_004FC07C((int)param_1,3,8,0);
    iVar2 = DAT_0032aa0c;
    iVar1 = -1;
    param_1[0x316] = -1;
    param_1[0x318] = 0;
    *(undefined1 *)((int)param_1 + 0xc93) = 1;
    param_1[0x319] = 0;
    iVar2 = (int)*(short *)(iVar2 + (int)param_1);
    if (iVar2 < 0x61) {
      iVar4 = ALBW_AS_U32(VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3));
      if (DAT_0032aa18 < iVar4) {
        fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x31a] = (int)(fVar3 * DAT_0032aa1c);
        goto LAB_0032a9ec;
      }
    }
    else {
      iVar1 = func_0058A468((int)param_1);
      fVar3 = (float)VectorSignedToFloat(iVar1 + -0x60,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)(fVar3 * DAT_0032aa10) + 0x60 < iVar2) {
        iVar1 = 0x60;
      }
      else {
        iVar1 = func_0058A468((int)param_1);
        fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
        iVar1 = iVar2 - (int)(fVar3 * DAT_0032aa14);
      }
    }
    param_1[0x31a] = iVar1;
  }
LAB_0032a9ec:
  param_1[0x167] = param_1[0x167] | 0x80;
  return func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
}

