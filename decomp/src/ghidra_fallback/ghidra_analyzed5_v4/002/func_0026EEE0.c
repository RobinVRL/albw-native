#include "ghidra_types.h"

extern int *DAT_0026f108;
extern int *DAT_0026f10c;
extern float DAT_0026f110;
extern float DAT_0026f114;

// USA 0026EEE0 <- EU 0026EF08 (Ghidra, non-matching)
// GLOBAL DAT_0026f108 int *
// GLOBAL DAT_0026f10c int *
// GLOBAL DAT_0026f110 float
// GLOBAL DAT_0026f114 float

undefined4 func_0026EEE0(char *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  
  fVar4 = DAT_0026f114;
  fVar3 = DAT_0026f110;
  piVar2 = DAT_0026f10c;
  uVar9 = 0;
  uVar7 = 0;
  iVar5 = *DAT_0026f108;
  do {
    pcVar6 = param_1;
    if (uVar7 < 2) {
      pcVar6 = param_1 + uVar7 * 0x14;
    }
    cVar1 = pcVar6[1];
    if ((*pcVar6 != cVar1) && (-1 < cVar1)) {
      *pcVar6 = cVar1;
      pcVar6[1] = -1;
      iVar11 = *piVar2;
      *(int *)(pcVar6 + 8) = iVar11;
      if (iVar11 == 0) {
        *(float *)(pcVar6 + 0xc) = fVar3;
      }
      else {
        fparam_2 = (float)VectorUnsignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(pcVar6 + 0xc) = fVar4 / fparam_2;
      }
      pcVar6[4] = '\0';
      pcVar6[5] = '\0';
      pcVar6[6] = '\0';
      pcVar6[7] = '\0';
    }
    if (param_2 != 0) {
      pcVar6[8] = '\x01';
      pcVar6[9] = '\0';
      pcVar6[10] = '\0';
      pcVar6[0xb] = '\0';
      *(float *)(pcVar6 + 0xc) = fVar4;
      pcVar6[4] = '\0';
      pcVar6[5] = '\0';
      pcVar6[6] = '\0';
      pcVar6[7] = '\0';
    }
    uVar8 = *(uint *)(pcVar6 + 4);
    uVar10 = *(uint *)(pcVar6 + 8);
    if (uVar8 < uVar10) {
      uVar8 = uVar8 + 1;
      if (uVar10 == 0 || uVar8 == 0) {
        fparam_2 = fVar3;
      }
      *(uint *)(pcVar6 + 4) = uVar8;
      if (uVar10 != 0 && uVar8 != 0) {
        if (uVar8 < uVar10) {
          fVar14 = *(float *)(pcVar6 + 0xc);
          fVar13 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
          fparam_2 = fVar14 / (fVar4 - (fVar13 * fVar14 - fVar14));
          if ((int)ALBW_AS_U32(fparam_2) < 0x3f800001) goto LAB_0026f01c;
        }
        fparam_2 = fVar4;
      }
LAB_0026f01c:
      uVar8 = (uint)*pcVar6;
      if (uVar7 == 0) {
        if (uVar8 < *(uint *)(iVar5 + 0x7ac0)) {
          iVar11 = *(int *)(iVar5 + 0x7ac4);
          goto LAB_0026f03c;
        }
        pbVar12 = *(byte **)(iVar5 + 0x7ac4);
      }
      else if (uVar8 < *(uint *)(iVar5 + 0x7ac8)) {
        iVar11 = *(int *)(iVar5 + 0x7acc);
LAB_0026f03c:
        pbVar12 = (byte *)(iVar11 + uVar8 * 4);
      }
      else {
        pbVar12 = *(byte **)(iVar5 + 0x7acc);
      }
      uVar9 = 1;
      fVar13 = (float)VectorSignedToFloat((uint)(byte)pcVar6[0x10],(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (float)VectorSignedToFloat((uint)*pbVar12 - (uint)(byte)pcVar6[0x10],
                                          (byte)(in_fpscr >> 0x15) & 3);
      pcVar6[0x10] = (char)(int)(fVar13 + fVar14 * fparam_2);
      fVar13 = (float)VectorSignedToFloat((uint)(byte)pcVar6[0x11],(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (float)VectorSignedToFloat((uint)pbVar12[1] - (uint)(byte)pcVar6[0x11],
                                          (byte)(in_fpscr >> 0x15) & 3);
      pcVar6[0x11] = (char)(int)(fVar13 + fVar14 * fparam_2);
      fVar13 = (float)VectorSignedToFloat((uint)(byte)pcVar6[0x12],(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (float)VectorSignedToFloat((uint)pbVar12[2] - (uint)(byte)pcVar6[0x12],
                                          (byte)(in_fpscr >> 0x15) & 3);
      fparam_2 = ALBW_AS_F32((int)(fVar13 + fVar14 * fparam_2));
      pcVar6[0x12] = SUB41(fparam_2,0);
      pcVar6[2] = '\0';
    }
    else if (*pcVar6 == '\0') {
      pcVar6[2] = '\x01';
    }
    uVar7 = uVar7 + 1;
    if (1 < (int)uVar7) {
      return uVar9;
    }
  } while( true );
}

