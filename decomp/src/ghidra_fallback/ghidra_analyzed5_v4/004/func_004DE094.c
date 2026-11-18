#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002FD11C(int *param_1,int param_2);
extern int func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_004BC61C(int *param_1);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004de284;
extern undefined4 *DAT_004de288;
extern int DAT_004de28c;
extern uint *DAT_004de290;
extern undefined4 *DAT_004de294;
extern undefined4 DAT_004de298;
extern int *DAT_004de29c;
extern int *DAT_004de2a0;
extern int DAT_004de2b4;
extern int *DAT_004de2b8;
extern uint *DAT_004de2bc;
extern undefined4 *DAT_004de2c0;
extern undefined4 DAT_004de2c4;
extern char s_FieldLight43_004de2a4[];

// USA 004DE094 <- EU 004DE06C (Ghidra, non-matching)
// GLOBAL DAT_004de284 int *
// GLOBAL DAT_004de288 undefined4 *
// GLOBAL DAT_004de28c int
// GLOBAL DAT_004de290 uint *
// GLOBAL DAT_004de294 undefined4 *
// GLOBAL DAT_004de298 undefined4
// GLOBAL DAT_004de29c int *
// GLOBAL DAT_004de2a0 int *
// GLOBAL DAT_004de2b4 int
// GLOBAL DAT_004de2b8 int *
// GLOBAL DAT_004de2bc uint *
// GLOBAL DAT_004de2c0 undefined4 *
// GLOBAL DAT_004de2c4 undefined4
// GLOBAL s_FieldLight43_004de2a4 string

void func_004DE094(int *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  func_004BC61C(param_1);
  puVar3 = (undefined4 *)
           func_005841A8(*DAT_004de284,*DAT_004de288,*(int **)(DAT_004de28c + *DAT_004de284));
  puVar3 = (undefined4 *)*puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    if (((*DAT_004de290 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004de290), iVar4 != 0)) {
      *DAT_004de294 = DAT_004de298;
    }
    iVar4 = (**(code **)*puVar3)(puVar3,DAT_004de294);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    param_1[0x277] = (int)puVar3;
    iVar4 = param_1[0xf5];
    iVar5 = param_1[0xf6];
    puVar3[0xda] = param_1[0xf4];
    puVar3[0xdb] = iVar4;
    puVar3[0xdc] = iVar5;
    iVar4 = param_1[0xf5];
    iVar5 = param_1[0xf6];
    puVar3[0xf4] = param_1[0xf4];
    puVar3[0xf5] = iVar4;
    puVar3[0xf6] = iVar5;
  }
  iVar4 = func_00582260(*DAT_004de2a0,(int)*(char *)(*DAT_004de29c + 0x18),
                        *(uint *)(*DAT_004de29c + 0x1c));
  piVar6 = (int *)(iVar4 + 4);
  local_1c = s_FieldLight43_004de2a4;
  local_20 = DAT_004de2b4;
  (**(code **)(*(int *)(iVar4 + 4) + 8))(piVar6);
  (**(code **)(*piVar6 + 8))(piVar6);
  pcVar7 = *(char **)(iVar4 + 8);
  (**(code **)(local_20 + 8))(&local_20);
  bVar2 = true;
  if (pcVar7 != local_1c) {
    iVar5 = 0;
    do {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + iVar5);
      bVar2 = false;
      if ((cVar1 != local_1c[iVar5]) || (bVar2 = true, cVar1 == '\0')) break;
      iVar5 = iVar5 + 1;
      bVar2 = false;
    } while (iVar5 < 0x40001);
  }
  if (bVar2) {
    piVar6 = *(int **)(*DAT_004de2b8 + 0x44);
    if (((*DAT_004de2bc & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004de2bc), iVar4 != 0)) {
      *DAT_004de2c0 = DAT_004de2c4;
    }
    if ((piVar6 == (int *)0x0) || (iVar4 = (**(code **)(*piVar6 + 8))(piVar6), iVar4 == 0)) {
      piVar6 = (int *)0x0;
    }
    if (piVar6 != (int *)0x0) {
      func_002FD11C(piVar6,1);
    }
    func_0036720C((int)(param_1 + 0x267),1,100,0x78,2,3,1);
  }
  return;
}

