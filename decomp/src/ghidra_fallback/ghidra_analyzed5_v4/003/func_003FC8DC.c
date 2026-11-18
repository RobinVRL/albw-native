#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_003CA380(int *param_1,int param_2,int param_3,int param_4,int param_5);
extern int func_003CB558(undefined4 *param_1);
extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_005613D4(int *param_1,int *param_2);
extern int func_005616A0(int *param_1,char *param_2,uint *param_3);
extern int func_00561808(int *param_1,uint *param_2,int param_3);
extern int func_00561964(int param_1,int param_2);
extern undefined *DAT_003fcc9c;
extern char s_MatAmbi_003fccc8[];
extern char s_MatDiff_003fccd0[];
extern char s_TexMtx0_003fcca0[];
extern char s_TexMtx1_003fcca8[];
extern char s_TexMtx2_003fccb0[];
extern char s_TexTran_003fccb8[];
extern char s_TexcMap_003fccc0[];

// USA 003FC8DC <- EU 003FC8BC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003fcc9c undefined *
// GLOBAL s_MatAmbi_003fccc8 string
// GLOBAL s_MatDiff_003fccd0 string
// GLOBAL s_TexMtx0_003fcca0 string
// GLOBAL s_TexMtx1_003fcca8 string
// GLOBAL s_TexMtx2_003fccb0 string
// GLOBAL s_TexTran_003fccb8 string
// GLOBAL s_TexcMap_003fccc0 string

void func_003FC8DC(int param_1,int *param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  int *unaff_r5;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x30) + 0x18);
  piVar9 = (int *)*param_3;
  puVar10 = puVar8 + *(ushort *)(*(int *)(param_1 + 0x30) + 0x1c);
  for (; puVar8 != puVar10; puVar8 = puVar8 + 1) {
    piVar7 = (int *)*puVar8;
    if (piVar7[1] != 0) {
      puVar1 = (undefined4 *)(*param_2 + 3U & 0xfffffffc);
      if (puVar1 == (undefined4 *)0x0) {
        unaff_r5 = (int *)0x0;
      }
      *param_2 = (int)(puVar1 + 0x41);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1 = func_003CB558(puVar1);
        iVar2 = func_00100118((int)(puVar1 + 0x33),DAT_003fcc9c,8,3);
        unaff_r5 = (int *)(iVar2 + -0xcc);
        *(undefined1 *)(iVar2 + 0x18) = 0;
        *(undefined1 *)(iVar2 + 0x19) = 2;
        *(undefined1 *)(iVar2 + 0x1a) = 0xff;
        *(undefined1 *)(iVar2 + 0x1b) = 0xff;
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined1 *)(iVar2 + 0x20) = 0;
        *(undefined1 *)(iVar2 + 0x21) = 2;
        *(undefined1 *)(iVar2 + 0x22) = 0xff;
        *(undefined1 *)(iVar2 + 0x23) = 0xff;
        *(undefined4 *)(iVar2 + 0x24) = 0;
        *(undefined1 *)(iVar2 + 0x28) = 0;
        *(undefined1 *)(iVar2 + 0x29) = 2;
        *(undefined1 *)(iVar2 + 0x2a) = 0xff;
        *(undefined1 *)(iVar2 + 0x2b) = 0xff;
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(undefined1 *)(iVar2 + 0x30) = 0;
        *(undefined1 *)(iVar2 + 0x31) = 2;
        *(undefined1 *)(iVar2 + 0x32) = 0xff;
        *(undefined1 *)(iVar2 + 0x33) = 0xff;
        *(undefined4 *)(iVar2 + 0x34) = 0;
      }
      iVar2 = func_00561964((int)unaff_r5,*piVar7);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = *param_2 + 3U & 0xfffffffc;
        *param_2 = iVar2 + uVar3;
      }
      func_003CA380(unaff_r5,*piVar7,(int)(short)piVar7[8],(int)*(short *)((int)piVar7 + 0x22),uVar3
                   );
      if (*(short *)((int)piVar7 + 0x22) != -1) {
        *(undefined1 *)(unaff_r5 + 0x28) = 3;
      }
      func_005616A0(unaff_r5,(char *)(unaff_r5 + 0x33),(uint *)s_TexMtx0_003fcca0);
      func_005616A0(unaff_r5,(char *)(unaff_r5 + 0x35),(uint *)s_TexMtx1_003fcca8);
      func_005616A0(unaff_r5,(char *)(unaff_r5 + 0x37),(uint *)s_TexMtx2_003fccb0);
      func_005616A0(unaff_r5,(char *)(unaff_r5 + 0x39),(uint *)s_TexTran_003fccb8);
      func_005616A0(unaff_r5,(char *)(unaff_r5 + 0x3b),(uint *)s_TexcMap_003fccc0);
      func_005616A0(unaff_r5,(char *)(unaff_r5 + 0x3d),(uint *)s_MatAmbi_003fccc8);
      func_005616A0(unaff_r5,(char *)(unaff_r5 + 0x3f),(uint *)s_MatDiff_003fccd0);
      puVar4 = func_005613D4(unaff_r5,piVar9);
      uVar3 = ((int)puVar4 - (int)piVar9 & 0xfffffffcU) + 8;
      if (((uVar3 & 0xf) != 0) && (uVar3 = 4 - (uVar3 * 0x10000000 >> 0x1e), 0 < (int)uVar3)) {
        puVar5 = puVar4 + -1;
        if ((uVar3 & 1) != 0) {
          *puVar4 = 0;
          puVar5 = puVar4;
        }
        for (iVar2 = (int)uVar3 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
          puVar5[1] = 0;
          puVar5 = puVar5 + 2;
          *puVar5 = 0;
        }
        puVar4 = puVar4 + uVar3;
      }
      puVar4 = func_003CC030(puVar4,1);
      piVar7[3] = (int)puVar4 - (int)piVar9 >> 2;
      piVar7[2] = (int)piVar9;
      puVar5 = func_00561808(unaff_r5,puVar4,0);
      uVar3 = ((int)puVar5 - (int)puVar4 & 0xfffffffcU) + 8;
      if (((uVar3 & 0xf) != 0) && (uVar3 = 4 - (uVar3 * 0x10000000 >> 0x1e), 0 < (int)uVar3)) {
        puVar6 = puVar5 + -1;
        if ((uVar3 & 1) != 0) {
          *puVar5 = 0;
          puVar6 = puVar5;
        }
        for (iVar2 = (int)uVar3 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
          puVar6[1] = 0;
          puVar6 = puVar6 + 2;
          *puVar6 = 0;
        }
        puVar5 = puVar5 + uVar3;
      }
      puVar5 = func_003CC030(puVar5,1);
      piVar7[5] = (int)puVar5 - (int)puVar4 >> 2;
      piVar7[4] = (int)puVar4;
      puVar4 = func_00561808(unaff_r5,puVar5,1);
      uVar3 = ((int)puVar4 - (int)puVar5 & 0xfffffffcU) + 8;
      if (((uVar3 & 0xf) != 0) && (uVar3 = 4 - (uVar3 * 0x10000000 >> 0x1e), 0 < (int)uVar3)) {
        puVar6 = puVar4 + -1;
        if ((uVar3 & 1) != 0) {
          *puVar4 = 0;
          puVar6 = puVar4;
        }
        for (iVar2 = (int)uVar3 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
          puVar6[1] = 0;
          puVar6 = puVar6 + 2;
          *puVar6 = 0;
        }
        puVar4 = puVar4 + uVar3;
      }
      piVar9 = func_003CC030(puVar4,1);
      iVar2 = (int)piVar9 - (int)puVar5 >> 2;
      piVar7[7] = iVar2;
      piVar7[6] = (int)puVar5;
      if (param_4 != 0) {
        iVar2 = param_5;
      }
      if (param_4 != 0 && iVar2 != 0) {
        piVar7[2] = (piVar7[2] - param_4 & 0xfffffffcU) + param_5;
        piVar7[4] = (piVar7[4] - param_4 & 0xfffffffcU) + param_5;
        piVar7[6] = param_5 + (piVar7[6] - param_4 & 0xfffffffcU);
      }
      piVar7[9] = (int)unaff_r5;
    }
  }
  *param_3 = piVar9;
  return;
}

