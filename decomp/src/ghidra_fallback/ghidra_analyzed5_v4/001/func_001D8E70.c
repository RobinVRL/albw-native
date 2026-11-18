#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_001d8f80;
extern int *DAT_001d8f84;
extern uint *DAT_001d8f88;
extern undefined4 *DAT_001d8f8c;
extern undefined4 DAT_001d8f90;
extern float *DAT_001d8f94;
extern float *DAT_001d8f98;

// USA 001D8E70 <- EU 001D8E70 (Ghidra, non-matching)
// GLOBAL DAT_001d8f80 int *
// GLOBAL DAT_001d8f84 int *
// GLOBAL DAT_001d8f88 uint *
// GLOBAL DAT_001d8f8c undefined4 *
// GLOBAL DAT_001d8f90 undefined4
// GLOBAL DAT_001d8f94 float *
// GLOBAL DAT_001d8f98 float *

void func_001D8E70(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define fStack_18 (*(float *)(albw_frame + 0x18))
  #define fStack_14 (*(float *)(albw_frame + 0x1c))
  bVar3 = *(char *)(param_1 + 0x49d) != '\0';
  if (bVar3) {
    param_2 = *(uint *)(param_1 + 0x438);
  }
  if (((bVar3 && param_2 != 0) &&
      (puVar1 = (undefined4 *)func_0052FBA0(*DAT_001d8f80 + 0x3dbbc,param_2),
      puVar1 != (undefined4 *)0x0)) && (iVar2 = func_00588BE4((int)puVar1), iVar2 == *DAT_001d8f84))
  {
    if (((*DAT_001d8f88 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001d8f88), iVar2 != 0)) {
      *DAT_001d8f8c = DAT_001d8f90;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_001d8f8c);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      local_1c = *DAT_001d8f94;
      fStack_18 = DAT_001d8f94[1];
      fStack_14 = DAT_001d8f94[2];
      local_28 = *DAT_001d8f94;
      fStack_24 = DAT_001d8f94[1];
      local_20 = DAT_001d8f94[2];
      func_00115CA8(&local_1c,(float *)(*(int *)(param_1 + 0x40c) + 0x104),DAT_001d8f98);
      func_00115C54(&local_28,&local_1c,(float *)(param_1 + 0x46c));
      puVar1[0xda] = ALBW_AS_U32(local_28);
      puVar1[0xdb] = ALBW_AS_U32(fStack_24);
      puVar1[0xdc] = ALBW_AS_U32(local_20);
      puVar1[0xf4] = ALBW_AS_U32(local_28);
      puVar1[0xf5] = ALBW_AS_U32(fStack_24);
      puVar1[0xf6] = ALBW_AS_U32(local_20);
    }
  }
  return;
}

