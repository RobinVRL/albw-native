#include "ghidra_types.h"

extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_00435714(undefined4 *param_1);
extern int DAT_0037db24;
extern int *DAT_0037db28;
extern int DAT_0037db2c;
extern float DAT_0037db30;
extern int DAT_0037db34;
extern int DAT_0037db38;
extern int *DAT_0037db3c;
extern int DAT_0037db40;
extern int *DAT_0037db44;
extern int DAT_0037db48;
extern float DAT_0037db4c;
extern float DAT_0037db50;
extern float DAT_0037db54;
extern int DAT_0037db58;

// USA 0037D86C <- EU 0037D848 (Ghidra, non-matching)
// GLOBAL DAT_0037db24 int
// GLOBAL DAT_0037db28 int *
// GLOBAL DAT_0037db2c int
// GLOBAL DAT_0037db30 float
// GLOBAL DAT_0037db34 int
// GLOBAL DAT_0037db38 int
// GLOBAL DAT_0037db3c int *
// GLOBAL DAT_0037db40 int
// GLOBAL DAT_0037db44 int *
// GLOBAL DAT_0037db48 int
// GLOBAL DAT_0037db4c float
// GLOBAL DAT_0037db50 float
// GLOBAL DAT_0037db54 float
// GLOBAL DAT_0037db58 int

int * func_0037D86C(undefined4 *param_1,uint *param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((undefined4 *)(albw_frame + 0x8))
  piVar6 = func_00150E40(param_1,param_2);
  iVar13 = DAT_0037db24;
  piVar6[200] = DAT_0037db24 + 100;
  *piVar6 = iVar13;
  piVar6[0x103] = 0;
  piVar6[0x104] = 0;
  piVar6[0x105] = 0;
  local_28[0] = 7;
  piVar7 = func_00435714(local_28);
  piVar9 = piVar6 + 0x106;
  piVar6[0x108] = 0x1300;
  *piVar9 = (int)piVar7;
  piVar6[0x107] = 0;
  *(undefined1 *)(piVar6 + 0x109) = 0;
  *(undefined1 *)((int)piVar6 + 0x425) = 0;
  piVar7 = DAT_0037db28;
  *(undefined1 *)((int)piVar6 + 0x426) = 0;
  *(undefined1 *)((int)piVar6 + 0x427) = 0;
  *(undefined1 *)(piVar6 + 0x10a) = 0;
  *(undefined1 *)((int)piVar6 + 0x429) = 0;
  iVar2 = DAT_0037db38;
  iVar11 = DAT_0037db34;
  fVar1 = DAT_0037db30;
  iVar13 = DAT_0037db2c;
  *(bool *)((int)piVar6 + 0x42a) =
       *(char *)(*piVar7 + 0x18) == '\a' || *(char *)(*piVar7 + 0x18) == '%';
  *(undefined1 *)((int)piVar6 + 0x42b) = 0;
  *(undefined2 *)(piVar6 + 0x10b) = 0;
  piVar6[0x10c] = 0;
  piVar6[0x10d] = 0;
  piVar6[0x10e] = iVar13;
  piVar6[0x10f] = (int)ALBW_AS_U32(fVar1);
  piVar6[0x110] = iVar11;
  piVar6[0x111] = iVar11;
  piVar6[0x112] = iVar2;
  piVar6[0x113] = 4;
  piVar6[0x114] = 0;
  piVar6[0x115] = 0;
  piVar6[0x116] = 0;
  piVar6[0x117] = iVar13;
  uVar8 = param_2[4];
  uVar10 = param_2[5];
  piVar6[0x11a] = param_2[6];
  piVar6[0x118] = uVar8;
  piVar6[0x119] = uVar10;
  piVar6[0x11d] = (int)(piVar6 + 0xf7);
  piVar6[0x11b] = (int)piVar6;
  piVar6[0x11c] = (int)(piVar6 + 0x118);
  *(undefined1 *)(piVar6 + 0x11e) = 0;
  *(undefined1 *)((int)piVar6 + 0x479) = 1;
  *(undefined1 *)((int)piVar6 + 0x47a) = 0;
  piVar7 = DAT_0037db3c;
  *(undefined1 *)((int)piVar6 + 0x47b) = 0;
  *(undefined1 *)(piVar6 + 0x11f) = 1;
  piVar6[0x121] = (int)(piVar6 + 0x122);
  piVar6[0x120] = 0;
  piVar6[0x123] = 0;
  iVar11 = piVar7[5];
  piVar6[0x124] = piVar7[4];
  piVar6[0x125] = iVar11;
  iVar11 = DAT_0037db40;
  piVar6[0x122] = DAT_0037db40;
  piVar6[0x127] = 0;
  iVar15 = piVar7[5];
  piVar6[0x128] = piVar7[4];
  piVar6[0x129] = iVar15;
  piVar6[0x126] = iVar11;
  piVar6[0x12a] = 0;
  piVar6[299] = 0;
  piVar6[300] = iVar13;
  piVar3 = DAT_0037db44;
  piVar6[0x12d] = iVar2;
  *(undefined1 *)(piVar6 + 0x12e) = 0;
  fVar5 = DAT_0037db54;
  iVar13 = piVar3[1];
  iVar11 = piVar3[2];
  piVar6[0x12f] = *piVar3;
  piVar6[0x130] = iVar13;
  piVar6[0x131] = iVar11;
  iVar13 = piVar3[1];
  iVar11 = piVar3[2];
  piVar6[0x132] = *piVar3;
  fVar12 = DAT_0037db4c;
  piVar6[0x133] = iVar13;
  piVar6[0x134] = iVar11;
  fVar4 = DAT_0037db50;
  if (*(char *)((int)piVar6 + 0x42a) != '\0') {
    piVar6[0x108] = DAT_0037db48;
  }
  uVar8 = *(uint *)(piVar6[0x106] + 0x2c);
  *(uint *)(piVar6[0x106] + 0x2c) = uVar8 | 1;
  *(uint *)(*piVar9 + 0x2c) = uVar8 | 5;
  *(uint *)(*piVar9 + 0x2c) = uVar8 | 0x200005;
  *(undefined2 *)(*piVar9 + 0x28) = 7;
  fVar14 = ALBW_AS_F32(piVar6[0x10f]);
  piVar9 = (int *)*piVar9;
  iVar13 = piVar6[0x110];
  piVar9[0x16] = (int)ALBW_AS_U32((fVar14 * fVar12));
  piVar9[0x17] = iVar13;
  piVar9[0x18] = (int)ALBW_AS_U32((fVar14 * fVar12));
  fVar12 = ALBW_AS_F32(piVar6[0x110]);
  fVar14 = ALBW_AS_F32(piVar6[0xf5]);
  iVar13 = piVar6[0xf6];
  piVar9[1] = piVar6[0xf4];
  piVar9[2] = (int)ALBW_AS_U32((fVar14 + ((fVar4 - fVar12 * fVar1) - fVar5)));
  piVar9[3] = iVar13;
  func_004356B4(piVar9);
  *(undefined1 *)(piVar6 + 0xf3) = 1;
  iVar13 = *piVar7;
  iVar11 = piVar7[1];
  piVar6[0x123] = (int)piVar6;
  piVar6[0x124] = iVar13;
  piVar6[0x125] = iVar11;
  iVar13 = piVar7[2];
  iVar11 = piVar7[3];
  piVar6[0x127] = (int)piVar6;
  piVar6[0x128] = iVar13;
  piVar6[0x129] = iVar11;
  piVar6[0x113] = 3;
  piVar6[0xfb] = (int)(piVar6 + 0x126);
  iVar11 = ((int)*(short *)((int)piVar6 + 0x5a) >> 0x1f) + 1;
  *(char *)((int)piVar6 + 0x426) = (char)iVar11;
  iVar13 = DAT_0037db58;
  if (iVar11 == 0) {
    piVar6[0x10d] = 0x18;
    piVar6[0x10e] = iVar13;
    piVar6[0x10c] = 0;
  }
  return piVar6;
}

