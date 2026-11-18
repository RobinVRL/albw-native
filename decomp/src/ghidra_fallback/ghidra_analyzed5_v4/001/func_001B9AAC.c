// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014E138(int param_1,int param_2);
extern int func_0028FE00(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00547538(int param_1);
extern int func_00547B20(int param_1);
extern int func_00547B48(int param_1,int param_2);
extern int func_00556E64(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_001b9c80;
extern int *DAT_001b9c84;
extern uint *DAT_001b9c88;
extern undefined4 *DAT_001b9c8c;
extern undefined4 DAT_001b9c90;

// USA 001B9AAC <- EU 001B9AAC (Ghidra, non-matching)
// GLOBAL DAT_001b9c80 int *
// GLOBAL DAT_001b9c84 int *
// GLOBAL DAT_001b9c88 uint *
// GLOBAL DAT_001b9c8c undefined4 *
// GLOBAL DAT_001b9c90 undefined4

undefined4 func_001B9AAC(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 uVar6;
  
  bVar3 = func_00547538(param_1 + 4);
  if (bVar3) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  bVar3 = func_00547B20(param_1 + 4);
  if ((*(char *)(param_1 + 0x477) == '\0') && (bVar3)) {
    *(undefined1 *)(*(int *)(param_1 + 0x410) + 0x44) = 1;
    func_004CF478(*(int *)(param_1 + 0x40c),1);
    *(undefined1 *)(param_1 + 0x477) = 1;
  }
  piVar2 = DAT_001b9c80;
  if (*(char *)(param_1 + 0x478) == '\0') {
    if ((*(char *)(param_1 + 0x5c) != '\0') &&
       (puVar4 = (undefined4 *)
                 func_0052FBDC(*DAT_001b9c84 + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0),
       puVar4 != (undefined4 *)0x0)) {
      if (((*DAT_001b9c88 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_001b9c88), iVar5 != 0)) {
        *DAT_001b9c8c = DAT_001b9c90;
      }
      iVar5 = (**(code **)*puVar4)(puVar4,DAT_001b9c8c);
      if (iVar5 != 0) {
        if (*(short *)(puVar4 + 0xb) == 0) {
          bVar3 = func_00547B48((int)(puVar4 + 1),0);
          *(bool *)(param_1 + 0x478) = bVar3;
          bVar3 = func_00556E64(*piVar2);
          *(bool *)(param_1 + 0x47a) = !bVar3;
        }
        else if (*(short *)(puVar4 + 0xb) == 1) {
          cVar1 = *(char *)(*(int *)(param_1 + 0x414) + 0x68);
          if ((((cVar1 == '\x01') || (cVar1 == '\x02')) ||
              (*(char *)(*(int *)(param_1 + 0x414) + 0x39) != '\0')) ||
             (bVar3 = func_00588BF0(param_1,0), bVar3)) {
            uVar6 = 1;
          }
          else {
            uVar6 = 0;
          }
          *(undefined1 *)(*(int *)(param_1 + 0x410) + 0x44) = uVar6;
        }
      }
    }
  }
  else if ((*(char *)(param_1 + 0x479) != '\0') && (*(char *)(param_1 + 0x47a) == '\0')) {
    bVar3 = func_00556E64(*DAT_001b9c80);
    if (bVar3) {
      func_0028FE00(*piVar2,1);
    }
    *(undefined1 *)(param_1 + 0x47a) = 1;
    *(undefined1 *)(param_1 + 0x479) = 0;
  }
  return func_0014E138(param_1,param_2);
}

