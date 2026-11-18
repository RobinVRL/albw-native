#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_005895C4(ushort *param_1,int param_2,int param_3);
extern int *DAT_0042a22c;
extern int *DAT_0042a230;
extern int *DAT_0042a234;
extern int *DAT_0042a238;
extern int *DAT_0042a23c;

// USA 0042A124 <- EU 0042A104 (Ghidra, non-matching)
// GLOBAL DAT_0042a22c int *
// GLOBAL DAT_0042a230 int *
// GLOBAL DAT_0042a234 int *
// GLOBAL DAT_0042a238 int *
// GLOBAL DAT_0042a23c int *

undefined4 func_0042A124(int param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_2 + 0x14);
  if ((*(float *)(param_1 + 0x10) < fVar5) &&
     (iVar3 = func_0052FBA0(*DAT_0042a22c + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar3 != 0)) {
    iVar3 = func_00588BE4(iVar3);
    iVar4 = func_005895C4((ushort *)(param_2 + 0x20),param_2 + 4,0);
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x20);
    *(float *)(param_1 + 0x14) = fVar5;
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x10) = fVar5;
      if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xc00U) == 0) &&
         ((*(ushort *)(param_2 + 0x20) & 0x7e0) != 0x200)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined1 *)(param_1 + 0x1b) = uVar2;
      piVar1 = DAT_0042a234;
      if (iVar3 == *DAT_0042a230) {
        *(undefined1 *)(param_1 + 0x1a) = 1;
      }
      if (((iVar3 != *piVar1) && (iVar3 != *DAT_0042a238)) && (iVar3 != *DAT_0042a23c)) {
        *(undefined1 *)(param_1 + 0x1a) = 1;
      }
    }
  }
  if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xc00U) != 0) ||
     ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x200)) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return 1;
}

