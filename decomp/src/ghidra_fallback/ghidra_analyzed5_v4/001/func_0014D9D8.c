#include "ghidra_types.h"

extern int func_005895C4(ushort *param_1,int param_2,int param_3);
extern float *DAT_0014dbe4;
extern int DAT_0014dbe8;
extern int DAT_0014dbec;
extern int DAT_0014dbf0;

// USA 0014D9D8 <- EU 0014D9D8 (Ghidra, non-matching)
// GLOBAL DAT_0014dbe4 float *
// GLOBAL DAT_0014dbe8 int
// GLOBAL DAT_0014dbec int
// GLOBAL DAT_0014dbf0 int

void func_0014D9D8(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  float *pfVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  
  pfVar2 = DAT_0014dbe4;
  if ((*(ushort *)(param_3 + 0x20) & 0x1f) == 0) {
    if (*(int *)(param_3 + 8) < DAT_0014dbe8) {
      *param_2 = *param_2 | 8;
      goto LAB_0014dae8;
    }
    if (*(int *)(param_3 + 8) <= DAT_0014dbec) goto LAB_0014db0c;
    *param_2 = *param_2 | 2;
  }
  else {
    *param_2 = *param_2 | 1 << (*(ushort *)(param_3 + 0x20) & 0x1f);
    iVar5 = func_005895C4((ushort *)(param_3 + 0x20),param_3 + 4,0);
    if (iVar5 != 0) {
      *param_2 = *param_2 | 2;
    }
    uVar1 = 1 << (*(ushort *)(param_3 + 0x20) & 0x1f);
    if (((uVar1 & 7) == 0) && (iVar5 == 0)) {
      if ((uVar1 & 0x78) == 0) goto LAB_0014db0c;
LAB_0014dae8:
      if (pfVar2[1] < *(float *)(param_3 + 0x1c)) {
        *(char *)(param_1 + 0x393) = (char)((*(ushort *)(param_3 + 0x20) & 0x7e0) >> 5);
      }
      goto LAB_0014db0c;
    }
  }
  if (*pfVar2 < *(float *)(param_3 + 0x1c)) {
    *(char *)(param_1 + 0x392) = (char)((*(ushort *)(param_3 + 0x20) & 0x7e0) >> 5);
    uVar1 = (*(ushort *)(param_3 + 0x20) & 0xb000) >> 0xc;
    uVar3 = (undefined1)uVar1;
    if (3 < uVar1) {
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x394) = uVar3;
  }
LAB_0014db0c:
  if (((1 << (*(ushort *)(param_3 + 0x20) & 0x1f) & 0xc00U) != 0) ||
     ((*(ushort *)(param_3 + 0x20) & 0x7e0) == 0x200)) {
    *(undefined1 *)(param_1 + 0x38c) = 1;
  }
  if ((((*(ushort *)(param_3 + 0x20) & 0x7e0) == 0x180) &&
      (*(undefined1 *)(param_1 + 0x38d) = 1, (*(ushort *)(param_3 + 0x20) & 0x1f) == 7)) &&
     ((*(char *)(param_1 + 0x3ce) == '\0' || (DAT_0014dbf0 < *(int *)(param_3 + 8))))) {
    *(undefined1 *)(param_1 + 0x38f) = 1;
  }
  uVar4 = *(ushort *)(param_3 + 0x20);
  if ((((uVar4 & 0x1f) == 4) && ((uVar4 & 0x7e0) == 0x240)) ||
     (((uVar4 & 0x1f) == 6 && ((uVar4 & 0x7e0) == 0x300)))) {
    *(undefined1 *)(param_1 + 0x390) = 1;
  }
  uVar4 = *(ushort *)(param_3 + 0x20);
  bVar6 = (uVar4 & 0x1f) == 7;
  if (bVar6) {
    uVar4 = uVar4 & 0x7e0;
  }
  if (bVar6 && uVar4 == 0x160) {
    *(undefined1 *)(param_1 + 0x38e) = 1;
  }
  *(uint *)(param_1 + 0x398) =
       *(uint *)(param_1 + 0x398) | 1 << (*(ushort *)(param_3 + 0x20) & 0x1f);
  return;
}

