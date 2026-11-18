#include "ghidra_types.h"

extern int func_0010B830(undefined4 *param_1);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BA60(undefined4 *param_1);
extern int func_0010C0B8(int param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010EEE0(int param_1);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0048D9D0(int *param_1,byte *param_2);
extern int func_0049DC40(int param_1,byte *param_2,int param_3);
extern int func_0049E064(int param_1);
extern int func_0049FA78(undefined1 *param_1);
extern undefined4 DAT_0049e6f8;
extern undefined DAT_0049e6fc;
extern undefined4 DAT_0049e700;
extern undefined4 DAT_0049e704;
extern int DAT_0049e708;
extern undefined4 DAT_0049e70c;
extern uint *DAT_0049e710;
extern char s_cf_0049e714[];
extern char s_sead__TaskMgr_0049e714[];

// USA 0049E510 <- EU 0049E4E8 (Ghidra, non-matching)
// GLOBAL DAT_0049e6f8 undefined4
// GLOBAL DAT_0049e6fc undefined
// GLOBAL DAT_0049e700 undefined4
// GLOBAL DAT_0049e704 undefined4
// GLOBAL DAT_0049e708 int
// GLOBAL DAT_0049e70c undefined4
// GLOBAL DAT_0049e710 uint *
// GLOBAL s_cf_0049e714 string

undefined4 * func_0049E510(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  *param_1 = DAT_0049e6f8;
  puVar3 = func_0010B830(param_1 + 1);
  puVar3[7] = param_2[5];
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[0xb] = puVar3 + 10;
  puVar3[0xc] = 0;
  puVar3[10] = puVar3 + 10;
  puVar3[0xe] = puVar3 + 0xd;
  puVar3[0xf] = 0;
  puVar3[0xd] = puVar3 + 0xd;
  puVar3[0x11] = puVar3 + 0x10;
  puVar3[0x12] = 0;
  puVar3[0x10] = puVar3 + 0x10;
  puVar3[0x14] = puVar3 + 0x13;
  puVar3[0x15] = 0;
  puVar3[0x13] = puVar3 + 0x13;
  puVar3[0x17] = puVar3 + 0x16;
  puVar3[0x18] = 0;
  puVar3[0x16] = puVar3 + 0x16;
  puVar3[0x1a] = puVar3 + 0x19;
  puVar3[0x1b] = 0;
  puVar3[0x19] = puVar3 + 0x19;
  puVar3[0x21] = 0;
  puVar3[0x20] = 0;
  puVar3[0x23] = *param_2;
  puVar4 = func_0049FA78((undefined1 *)(puVar3 + 0x25));
  uVar5 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar12 = param_2[4];
  uVar15 = param_2[5];
  *(undefined4 *)(puVar4 + 0x80) = *param_2;
  *(undefined4 *)(puVar4 + 0x84) = uVar5;
  *(undefined4 *)(puVar4 + 0x88) = uVar7;
  *(undefined4 *)(puVar4 + 0x8c) = uVar8;
  *(undefined4 *)(puVar4 + 0x90) = uVar12;
  *(undefined4 *)(puVar4 + 0x94) = uVar15;
  puVar3 = func_0010BA60((undefined4 *)(puVar4 + 0xa8));
  uVar5 = DAT_0049e700;
  puVar3[6] = &DAT_0049e6fc;
  puVar3[4] = puVar4 + 0x98;
  puVar3[5] = uVar5;
  puVar3 = func_0010CE7C(puVar3 + -4);
  *puVar3 = DAT_0049e704;
  puVar3[0xf] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  iVar1 = DAT_0049e708;
  if (puVar3 + 0xb != (undefined4 *)0x0) {
    puVar3[0xc] = 0;
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    puVar3[0xd] = *(undefined4 *)(iVar1 + 8);
    puVar3[0xe] = uVar7;
    puVar3[0xb] = DAT_0049e70c;
  }
  puVar2 = DAT_0049e710;
  puVar3[-0x27] = 0;
  puVar13 = puVar3 + -0x4c;
  uVar14 = *puVar2;
  uVar9 = 0;
  if (0 < (int)uVar14) {
    do {
      local_24 = s_sead__TaskMgr_0049e714;
      local_28 = uVar5;
      if (uVar9 < *puVar2) {
        piVar6 = *(int **)(puVar2[2] + uVar9 * 4);
      }
      else {
        piVar6 = (int *)0x0;
      }
      piVar6 = func_0010B954(0,(int)&local_28,piVar6,1,0);
      uVar10 = uVar9 + 1;
      puVar13[uVar9 + 0x1d] = piVar6;
      uVar9 = uVar10;
    } while ((int)uVar10 < (int)uVar14);
  }
  func_0049E064((int)puVar13);
  func_00110D44(puVar3 + -0x26,(byte *)param_2[3],0x80);
  puVar3[-0x27] = 0;
  *(undefined1 *)(puVar3 + -8) = 1;
  puVar11 = puVar3 + -0x4b;
  puVar3[-0xb] = puVar3 + -0x27;
  puVar3[-0xd] = 0;
  func_0010C0B8((int)puVar11);
  if ((int *)puVar3[-0xd] == (int *)0x0) {
    func_0049DC40((int)puVar13,(byte *)(puVar3 + -0x26),0);
    func_0010EEE0((int)puVar11);
  }
  else {
    func_0048D9D0((int *)puVar3[-0xd],(byte *)(puVar3 + -0x26));
    func_0010EEE0((int)puVar11);
  }
  return puVar13;
}

