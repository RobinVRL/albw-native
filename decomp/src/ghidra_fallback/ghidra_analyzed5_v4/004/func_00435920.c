#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_00434E18(int param_1,float *param_2,float *param_3);
extern int DAT_00435b04;
extern undefined4 DAT_00435b08;
extern undefined4 DAT_00435b0c;
extern uint DAT_00435b10;
extern undefined *DAT_00435b14;
extern int DAT_00435b18;
extern int DAT_00435b1c;
extern undefined4 DAT_00435b20;
extern uint *DAT_00435b24;
extern undefined4 *DAT_00435b28;
extern int DAT_00435b2c;
extern float *DAT_00435b30;

// USA 00435920 <- EU 00435900 (Ghidra, non-matching)
// GLOBAL DAT_00435b04 int
// GLOBAL DAT_00435b08 undefined4
// GLOBAL DAT_00435b0c undefined4
// GLOBAL DAT_00435b10 uint
// GLOBAL DAT_00435b14 undefined *
// GLOBAL DAT_00435b18 int
// GLOBAL DAT_00435b1c int
// GLOBAL DAT_00435b20 undefined4
// GLOBAL DAT_00435b24 uint *
// GLOBAL DAT_00435b28 undefined4 *
// GLOBAL DAT_00435b2c int
// GLOBAL DAT_00435b30 float *

void func_00435920(void)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define auStack_c8 ((undefined1 *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0x6c))
  #define local_60 (*(float *)(albw_frame + 0x70))
  #define local_5c (*(float *)(albw_frame + 0x74))
  #define local_58 (*(undefined4 *)(albw_frame + 0x78))
  #define local_54 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x80))
  #define local_4c (*(undefined4 *)(albw_frame + 0x84))
  #define local_48 (*(undefined4 *)(albw_frame + 0x88))
  #define local_44 (*(undefined4 *)(albw_frame + 0x8c))
  iVar1 = DAT_00435b04;
  iVar8 = 0;
  iVar11 = DAT_00435b04 + 0x138;
  uVar16 = (ulonglong)DAT_00435b10;
  iVar10 = DAT_00435b04 + 0x678;
  uVar13 = DAT_00435b08;
  uVar14 = DAT_00435b0c;
LAB_00435928:
  do {
    puVar9 = (undefined4 *)(iVar1 + iVar8 * 8);
    if (puVar9[1] == 0) {
      if (iVar8 == 5) {
        if (((*DAT_00435b24 & 1) == 0) &&
           (iVar8 = func_00100174((int *)DAT_00435b24), puVar3 = DAT_00435b28, iVar8 != 0)) {
          *DAT_00435b28 = uVar13;
          puVar3[1] = uVar13;
          puVar3[2] = uVar14;
          puVar3 = DAT_00435b28;
          puVar5 = DAT_00435b28 + 4;
          uVar15 = (undefined4)uVar16;
          DAT_00435b28[3] = uVar15;
          *puVar5 = uVar13;
          puVar3[5] = uVar14;
          puVar3[6] = uVar13;
          puVar3[7] = uVar15;
          puVar3[8] = uVar14;
          puVar3[9] = uVar15;
          puVar3[10] = uVar15;
          puVar3[0xb] = uVar14;
          puVar3[0xc] = uVar13;
          puVar3[0xd] = uVar15;
          puVar3[0xe] = uVar14;
          puVar3[0xf] = uVar15;
          puVar3[0x10] = uVar13;
          puVar3[0x11] = uVar14;
        }
        iVar8 = DAT_00435b2c;
        iVar7 = 0;
        iVar12 = DAT_00435b2c + -0xb0;
        do {
          func_00434E18(iVar8 + iVar7 * 0x68,(float *)(iVar12 + iVar7 * 0x24),DAT_00435b30);
          iVar6 = DAT_00435b2c;
          iVar7 = iVar7 + 1;
        } while (iVar7 < 2);
        iVar8 = 6;
        *puVar9 = 2;
        puVar9[1] = iVar6;
        goto LAB_00435928;
      }
      if ((iVar8 == 7 || iVar8 == 8) || iVar8 == 9) {
        func_00100118((int)auStack_c8,DAT_00435b14,0xc,8);
        func_00100118((int)&local_64,DAT_00435b14,0xc,3);
        iVar12 = DAT_00435b1c;
        iVar7 = DAT_00435b18;
        iVar6 = 0;
        do {
          puVar4 = (ushort *)(iVar7 + iVar6 * 6);
          pfVar2 = (float *)(iVar12 + (uint)*puVar4 * 0xc);
          local_64 = *pfVar2;
          local_60 = pfVar2[1];
          local_5c = pfVar2[2];
          puVar3 = (undefined4 *)(iVar12 + (uint)puVar4[1] * 0xc);
          local_58 = *puVar3;
          local_54 = puVar3[1];
          local_50 = puVar3[2];
          puVar3 = (undefined4 *)(iVar12 + (uint)puVar4[2] * 0xc);
          local_4c = *puVar3;
          local_48 = puVar3[1];
          local_44 = puVar3[2];
          func_00434E18(iVar11 + iVar6 * 0x68,&local_64,(float *)(iVar10 + iVar6 * 0xc));
          uVar15 = DAT_00435b20;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0xc);
        *puVar9 = 0xc;
        puVar9[1] = uVar15;
      }
    }
    iVar8 = iVar8 + 1;
    if (0xc < iVar8) {
      return;
    }
  } while( true );
}

