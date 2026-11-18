#include "ghidra_types.h"


// USA 001684B8 <- EU 001684B8 (Ghidra, non-matching)

uint func_001684B8(byte *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = *param_2;
  iVar7 = *(int *)(param_1 + 8);
  uVar5 = uVar3 | param_2[2];
  if ((((uVar5 & 0x440000) == 0) || ((param_1[0xc] & 1) == 0)) &&
     (((uVar3 & 0x440000) == 0 || ((param_1[0xc] & 1) != 0)))) {
    if ((((uVar5 & 0x880000) == 0) || ((param_1[0xc] & 1) == 0)) &&
       (((uVar3 & 0x880000) == 0 || ((param_1[0xc] & 1) != 0)))) {
      if ((((uVar5 & 0x110000) == 0) || ((param_1[0xc] & 1) == 0)) &&
         (((uVar3 & 0x110000) == 0 || ((param_1[0xc] & 1) != 0)))) {
        if ((((uVar5 & 0x220000) == 0) || ((param_1[0xc] & 1) == 0)) &&
           (((uVar3 & 0x220000) == 0 || ((param_1[0xc] & 1) != 0)))) goto LAB_00168958;
        pbVar6 = param_1 + 10;
        sVar2 = *(short *)(param_1 + 10) + -1;
        *(short *)(param_1 + 10) = sVar2;
        pbVar4 = param_1 + 8;
        iVar9 = param_1[2] - 1;
        iVar8 = *param_1 - 1;
        if (sVar2 < 0) {
          bVar1 = param_1[3];
          if (bVar1 != 0) {
            if (bVar1 != 1) {
              if (bVar1 != 2) goto LAB_00168958;
              *(short *)pbVar6 = (short)iVar9;
              sVar2 = *(short *)pbVar4;
              *(short *)pbVar4 = sVar2 + -1;
              if (-1 < (short)(sVar2 + -1)) goto LAB_00168958;
              bVar1 = param_1[1];
              if (bVar1 == 0) goto LAB_001688f4;
              if (bVar1 != 1) goto joined_r0x001687d4;
              goto LAB_001688ec;
            }
            goto LAB_001688a0;
          }
        }
        else {
          if (sVar2 <= iVar9) goto LAB_00168958;
          bVar1 = param_1[3];
          if (bVar1 == 0) goto LAB_001688a0;
          if (bVar1 != 1) {
            if (bVar1 != 2) goto LAB_00168958;
            pbVar6[0] = 0;
            pbVar6[1] = 0;
            sVar2 = *(short *)pbVar4;
            *(short *)pbVar4 = sVar2 + 1;
            if ((short)(sVar2 + 1) < iVar8) goto LAB_00168958;
            bVar1 = param_1[1];
            if (bVar1 != 0) {
              if (bVar1 != 1) goto joined_r0x00168834;
              goto LAB_001688f4;
            }
            goto LAB_001688ec;
          }
        }
      }
      else {
        pbVar6 = param_1 + 10;
        sVar2 = *(short *)(param_1 + 10) + 1;
        *(short *)(param_1 + 10) = sVar2;
        pbVar4 = param_1 + 8;
        iVar9 = param_1[2] - 1;
        iVar8 = *param_1 - 1;
        if (sVar2 < 0) {
          bVar1 = param_1[3];
          if (bVar1 != 0) {
            if (bVar1 != 1) {
              if (bVar1 != 2) goto LAB_00168958;
              *(short *)pbVar6 = (short)iVar9;
              sVar2 = *(short *)pbVar4;
              *(short *)pbVar4 = sVar2 + -1;
              if (-1 < (short)(sVar2 + -1)) goto LAB_00168958;
              bVar1 = param_1[1];
              if (bVar1 != 0) {
                if (bVar1 == 1) goto LAB_001688ec;
joined_r0x001687d4:
                if (bVar1 != 2) goto LAB_00168958;
              }
LAB_001688f4:
              *(short *)(param_1 + 8) = (short)iVar8;
              goto LAB_00168958;
            }
LAB_001688a0:
            param_1[10] = 0;
            param_1[0xb] = 0;
            goto LAB_00168958;
          }
        }
        else {
          if (sVar2 <= iVar9) goto LAB_00168958;
          bVar1 = param_1[3];
          if (bVar1 == 0) goto LAB_001688a0;
          if (bVar1 != 1) {
            if (bVar1 != 2) goto LAB_00168958;
            pbVar6[0] = 0;
            pbVar6[1] = 0;
            sVar2 = *(short *)pbVar4;
            *(short *)pbVar4 = sVar2 + 1;
            if ((short)(sVar2 + 1) < iVar8) goto LAB_00168958;
            bVar1 = param_1[1];
            if (bVar1 != 0) {
              if (bVar1 == 1) goto LAB_001688f4;
joined_r0x00168834:
              if (bVar1 != 2) goto LAB_00168958;
            }
            goto LAB_001688ec;
          }
        }
      }
      *(short *)(param_1 + 10) = (short)iVar9;
      goto LAB_00168958;
    }
    pbVar6 = param_1 + 10;
    sVar2 = *(short *)(param_1 + 8) + 1;
    *(short *)(param_1 + 8) = sVar2;
    pbVar4 = param_1 + 8;
    iVar9 = *param_1 - 1;
    iVar8 = param_1[2] - 1;
    if (sVar2 < 0) {
      bVar1 = param_1[1];
      if (bVar1 == 0) goto LAB_00168674;
      if (bVar1 != 1) {
        if (bVar1 != 2) goto LAB_00168958;
        *(short *)pbVar4 = (short)iVar9;
        sVar2 = *(short *)pbVar6;
        *(short *)pbVar6 = sVar2 + -1;
        if (-1 < (short)(sVar2 + -1)) goto LAB_00168958;
        bVar1 = param_1[3];
        if (bVar1 != 0) {
          if (bVar1 != 1) goto joined_r0x00168590;
          goto LAB_001686b8;
        }
LAB_001686c0:
        *(short *)(param_1 + 10) = (short)iVar8;
        goto LAB_00168958;
      }
    }
    else {
      if (sVar2 <= iVar9) goto LAB_00168958;
      bVar1 = param_1[1];
      if (bVar1 != 0) {
        if (bVar1 != 1) {
          if (bVar1 != 2) goto LAB_00168958;
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          sVar2 = *(short *)pbVar6;
          *(short *)pbVar6 = sVar2 + 1;
          if ((short)(sVar2 + 1) < iVar8) goto LAB_00168958;
          bVar1 = param_1[3];
          if (bVar1 == 0) goto LAB_001686b8;
          if (bVar1 != 1) goto joined_r0x001685f0;
          goto LAB_001686c0;
        }
        goto LAB_00168674;
      }
    }
  }
  else {
    pbVar6 = param_1 + 10;
    sVar2 = *(short *)(param_1 + 8) + -1;
    *(short *)(param_1 + 8) = sVar2;
    pbVar4 = param_1 + 8;
    iVar9 = *param_1 - 1;
    iVar8 = param_1[2] - 1;
    if (sVar2 < 0) {
      bVar1 = param_1[1];
      if (bVar1 == 0) {
LAB_00168674:
        *(short *)(param_1 + 8) = (short)iVar9;
        goto LAB_00168958;
      }
      if (bVar1 != 1) {
        if (bVar1 != 2) goto LAB_00168958;
        *(short *)pbVar4 = (short)iVar9;
        sVar2 = *(short *)pbVar6;
        *(short *)pbVar6 = sVar2 + -1;
        if (-1 < (short)(sVar2 + -1)) goto LAB_00168958;
        bVar1 = param_1[3];
        if (bVar1 != 0) {
          if (bVar1 == 1) goto LAB_001686b8;
joined_r0x00168590:
          if (bVar1 != 2) goto LAB_00168958;
        }
        goto LAB_001686c0;
      }
    }
    else {
      if (sVar2 <= iVar9) goto LAB_00168958;
      bVar1 = param_1[1];
      if (bVar1 != 0) {
        if (bVar1 != 1) {
          if (bVar1 != 2) goto LAB_00168958;
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          sVar2 = *(short *)pbVar6;
          *(short *)pbVar6 = sVar2 + 1;
          if ((short)(sVar2 + 1) < iVar8) goto LAB_00168958;
          bVar1 = param_1[3];
          if (bVar1 != 0) {
            if (bVar1 == 1) goto LAB_001686c0;
joined_r0x001685f0:
            if (bVar1 != 2) goto LAB_00168958;
          }
LAB_001686b8:
          param_1[10] = 0;
          param_1[0xb] = 0;
          goto LAB_00168958;
        }
        goto LAB_00168674;
      }
    }
  }
LAB_001688ec:
  param_1[8] = 0;
  param_1[9] = 0;
LAB_00168958:
  if (((short)iVar7 == *(short *)(param_1 + 8)) && (iVar7 >> 0x10 == (int)*(short *)(param_1 + 10)))
  {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3 ^ 1;
}

