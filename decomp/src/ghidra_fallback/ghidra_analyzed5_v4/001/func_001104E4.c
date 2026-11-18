#include "ghidra_types.h"

extern int func_00110384(undefined4 param_1);

// USA 001104E4 <- EU 001104E4 (Ghidra, non-matching)

longlong func_001104E4(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  if ((int)(param_1 | param_2) < 0) {
    uVar6 = param_2 & 0x80000000;
    if ((int)uVar6 < 0) {
      param_2 = -param_2;
    }
    uVar5 = uVar6 ^ (int)param_1 >> 0x20;
    if (SUB41(param_1 >> 0x1f,0)) {
      param_1 = -param_1;
    }
    iVar4 = (int)uVar5 >> 0x1f;
    uVar3 = param_2;
    if (param_1 >> 4 < param_2) goto LAB_001106b4;
    if (param_1 >> 8 < param_2) goto LAB_00110684;
    uVar3 = param_2 << 6;
    uVar6 = 0xfc000000;
    if (param_1 >> 8 < uVar3) goto LAB_00110684;
    uVar3 = param_2 << 0xc;
    uVar6 = 0xfff00000;
    if (param_1 >> 8 < uVar3) goto LAB_00110684;
    uVar3 = param_2 << 0x12;
    uVar6 = 0xffffc000;
    if (uVar3 <= param_1 >> 8) {
      uVar3 = param_2 << 0x18;
      uVar6 = 0xffffff00;
    }
    bVar8 = uVar3 == 0;
    if (!bVar8) {
      do {
        if (bVar8) {
          uVar3 = uVar3 >> 6;
        }
LAB_00110684:
        bVar8 = uVar3 <= param_1 >> 7;
        if (bVar8) {
          param_1 = param_1 + uVar3 * -0x80;
        }
        bVar9 = uVar3 <= param_1 >> 6;
        if (bVar9) {
          param_1 = param_1 + uVar3 * -0x40;
        }
        bVar10 = uVar3 <= param_1 >> 5;
        if (bVar10) {
          param_1 = param_1 + uVar3 * -0x20;
        }
        bVar11 = uVar3 <= param_1 >> 4;
        if (bVar11) {
          param_1 = param_1 + uVar3 * -0x10;
        }
        uVar6 = (((uVar6 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                (uint)bVar11;
LAB_001106b4:
        bVar8 = uVar3 <= param_1 >> 3;
        if (bVar8) {
          param_1 = param_1 + uVar3 * -8;
        }
        uVar7 = uVar6 * 2 + (uint)bVar8;
        bVar9 = uVar3 <= param_1 >> 2;
        if (bVar9) {
          param_1 = param_1 + uVar3 * -4;
        }
        uVar6 = uVar7 * 2 + (uint)bVar9;
        bVar8 = true;
      } while (CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)bVar9));
      bVar8 = uVar3 <= param_1 >> 1;
      if (bVar8) {
        param_1 = param_1 + uVar3 * -2;
      }
      uVar7 = param_1 - uVar3;
      if (uVar3 > param_1) {
        uVar7 = param_1;
      }
      iVar1 = (uVar6 * 2 + (uint)bVar8) * 2 + (uint)(uVar3 <= param_1);
      if (iVar4 < 0) {
        iVar1 = -iVar1;
      }
      if ((bool)((byte)(uVar5 >> 0x1e) & 1)) {
        uVar7 = -uVar7;
      }
      return CONCAT44(uVar7,iVar1);
    }
    if (iVar4 < 0) {
      param_1 = -param_1;
    }
LAB_00110700:
    uVar2 = func_00110384(0);
    return CONCAT44(param_1,uVar2);
  }
  if (param_1 >> 1 < param_2) {
    if (param_1 < param_2) {
      return (ulonglong)param_1 << 0x20;
    }
    return CONCAT44(param_1 - param_2,1);
  }
  iVar4 = 0;
  uVar6 = param_2;
  if (param_2 <= param_1 >> 4) {
    if (param_2 <= param_1 >> 8) {
      if (param_1 >> 0xc < param_2) goto LAB_00110570;
      if (param_1 >> 0x10 < param_2) goto LAB_00110540;
      uVar6 = param_2 << 8;
      iVar4 = -0x1000000;
      if (uVar6 <= param_1 >> 0x10) {
        iVar4 = -0x10000;
        uVar6 = param_2 << 0x10;
      }
      if (param_1 >> 0xc < uVar6) goto LAB_00110570;
      bVar8 = false;
      if (uVar6 == 0) goto LAB_00110700;
      do {
        if (bVar8) {
          uVar6 = uVar6 >> 8;
        }
LAB_00110540:
        bVar8 = uVar6 <= param_1 >> 0xf;
        if (bVar8) {
          param_1 = param_1 + uVar6 * -0x8000;
        }
        bVar9 = uVar6 <= param_1 >> 0xe;
        if (bVar9) {
          param_1 = param_1 + uVar6 * -0x4000;
        }
        bVar10 = uVar6 <= param_1 >> 0xd;
        if (bVar10) {
          param_1 = param_1 + uVar6 * -0x2000;
        }
        bVar11 = uVar6 <= param_1 >> 0xc;
        if (bVar11) {
          param_1 = param_1 + uVar6 * -0x1000;
        }
        iVar4 = (((iVar4 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                (uint)bVar11;
LAB_00110570:
        bVar8 = uVar6 <= param_1 >> 0xb;
        if (bVar8) {
          param_1 = param_1 + uVar6 * -0x800;
        }
        bVar9 = uVar6 <= param_1 >> 10;
        if (bVar9) {
          param_1 = param_1 + uVar6 * -0x400;
        }
        bVar10 = uVar6 <= param_1 >> 9;
        if (bVar10) {
          param_1 = param_1 + uVar6 * -0x200;
        }
        uVar5 = ((iVar4 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10;
        bVar9 = uVar6 <= param_1 >> 8;
        if (bVar9) {
          param_1 = param_1 + uVar6 * -0x100;
        }
        iVar4 = uVar5 * 2 + (uint)bVar9;
        bVar8 = true;
      } while (CARRY4(uVar5,uVar5) || CARRY4(uVar5 * 2,(uint)bVar9));
    }
    bVar8 = uVar6 <= param_1 >> 7;
    if (bVar8) {
      param_1 = param_1 + uVar6 * -0x80;
    }
    bVar9 = uVar6 <= param_1 >> 6;
    if (bVar9) {
      param_1 = param_1 + uVar6 * -0x40;
    }
    bVar10 = uVar6 <= param_1 >> 5;
    if (bVar10) {
      param_1 = param_1 + uVar6 * -0x20;
    }
    bVar11 = uVar6 <= param_1 >> 4;
    if (bVar11) {
      param_1 = param_1 + uVar6 * -0x10;
    }
    iVar4 = (((iVar4 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 + (uint)bVar11;
  }
  bVar8 = uVar6 <= param_1 >> 3;
  if (bVar8) {
    param_1 = param_1 + uVar6 * -8;
  }
  bVar9 = uVar6 <= param_1 >> 2;
  if (bVar9) {
    param_1 = param_1 + uVar6 * -4;
  }
  bVar10 = uVar6 <= param_1 >> 1;
  if (bVar10) {
    param_1 = param_1 + uVar6 * -2;
  }
  uVar5 = param_1 - uVar6;
  if (uVar6 > param_1) {
    uVar5 = param_1;
  }
  return CONCAT44(uVar5,(((iVar4 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                        (uint)(uVar6 <= param_1));
}

