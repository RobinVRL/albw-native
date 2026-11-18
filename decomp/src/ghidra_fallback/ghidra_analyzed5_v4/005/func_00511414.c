#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern float DAT_00511574;
extern int *DAT_00511578;
extern int *DAT_0051157c;
extern float DAT_00511580;

// USA 00511414 <- EU 005113EC (Ghidra, non-matching)
// GLOBAL DAT_00511574 float
// GLOBAL DAT_00511578 int *
// GLOBAL DAT_0051157c int *
// GLOBAL DAT_00511580 float

undefined4 func_00511414(int param_1,int param_2,float fparam_0,float fparam_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = DAT_00511574;
  bVar6 = false;
  bVar3 = false;
  uVar1 = 1 << (*(ushort *)(param_2 + 0x20) & 0x1f);
  if ((uVar1 & 0x88) == 0) {
    if (((uVar1 & 0x10) != 0) && ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x160)) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x46c) = 1;
  }
  else {
    iVar2 = func_0052FBA0(*DAT_00511578 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if ((iVar2 != 0) && (iVar2 = func_00588BE4(iVar2), iVar2 == *DAT_0051157c)) {
      *(undefined1 *)(param_1 + 0x46d) = 1;
      fVar7 = DAT_00511580;
      if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xd80U) == 0) ||
         ((*(ushort *)(param_2 + 0x20) & 0x7e0) != 0x1a0)) {
        bVar3 = true;
        *(undefined1 *)(param_1 + 0x46e) = 1;
      }
      bVar6 = true;
    }
    *(undefined1 *)(param_1 + 0x46c) = 1;
    if (bVar6) goto LAB_005114e4;
  }
  if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xd80U) != 0) &&
     ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x160)) {
    bVar6 = true;
    *(undefined1 *)(param_1 + 0x46d) = 1;
  }
LAB_005114e4:
  if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 2U) != 0) &&
     ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x2c0)) {
    bVar3 = true;
    *(undefined1 *)(param_1 + 0x46e) = 1;
  }
  bVar5 = false;
  bVar6 = !bVar6;
  bVar4 = false;
  fVar7 = *(float *)(param_2 + 0x14) + fVar7;
  if (!bVar6) {
    fVar8 = *(float *)(param_1 + 0x45c);
    bVar5 = fVar7 < fVar8;
    bVar6 = fVar7 == fVar8;
    bVar4 = NAN(fVar7) || NAN(fVar8);
  }
  if (!bVar6 && bVar5 == bVar4) {
    *(float *)(param_1 + 0x45c) = fVar7;
  }
  bVar6 = false;
  bVar3 = !bVar3;
  bVar5 = false;
  if (!bVar3) {
    fVar8 = *(float *)(param_1 + 0x460);
    bVar6 = fVar7 < fVar8;
    bVar3 = fVar7 == fVar8;
    bVar5 = NAN(fVar7) || NAN(fVar8);
  }
  if (!bVar3 && bVar6 == bVar5) {
    *(float *)(param_1 + 0x460) = fVar7;
  }
  fVar8 = *(float *)(param_1 + 0x468);
  if (*(float *)(param_1 + 0x468) <= fVar7) {
    fVar8 = fVar7;
  }
  *(float *)(param_1 + 0x468) = fVar8;
  if (fVar7 < *(float *)(param_1 + 0x464)) {
    fVar7 = *(float *)(param_1 + 0x464);
  }
  *(float *)(param_1 + 0x464) = fVar7;
  return 1;
}

