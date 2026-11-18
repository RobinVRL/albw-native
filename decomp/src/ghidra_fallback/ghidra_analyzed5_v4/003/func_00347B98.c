#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_002D3BF4(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00510388(int param_1);
extern int func_0051131C(undefined4 *param_1,uint param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054C998(int param_1,int param_2);
extern int *DAT_00347cb4;
extern uint *DAT_00347cb8;
extern undefined DAT_00347cbc;
extern int DAT_00347cd4;
extern int *DAT_00347cd8;
extern undefined4 *DAT_00347cdc;
extern undefined4 DAT_00347ce0;
extern char s_MSE_PL_IceRod_SET_00347cbf[];
extern undefined4 _DAT_00347cbc;

// USA 00347B98 <- EU 00347B74 (Ghidra, non-matching)
// GLOBAL DAT_00347cb4 int *
// GLOBAL DAT_00347cb8 uint *
// GLOBAL DAT_00347cbc undefined
// GLOBAL DAT_00347cd4 int
// GLOBAL DAT_00347cd8 int *
// GLOBAL DAT_00347cdc undefined4 *
// GLOBAL DAT_00347ce0 undefined4
// GLOBAL s_MSE_PL_IceRod_SET_00347cbf string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00347B98(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint extraout_r1;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(short *)(param_2 + 2) == 0x56) {
    iVar3 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
    uVar4 = func_00114608(_DAT_00347cbc,extraout_r1);
    uVar1 = (int)uVar4 + iVar3 & 0xe0000000;
    *(uint *)(param_1 + 0x58) = uVar1;
    iVar3 = func_0051131C((undefined4 *)(*(int *)(param_1 + 0x28) + 0x3d0),uVar1,
                          (uint)(2 < *(uint *)(*(int *)(param_1 + 0x28) + 0x458)));
    local_18 = DAT_00347cd4;
    *(int *)(*(int *)(param_1 + 0x28) + 0x628) = iVar3;
    local_14 = s_MSE_PL_IceRod_SET_00347cbf + 1;
    func_004EA104(*DAT_00347cd8,&local_18,0);
  }
  else if (*(short *)(param_2 + 2) == 0x57) {
    puVar2 = (undefined4 *)
             func_0052FBA0(*DAT_00347cb4 + 0x3dbbc,*(uint *)(*(int *)(param_1 + 0x28) + 0x628));
    if (((*DAT_00347cb8 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00347cb8), iVar3 != 0)) {
      *DAT_00347cdc = DAT_00347ce0;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar2)(puVar2,DAT_00347cdc), iVar3 == 0)) {
      puVar2 = (undefined4 *)0x0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      func_00510388((int)puVar2);
    }
    return func_002D3BF4(*(int *)(*(int *)(param_1 + 0x28) + 0x5f8));
  }
  return 0;
}

