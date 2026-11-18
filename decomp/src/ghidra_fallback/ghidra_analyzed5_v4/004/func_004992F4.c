#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010DB90(void);
extern int func_0048EB14(int param_1,float *param_2);
extern int func_0048EB80(int param_1,int param_2,uint param_3,int param_4);
extern int func_00495760(int param_1,int param_2,int *param_3);
extern uint *DAT_004993d0;
extern undefined4 *DAT_004993d4;
extern undefined4 DAT_004993d8;
extern undefined4 DAT_004993dc;

// USA 004992F4 <- EU 004992CC (Ghidra, non-matching)
// GLOBAL DAT_004993d0 uint *
// GLOBAL DAT_004993d4 undefined4 *
// GLOBAL DAT_004993d8 undefined4
// GLOBAL DAT_004993dc undefined4

undefined4 func_004992F4(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int * *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(int * *)(albw_frame + 0xc))
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 0x1c);
  if (((*DAT_004993d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_004993d0), iVar1 != 0)) {
    *DAT_004993d4 = DAT_004993d8;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*puVar2)(puVar2,DAT_004993d4), iVar1 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if (param_2 == (int *)0x0) {
    param_2 = (int *)func_0010DB90();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    local_20 = *(int **)(param_1 + 0x14);
    local_1c = *(undefined4 *)(param_1 + 0x18);
    local_18 = *(undefined4 *)(param_1 + 0x1c);
    local_14 = param_2;
    func_0048EB14((int)puVar2,&local_20);
  }
  else {
    local_20 = param_2;
    func_0048EB80((int)puVar2,*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                  *(undefined4 *)(param_1 + 0x1c));
  }
  return func_00495760((int)puVar2,*(int *)(param_1 + 0xc),param_2);
}

