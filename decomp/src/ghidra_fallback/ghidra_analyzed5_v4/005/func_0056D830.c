#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_004137E4(void);
extern int func_00416EF8(int param_1,int param_2,int param_3);
extern int func_004170E4(int param_1);
extern int func_00417118(int param_1,int param_2);
extern int func_004171AC(int param_1,uint param_2);
extern int func_00417690(int param_1);
extern int func_004176AC(int param_1);
extern int func_00417A38(int param_1,int param_2);
extern int func_0041B9CC(int param_1,int param_2);
extern int func_0041B9E0(int param_1,int param_2);
extern int func_0041BD84(int param_1,undefined4 param_2,int param_3);
extern float DAT_0056db00;
extern float DAT_0056db04;
extern undefined4 DAT_0056db08;
extern float DAT_0056db0c;
extern float DAT_0056db10;
extern uint DAT_0056db14;
extern float DAT_0056dfe0;
extern char *DAT_0056dfe4;

// USA 0056D830 <- EU 0056D808 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_0056db00 float
// GLOBAL DAT_0056db04 float
// GLOBAL DAT_0056db08 undefined4
// GLOBAL DAT_0056db0c float
// GLOBAL DAT_0056db10 float
// GLOBAL DAT_0056db14 uint
// GLOBAL DAT_0056dfe0 float
// GLOBAL DAT_0056dfe4 char *

uint func_0056D830(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  byte *pbVar9;
  uint uVar10;
  ushort *puVar11;
  byte bVar12;
  uint uVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  longlong lVar19;
  
  piVar8 = (int *)(param_2 + 0x1c);
  uVar10 = param_4 & 0xff;
  iVar6 = param_4 * 5;
  uVar13 = *(uint *)(param_2 + 300);
  uVar5 = uVar13 + 0x74;
  bVar12 = (byte)param_4;
  sVar2 = (short)param_4;
  uVar1 = (ushort)param_5;
  if (param_3 < 0x100) {
    if (param_3 == 0xcc) {
      *(byte *)(param_2 + 0xec) = bVar12;
      return uVar5;
    }
    if (0xcc < (int)param_3) {
      switch(param_3) {
      case 0xcd:
        *(byte *)(param_2 + 0xb8) = bVar12;
        return uVar5;
      case 0xce:
        *(bool *)(param_2 + 0x81) = param_4 != 0;
        return (uint)(param_4 != 0);
      case 0xcf:
        *(byte *)(param_2 + 0xf7) = bVar12;
        return uVar5;
      case 0xd0:
        *(byte *)(param_2 + 0xf8) = bVar12;
        return uVar5;
      case 0xd1:
        *(byte *)(param_2 + 0xf9) = bVar12;
        return uVar5;
      case 0xd2:
        *(byte *)(param_2 + 0xfa) = bVar12;
        return uVar5;
      case 0xd3:
        *(byte *)(param_2 + 0xfb) = bVar12;
        return uVar5;
      case 0xd4:
        uVar5 = (uint)*(byte *)(param_2 + 0x78);
        if (9 < uVar5) {
          return uVar5;
        }
        piVar8[uVar5 * 2 + 4] = *(int *)(param_2 + 0x20);
        *(byte *)((int)piVar8 + uVar5 * 8 + 0xd) = bVar12;
        *(undefined1 *)(piVar8 + uVar5 * 2 + 3) = 1;
        uVar10 = *(byte *)(param_2 + 0x78) + 1;
        break;
      case 0xd5:
        pbVar9 = (byte *)(param_2 + 0x92);
        iVar6 = (int)*(short *)(param_2 + 0x96);
        uVar5 = (uint)*(short *)(param_2 + 0x94);
        if ((int)uVar5 <= iVar6) goto LAB_0056db34;
        goto LAB_0056db3c;
      case 0xd6:
        if (*DAT_0056dfe4 == '\0') {
          return 0;
        }
        if (0x1f < (int)param_4) {
          if (0x2f < (int)param_4) {
            return uVar13;
          }
          uVar5 = func_00417118(param_2,param_4 - 0x20);
          return uVar5;
        }
        uVar5 = func_0041B9E0(uVar13,param_4);
        return uVar5;
      case 0xd7:
        pbVar9 = (byte *)(param_2 + 0x9e);
        iVar6 = (int)*(short *)(param_2 + 0xa2);
        uVar5 = (uint)*(short *)(param_2 + 0xa0);
        if ((int)uVar5 <= iVar6) goto LAB_0056dbf0;
        goto LAB_0056dbf8;
      case 0xd8:
        fVar15 = (float)VectorSignedToFloat(param_4 - 0x40,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_2 + 0x104) = fVar15 * DAT_0056dfe0;
        return param_4 - 0x40;
      case 0xd9:
        *(byte *)(param_2 + 0x100) = bVar12;
        return uVar5;
      case 0xda:
        *(byte *)(param_2 + 0x101) = bVar12;
        return uVar5;
      case 0xdb:
        *(byte *)(param_2 + 0xff) = bVar12;
        return uVar5;
      case 0xdc:
        *(char *)(param_2 + 0xf2) = (char)(param_4 - 0x40);
        return param_4 - 0x40;
      case 0xdd:
        uVar5 = func_00417A38(param_2,param_4 & 0xff);
        return uVar5;
      default:
        return uVar5;
      case 0xdf:
        *(bool *)(param_2 + 0x82) = 0x3f < uVar10;
        return (uint)(0x3f < uVar10);
      case 0xe0:
        *(int *)(param_2 + 0xb4) = iVar6;
        return uVar5;
      case 0xe1:
        uVar10 = DAT_0056db14;
        if (((int)param_4 <= (int)DAT_0056db14) && (uVar10 = param_4, (int)param_4 < 0)) {
          uVar10 = 0;
        }
        *(short *)(uVar13 + 0x76) = (short)uVar10;
        return uVar5;
      case 0xe3:
        fVar15 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_2 + 0x88) = fVar15 * DAT_0056dfe0;
        return uVar5;
      case 0xe4:
        uVar5 = (uint)sVar2;
        if (uVar5 == 0) {
          *(undefined4 *)(param_2 + 0xb0) = DAT_0056db08;
          return 0;
        }
        fVar15 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_2 + 0xb0) = DAT_0056db0c / fVar15;
        return uVar5;
      case 0xfb:
        *(undefined1 *)(param_2 + 0xf8) = 0xff;
        *(undefined1 *)(param_2 + 0xf9) = 0xff;
        *(undefined1 *)(param_2 + 0xfa) = 0xff;
        *(undefined1 *)(param_2 + 0xfb) = 0xff;
        *(undefined2 *)(param_2 + 0xfc) = 0xff;
        return 0xff;
      case 0xfc:
        uVar10 = (uint)*(byte *)(param_2 + 0x78);
        if (uVar10 == 0) {
          return uVar5;
        }
        if ((char)piVar8[uVar10 * 2 + 1] == '\0') {
          return 0;
        }
        cVar4 = *(char *)((int)piVar8 + uVar10 * 8 + 5);
        if ((cVar4 == '\0') || (cVar4 = cVar4 + -1, cVar4 != '\0')) {
          *(char *)((int)piVar8 + uVar10 * 8 + 5) = cVar4;
          uVar5 = piVar8[uVar10 * 2 + 2];
          *(uint *)(param_2 + 0x20) = uVar5;
          return uVar5;
        }
        uVar10 = uVar10 - 1;
        break;
      case 0xfd:
        uVar5 = (uint)*(byte *)(param_2 + 0x78);
        if (uVar5 == 0) {
          return 0;
        }
        while( true ) {
          uVar10 = uVar5 - 1;
          uVar5 = uVar10 & 0xff;
          *(char *)(param_2 + 0x78) = (char)uVar10;
          if ((char)piVar8[uVar5 * 2 + 3] == '\0') break;
          if (uVar5 == 0) {
            return 0;
          }
        }
        if (piVar8 + uVar5 * 2 == (int *)0xfffffff4) {
          return 0;
        }
        uVar5 = (piVar8 + uVar5 * 2)[4];
LAB_0056df10:
        *(uint *)(param_2 + 0x20) = uVar5;
        return uVar5;
      }
      *(char *)(param_2 + 0x78) = (char)uVar10;
      return uVar10;
    }
    if (param_3 == 0xbf) {
      *(bool *)(param_2 + 0x79) = param_4 != 0;
      return (uint)(param_4 != 0);
    }
    if ((int)param_3 < 0xbf) {
      if (param_3 != 0xb2) {
        if (0xb1 < (int)param_3) {
          if (param_3 == 0xb6) {
            *(byte *)(param_2 + 0x83) = bVar12;
            return uVar5;
          }
          if (0xb6 < (int)param_3) {
            if (param_3 == 0xbd) {
              *(byte *)(param_2 + 0xba) = bVar12;
              return uVar5;
            }
            if (param_3 == 0xbe) {
              *(byte *)(param_2 + 0xb9) = bVar12;
            }
            return uVar5;
          }
          if (param_3 == 0xb3) {
            *(byte *)(param_2 + 0xf0) = bVar12;
            return uVar5;
          }
          if (param_3 != 0xb4) {
            if (param_3 != 0xb5) {
              return uVar5;
            }
            fVar15 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
            *(float *)(param_2 + 0x108) = fVar15 * DAT_0056db10;
            return uVar5;
          }
          *(byte *)(param_2 + 0xfe) = bVar12;
          return uVar5;
        }
        if (param_3 == 0x8a) {
          uVar5 = (uint)*(byte *)(param_2 + 0x78);
          if (9 < uVar5) {
            return uVar5;
          }
          piVar8[uVar5 * 2 + 4] = *(int *)(param_2 + 0x20);
          *(undefined1 *)(piVar8 + uVar5 * 2 + 3) = 0;
          *(char *)(param_2 + 0x78) = *(char *)(param_2 + 0x78) + '\x01';
        }
        else {
          if (0x8a < (int)param_3) {
            if (param_3 == 0xb0) {
              *(byte *)(uVar13 + 0x75) = bVar12;
              return uVar5;
            }
            if (param_3 != 0xb1) {
              return uVar5;
            }
            *(short *)(param_2 + 0xfc) = (short)uVar10;
            return uVar5;
          }
          if (param_3 == 0x81) {
            if ((int)param_4 < 0x10000) {
              uVar5 = param_4 & 0xffff;
              *(uint *)(param_2 + 0x84) = uVar5;
            }
            return uVar5;
          }
          if (param_3 == 0x88) {
            uVar5 = func_0041B9CC(uVar13,param_4);
            if (uVar5 == 0) {
              return 0;
            }
            if (uVar5 == param_2) {
              return uVar5;
            }
            func_004176AC(uVar5);
            func_00416EF8(uVar5,*piVar8,param_5);
            pvVar7 = func_00417690(uVar5);
            return (uint)pvVar7;
          }
          if (param_3 != 0x89) {
            return uVar5;
          }
        }
        uVar5 = *piVar8 + param_4;
        goto LAB_0056df10;
      }
      *(bool *)(param_2 + 0x27) = param_4 != 0;
      if (param_4 == 0) {
        return 0;
      }
LAB_0056ddc0:
      func_004171AC(param_2,0xffffffff);
      uVar5 = func_004170E4(param_2);
      return uVar5;
    }
    switch(param_3) {
    case 0xc0:
      bVar12 = bVar12 - 0x40;
      pbVar9 = (byte *)(param_2 + 0x98);
      iVar6 = (int)*(short *)(param_2 + 0x9c);
      uVar5 = (uint)*(short *)(param_2 + 0x9a);
      if ((int)uVar5 <= iVar6) {
LAB_0056dbf0:
        uVar5 = (uint)(char)pbVar9[1];
        goto LAB_0056dac4;
      }
      break;
    case 0xc1:
      pbVar9 = (byte *)(param_2 + 0x8c);
      iVar6 = (int)*(short *)(param_2 + 0x90);
      uVar5 = (uint)*(short *)(param_2 + 0x8e);
      if ((int)uVar5 <= iVar6) {
LAB_0056db34:
        uVar5 = (uint)pbVar9[1];
        goto LAB_0056dac4;
      }
      goto LAB_0056db3c;
    case 0xc2:
      pbVar9 = (byte *)(uVar13 + 0x78);
      iVar6 = (int)*(short *)(uVar13 + 0x7c);
      uVar5 = (uint)*(short *)(uVar13 + 0x7a);
      if ((int)uVar5 <= iVar6) goto LAB_0056db34;
LAB_0056db3c:
      bVar3 = *pbVar9;
      lVar19 = func_001104E4(((uint)pbVar9[1] - (uint)bVar3) * iVar6,uVar5);
      uVar5 = (int)lVar19 + (uint)bVar3 & 0xff;
      goto LAB_0056dac4;
    case 0xc3:
      *(byte *)(param_2 + 0xf4) = bVar12;
      return uVar5;
    case 0xc4:
      pbVar9 = (byte *)(param_2 + 0xa4);
      iVar6 = (int)*(short *)(param_2 + 0xa8);
      uVar5 = (uint)*(short *)(param_2 + 0xa6);
      if ((int)uVar5 <= iVar6) goto LAB_0056dbf0;
      break;
    case 0xc5:
      *(byte *)(param_2 + 0xf1) = bVar12;
      return uVar5;
    case 0xc6:
      *(byte *)(param_2 + 0xf5) = bVar12;
      return uVar5;
    case 199:
      *(bool *)(param_2 + 0x25) = param_4 != 0;
      return (uint)(param_4 != 0);
    case 200:
      *(bool *)(param_2 + 0x26) = param_4 != 0;
      goto LAB_0056ddc0;
    case 0xc9:
      *(undefined1 *)(param_2 + 0x81) = 1;
      uVar5 = *(byte *)(param_2 + 0xf4) + param_4;
      *(char *)(param_2 + 0xf6) = (char)uVar5;
      return uVar5;
    case 0xca:
      fVar15 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_2 + 0xac) = fVar15 * DAT_0056db00;
      return uVar5;
    case 0xcb:
      fVar15 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_2 + 0xb0) = fVar15 * DAT_0056db04;
      return uVar5;
    default:
      goto switchD_0056d93c_default;
    }
LAB_0056dbf8:
    bVar3 = *pbVar9;
    lVar19 = func_001104E4(((int)(char)pbVar9[1] - (int)(char)bVar3) * iVar6,uVar5);
    uVar5 = (uint)(char)((char)lVar19 + bVar3);
LAB_0056dac4:
    *pbVar9 = (byte)uVar5;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[1] = bVar12;
    *(ushort *)(pbVar9 + 2) = uVar1;
    return uVar5;
  }
  if (0xffff < param_3) {
    return uVar5;
  }
  uVar5 = param_3 & 0xff;
  puVar11 = (ushort *)0x0;
  fVar15 = DAT_0056db00;
  fVar16 = DAT_0056db04;
  uVar17 = DAT_0056db08;
  fVar18 = DAT_0056db0c;
  if ((param_3 & 0xf0) == 0x80 || (param_3 & 0xf0) == 0x90) {
    if ((int)param_4 < 0x20) {
      puVar11 = (ushort *)func_0041B9E0(uVar13,param_4);
    }
    else {
      if (0x2f < (int)param_4) {
        return uVar13;
      }
      puVar11 = (ushort *)func_00417118(param_2,param_4 - 0x20);
    }
    if (puVar11 == (ushort *)0x0) {
      return 0;
    }
  }
  if (uVar5 == 0xa3) {
    fVar15 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_2 + 0xc0) = fVar15 * fVar16;
    return 0xa3;
  }
  if (0xa3 < uVar5) {
    if (uVar5 == 0xae) {
      fVar16 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_2 + 0xdc) = fVar16 * fVar15;
      return 0xae;
    }
    if (uVar5 < 0xaf) {
      uVar5 = uVar5 - 0xa4;
      switch(uVar5) {
      case 0:
        *(byte *)(param_2 + 0xed) = bVar12;
        return uVar5;
      case 1:
        *(byte *)(param_2 + 200) = bVar12;
        return uVar5;
      case 2:
        *(byte *)(param_2 + 0xd9) = bVar12;
        return uVar5;
      case 3:
        *(byte *)(param_2 + 0xda) = bVar12;
        return uVar5;
      case 4:
        fVar16 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_2 + 0xcc) = fVar16 * fVar15;
        return uVar5;
      case 5:
        fVar15 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_2 + 0xd0) = fVar15 * fVar16;
        return uVar5;
      case 6:
        *(byte *)(param_2 + 0xee) = bVar12;
        return uVar5;
      case 7:
        *(byte *)(param_2 + 0xd8) = bVar12;
        return uVar5;
      case 8:
        *(byte *)(param_2 + 0xe9) = bVar12;
        return uVar5;
      case 9:
        *(byte *)(param_2 + 0xea) = bVar12;
        return uVar5;
      default:
        return uVar5;
      }
    }
    if (uVar5 == 0xe2) {
      uVar5 = (uint)sVar2;
      if (uVar5 == 0) {
        *(undefined4 *)(param_2 + 0xc0) = uVar17;
        return 0;
      }
      fVar15 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_2 + 0xc0) = fVar18 / fVar15;
      return uVar5;
    }
    if (uVar5 < 0xe2) {
      if (uVar5 == 0xb1) {
        *(byte *)(param_2 + 0xe8) = bVar12;
        return 0xb1;
      }
      if (uVar5 < 0xb2) {
        if (uVar5 != 0xaf) {
          if (uVar5 == 0xb0) {
            *(byte *)(param_2 + 0xef) = bVar12;
          }
          return uVar5;
        }
        fVar15 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_2 + 0xe0) = fVar15 * fVar16;
        return 0xaf;
      }
      if (uVar5 != 0xe0) {
        if (uVar5 == 0xe1) {
          *(int *)(param_2 + 0xc4) = iVar6;
        }
        return uVar5;
      }
      uVar5 = func_0041BD84(uVar13,param_4 & 0xffff,param_2);
      return uVar5;
    }
    if (uVar5 == 0xe3) {
      *(int *)(param_2 + 0xd4) = iVar6;
      return 0xe3;
    }
    if (uVar5 == 0xe4) {
      uVar5 = (uint)sVar2;
      if (uVar5 == 0) {
        *(undefined4 *)(param_2 + 0xd0) = uVar17;
        return 0;
      }
      fVar15 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_2 + 0xd0) = fVar18 / fVar15;
      return uVar5;
    }
    if (uVar5 == 0xe5) {
      *(int *)(param_2 + 0xe4) = iVar6;
      return 0xe5;
    }
    if (uVar5 != 0xe6) {
      return uVar5;
    }
    uVar5 = (uint)sVar2;
    if (uVar5 == 0) {
      *(undefined4 *)(param_2 + 0xe0) = uVar17;
      return 0;
    }
    fVar15 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_2 + 0xe0) = fVar18 / fVar15;
    return uVar5;
  }
  uVar5 = uVar5 - 0x80;
  switch(uVar5) {
  case 0:
    *puVar11 = uVar1;
    return uVar5;
  case 1:
    uVar5 = (int)(short)*puVar11 + (int)(short)uVar1;
    break;
  case 2:
    uVar5 = *puVar11 - param_5;
    break;
  case 3:
    uVar5 = (int)(short)*puVar11 * (int)(short)uVar1;
    break;
  case 4:
    if (param_5 == 0) {
      return uVar5;
    }
    lVar19 = func_001104E4((int)(short)*puVar11,(int)(short)uVar1);
    uVar5 = (uint)lVar19;
    break;
  case 5:
    if ((int)param_5 < 0) {
      uVar5 = (int)(short)*puVar11 >> (-param_5 & 0xff);
    }
    else {
      uVar5 = (uint)*puVar11 << (param_5 & 0xff);
    }
    break;
  case 6:
    bVar14 = (int)param_5 < 0;
    if (bVar14) {
      param_5 = (uint)(short)-uVar1;
    }
    uVar5 = func_004137E4();
    uVar5 = (int)(uVar5 * (param_5 + 1)) >> 0x10;
    if (bVar14) {
      uVar5 = -uVar5;
    }
    break;
  case 7:
    uVar5 = *puVar11 & param_5;
    break;
  case 8:
    uVar5 = *puVar11 | param_5;
    break;
  case 9:
    uVar5 = *puVar11 ^ param_5;
    break;
  case 10:
    uVar5 = ~param_5;
    break;
  case 0xb:
    if (param_5 != 0) {
      lVar19 = func_001104E4((int)(short)*puVar11,param_5);
      *puVar11 = (ushort)((ulonglong)lVar19 >> 0x20);
      return (uint)lVar19;
    }
  default:
switchD_0056d93c_default:
    return uVar5;
  case 0x10:
    if ((int)(short)*puVar11 != param_5) {
LAB_0056e34c:
      uVar5 = 0;
      goto LAB_0056e350;
    }
    goto LAB_0056e344;
  case 0x11:
    if ((int)(short)*puVar11 < (int)param_5) goto LAB_0056e34c;
    goto LAB_0056e344;
  case 0x12:
    if ((int)(short)*puVar11 <= (int)param_5) goto LAB_0056e34c;
    goto LAB_0056e344;
  case 0x13:
    if ((int)param_5 < (int)(short)*puVar11) goto LAB_0056e34c;
    goto LAB_0056e344;
  case 0x14:
    if ((int)param_5 <= (int)(short)*puVar11) goto LAB_0056e34c;
    goto LAB_0056e344;
  case 0x15:
    if ((int)(short)*puVar11 == param_5) goto LAB_0056e34c;
LAB_0056e344:
    uVar5 = 1;
LAB_0056e350:
    *(char *)(param_2 + 0x24) = (char)uVar5;
    return uVar5;
  case 0x20:
    *(byte *)(param_2 + 0xc9) = bVar12;
    return uVar5;
  case 0x21:
    *(byte *)(param_2 + 0xca) = bVar12;
    return uVar5;
  case 0x22:
    fVar16 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_2 + 0xbc) = fVar16 * fVar15;
    return uVar5;
  }
  *puVar11 = (ushort)uVar5;
  return uVar5;
}

