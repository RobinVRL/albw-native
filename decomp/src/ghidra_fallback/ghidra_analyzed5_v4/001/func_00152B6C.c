#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00297A04(undefined4 *param_1,int *param_2,int param_3);
extern int func_00328938(undefined1 *param_1);
extern int func_004C65A0(undefined4 *param_1);
extern undefined4 DAT_00152c98;
extern undefined4 DAT_00152c9c;
extern undefined4 DAT_00152ca0;
extern undefined4 DAT_00152ca4;
extern undefined *DAT_00152ca8;
extern char s_CrossHeap_00152cac[];

// USA 00152B6C <- EU 00152B70 (Ghidra, non-matching)
// GLOBAL DAT_00152c98 undefined4
// GLOBAL DAT_00152c9c undefined4
// GLOBAL DAT_00152ca0 undefined4
// GLOBAL DAT_00152ca4 undefined4
// GLOBAL DAT_00152ca8 undefined *
// GLOBAL s_CrossHeap_00152cac string

int func_00152B6C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  puVar3 = func_0010DA7C(param_1,0,3);
  *puVar3 = DAT_00152c98;
  puVar3[4] = param_3;
  uVar1 = DAT_00152c9c;
  *(undefined1 *)(puVar3 + 5) = param_4;
  puVar3[6] = uVar1;
  uVar1 = DAT_00152ca4;
  local_1c = DAT_00152ca0;
  local_20 = DAT_00152ca4;
  piVar4 = func_0010B954(0x28000,(int)&local_20,(int *)0x0,1,0);
  puVar3[7] = piVar4;
  puVar3 = func_004C65A0(puVar3 + 8);
  puVar5 = func_00328938((undefined1 *)(puVar3 + 0x230));
  *(undefined4 *)(puVar5 + 0x40) = 0;
  puVar2 = DAT_00152ca8;
  *(undefined4 *)(puVar5 + 0x44) = 0;
  *(undefined4 *)(puVar5 + 0x48) = 0;
  *(undefined4 *)(puVar5 + 0x4c) = 0;
  iVar6 = func_00100118((int)(puVar5 + 0x50),puVar2,0x3c,0x14);
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + -4) = 0;
    *(int *)(iVar6 + -0x10) = iVar6;
    *(undefined4 *)(iVar6 + -0xc) = 0x14;
    *(undefined4 *)(iVar6 + -8) = 0;
  }
  *(undefined1 *)(iVar6 + 0x4b0) = 1;
  *(undefined4 *)(iVar6 + 0x4b4) = 0;
  *(undefined4 *)(iVar6 + 0x4b8) = 0;
  *(undefined1 *)(iVar6 + 0x4bc) = 0;
  local_24 = s_CrossHeap_00152cac;
  local_28 = uVar1;
  piVar4 = func_0010B954(0x5000,(int)&local_28,(int *)0x0,1,0);
  *(int **)(iVar6 + 0x4c0) = piVar4;
  puVar7 = (undefined4 *)func_0010CF28(0x94,piVar4,4);
  puVar3 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = func_00297A04(puVar7,*(int **)(iVar6 + 0x4c0),iVar6 + -0x930);
  }
  *(undefined4 **)(iVar6 + 0x4c4) = puVar3;
  return iVar6 + -0x930;
}

