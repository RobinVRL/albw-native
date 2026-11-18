#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00147DBC(int param_1);
extern int func_001488B8(undefined4 *param_1,uint param_2,uint param_3,int param_4);
extern int func_002D3C14(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054C998(int param_1,int param_2);
extern int *DAT_00366278;
extern uint *DAT_0036627c;
extern int DAT_00366294;
extern int *DAT_00366298;
extern undefined4 *DAT_0036629c;
extern undefined4 DAT_003662a0;
extern char s_SE_PL_SandRod_SET_00366280[];

// USA 00366158 <- EU 00366134 (Ghidra, non-matching)
// GLOBAL DAT_00366278 int *
// GLOBAL DAT_0036627c uint *
// GLOBAL DAT_00366294 int
// GLOBAL DAT_00366298 int *
// GLOBAL DAT_0036629c undefined4 *
// GLOBAL DAT_003662a0 undefined4
// GLOBAL s_SE_PL_SandRod_SET_00366280 string

void func_00366158(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(short *)(param_2 + 2) == 0x53) {
    iVar4 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
    uVar1 = iVar4 + 0x20000000U & 0xc0000000;
    *(uint *)(param_1 + 0x58) = uVar1;
    iVar4 = *(int *)(param_1 + 0x28);
    uVar3 = func_001488B8((undefined4 *)(iVar4 + 0x3d0),uVar1,*(uint *)(iVar4 + 0x624),
                          (uint)(2 < *(uint *)(iVar4 + 0x450)));
    local_18 = DAT_00366294;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x624) = uVar3;
    local_14 = s_SE_PL_SandRod_SET_00366280;
    func_004EA104(*DAT_00366298,&local_18,0);
  }
  else if (*(short *)(param_2 + 2) == 0x54) {
    puVar2 = (undefined4 *)
             func_0052FBA0(*DAT_00366278 + 0x3dbbc,*(uint *)(*(int *)(param_1 + 0x28) + 0x624));
    if (((*DAT_0036627c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0036627c), iVar4 != 0)) {
      *DAT_0036629c = DAT_003662a0;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar2)(puVar2,DAT_0036629c), iVar4 == 0)) {
      puVar2 = (undefined4 *)0x0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      func_00147DBC((int)puVar2);
    }
    func_002D3C14(*(int *)(*(int *)(param_1 + 0x28) + 0x5f8));
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 199) = 0;
    return;
  }
  return;
}

