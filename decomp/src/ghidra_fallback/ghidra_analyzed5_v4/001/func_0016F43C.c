#include "ghidra_types.h"

extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern float fRam0016f568;
extern int *piRam0016f564;
extern uint *DAT_0016f558;
extern undefined4 DAT_0016f55c;
extern int DAT_0016f560;

// USA 0016F43C <- EU 0016F43C (Ghidra, non-matching)
// GLOBAL DAT_0016f558 uint *
// GLOBAL DAT_0016f55c undefined4
// GLOBAL DAT_0016f560 int
// GLOBAL UNK_0016f564 int *
// GLOBAL UNK_0016f568 float

void func_0016F43C(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_20 ((int *)(albw_frame + 0x0))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  cVar1 = *(char *)(param_2 + 0x35);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x35) = 0x3c;
    func_004CF478(*(int *)(param_2 + 0x20),1);
    func_004A879C(*piRam0016f564,*(int *)(param_2 + 0x24),2);
    iVar2 = *(int *)(*(int *)(param_2 + 0x28) + 0x14);
    if (*(float *)(iVar2 + 8) != fRam0016f568) {
      *(float *)(iVar2 + 8) = fRam0016f568;
      *(undefined1 *)(iVar2 + 0x26) = 1;
    }
    func_00168E9C(*(int **)(param_2 + 0x28),*(int *)(param_2 + 0x20),(int *)0x0);
  }
  else {
    *(char *)(param_2 + 0x35) = cVar1 + -1;
    if (cVar1 == '\b') {
      if ((uint)*(byte *)(param_2 + 0x36) < (uint)param_1[0x184]) {
        iVar2 = *(int *)(param_1[0x186] + (uint)*(byte *)(param_2 + 0x36) * 4);
      }
      else {
        iVar2 = 0;
      }
      if (*(int *)(iVar2 + 0x24) != 0) {
        func_004A1B9C(aiStack_20,*(int *)(iVar2 + 0x24),DAT_0016f558);
      }
      local_14 = DAT_0016f55c;
      local_18 = DAT_0016f560;
      if ((uint)*(byte *)(param_2 + 0x36) < (uint)param_1[0x11e]) {
        iVar2 = *(int *)(param_1[0x120] + (uint)*(byte *)(param_2 + 0x36) * 4);
      }
      else {
        iVar2 = 0;
      }
      func_0014DBF4(param_1,&local_18,iVar2 + 4,0);
    }
  }
  *(undefined1 *)(param_2 + 0x37) = 0;
  return;
}

