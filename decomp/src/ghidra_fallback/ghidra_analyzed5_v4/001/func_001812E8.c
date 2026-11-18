#include "ghidra_types.h"

extern int func_00120A64(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4);
extern int func_00520FC0(void);
extern int func_00588BE4(int param_1);
extern int *DAT_00181458;
extern int *DAT_0018145c;
extern int DAT_00181460;
extern int *DAT_00181464;
extern int DAT_00181468;
extern undefined4 DAT_0018146c;
extern undefined4 DAT_00181470;

// USA 001812E8 <- EU 001812E8 (Ghidra, non-matching)
// GLOBAL DAT_00181458 int *
// GLOBAL DAT_0018145c int *
// GLOBAL DAT_00181460 int
// GLOBAL DAT_00181464 int *
// GLOBAL DAT_00181468 int
// GLOBAL DAT_0018146c undefined4
// GLOBAL DAT_00181470 undefined4

undefined4 func_001812E8(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  uint in_r3;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0xbec) == '\0' || param_2 == 0) goto LAB_00181430;
  if (*(char *)(param_1 + 0x964) != '\t' && *(char *)(param_1 + 0x964) != '\b') {
    iVar3 = func_00588BE4(param_2);
    if ((iVar3 == *DAT_00181458) || (iVar3 == *DAT_0018145c)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (*(char *)(param_1 + 0x964) == '\x05') {
      if (bVar1) {
LAB_00181430:
        uVar2 = DAT_00181470;
        *(undefined4 *)(param_1 + 0x9f0) = 10;
        *(undefined4 *)(param_1 + 0x9f4) = uVar2;
        *(undefined4 *)(param_1 + 0x9ec) = 0;
        return 0;
      }
      pfVar4 = (float *)func_00520FC0();
      fVar5 = *(float *)(param_1 + 0x3d0) - *pfVar4;
      fVar7 = *(float *)(param_1 + 0x3d4) - pfVar4[1];
      fVar6 = *(float *)(param_1 + 0x3d8) - pfVar4[2];
      if (((int)ALBW_AS_U32((fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6)) < DAT_00181460) ||
         (iVar3 = func_00120A64((float *)(param_1 + 0x3d0),pfVar4,DAT_00181460,in_r3), iVar3 == 0))
      goto LAB_00181430;
    }
    if ((*(uint *)(param_1 + 0x9cc) <= *(uint *)(param_1 + 0x9c8)) ||
       ((!bVar1 &&
        (fVar5 = **(float **)(*DAT_00181464 + 0x20), fVar6 = (*(float **)(*DAT_00181464 + 0x20))[2],
        DAT_00181468 < (int)ALBW_AS_U32(SQRT(fVar5 * fVar5 + fVar6 * fVar6)))))) {
      *(undefined1 *)(param_1 + 0xbf3) = 1;
    }
    uVar2 = DAT_0018146c;
    *(undefined4 *)(param_1 + 0x9cc) = 0xf;
    *(undefined4 *)(param_1 + 0x9d0) = uVar2;
    *(undefined4 *)(param_1 + 0x9c8) = 0;
  }
  return 1;
}

