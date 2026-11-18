#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern float DAT_002eb248;
extern float DAT_002eb24c;
extern int *DAT_002eb250;
extern int *DAT_002eb254;
extern int DAT_002eb258;
extern float DAT_002eb25c;
extern float DAT_002eb260;
extern float DAT_002eb264;

// USA 002EB18C <- EU 002EB168 (Ghidra, non-matching)
// GLOBAL DAT_002eb248 float
// GLOBAL DAT_002eb24c float
// GLOBAL DAT_002eb250 int *
// GLOBAL DAT_002eb254 int *
// GLOBAL DAT_002eb258 int
// GLOBAL DAT_002eb25c float
// GLOBAL DAT_002eb260 float
// GLOBAL DAT_002eb264 float

void func_002EB18C(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = DAT_002eb248;
  if (*(char *)(param_1 + 0xd3d) == '\0') {
    if (*(char *)(param_2 + 0x21) == '\0') {
      fVar4 = DAT_002eb24c;
      iVar2 = func_0052FBA0(*DAT_002eb250 + 0x3dbbc,*(uint *)(param_2 + 4));
      if ((iVar2 != 0) && (iVar2 = func_00588BE4(iVar2), iVar2 == *DAT_002eb254)) {
        return;
      }
    }
    else if ((*(char *)(param_1 + 0xd45) != '\x01') ||
            (((*(int *)(param_1 + 0xc20) - (int)*(short *)(DAT_002eb258 + param_1) < 0x60 &&
              (fVar3 = DAT_002eb25c, *(char *)(param_1 + 0x8cc) != '\x1f')) &&
             ((*(char *)(param_2 + 0x21) != '\x05' ||
              ((uVar1 = (*(uint *)(param_2 + 0x38) & 0xc000000) >> 0x1a, fVar3 = DAT_002eb260,
               uVar1 != 1 && (fVar3 = DAT_002eb264, uVar1 != 2)))))))) {
      return;
    }
  }
  return;
}

