#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004D392C(undefined4 *param_1,uint *param_2,int param_3);
extern int func_00523510(int param_1);
extern undefined4 DAT_00606a9c;
extern undefined4 DAT_00606aac;
extern int DAT_00606ab0;
extern char s_MapActor_00606aa0[];

// USA 00606A10 <- EU 006069E8 (Ghidra, non-matching)
// GLOBAL DAT_00606a9c undefined4
// GLOBAL DAT_00606aac undefined4
// GLOBAL DAT_00606ab0 int
// GLOBAL s_MapActor_00606aa0 string

int * func_00606A10(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606a9c);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = s_MapActor_00606aa0;
    local_18 = DAT_00606aac;
    piVar2 = func_004D392C(puVar1,param_1,(int)&local_18);
    uVar5 = 0;
    iVar3 = DAT_00606ab0 + 0x54;
    *piVar2 = DAT_00606ab0;
    piVar2[200] = iVar3;
    while( true ) {
      uVar4 = *(uint *)(piVar2[0x14c] + 0x5c);
      if ((int)uVar4 <= (int)uVar5) break;
      if (uVar5 < uVar4) {
        iVar3 = *(int *)(*(int *)(piVar2[0x14c] + 100) + uVar5 * 4);
      }
      else {
        iVar3 = 0;
      }
      uVar4 = func_00523510(iVar3);
      if (uVar4 == 0) {
        *(undefined1 *)(iVar3 + 0x87) = 0x73;
        *(uint *)(iVar3 + 0x7c) = *(uint *)(iVar3 + 0x7c) & 0xf807ffff | 0x3980000;
      }
      uVar5 = uVar5 + 1;
    }
  }
  return piVar2;
}

