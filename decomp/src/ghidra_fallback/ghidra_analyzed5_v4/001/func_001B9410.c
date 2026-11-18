#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00130B74(int param_1,int param_2,int param_3);
extern int func_001310F4(int param_1,int param_2,int param_3);
extern int func_001329B4(int param_1);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int *piRam001b9668;
extern int DAT_001b964c;
extern int *DAT_001b9650;
extern float DAT_001b9654;
extern float DAT_001b9658;
extern float *DAT_001b965c;
extern float DAT_001b9660;
extern int *DAT_001b9664;

// USA 001B9410 <- EU 001B9410 (Ghidra, non-matching)
// GLOBAL DAT_001b964c int
// GLOBAL DAT_001b9650 int *
// GLOBAL DAT_001b9654 float
// GLOBAL DAT_001b9658 float
// GLOBAL DAT_001b965c float *
// GLOBAL DAT_001b9660 float
// GLOBAL DAT_001b9664 int *
// GLOBAL UNK_001b9668 int *

void func_001B9410(int param_1)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  
  if (*(char *)(param_1 + 0x150) != '\0') {
    if (((*(uint *)(DAT_001b964c + 8) & 1) == 0) &&
       (iVar7 = func_00100174(DAT_001b9650), pfVar4 = DAT_001b965c, fVar3 = DAT_001b9658,
       fVar2 = DAT_001b9654, iVar7 != 0)) {
      pfVar10 = DAT_001b965c + 4;
      *DAT_001b965c = DAT_001b9654;
      pfVar4[1] = fVar3;
      pfVar4[2] = fVar3;
      pfVar4[3] = fVar3;
      fVar5 = DAT_001b9660;
      *pfVar10 = fVar3;
      pfVar4[5] = fVar2;
      pfVar4[6] = fVar3;
      pfVar4[7] = fVar3;
      pfVar4[8] = fVar3;
      pfVar4[9] = fVar3;
      pfVar4[10] = fVar2;
      pfVar4[0xb] = fVar5;
    }
    piVar6 = DAT_001b9664;
    uVar11 = 0;
    do {
      while( true ) {
        iVar7 = param_1 + 0x118;
        if (uVar11 < 2) {
          iVar7 = iVar7 + uVar11 * 0x10;
        }
        if ((*(int *)(iVar7 + 8) == 0) || (*(char *)(param_1 + 0x151) != '\0')) {
          iVar7 = 0;
        }
        else {
          iVar7 = 1;
        }
        if (uVar11 == 0) {
          iVar12 = *(int *)(param_1 + 0x138);
        }
        else {
          iVar12 = *(int *)(param_1 + 0x13c);
        }
        func_004CF478(iVar12,iVar7);
        if (iVar7 != 0) {
          iVar8 = func_001329B4(*piVar6);
          *(uint *)(iVar12 + 0x164) = *(uint *)(iVar12 + 0x164) | 0x40000000;
          func_001157FC((float *)(iVar12 + 0x80),(float *)(iVar8 + 0x120),DAT_001b965c);
          func_004CEAF0(iVar12);
        }
        uVar1 = (undefined1)iVar7;
        if (uVar11 != 0) break;
        iVar12 = *(int *)(param_1 + 0x140);
        *(undefined1 *)(iVar12 + 0x95) = uVar1;
        if (iVar7 == 0) {
          func_001310F4(*piVar6,iVar12,0);
        }
        else {
          func_00130B74(*piVar6,iVar12,0);
        }
        iVar12 = *(int *)(param_1 + 0x144);
        *(undefined1 *)(iVar12 + 0x95) = uVar1;
        if (iVar7 == 0) {
          func_001310F4(*piVar6,iVar12,0);
        }
        else {
          func_00130B74(*piVar6,iVar12,0);
        }
        uVar11 = 1;
      }
      iVar12 = *(int *)(param_1 + 0x148);
      *(undefined1 *)(iVar12 + 0x95) = uVar1;
      if (iVar7 == 0) {
        func_001310F4(*piVar6,iVar12,0);
      }
      else {
        func_00130B74(*piVar6,iVar12,0);
      }
      iVar12 = *(int *)(param_1 + 0x14c);
      *(undefined1 *)(iVar12 + 0x95) = uVar1;
      if (iVar7 == 0) {
        func_001310F4(*piVar6,iVar12,0);
      }
      else {
        func_00130B74(*piVar6,iVar12,0);
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 2);
    iVar7 = *piRam001b9668;
    *(undefined4 *)(**(int **)(*(int *)(param_1 + 0x138) + 0x20) + 0x50) =
         **(undefined4 **)(iVar7 + 0x7ad4);
    puVar9 = *(undefined4 **)(iVar7 + 0x7ad4);
    if (1 < *(uint *)(iVar7 + 0x7ad0)) {
      puVar9 = puVar9 + 1;
    }
    *(undefined4 *)(**(int **)(*(int *)(param_1 + 0x13c) + 0x20) + 0x50) = *puVar9;
  }
  return;
}

