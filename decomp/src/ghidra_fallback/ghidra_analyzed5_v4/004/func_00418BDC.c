#include "ghidra_types.h"

extern ulonglong func_0011624C(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_0040E318(int param_1,int param_2);
extern int func_0040E4BC(int param_1,int param_2);
extern int func_0040E4DC(int param_1,int param_2);
extern int func_0040E554(int param_1,int param_2);
extern int func_00410790(undefined4 *param_1,int *param_2,int param_3);
extern int func_0041297C(int *param_1,int *param_2);
extern int func_004143C0(int param_1,short param_2);
extern int func_0041CA44(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern int func_0041CDB8(int param_1,byte *param_2,undefined4 param_3,uint param_4);
extern int func_0056A888(int *param_1,byte *param_2);
extern int func_0056C6A8(int *param_1,undefined4 *param_2,uint param_3);
extern undefined4 DAT_00418d14;

// USA 00418BDC <- EU 00418BBC (Ghidra, non-matching)
// GLOBAL DAT_00418d14 undefined4

undefined4 func_00418BDC(uint param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define abStack_90 ((byte *)(albw_frame + 0x0))
  #define local_8c (*(int *)(albw_frame + 0x4))
  #define local_88 (*(int *)(albw_frame + 0x8))
  #define local_80 (*(uint *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x74))
  #define aiStack_18 ((int *)(albw_frame + 0x78))
  bVar1 = *(byte *)(param_1 + 0x5e);
  func_00410790(&iStack_1c,*(int **)(param_1 + 0x68),(int)*(char *)(param_1 + 0x5f));
  iVar3 = func_0056A888(&iStack_1c,abStack_90);
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = 0;
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar5 = *(uint *)(param_1 + 0x74);
  }
  else if (*(char *)(param_1 + 0x70) == '\x01') {
    lVar2 = (longlong)*(int *)(param_1 + 0x74) * (longlong)local_88;
    uVar6 = func_0011624C((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),1000,0);
    uVar5 = (uint)uVar6;
  }
  if (uVar5 <= local_80) {
    if (2 < local_8c) {
      local_8c = 2;
    }
    puVar4 = func_0041CA44(local_8c,bVar1 + 0x40,DAT_00418d14,param_1);
    if (puVar4 != (undefined4 *)0x0) {
      func_0041297C(aiStack_18,*(int **)(param_1 + 100));
      iVar3 = func_0056C6A8(aiStack_18,(undefined4 *)(param_1 + 0x88),*(uint *)(param_1 + 0x6c));
      if (iVar3 == 0) {
        return 0;
      }
      func_0040E554((int)(puVar4 + 0x24),(uint)*(byte *)(param_1 + 0x8c));
      func_0040E4BC((int)(puVar4 + 0x24),(uint)*(byte *)(param_1 + 0x8f));
      func_0040E4DC((int)(puVar4 + 0x24),(uint)*(byte *)(param_1 + 0x8d));
      *(undefined1 *)(puVar4 + 0x2a) = *(undefined1 *)(param_1 + 0x8e);
      func_0040E318((int)(puVar4 + 0x24),(uint)*(byte *)(param_1 + 0x90));
      *(undefined1 *)(puVar4 + 0x4d) = *(undefined1 *)(param_1 + 0x5d);
      func_004143C0(puVar4[0x68],(short)*(char *)(param_1 + 0x2e));
      func_0041CDB8((int)puVar4,abStack_90,0xffffffff,uVar5);
      *(undefined4 **)(param_1 + 0x9c) = puVar4;
      *(undefined1 *)(param_1 + 0x5c) = 1;
      return 1;
    }
  }
  return 0;
}

