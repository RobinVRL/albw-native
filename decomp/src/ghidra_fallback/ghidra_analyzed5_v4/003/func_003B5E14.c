#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_0031BF10(undefined4 *param_1,int *param_2,int *param_3);
extern undefined DAT_00000007;
extern int DAT_003b5f40;
extern int DAT_003b5f50;
extern char s_L_Item_00_003b5f44[];

// USA 003B5E14 <- EU 003B5DF0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// GLOBAL DAT_00000007 undefined
// GLOBAL DAT_003b5f40 int
// GLOBAL DAT_003b5f50 int
// GLOBAL EXT_00000004 undefined
// GLOBAL s_L_Item_00_003b5f44 string

void func_003B5E14(int param_1,int *param_2,int *param_3,int param_4,undefined1 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  uint uVar6;
  int unaff_r10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar1 = (undefined4 *)func_0010BAB4(0x74);
    piVar2 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = func_00168434(puVar1);
    }
    func_00168100(piVar2,param_2,param_3);
    *(int **)(param_1 + 0x1c) = piVar2;
    if (param_4 != 0) {
      param_3 = (int *)&UndefinedInstruction;
    }
    if (param_4 == 0) {
      param_3 = (int *)&DAT_00000007;
    }
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
    func_0016773C((int)piVar2,(int)param_3);
    if (0 < (int)param_3) {
      unaff_r10 = DAT_003b5f40;
    }
    uVar6 = 0;
    if (0 < (int)param_3) {
      do {
        func_00166C20(piVar2,uVar6,(int *)(unaff_r10 + uVar6 * 8),0);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)param_3);
    }
    *(int **)(param_1 + 0x5c) = piVar2;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    if (param_4 == 0) {
      puVar1 = (undefined4 *)func_0010BAB4(0x50);
      piVar3 = (int *)0x0;
      if (puVar1 != (undefined4 *)0x0) {
        local_24 = s_L_Item_00_003b5f44;
        local_28 = DAT_003b5f50;
        piVar3 = func_0031BF10(puVar1,piVar2,&local_28);
      }
      *(int **)(param_1 + 0x44) = piVar3;
    }
    *(byte *)(param_1 + 0x145) = (byte)param_4 ^ 1;
    puVar4 = (undefined4 *)func_0010BAB4(0x20);
    puVar1 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar1 = func_002C0294(puVar4);
    }
    *(undefined4 **)(param_1 + 0x14) = puVar1;
    func_002C00D4(puVar1,param_1,(int *)0x0);
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x14) = param_5;
    puVar5 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
    *puVar5 = *puVar5 & 0xfffe;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = 1;
  }
  return;
}

