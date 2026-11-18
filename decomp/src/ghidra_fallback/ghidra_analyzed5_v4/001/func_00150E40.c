#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002978FC(int param_1,int param_2,int param_3);
extern int func_003529C0(undefined4 *param_1);
extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern int func_0054DE00(int param_1,uint param_2);
extern int func_0054DE18(int param_1,uint param_2);
extern int func_00581850(int param_1,uint *param_2);
extern undefined4 DAT_00151074;
extern int DAT_00151078;
extern undefined4 *DAT_0015107c;
extern undefined4 *DAT_00151080;
extern undefined4 DAT_00151084;
extern undefined4 DAT_00151088;
extern undefined4 DAT_0015108c;
extern undefined4 *DAT_00151090;
extern undefined4 DAT_00151094;
extern undefined4 DAT_00151098;
extern int *DAT_0015109c;

// USA 00150E40 <- EU 00150E40 (Ghidra, non-matching)
// GLOBAL DAT_00151074 undefined4
// GLOBAL DAT_00151078 int
// GLOBAL DAT_0015107c undefined4 *
// GLOBAL DAT_00151080 undefined4 *
// GLOBAL DAT_00151084 undefined4
// GLOBAL DAT_00151088 undefined4
// GLOBAL DAT_0015108c undefined4
// GLOBAL DAT_00151090 undefined4 *
// GLOBAL DAT_00151094 undefined4
// GLOBAL DAT_00151098 undefined4
// GLOBAL DAT_0015109c int *

int * func_00150E40(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  
  puVar2 = func_004ED00C(param_1,param_2);
  puVar2[200] = DAT_00151074;
  puVar3 = func_003529C0(puVar2 + 0xc9);
  iVar4 = DAT_00151078;
  puVar3[0x10] = puVar2;
  piVar13 = puVar3 + -0xc9;
  *piVar13 = iVar4;
  puVar3[-1] = iVar4 + 0x54;
  uVar10 = DAT_00151084;
  uVar8 = param_2[2];
  uVar11 = param_2[3];
  puVar3[0x11] = param_2[1];
  puVar3[0x12] = uVar8;
  puVar3[0x13] = uVar11;
  uVar1 = DAT_0015108c;
  uVar15 = DAT_00151088;
  uVar9 = DAT_0015107c[1];
  uVar12 = DAT_0015107c[2];
  puVar3[0x14] = *DAT_0015107c;
  puVar3[0x15] = uVar9;
  puVar3[0x16] = uVar12;
  uVar9 = *DAT_00151080;
  uVar12 = DAT_00151080[1];
  puVar3[0x19] = DAT_00151080[2];
  puVar3[0x17] = uVar9;
  puVar3[0x18] = uVar12;
  *(undefined1 *)(puVar3 + 0x1a) = 0;
  *(undefined1 *)((int)puVar3 + 0x69) = 0;
  *(undefined1 *)((int)puVar3 + 0x6a) = 0;
  *(undefined1 *)(puVar3 + 0x1b) = 0;
  *(undefined1 *)((int)puVar3 + 0x6d) = 0;
  *(undefined1 *)((int)puVar3 + 0x6e) = 0;
  *(undefined1 *)((int)puVar3 + 0x6f) = 0;
  *(undefined1 *)(puVar3 + 0x1c) = 0;
  *(undefined1 *)((int)puVar3 + 0x71) = 0;
  *(undefined1 *)((int)puVar3 + 0x72) = 0;
  *(undefined1 *)((int)puVar3 + 0x73) = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  puVar3[0x21] = 0;
  puVar3[0x22] = uVar10;
  puVar3[0x23] = uVar15;
  puVar3[0x24] = uVar1;
  puVar2 = DAT_00151090;
  puVar3[0x27] = 0;
  puVar3[0x25] = 0xff;
  uVar10 = DAT_00151098;
  uVar15 = puVar2[3];
  puVar3[0x28] = puVar2[2];
  puVar3[0x29] = uVar15;
  puVar3[0x26] = DAT_00151094;
  *(undefined1 *)(puVar3 + 0x2a) = 0;
  *(undefined1 *)((int)puVar3 + 0xa9) = 0;
  *(undefined1 *)((int)puVar3 + 0xaa) = 0;
  uVar8 = param_2[2];
  uVar11 = param_2[3];
  puVar3[0x2b] = param_2[1];
  puVar3[0x2c] = uVar8;
  puVar3[0x2d] = uVar11;
  puVar3[0x2e] = uVar10;
  puVar3[0x2f] = uVar10;
  puVar3[0x30] = uVar10;
  uVar8 = param_2[8];
  puVar3[0x33] = 0;
  puVar3[0x34] = 0;
  puVar3[0x31] = uVar8;
  puVar3[0x32] = puVar3 + 0x26;
  puVar3[0x37] = 0;
  puVar3[0x36] = puVar3 + 0x35;
  puVar3[0x39] = 0;
  puVar3[0x35] = puVar3 + 0x35;
  puVar3[0x38] = 0xffffffff;
  iVar14 = puVar3[-0x15] + 0x18;
  puVar3[0x22] = *(undefined4 *)(puVar3[-0x15] + 0x34);
  uVar15 = *puVar2;
  uVar10 = puVar2[1];
  puVar3[0x27] = piVar13;
  puVar3[0x29] = uVar10;
  puVar3[0x28] = uVar15;
  iVar4 = func_0054DE18(iVar14,0);
  if (iVar4 == 0) {
    iVar4 = puVar3[0x1f];
  }
  else {
    iVar4 = func_0054DE00(iVar14,0);
    puVar3[0x1f] = iVar4;
  }
  puVar3[0x20] = iVar4;
  puVar3[0x38] = 0x20;
  if (puVar3[0x39] == 0) {
    iVar4 = *(int *)(*(int *)(*DAT_0015109c + 0x30) + 0x20);
    piVar5 = (int *)(**(code **)(*piVar13 + 0x48))(piVar13);
    (**(code **)(*piVar5 + 8))(piVar5);
    pcVar6 = func_00581850(iVar4,(uint *)piVar5[1]);
    if (pcVar6 != (char *)0x0) {
      iVar4 = func_0010BAB4(0x1c);
      pvVar7 = (void *)0x0;
      if (iVar4 != 0) {
        pvVar7 = func_002978FC(iVar4,(int)(puVar3 + -1),(int)piVar13);
      }
      puVar3[0x39] = pvVar7;
    }
  }
  return piVar13;
}

