#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001501C8(int param_1,int param_2);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern uint *DAT_002c90d4;
extern float DAT_002c90d8;
extern int *DAT_002c90dc;

// USA 002C900C <- EU 002C8FE8 (Ghidra, non-matching)
// GLOBAL DAT_002c90d4 uint *
// GLOBAL DAT_002c90d8 float
// GLOBAL DAT_002c90dc int *

int * func_002C900C(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x2d0];
  #define local_2d0 (*(int *)(albw_frame + 0x0))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x4))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0xc))
  #define afStack_2c0 ((float *)(albw_frame + 0x10))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_2a8 (*(undefined2 *)(albw_frame + 0x28))
  #define local_288 (*(undefined4 *)(albw_frame + 0x48))
  #define local_284 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_10 (*(undefined4 *)(albw_frame + 0x2c0))
  cVar1 = *(char *)(param_1 + 0x410);
  piVar2 = (int *)0x0;
  puVar4 = (undefined4 *)(param_1 + 0x448);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x448) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x448) + 0x2d7) = 1;
      *puVar4 = 0;
      uVar3 = func_001501C8(param_1,*(int *)(param_1 + 0x430));
      return (int *)uVar3;
    }
  }
  else {
    if (cVar1 == '\x01') {
      puVar4 = *(undefined4 **)(param_1 + 0x448);
    }
    if (cVar1 == '\x01' && puVar4 == (undefined4 *)0x0) {
      local_2b0 = 0;
      local_2ac = 0;
      local_2b4 = 0;
      local_288 = 0;
      local_284 = 0;
      local_10 = 0;
      func_002DFF7C(&local_2d0);
      local_2d0 = func_0019B04C(*DAT_002c90d4);
      local_2cc = *(undefined4 *)(param_1 + 0x3d0);
      local_2c8 = *(undefined4 *)(param_1 + 0x3d4);
      local_2c4 = *(undefined4 *)(param_1 + 0x3d8);
      func_00115D70(afStack_2c0,(float *)(param_1 + 0x14),DAT_002c90d8);
      local_2a8 = 0x19;
      local_284 = *(undefined4 *)(param_1 + 0x2cc);
      piVar2 = func_004C4AF4(*DAT_002c90dc,&local_2d0,0);
      *(int **)(param_1 + 0x448) = piVar2;
    }
  }
  return piVar2;
}

