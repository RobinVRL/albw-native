#include "ghidra_types.h"

extern int func_0055696C(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int func_0058A1F4(int param_1);
extern int func_0058A468(int param_1);
extern int *DAT_004f2f24;
extern float DAT_004f2f28;
extern uint *DAT_004f2f2c;
extern float DAT_004f2f30;
extern float DAT_004f2f34;
extern int *DAT_004f2f38;
extern float DAT_004f2f3c;

// USA 004F2E68 <- EU 004F2E40 (Ghidra, non-matching)
// GLOBAL DAT_004f2f24 int *
// GLOBAL DAT_004f2f28 float
// GLOBAL DAT_004f2f2c uint *
// GLOBAL DAT_004f2f30 float
// GLOBAL DAT_004f2f34 float
// GLOBAL DAT_004f2f38 int *
// GLOBAL DAT_004f2f3c float

void func_004F2E68(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  iVar2 = func_00588BE4(param_1);
  if (iVar2 == *DAT_004f2f24) {
    fVar6 = DAT_004f2f28;
    uVar3 = func_0058A1F4(param_1);
    fVar5 = DAT_004f2f34;
    if ((uVar3 != 0) && (*(char *)(param_2 + 0x21) == '\b')) {
      return;
    }
  }
  else {
    fVar6 = DAT_004f2f28;
    uVar4 = func_00588BE4(param_1);
    uVar3 = *DAT_004f2f2c;
    fVar5 = DAT_004f2f34;
    if (uVar4 == uVar3) {
      cVar1 = *(char *)(param_2 + 0x21);
      if (cVar1 != '\x02') {
        uVar3 = (uint)*(byte *)(param_2 + 0x23);
      }
      fVar5 = DAT_004f2f30;
      if ((cVar1 != '\x02' && uVar3 != 3) && (fVar5 = DAT_004f2f34, cVar1 == '\r')) {
        uVar3 = func_0055696C(*DAT_004f2f38,0xc);
        if (2 < uVar3) {
          return;
        }
        iVar2 = func_0058A468(param_1);
        fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
        fVar5 = (float)VectorUnsignedToFloat
                                 ((uint)*(ushort *)(param_2 + 0x30),(byte)(in_fpscr >> 0x15) & 3);
        return;
      }
    }
  }
  return;
}

