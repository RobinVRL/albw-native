#include "ghidra_types.h"

extern int func_001E70EC(undefined4 *param_1,uint *param_2);
extern int func_00290294(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int DAT_0036dd9c;
extern int *DAT_0036dda0;
extern int DAT_0036dda4;
extern int DAT_0036dda8;
extern int DAT_0036ddac;
extern int *DAT_0036ddb0;
extern int *DAT_0036ddb4;
extern int *DAT_0036ddb8;
extern int *DAT_0036ddbc;

// USA 0036DC00 <- EU 0036DBDC (Ghidra, non-matching)
// GLOBAL DAT_0036dd9c int
// GLOBAL DAT_0036dda0 int *
// GLOBAL DAT_0036dda4 int
// GLOBAL DAT_0036dda8 int
// GLOBAL DAT_0036ddac int
// GLOBAL DAT_0036ddb0 int *
// GLOBAL DAT_0036ddb4 int *
// GLOBAL DAT_0036ddb8 int *
// GLOBAL DAT_0036ddbc int *

int * func_0036DC00(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)func_001E70EC(param_1,param_2);
  piVar1 = DAT_0036dda0;
  iVar3 = DAT_0036dd9c;
  piVar2[200] = DAT_0036dd9c + 0x9c;
  *piVar2 = iVar3;
  piVar2[0x2bd] = 0;
  iVar3 = piVar1[0xd];
  piVar2[0x2be] = piVar1[0xc];
  piVar2[0x2bf] = iVar3;
  piVar2[700] = DAT_0036dda4;
  piVar2[0x2c1] = 0;
  iVar4 = DAT_0036ddac;
  iVar3 = piVar1[0xf];
  piVar2[0x2c2] = piVar1[0xe];
  piVar2[0x2c3] = iVar3;
  iVar3 = DAT_0036dda8;
  piVar2[0x2c4] = -1;
  piVar2[0x2c0] = iVar3;
  *(undefined1 *)(piVar2 + 0x2c5) = 0;
  piVar2[0x2c7] = 200;
  piVar2[0x2c6] = 0;
  piVar2[0x2c8] = iVar4;
  iVar3 = func_00588BE4((int)piVar2);
  if (iVar3 == *DAT_0036ddb0) {
    iVar3 = *piVar1;
    iVar4 = piVar1[1];
    piVar2[0x2bd] = (int)piVar2;
    piVar2[0x2be] = iVar3;
    piVar2[0x2bf] = iVar4;
    iVar3 = piVar1[2];
    iVar4 = piVar1[3];
    piVar2[0x2c1] = (int)piVar2;
    piVar2[0x2c2] = iVar3;
    piVar2[0x2c3] = iVar4;
    piVar2[0x2a5] = (int)(piVar2 + 700);
    piVar2[0x2a6] = (int)(piVar2 + 0x2c0);
  }
  else {
    iVar3 = func_00588BE4((int)piVar2);
    if (iVar3 == *DAT_0036ddb4) {
      iVar3 = piVar1[4];
      iVar4 = piVar1[5];
      piVar2[0x2bd] = (int)piVar2;
      piVar2[0x2be] = iVar3;
      piVar2[0x2bf] = iVar4;
      iVar3 = piVar1[6];
      iVar4 = piVar1[7];
      piVar2[0x2c1] = (int)piVar2;
      piVar2[0x2c2] = iVar3;
      piVar2[0x2c3] = iVar4;
      piVar2[0x2a5] = (int)(piVar2 + 700);
      piVar2[0x2a6] = (int)(piVar2 + 0x2c0);
    }
    else {
      iVar3 = func_00588BE4((int)piVar2);
      if (iVar3 == *DAT_0036ddb8) {
        piVar2[0x2c4] = 0;
        iVar3 = piVar1[8];
        iVar4 = piVar1[9];
        piVar2[0x2bd] = (int)piVar2;
        piVar2[0x2be] = iVar3;
        piVar2[0x2bf] = iVar4;
        iVar3 = piVar1[10];
        iVar4 = piVar1[0xb];
        piVar2[0x2c1] = (int)piVar2;
        piVar2[0x2c2] = iVar3;
        piVar2[0x2c3] = iVar4;
        piVar2[0x2a5] = (int)(piVar2 + 700);
        piVar2[0x2a6] = (int)(piVar2 + 0x2c0);
        func_00290294(*DAT_0036ddbc,0);
      }
    }
  }
  return piVar2;
}

