#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_00328FC8(int param_1,undefined4 *param_2,uint param_3);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_0055696C(int param_1,int param_2);
extern int DAT_00375bec;
extern undefined4 *DAT_00375bf0;
extern undefined4 DAT_00375bf4;
extern undefined4 DAT_00375bf8;
extern undefined4 DAT_00375bfc;
extern undefined4 DAT_00375c00;
extern undefined *PTR_00375c04;
extern undefined *PTR_00375c08;
extern undefined *PTR_00375c0c;
extern undefined *PTR_00375c10;
extern undefined *PTR_00375c14;

// USA 0037591C <- EU 003758F8 (Ghidra, non-matching)
// GLOBAL DAT_00375bec int
// GLOBAL DAT_00375bf0 undefined4 *
// GLOBAL DAT_00375bf4 undefined4
// GLOBAL DAT_00375bf8 undefined4
// GLOBAL DAT_00375bfc undefined4
// GLOBAL DAT_00375c00 undefined4
// GLOBAL PTR_00375c04 undefined *
// GLOBAL PTR_00375c08 undefined *
// GLOBAL PTR_00375c0c undefined *
// GLOBAL PTR_00375c10 undefined *
// GLOBAL PTR_00375c14 undefined *

/* WARNING: Variable defined which should be unmapped: objStack_28 */

undefined4 * func_0037591C(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  #define uStack_1c (*(uint *)(albw_frame + 0x14))
  piVar2 = func_00150E40(param_1,param_2);
  iVar4 = DAT_00375bec;
  *piVar2 = DAT_00375bec;
  piVar2[200] = iVar4 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x103);
  puVar6 = DAT_00375bf0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar8 = *puVar6;
  puVar3[0xc] = puVar6[1];
  puVar3[10] = puVar3 + -0x103;
  puVar3[0xb] = uVar8;
  uVar1 = DAT_00375bf8;
  uVar8 = DAT_00375bf4;
  puVar7 = puVar3 + -0x103;
  puVar3[9] = DAT_00375bf4;
  uVar9 = puVar6[2];
  puVar3[0x10] = puVar6[3];
  puVar3[0xd] = uVar8;
  puVar3[0xe] = puVar7;
  puVar3[0xf] = uVar9;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = uVar1;
  puVar3[0x16] = uVar1;
  puVar3[0x17] = uVar1;
  puVar3[0x18] = uVar1;
  puVar3[0x19] = uVar1;
  puVar3[0x1a] = uVar1;
  puVar3[0x1b] = 0;
  uVar8 = DAT_00375bfc;
  puVar3[0x1d] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x21] = uVar8;
  puVar3[0x22] = 0;
  puVar3[0x23] = 0;
  puVar3[0x24] = 0;
  *(undefined1 *)(puVar3 + 0x25) = 3;
  *(undefined1 *)((int)puVar3 + 0x95) = 0;
  *(undefined1 *)((int)puVar3 + 0x96) = 0;
  *(undefined1 *)((int)puVar3 + 0x97) = 0;
  *(undefined1 *)(puVar3 + 0x26) = 0;
  *(undefined1 *)((int)puVar3 + 0x99) = 1;
  objStack_28[0] = 1;
  objStack_28[1] = 0;
  objStack_28[2] = 0;
  iVar4 = func_0014E428((int)puVar7,1,0,0,1,0,0);
  puVar3[0x13] = iVar4;
  puVar3[-0x30] = iVar4;
  uVar8 = DAT_00375c00;
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar4 + 0x74) = uVar8;
  *(undefined4 *)(iVar4 + 0x78) = uVar8;
  *(undefined4 *)(iVar4 + 0x7c) = uVar8;
  iVar4 = func_0054D89C((int)puVar7,0);
  puVar3[0x14] = iVar4;
  func_00151148(iVar4,0);
  piVar2 = (int *)func_0054D964((int)puVar7,0);
  piVar2[1] = puVar3[-0xf];
  piVar2[2] = puVar3[-0xe];
  piVar2[3] = puVar3[-0xd];
  func_004356B4(piVar2);
  puVar3[0x12] = piVar2;
  objStack_28[0] = CONCAT22((*(undefined2 *)((char *)&objStack_28[0] + 2)),0x120);
  *(undefined2 *)(piVar2 + 10) = 0x120;
  *(uint *)(puVar3[0x12] + 0x2c) = *(uint *)(puVar3[0x12] + 0x2c) | 8;
  uVar5 = func_0055696C(*(int *)PTR_00375c04,1);
  if (uVar5 < 3) {
    *(uint *)(puVar3[0x12] + 0x2c) = *(uint *)(puVar3[0x12] + 0x2c) | 0x8000;
  }
  puVar6 = (undefined4 *)func_0010BAB4(100);
  uVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar8 = func_004EE484(puVar6);
  }
  puVar3[0x11] = uVar8;
  iVar4 = func_0054DDF4((int)puVar7,0);
  puVar3[-0x1b] = iVar4;
  puVar3[-0x1a] = iVar4;
  uStack_1c = puVar3[-0x50];
  objStack_28[1] = (uint)(puVar3 + 9);
  objStack_28[0] = (uint)*(short *)(puVar3 + -0xee);
  objStack_28[2] = 0x1100;
  func_0014EB8C(puVar3[0x11],puVar3[0x12],(undefined2 *)puVar3[-0x1b],&uStack_1c,
                *(short *)(puVar3 + -0xee),objStack_28[1],0x1100);
  puVar6 = (undefined4 *)func_0052FBA0(*(int *)PTR_00375c08 + 0x3dbbc,param_2[0x13]);
  if (((*(uint *)PTR_00375c0c & 1) == 0) &&
     (iVar4 = func_00100174((int *)PTR_00375c0c), iVar4 != 0)) {
    *(undefined **)PTR_00375c10 = PTR_00375c14;
  }
  if ((puVar6 == (undefined4 *)0x0) ||
     (iVar4 = (**(code **)*puVar6)(puVar6,PTR_00375c10), iVar4 == 0)) {
    puVar6 = (undefined4 *)0x0;
  }
  if (puVar6 != (undefined4 *)0x0) {
    objStack_28[0] = puVar3[-0x50];
    func_00230610(puVar6[0x2a7],objStack_28[0]);
    objStack_28[0] = puVar3[-0x50];
    func_00328FC8((int)puVar6,objStack_28,(int)*(short *)((int)param_2 + 0x2a));
  }
  if (puVar3[0x11] != 0) {
    *(undefined1 *)(puVar3[0x11] + 0x61) = 0;
  }
  return puVar7;
}

