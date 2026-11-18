#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001BA8C4(undefined4 *param_1,uint *param_2,int param_3,int param_4);
extern undefined4 DAT_00603afc;
extern int DAT_00603b00;
extern char s_MapActor_00603af0[];

// USA 00603AC4 <- EU 00603A9C (Ghidra, non-matching)
// GLOBAL DAT_00603afc undefined4
// GLOBAL DAT_00603b00 int
// GLOBAL s_MapActor_00603af0 string

void func_00603AC4(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  puVar1 = (undefined4 *)func_0010BAB4(0x490);
  if (puVar1 != (undefined4 *)0x0) {
    local_c = s_MapActor_00603af0;
    local_10 = DAT_00603afc;
    piVar2 = func_001BA8C4(puVar1,param_1,1,(int)&local_10);
    iVar3 = DAT_00603b00 + 0x5c;
    *piVar2 = DAT_00603b00;
    piVar2[200] = iVar3;
  }
  return;
}

